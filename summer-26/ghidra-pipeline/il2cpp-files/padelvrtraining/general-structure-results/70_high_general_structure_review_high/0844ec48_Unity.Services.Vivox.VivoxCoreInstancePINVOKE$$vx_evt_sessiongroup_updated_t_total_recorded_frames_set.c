/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_total_recorded_frames_set
ENTRY_POINT: 0844ec48
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_total_recorded_frames_set
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* try { // try from 0844ec4c to 0854ec4f has its CatchHandler @ 0844f1f0 */
  FUN_084327a4(param_1,*(undefined8 *)(unaff_x20 + 0x18));
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548(10);
  }
                    /* try { // try from 0844ec74 to 0854ec83 has its CatchHandler @ 0844f368 */
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
                    /* try { // try from 0844ec9c to 0854eca3 has its CatchHandler @ 0844f360 */
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0927ce50) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0844ecec;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_0844ecec:
  lVar5 = (*(code *)*puVar2)();
  if (lVar5 != 0) {
    in_stack_00000008 = FUN_0636bf40(lVar5,*(undefined8 *)PTR_DAT_0927ca30);
    uVar6 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_0927c9d0);
    if ((uVar6 & 1) == 0) {
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
      uVar4 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927ce58);
      FUN_083ffb00(uVar4,uVar3,0);
      puVar1 = PTR_DAT_0927ba10;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03d1023c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      FUN_062285f0(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


