/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$CompositorGoToBack
ENTRY_POINT: 02db5190
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 145
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte OVR_OpenVR_CVRCompositor__CompositorGoToBack(void)

{
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  byte bStack0000000000000026;
  byte bStack0000000000000027;
  
  bStack0000000000000027 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB()
  ;
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    bStack0000000000000026 =
         OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
                   (0);
    bStack0000000000000026 = bStack0000000000000026 & 1;
    if (bStack0000000000000026 != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0
                (unaff_x29 + -0x14,0);
      *(bool *)(unaff_x29 + -1) = *(int *)(unaff_x29 + -0x14) == 1;
      goto LAB_02db5224;
    }
  }
  *(undefined1 *)(unaff_x29 + -1) = 0;
LAB_02db5224:
  return *(byte *)(unaff_x29 + -1) & 1;
}


