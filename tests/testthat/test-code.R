test_that("add_integers_R works", {
  expect_equal(add_integers_R(2, 2), 4)
})

test_that("add_integers_cpp works", {
  expect_equal(add_integers_cpp(2, 2), 4)
})
