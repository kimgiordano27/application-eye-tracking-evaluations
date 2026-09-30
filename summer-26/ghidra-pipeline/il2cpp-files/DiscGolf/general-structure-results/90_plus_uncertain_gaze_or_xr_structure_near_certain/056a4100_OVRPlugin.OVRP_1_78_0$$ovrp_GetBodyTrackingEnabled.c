/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 056a4100
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(void)

{
  undefined8 unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_054f73b4();
  FUN_04e8c720();
  FUN_054f73b4(*(undefined8 *)
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<SliceType>,_SliceType>_TypeInfo
               ,0);
  FUN_04e8c720();
  FUN_054f73b4(*(undefined8 *)
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Position>,_Position>_TypeInfo
               ,0);
  FUN_04e8c720();
  FUN_054f73b4(*(long *)(unaff_x22 + 0x90) + 0x20,0);
  FUN_04e8c720();
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
  LeanTween__value();
  return;
}


