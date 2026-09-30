/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceDestroy
ENTRY_POINT: 056960ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceDestroy(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_02d965b8(System_Predicate<Collider>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x7f0) = 1;
  uVar1 = *unaff_x20;
  *(undefined4 *)(unaff_x19 + 0xc) = *(undefined4 *)(unaff_x20 + 1);
  *(undefined8 *)(unaff_x19 + 4) = uVar1;
  FUN_05695d2c(unaff_x20 + 4,unaff_x19 + 0x18);
  return;
}


