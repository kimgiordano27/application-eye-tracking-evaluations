/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_current_recording_filename_set
ENTRY_POINT: 0844eb1c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_current_recording_filename_set
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  FUN_06b6dddc();
  FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49859_0927d060,0);
                    /* try { // try from 0844eb4c to 0854eb53 has its CatchHandler @ 0844f22c */
                    /* try { // try from 0844eb54 to 0854eb5f has its CatchHandler @ 0844f370 */
  FUN_06b6dddc();
  FUN_07186ef4(*unaff_x22,0);
                    /* try { // try from 0844eb84 to 0854eb8f has its CatchHandler @ 0844f1b4 */
  FUN_06b6dddc();
  FUN_07186ef4(*unaff_x22,0);
                    /* try { // try from 0844eb98 to 0854eba3 has its CatchHandler @ 0844f1b0 */
  FUN_06b6dddc();
  FUN_07186ef4(*unaff_x22,0);
  FUN_06b6dddc();
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_03d1023c();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar9 = *(undefined8 *)(unaff_x19 + 8);
  uVar3 = FUN_0844be1c();
  lVar4 = FUN_083f2c3c(uVar9,uVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  uVar3 = FUN_08432788(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(lVar4 + 0x10),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar9 = FUN_0843279c(*(long *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar5 = FUN_084327a4(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar4,0);
  uVar1 = 10;
  if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x1c);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(10);
  }
  lVar4 = *plVar10;
  uVar11 = *(undefined8 *)PTR_DAT_091baaa8;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927ce50) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0844ecec;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_0927ce50,0);
LAB_0844ecec:
  lVar4 = (*(code *)*puVar6)(plVar10,uVar11,uVar3,uVar9,uVar5,uVar1,puVar6[1]);
  if (lVar4 != 0) {
    in_stack_00000008 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_0927ca30);
    uVar7 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a5522c(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar3 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
      FUN_0842bd50(uVar3,*(undefined8 *)(unaff_x19 + 0xe),0);
      uVar9 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927ce58);
      FUN_083ffb00(uVar9,uVar3,0);
      puVar2 = PTR_DAT_0927ba10;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_062285f0(unaff_x19 + 2,uVar9,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


