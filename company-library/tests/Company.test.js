const Company = require('../src/Company');
const Department = require('../src/Department');

/*
TODO: Use PE to implement the following test cases and assertions.
*/

test('Company can be created successfully', () => {
    const company = new Company('TechCorp');
    expect(company.name).toBe('TechCorp');
});
