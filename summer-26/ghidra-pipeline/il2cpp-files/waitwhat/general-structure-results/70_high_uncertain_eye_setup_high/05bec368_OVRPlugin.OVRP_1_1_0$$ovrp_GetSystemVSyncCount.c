/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVSyncCount
ENTRY_POINT: 05bec368
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVSyncCount(long param_1)

{
  int in_w8;
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  uint uVar3;
  ulong unaff_x23;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_031e5338();
      param_1 = *unaff_x20;
    }
    lVar1 = *(long *)(param_1 + 0xb8);
    lVar2 = *(long *)(lVar1 + 8);
    if (lVar2 == 0) {
LAB_05bec418:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar3 = (uint)unaff_x23;
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_05bec414:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    if (*(int *)(lVar2 + (long)(int)uVar3 * 4 + 0x20) == -1) {
      if (unaff_x19 == 0) goto LAB_05bec418;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x21) goto LAB_05bec414;
      lVar1 = unaff_x21 * 4;
      unaff_x21 = unaff_x21 + 1;
      *(int *)(unaff_x19 + lVar1 + 0x20) = unaff_w22;
      if (unaff_x21 == 0x18) {
        return;
      }
      unaff_w22 = -1;
      unaff_x23 = unaff_x21 & 0xffffffff;
    }
    else {
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        param_1 = *unaff_x20;
        lVar1 = *(long *)(param_1 + 0xb8);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 == 0) goto LAB_05bec418;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_05bec414;
      unaff_w22 = unaff_w22 + 1;
      unaff_x23 = (ulong)*(uint *)(lVar1 + (long)(int)uVar3 * 4 + 0x20);
    }
    in_w8 = *(int *)(param_1 + 0xe4);
  } while( true );
}


