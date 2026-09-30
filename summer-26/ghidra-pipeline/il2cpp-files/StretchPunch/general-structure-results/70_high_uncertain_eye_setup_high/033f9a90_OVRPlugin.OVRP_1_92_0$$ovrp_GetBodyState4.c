/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetBodyState4
ENTRY_POINT: 033f9a90
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_GetBodyState4(void)

{
  int iVar1;
  ulong uVar2;
  int unaff_w20;
  int unaff_w21;
  int *unaff_x22;
  long *unaff_x24;
  
  do {
    iVar1 = thunk_FUN_01d99908();
    if (iVar1 == 0) {
      return;
    }
    FUN_033f9984();
    do {
      if (unaff_w21 != -1) {
        if (unaff_w21 == 0) {
          return;
        }
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar2 = FUN_033f54e0(&stack0x00000008);
        if ((uVar2 & 1) != 0) {
          iVar1 = thunk_FUN_01dc9540(0);
          if (iVar1 - unaff_w20 < 0) {
            return;
          }
          if (unaff_w21 - (iVar1 - unaff_w20) < 1) {
            return;
          }
        }
      }
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f53e0(&stack0x00000008);
      iVar1 = *unaff_x22;
      thunk_FUN_01da0934();
    } while (iVar1 != 0);
    FUN_033f9390();
    thunk_FUN_01da0934();
  } while( true );
}


