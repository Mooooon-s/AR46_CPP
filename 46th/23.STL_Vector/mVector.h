#pragma once

namespace m {
	template <typename T>
	class Vector {
	private:
		static constexpr size_t DEFAULT_CAP = 5;
		T*			_Arr;
		size_t		_Size;
		size_t		_Capacity;
	public:
		Vector(size_t cap = DEFAULT_CAP)
			:_Arr(new T(cap+1))
			, _Size(0)
			, _Capacity(cap) 
		{

		};
		~Vector() { delete _Arr; }

		void resize(size_t size,int value=0) 
		{
			T* newArr = new T[size+1];

			_Size = _Size < size ? _Size : size;
			
			//원래 배열을 새 배열에 옮김
			for (size_t i = 0; i < _Size; i++)
			{
				newArr[i] = _Arr[i];
			}
			
			_Capacity = size;
			
			//나머지 자리에 0을 넣어줌
			for (size_t i = _Size; i < _Capacity; i++)
			{
				newArr[i] = value;
			}
			delete[] _Arr;
			_Arr = newArr;
			_Size = size;

		
		}

		void push_back(const T& value) 
		{
			if (_Size >= _Capacity) {
				if (_Capacity<DEFAULT_CAP)
				{
					_Capacity = DEFAULT_CAP;
				}
				else {
					_Capacity *= 2;
					//실제 vector 늘리는 수식
					//_Capacity = 2*_Capacity -(_Capacity/2);
				}

				T* newArr = new T[_Capacity+1];
				for (size_t i = 0; i < _Size; i++)
				{
					newArr[i] = _Arr[i];
				}
				delete[] _Arr;
				_Arr = newArr;
			}

			_Arr[_Size++] = value;
		}

		void pop_back(void) 
		{
			_Size = _Size > 0 ? _Size - 1 : 0;
		}

		T* begin() const { return _Arr; }
		T* end() const { return &_Arr[_Size]; }

		size_t Size() { return _Size; }
		size_t capacity() { return _Capacity; }

		T& operator[](size_t idx) { return _Arr[idx]; }
		vector& operator=(const vector& other) {
			if (this != nullptr)
			{
				if (_Capacity<other._Capacity)
				{
					delete[] _Arr;
					_Capacity = other._Capacity;
					_Arr = new T[_Capacity];
				}

				_Size = other._size;
				for (size_t i = 0; i < _Size; i++)
				{
					_Arr[i] = other._Arr[i];
				}

			}
			return *this;
		}

		void clear() { _Size = 0; }


	};
}