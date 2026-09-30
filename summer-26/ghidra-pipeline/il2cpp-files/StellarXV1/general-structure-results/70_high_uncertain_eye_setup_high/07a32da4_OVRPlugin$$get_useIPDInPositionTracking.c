/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 07a32da4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_useIPDInPositionTracking
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x21;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((*(byte *)(unaff_x21 + 0x251) & 1) == 0) {
    FUN_04077588(PTR_DAT_092ee570);
    *(undefined1 *)(unaff_x21 + 0x251) = 1;
  }
  puVar1 = PTR_DAT_092ee570;
  lVar5 = 0;
  uVar4 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_07a32e6c;
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar2 = FUN_07a32d08();
    if (lVar2 == 0) goto LAB_07a32e6c;
    lVar2 = FUN_07a32bb8(lVar2,uVar4 & 0xffffffff);
    if (lVar2 != 0) {
      if (*unaff_x19 == 0) {
LAB_07a32e6c:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar3 = FUN_07a251ec();
      uVar6 = FUN_07a328c0(lVar2);
      if (lVar3 == 0) goto LAB_07a32e6c;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar3 = lVar3 + lVar5;
      *(undefined4 *)(lVar3 + 0x20) = uVar6;
      *(undefined4 *)(lVar3 + 0x24) = param_2;
      *(undefined4 *)(lVar3 + 0x28) = param_3;
      *(undefined4 *)(lVar3 + 0x2c) = param_4;
    }
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x10;
  } while( true );
}


