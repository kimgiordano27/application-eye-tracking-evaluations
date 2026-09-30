/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_first_frame_timestamp_us_set
ENTRY_POINT: 09007c24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_first_frame_timestamp_us_set
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  FUN_0744298c();
  *(undefined8 *)(unaff_x19 + 0xe) = unaff_x21;
  thunk_FUN_044bb4b4();
                    /* try { // try from 09007c40 to 09107c47 has its CatchHandler @ 09007c5c */
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
                    /* try { // try from 09007c48 to 09107c73 has its CatchHandler @ 09007b44 */
  uVar3 = FUN_09006c68();
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 09007c40 with catch @ 09007c5c
                        */
  lVar4 = FUN_08fd8fcc(uVar8,uVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  plVar9 = *(long **)(unaff_x20 + 0x10);
                    /* try { // try from 09007c74 to 09107c8b has its CatchHandler @ 09007ccc */
  uVar3 = FUN_078a7764(*(undefined8 *)(lVar4 + 0x10),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x48),0);
                    /* try { // try from 09007c8c to 09107cbb has its CatchHandler @ 09007b44 */
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar8 = FUN_090008e8(*(long *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x20 + 0x18),lVar4);
  uVar1 = 10;
  if ((*(uint *)(lVar4 + 0x18) & 0xff) != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x1c);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(10);
  }
  lVar4 = *plVar9;
  uVar10 = *(undefined8 *)PTR_DAT_09f20d70;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09fbf408) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_09007d2c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09fbf408,0);
LAB_09007d2c:
  lVar4 = (*(code *)*puVar5)(plVar9,uVar10,uVar3,0,uVar8,uVar1,puVar5[1]);
  if (lVar4 != 0) {
    in_stack_00000008 = FUN_068a4fb0(lVar4,*(undefined8 *)PTR_DAT_09fbf080);
    uVar6 = FUN_067804ac(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf050);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04664624(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar3 = FUN_067804f0(&stack0x00000008,*(undefined8 *)PTR_DAT_09fbf048);
      uVar8 = FUN_04f491a0(uVar3,*(undefined8 *)(unaff_x19 + 0xe),*(undefined8 *)PTR_DAT_09fbf718);
      uVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09fbf728);
      FUN_0666a738(uVar10,uVar3,uVar8,*(undefined8 *)PTR_DAT_09fbf720);
      puVar2 = PTR_DAT_09fbf708;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_066f3a60(unaff_x19 + 2,uVar10,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


