/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingSupported
ENTRY_POINT: 056a4084
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(void)

{
  undefined8 unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_04e8c720();
  FUN_054f73b4(*(undefined8 *)
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextGeneratorType>,_TextGeneratorType>_TypeInfo
               ,0);
  FUN_04e8c720();
  FUN_054f73b4(*(undefined8 *)
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflow>,_TextOverflow>_TypeInfo
               ,0);
  FUN_04e8c720();
  FUN_054f73b4(*(undefined8 *)
                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<ScaleMode>,_ScaleMode>_TypeInfo
               ,0);
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


