/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetPassthroughCapabilityFlags
ENTRY_POINT: 056a3bc0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_OVRP_1_78_0__ovrp_GetPassthroughCapabilityFlags(void)

{
  undefined *puVar1;
  
  puVar1 = 
  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<FlexDirection>,_FlexDirection>_TypeInfo;
  if ((DAT_06dbc8bf & 1) == 0) {
    FUN_02d965b8(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<FlexDirection>,_FlexDirection>_TypeInfo
                );
    DAT_06dbc8bf = 1;
  }
  return *(undefined8 *)puVar1;
}


