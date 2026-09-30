/*
FUNCTION_NAME: OVRPlugin$$GetActionStateFloat
ENTRY_POINT: 07c76f34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateFloat
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined4 uVar2;
  
  while (*unaff_x19 != 0) {
    lVar1 = FUN_07c73800();
    uVar2 = FUN_07c769e4(unaff_x23);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar1 = lVar1 + unaff_x24;
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = param_2;
    *(undefined4 *)(lVar1 + 0x28) = param_3;
    *(undefined4 *)(lVar1 + 0x2c) = param_4;
    do {
      unaff_x21 = unaff_x21 + 1;
      unaff_x24 = unaff_x24 + 0x10;
      lVar1 = *unaff_x25;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar1 = *unaff_x25;
      }
      if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_07c76f88;
      if ((long)*(int *)(**(long **)(lVar1 + 0xb8) + 0x18) <= (long)unaff_x21) {
        return;
      }
      lVar1 = FUN_07c76e24();
      if (lVar1 == 0) goto LAB_07c76f88;
      unaff_x23 = FUN_07c76cd0(lVar1,unaff_x21 & 0xffffffff);
    } while (unaff_x23 == 0);
  }
LAB_07c76f88:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


