/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$FadeToColor
ENTRY_POINT: 02db4e58
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 118
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_2;strong_foveation_hits_1;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


byte OVR_OpenVR_CVRCompositor__FadeToColor(void)

{
  byte bVar1;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
  bVar1 = OVRPlugin_get_eyeTrackedFoveatedRenderingSupported_mA1383C85B7A1E0C0995777E55769811E78646C27
                    (0);
  *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


