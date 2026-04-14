#pragma once

#include <cstddef>   // для size_t
#include <stdexcept> // для исключений

template <typename T>
class IMatrix {
public:
    virtual size_t GetRows() const = 0;
    virtual size_t GetCols() const = 0;
    virtual T& Get( size_t i, size_t j ) const = 0;
    virtual void Set( size_t i, size_t j ) const = 0;

    virtual IMatrix<T>& operator+=( const IMatrix<T>& other ) const = 0;
    virtual IMatrix<T>& operator*=( const IMatrix<T>& other ) const = 0;
    virtual T Norm() const = 0;



    virtual ~IMatrix() = default;
};


