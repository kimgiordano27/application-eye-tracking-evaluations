/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_92
ENTRY_POINT: 01dc4398
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_92(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w19;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 auVar6 [16];
  undefined *puVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_023509b0);
    FUN_00fdc2e4(PTR_DAT_02355fa0);
    FUN_00fdc2e4(PTR_DAT_02351a00);
    FUN_00fdc2e4(PTR_DAT_02355628);
    *(undefined1 *)(unaff_x26 + 0xabc) = 1;
  }
  puVar1 = PTR_DAT_02355fa0;
  puVar5 = PTR_DAT_023509b0;
  if ((unaff_x25 == 0) || (unaff_x24 == 0)) {
    puVar5 = PTR_DAT_02354d90;
    if (unaff_x25 != 0) {
      puVar5 = PTR_DAT_02355000;
    }
    uVar2 = thunk_FUN_010303a8(puVar5);
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar4 = thunk_FUN_010400dc();
    uVar3 = thunk_FUN_010303a8(PTR_DAT_023578e8);
    FUN_01c66c10(uVar4,uVar2,uVar3,0);
  }
  else {
    if ((-1 < unaff_w19) && (-1 < unaff_w22)) {
      if (*(int *)(unaff_x25 + 0x18) - unaff_w22 < unaff_w19) {
        thunk_FUN_010303a8(PTR_DAT_0234be28);
        uVar2 = thunk_FUN_010400dc();
        uVar3 = thunk_FUN_010303a8(PTR_DAT_02354d90);
        puVar5 = PTR_DAT_02350eb0;
      }
      else {
        if (-1 < unaff_w21) {
          if (unaff_w21 <= *(int *)(unaff_x24 + 0x18)) {
            auVar6 = FUN_01a2d1a0();
            FUN_011b22cc(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar5);
            auVar6 = FUN_01a2d840();
            FUN_011b22d4(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)puVar1);
                    /* WARNING: Could not recover jumptable at 0x01dc4488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x23 + 0x1d8))();
            return;
          }
        }
        thunk_FUN_010303a8(PTR_DAT_0234be28);
        uVar2 = thunk_FUN_010400dc();
        uVar3 = thunk_FUN_010303a8(PTR_DAT_0235aad0);
        puVar5 = PTR_DAT_0234be50;
      }
      uVar4 = thunk_FUN_010303a8(puVar5);
      FUN_01c62494(uVar2,uVar3,uVar4,0);
      uVar3 = thunk_FUN_010303a8(PTR_DAT_0235ac10);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar2,uVar3);
    }
    puVar5 = PTR_DAT_0235aac8;
    if (-1 < unaff_w22) {
      puVar5 = PTR_DAT_02354f90;
    }
    uVar2 = thunk_FUN_010303a8(puVar5);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar4 = thunk_FUN_010400dc();
    uVar3 = thunk_FUN_010303a8(PTR_DAT_0234be30);
    FUN_01c62494(uVar4,uVar2,uVar3,0);
  }
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0235ac10);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar4,uVar2);
}


