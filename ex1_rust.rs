/**
 * 🦀 ЗАДАЧА 1 НА RUST: Первое знакомство со ссылками
 */

fn main() {
    println!("=== ЗАДАЧА 1: Первое знакомство (Rust) ===");
    
    let age = 25;
    
    // TODO: Создай ссылку на age
    let ref_age = &age;
    
    println!("Возраст: {}", age);
    println!("Адрес age: {:p}", &age);  // {:p} для вывода адреса
    println!("Значение ссылки: {:p}", ref_age);
    println!("Значение через ссылку: {}", *ref_age);
    
    // В Rust ты не можешь изменить значение через обычную ссылку!
    // *ref_age = 30; // ❌ Ошибка компиляции!
    
    println!("\n=== МУТАБЕЛЬНЫЕ ССЫЛКИ ===");
    let mut mutable_age = 25;
    
    println!("До изменения: {}", mutable_age);
    
    {
        let ref_mut_age = &mut mutable_age;
        *ref_mut_age += 5;  // Теперь можно изменять!
    } // ссылка умирает здесь
    
    println!("После изменения: {}", mutable_age);
}
