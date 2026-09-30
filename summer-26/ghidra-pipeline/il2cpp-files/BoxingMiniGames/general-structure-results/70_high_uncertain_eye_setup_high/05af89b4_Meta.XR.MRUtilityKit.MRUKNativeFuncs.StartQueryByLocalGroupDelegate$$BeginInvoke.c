/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.StartQueryByLocalGroupDelegate$$BeginInvoke
ENTRY_POINT: 05af89b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_StartQueryByLocalGroupDelegate__BeginInvoke(void)

{
  ulong uVar1;
  uint unaff_w19;
  void *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  code *pcVar2;
  
  while( true ) {
    pcVar2 = *(code **)(unaff_x25 + 0x1b8);
    memcpy(&stack0x00000060,unaff_x23,0x60);
    memcpy(&stack0x00000000,unaff_x20,0x60);
    uVar1 = (*pcVar2)();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = (void *)((long)unaff_x23 + 0x60);
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    unaff_x25 = *unaff_x22;
  }
  return 0xffffffff;
}


