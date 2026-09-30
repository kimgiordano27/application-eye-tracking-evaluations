/*
FUNCTION_NAME: OVRPlugin$$IsSuccess
ENTRY_POINT: 06005e7c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsSuccess(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_075f6f60;
  if ((bRam0000000007a46958 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f6f60);
    FUN_031f20f4(PTR_DAT_075f71c0);
    bRam0000000007a46958 = 1;
  }
  lVar2 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_05ffdb1c();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x138);
    thunk_FUN_0329bf60();
    if (*(long *)(param_1 + 0xd0) != 0) {
      lVar4 = *(long *)(param_1 + 0x170);
      uVar3 = FUN_06e5502c(*(long *)(param_1 + 0xd0),0);
      if (lVar4 != 0) {
        FUN_06002bc0(lVar4,uVar3,1,0,lVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


