#include <string>
using std::string;
#include <vector>
using std::vector;

class Recipe
{
public:
    string name;
    vector<string> preparation_steps;
    vector<string> ingredients;
    int cooking_time;

    /**
     * @brief Recipe constructor with parameters.
     * @param name The name of the recipe.
     * @param preparation_steps A vector of preparation steps.
     * @param ingredients A vector of ingredients.
     * @param cooking_time The cooking time in minutes.
     */
    Recipe(string name,
           vector<string> preparation_steps,
           vector<string> ingredients,
           int cooking_time)
    {
        name = name;
        preparation_steps = preparation_steps;
        ingredients = ingredients;
        cooking_time = cooking_time;
    }

    /**
     * @brief Get the name of the recipe.
     * @return The name of the recipe.
     */
    string get_name()
    {
        return name;
    }

    /**
     * @brief Set the name of the recipe.
     * @param name The new name for the recipe.
     */
    void set_name(string name)
    {
        name = name;
    }

    /**
     * @brief Get the vector of preparation steps.
     * @return A vector of preparation steps.
     */
    vector<string> get_preparation_steps()
    {
        return preparation_steps;
    }

    /**
     * @brief Set the vector of preparation steps.
     * @param preparation_steps The new vector of preparation steps.
     */
    void set_preparation_steps(vector<string> preparation_steps)
    {
        preparation_steps = preparation_steps;
    }

    /**
     * @brief Get the vector of ingredients.
     * @return A vector of ingredients.
     */
    vector<string> get_ingredients()
    {
        return ingredients;
    }

    /**
     * @brief Set the vector of ingredients.
     * @param ingredients The new vector of ingredients.
     */
    void set_ingredients(vector<string> ingredients)
    {
        ingredients = ingredients;
    }

    /**
     * @brief Get the cooking time in minutes.
     * @return The cooking time.
     */
    int get_cooking_time()
    {
        return cooking_time;
    }

    /**
     * @brief Set the cooking time in minutes.
     * @param cooking_time The new cooking time.
     */
    void set_cooking_time(int cooking_time)
    {
        cooking_time = cooking_time;
    }
};
