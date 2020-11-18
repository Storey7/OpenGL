#include "TestClearColour.h"
#include "Renderer.h"
#include "imgui/imgui.h"

#pragma once

test::TestClearColour::TestClearColour()
	:m_ClearColor{0.2f, 0.3f, 0.8f, 1.0f}
{
}

test::TestClearColour::~TestClearColour()
{
}

void test::TestClearColour::OnUpdate(float deltaTime)
{
}

void test::TestClearColour::OnRender()
{
	GLCall(glClearColor(m_ClearColor[0], m_ClearColor[1], m_ClearColor[2], m_ClearColor[3]));
	GLCall(glClear(GL_COLOR_BUFFER_BIT));
}

void test::TestClearColour::OnImGuiRender()
{
	ImGui::ColorEdit4("Clear Color", m_ClearColor);
}
