/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$CompositorQuit
ENTRY_POINT: 02db51dc
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


byte OVR_OpenVR_CVRCompositor__CompositorQuit(void)

{
  long unaff_x29;
  
  OVRP_1_78_0_ovrp_GetFoveationEyeTracked_mD6D30156DB71F388B5E18BFE11C738512062A4A0
            (unaff_x29 + -0x14,0);
  *(bool *)(unaff_x29 + -1) = *(int *)(unaff_x29 + -0x14) == 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


