/*
FUNCTION_NAME: FUN_029a83c8
ENTRY_POINT: 029a83c8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029a8494) */

undefined1  [16] FUN_029a83c8(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  char local_24 [4];
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar4,local_24,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar5 = *(long *)(param_1 + 0x58);
  FUN_029bb83c(param_2,lVar5,0,4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (3 < uVar1) {
    uVar2 = *(undefined1 *)(lVar5 + 0x21);
    uVar3 = *(undefined1 *)(lVar5 + 0x20);
    *(undefined1 *)(lVar5 + 0x20) = *(undefined1 *)(lVar5 + 0x23);
    *(undefined1 *)(lVar5 + 0x21) = *(undefined1 *)(lVar5 + 0x22);
    *(undefined1 *)(lVar5 + 0x22) = uVar2;
    *(undefined1 *)(lVar5 + 0x23) = uVar3;
    auVar6 = FUN_026b53a0(lVar5,0,0);
    uVar7 = auVar6._8_8_;
    if (local_24[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
    }
    auVar6._8_8_ = uVar7;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


