from openai import OpenAI
client = OpenAI()

completion = client.chat.completions.create(
    model="gpt-40-mini",
    messages=[
        {"role": "system", "content": "You are a helpful assistant"},
        {
            "role": "user", 
            "content": "write a haiku about recursion in programming"
        }
    ]
)

print(client.completions.choices[0].message)