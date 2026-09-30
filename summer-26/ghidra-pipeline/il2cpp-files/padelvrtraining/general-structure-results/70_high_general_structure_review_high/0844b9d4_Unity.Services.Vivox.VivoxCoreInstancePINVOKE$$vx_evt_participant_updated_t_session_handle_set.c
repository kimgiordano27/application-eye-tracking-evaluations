/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_session_handle_set
ENTRY_POINT: 0844b9d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_session_handle_set
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 0844b9dc to 0854b9e3 has its CatchHandler @ 0844bba4 */
  FUN_06b6dddc();
                    /* try { // try from 0844b9f0 to 0854b9f7 has its CatchHandler @ 0844bb90 */
  uVar10 = *(undefined8 *)PTR_StringLiteral_50004_091fb040;
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
                    /* try { // try from 0844ba0c to 0854ba17 has its CatchHandler @ 0844bb8c */
  FUN_07186ef4(uVar10,0);
                    /* try { // try from 0844ba28 to 0854ba33 has its CatchHandler @ 0844bb88 */
  FUN_06b6dddc();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_03d1023c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
  uVar10 = FUN_084474b4();
  lVar3 = FUN_083f2c3c(uVar8,uVar10,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0xc) + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_06b6f2d8(lVar4,*(undefined8 *)PTR_DAT_091b1468,*(undefined8 *)PTR_DAT_091b2580);
  lVar4 = *(long *)(unaff_x19 + 0xc);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
  uVar1 = 10;
  if ((*(uint *)(lVar3 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x1c);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(10);
  }
  lVar3 = *plVar9;
  uVar10 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x19 + 0xe);
  uVar11 = *(undefined8 *)(lVar4 + 0x20);
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0927ce50) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0844bb34;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_0927ce50,0);
LAB_0844bb34:
  lVar3 = (*(code *)*puVar5)(plVar9,uVar8,uVar10,uVar12,uVar11,uVar1,puVar5[1]);
  if (lVar3 != 0) {
    in_stack_00000008 = FUN_0636bf40(lVar3,*(undefined8 *)PTR_DAT_0927ca30);
    uVar6 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a5b5ec(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar10 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
      FUN_0842bd50(uVar10,*(undefined8 *)(unaff_x19 + 0x10),0);
      uVar8 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927ce58);
      FUN_083ffb00(uVar8,uVar10,0);
      puVar2 = PTR_DAT_0927ba10;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_062285f0(unaff_x19 + 2,uVar8,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


