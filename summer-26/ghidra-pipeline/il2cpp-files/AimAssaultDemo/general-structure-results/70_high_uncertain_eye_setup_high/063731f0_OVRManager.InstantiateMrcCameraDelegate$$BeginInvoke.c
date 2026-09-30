/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$BeginInvoke
ENTRY_POINT: 063731f0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__BeginInvoke(void)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x28;
  undefined4 uStack000000000000000c;
  
  FUN_0638c054();
  if ((unaff_x24 != 0) && (FUN_0636eea8(), unaff_x23 != (long *)0x0)) {
    (**(code **)(*unaff_x23 + 0x6e8))();
    uVar3 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (unaff_x23 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if ((bVar1 <= *(byte *)(*unaff_x23 + 0x130)) &&
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x26)) {
        if (unaff_x23[0xb] == 0) goto LAB_063733c8;
        if ((*(long *)(unaff_x23[0xb] + 0x10) != 0) && (unaff_x23 == unaff_x21)) {
          return;
        }
      }
    }
    if (unaff_x19 != (long *)0x0) {
      uVar2 = (**(code **)(*unaff_x19 + 0x238))();
      if (uVar2 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x063731bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)(unaff_x28 + (ulong)uVar2) * 4 + 0x63731c0))();
        return;
      }
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar4 = FUN_061d52c8(0);
      FUN_031a5e18();
      uStack000000000000000c = (**(code **)(*unaff_x19 + 0x238))();
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
      uVar5 = thunk_FUN_037784fc(uVar5,&stack0x0000000c);
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db5a98);
      uVar4 = FUN_063349e4(uVar6,uVar4,uVar5,0);
      thunk_FUN_037a15ac(PTR_DAT_07d8e248);
      uVar5 = thunk_FUN_037788cc();
      FUN_06242c7c(uVar5,uVar4,0);
      uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db5aa0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,uVar4);
    }
  }
LAB_063733c8:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


