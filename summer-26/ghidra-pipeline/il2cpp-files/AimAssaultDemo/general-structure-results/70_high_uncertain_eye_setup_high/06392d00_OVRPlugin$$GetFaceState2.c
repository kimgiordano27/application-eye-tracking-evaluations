/*
FUNCTION_NAME: OVRPlugin$$GetFaceState2
ENTRY_POINT: 06392d00
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetFaceState2(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  long lVar5;
  long unaff_x19;
  undefined2 uStack000000000000000c;
  
  if (in_w8 == 0x2e) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
  }
  uVar2 = FUN_06392e4c();
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
    FUN_06392df8();
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)(unaff_x19 + 0x20) < *(int *)(lVar5 + 0x10)) {
      FUN_031a5e18(lVar5);
      uStack000000000000000c = FUN_060bb390(lVar5,uVar1,0);
      FUN_031ae340(*(undefined8 *)(PTR_DAT_07d86548 + 0x88));
      uVar3 = FUN_0619e108(&stack0x0000000c,0);
      uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db65b8);
      uVar3 = System_Convert__ToInt32(uVar4,uVar3,0);
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar4 = thunk_FUN_037788cc();
      FUN_062d6d20(uVar4,uVar3,0);
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db65c0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar3);
    }
  }
  return;
}


