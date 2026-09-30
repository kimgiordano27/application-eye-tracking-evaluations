/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$GetLastFrameRenderer
ENTRY_POINT: 02db52dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 162
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVR_OpenVR_CVRCompositor__GetLastFrameRenderer(undefined8 param_1)

{
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  byte bStack0000000000000025;
  byte bStack0000000000000026;
  byte bStack0000000000000027;
  undefined8 in_stack_00000028;
  
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (param_1,in_stack_00000028);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    bStack0000000000000026 =
         OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
                   (0);
    bStack0000000000000026 = bStack0000000000000026 & 1;
    if (bStack0000000000000026 != 0) {
      bStack0000000000000025 = *(byte *)(unaff_x29 + -1) & 1;
      if (bStack0000000000000025 == 0) {
        *(undefined4 *)(unaff_x29 + -0x14) = 0;
      }
      else {
        *(undefined4 *)(unaff_x29 + -0x14) = 1;
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
      OVRP_1_78_0_ovrp_SetFoveationEyeTracked_mF3B6A4020174203C857F1A202A23E1D35031AF0F
                (*(undefined4 *)(unaff_x29 + -0x14),0);
    }
  }
  return;
}


