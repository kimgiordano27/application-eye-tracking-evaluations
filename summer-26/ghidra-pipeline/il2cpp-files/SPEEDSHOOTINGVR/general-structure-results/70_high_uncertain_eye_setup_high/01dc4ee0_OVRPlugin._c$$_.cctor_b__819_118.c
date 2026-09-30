/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_118
ENTRY_POINT: 01dc4ee0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_118(void)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long *unaff_x23;
  undefined2 *unaff_x24;
  long unaff_x25;
  
  FUN_00fdc2e4(PTR_DAT_0234bbb0);
  FUN_00fdc2e4(PTR_DAT_0234c0b8);
  *(undefined1 *)(unaff_x25 + 0xac5) = 1;
  puVar3 = PTR_DAT_02354d90;
  if ((unaff_x19 == 0) || (puVar3 = PTR_DAT_02355000, unaff_x24 == (undefined2 *)0x0)) {
    uVar4 = thunk_FUN_010303a8(puVar3);
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar5 = thunk_FUN_010400dc();
    uVar6 = thunk_FUN_010303a8(PTR_DAT_023578e8);
    FUN_01c66c10(uVar5,uVar4,uVar6,0);
LAB_01dc50a4:
    uVar4 = thunk_FUN_010303a8(PTR_DAT_0235ac50);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar5,uVar4);
  }
  if (((int)unaff_w20 < 0) || ((int)unaff_w21 < 0)) {
    puVar3 = PTR_DAT_02355018;
    if (-1 < (int)unaff_w21) {
      puVar3 = PTR_DAT_02354f90;
    }
    uVar4 = thunk_FUN_010303a8(puVar3);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar5 = thunk_FUN_010400dc();
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0234be30);
    FUN_01c62494(uVar5,uVar4,uVar6,0);
    goto LAB_01dc50a4;
  }
  lVar2 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c0b8,unaff_w21);
  if (0 < (int)unaff_w21) {
    if (lVar2 == 0) goto LAB_01dc4ff8;
    uVar1 = *(uint *)(lVar2 + 0x18);
    uVar7 = 0;
    do {
      if (uVar1 <= uVar7) goto LAB_01dc4ff4;
      *(undefined2 *)(lVar2 + 0x20 + uVar7 * 2) = *unaff_x24;
      uVar7 = uVar7 + 1;
      unaff_x24 = unaff_x24 + 1;
    } while (unaff_w21 != uVar7);
  }
  lVar2 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bbb0,unaff_w20);
  uVar1 = (**(code **)(*unaff_x23 + 0x1a8))();
  if ((int)unaff_w20 <= (int)uVar1) {
    uVar1 = unaff_w20;
  }
  if (0 < (int)uVar1) {
    if (lVar2 == 0) {
LAB_01dc4ff8:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar7 = 0;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar7) {
LAB_01dc4ff4:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      *(undefined1 *)(unaff_x19 + uVar7) = *(undefined1 *)(lVar2 + 0x20 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  return;
}


