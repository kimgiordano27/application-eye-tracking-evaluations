/*
FUNCTION_NAME: FUN_05e5a46c
ENTRY_POINT: 05e5a46c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e5a46c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_066dc617 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_126__);
    DAT_066dc617 = 1;
  }
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lVar5 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_126__;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      }
      else {
        FUN_038ac0c0(lVar2,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


