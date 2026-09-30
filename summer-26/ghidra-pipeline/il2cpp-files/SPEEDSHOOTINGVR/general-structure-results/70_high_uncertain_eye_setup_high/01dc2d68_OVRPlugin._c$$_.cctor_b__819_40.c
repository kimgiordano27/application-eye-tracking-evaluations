/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_40
ENTRY_POINT: 01dc2d68
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


void OVRPlugin_<>c__<_cctor>b__819_40(ulong param_1,long *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined2 *unaff_x19;
  uint unaff_w20;
  uint unaff_w22;
  long unaff_x25;
  
                    /* try { // try from 01dc2d70 to 01ec2da7 has its CatchHandler @ 01dc2e10 */
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bbb0);
    FUN_00fdc2e4(PTR_DAT_0234c0b8);
    *(undefined1 *)(unaff_x25 + 0xaad) = 1;
  }
  puVar5 = PTR_DAT_02355000;
  if ((unaff_x19 == (undefined2 *)0x0) || (puVar5 = PTR_DAT_02354d90, param_3 == 0)) {
                    /* catch() { ... } // from try @ 01dc27c0 with catch @ 01dc2ea8 */
    uVar6 = thunk_FUN_010303a8(puVar5);
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar7 = thunk_FUN_010400dc();
    uVar8 = thunk_FUN_010303a8(PTR_DAT_023578e8);
    FUN_01c66c10(uVar7,uVar6,uVar8,0);
LAB_01dc2f3c:
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0235ab70);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar7,uVar6);
  }
  if (((int)unaff_w20 < 0) || ((int)param_4 < 0)) {
    puVar5 = PTR_DAT_02354f90;
    if (-1 < (int)param_4) {
      puVar5 = PTR_DAT_02355018;
    }
    uVar6 = thunk_FUN_010303a8(puVar5);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar7 = thunk_FUN_010400dc();
    uVar8 = thunk_FUN_010303a8(PTR_DAT_0234be30);
    FUN_01c62494(uVar7,uVar6,uVar8,0);
    goto LAB_01dc2f3c;
  }
                    /* try { // try from 01dc2db0 to 01ec2db7 has its CatchHandler @ 01dc2e2c */
                    /* try { // try from 01dc2db8 to 01ec2dcf has its CatchHandler @ 01dc2e18 */
  lVar3 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bbb0,param_4);
  if (0 < (int)param_4) {
    if (lVar3 == 0) goto LAB_01dc2e90;
    uVar2 = *(uint *)(lVar3 + 0x18);
    uVar9 = 0;
    do {
      if (uVar2 <= uVar9) goto LAB_01dc2e8c;
      *(undefined1 *)(lVar3 + 0x20 + uVar9) = *(undefined1 *)(param_3 + uVar9);
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
  }
  lVar4 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234c0b8,unaff_w20);
  uVar2 = (**(code **)(*param_2 + 0x1c8))
                    (param_2,lVar3,0,(ulong)param_4,lVar4,0,unaff_w22 & 1,
                     *(undefined8 *)(*param_2 + 0x1d0));
  if ((int)unaff_w20 <= (int)uVar2) {
    uVar2 = unaff_w20;
  }
  if (0 < (int)uVar2) {
    if (lVar4 == 0) {
LAB_01dc2e90:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar9 = 0;
    do {
      if (uVar1 <= uVar9) {
LAB_01dc2e8c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      lVar3 = uVar9 * 2;
      uVar9 = uVar9 + 1;
      *unaff_x19 = *(undefined2 *)(lVar4 + 0x20 + lVar3);
      unaff_x19 = unaff_x19 + 1;
    } while (uVar2 != uVar9);
  }
  return;
}


