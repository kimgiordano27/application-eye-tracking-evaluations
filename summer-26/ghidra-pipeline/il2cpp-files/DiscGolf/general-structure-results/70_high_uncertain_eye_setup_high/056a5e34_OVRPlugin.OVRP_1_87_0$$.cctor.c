/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$.cctor
ENTRY_POINT: 056a5e34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_87_0___cctor(void)

{
  int iVar1;
  long lVar2;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_02d965b8();
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
              );
  *(undefined1 *)(unaff_x22 + 0xa05) = 1;
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *unaff_x21;
  }
  *unaff_x19 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
  iVar1 = FUN_056a5e90(unaff_w20);
  return iVar1 == 0;
}


