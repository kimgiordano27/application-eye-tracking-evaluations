/*
FUNCTION_NAME: FUN_05e56db8
ENTRY_POINT: 05e56db8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_05e56db8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_066dc606 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_106__);
    DAT_066dc606 = 1;
  }
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_106__;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__810_106__ + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066dc629 == '\0') {
      FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_106__);
      DAT_066dc629 = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    **(undefined1 **)(lVar2 + 0xb8) = 1;
    if (lVar3 != 0) {
      FUN_05df33c8(lVar3,param_1,0);
      if (DAT_066dc629 == '\0') {
        FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_106__);
        DAT_066dc629 = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      **(undefined1 **)(lVar3 + 0xb8) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


