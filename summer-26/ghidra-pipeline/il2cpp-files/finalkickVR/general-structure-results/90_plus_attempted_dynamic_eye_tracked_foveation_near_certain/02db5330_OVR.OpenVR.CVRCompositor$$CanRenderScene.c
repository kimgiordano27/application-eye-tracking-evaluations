/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$CanRenderScene
ENTRY_POINT: 02db5330
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVR_OpenVR_CVRCompositor__CanRenderScene(void)

{
  long unaff_x29;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000020;
  
  if ((in_stack_00000020 & 0x10000000000) == 0) {
    *(undefined4 *)(unaff_x29 + -0x14) = 0;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x14) = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  OVRP_1_78_0_ovrp_SetFoveationEyeTracked_mF3B6A4020174203C857F1A202A23E1D35031AF0F
            (*(undefined4 *)(unaff_x29 + -0x14),0);
  return;
}


