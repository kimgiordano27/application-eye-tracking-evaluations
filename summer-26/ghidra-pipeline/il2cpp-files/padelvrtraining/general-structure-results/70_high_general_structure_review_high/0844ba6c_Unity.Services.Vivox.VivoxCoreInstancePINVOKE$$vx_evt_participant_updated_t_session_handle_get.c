/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_participant_updated_t_session_handle_get
ENTRY_POINT: 0844ba6c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_session_handle_get
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 0844ba78 to 0854ba87 has its CatchHandler @ 0844bbbc */
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_06b6f2d8(*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_091b1468,
               *(undefined8 *)PTR_DAT_091b2580);
  lVar7 = *(long *)(unaff_x19 + 0xc);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar10 = *(long **)(unaff_x20 + 0x10);
  uVar1 = 10;
  if ((*(uint *)(param_2 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(10);
  }
                    /* try { // try from 0844bac4 to 0854bad3 has its CatchHandler @ 0844bbb8 */
  lVar6 = *plVar10;
  uVar4 = *(undefined8 *)(lVar7 + 0x10);
  uVar5 = *(undefined8 *)(lVar7 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x19 + 0xe);
  uVar11 = *(undefined8 *)(lVar7 + 0x20);
                    /* try { // try from 0844bad4 to 0854baf3 has its CatchHandler @ 0844bbc0 */
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927ce50) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0844bb34;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(plVar10,*(long *)PTR_DAT_0927ce50,0);
LAB_0844bb34:
  lVar7 = (*(code *)*puVar3)(plVar10,uVar5,uVar4,uVar12,uVar11,uVar1,puVar3[1]);
  if (lVar7 != 0) {
    in_stack_00000008 = FUN_0636bf40(lVar7,*(undefined8 *)PTR_DAT_0927ca30);
    uVar8 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000008;
      thunk_FUN_03d1023c(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_04a5b5ec(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar4 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9c8);
      FUN_0842bd50(uVar4,*(undefined8 *)(unaff_x19 + 0x10),0);
      uVar5 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927ce58);
      FUN_083ffb00(uVar5,uVar4,0);
      puVar2 = PTR_DAT_0927ba10;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_062285f0(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


