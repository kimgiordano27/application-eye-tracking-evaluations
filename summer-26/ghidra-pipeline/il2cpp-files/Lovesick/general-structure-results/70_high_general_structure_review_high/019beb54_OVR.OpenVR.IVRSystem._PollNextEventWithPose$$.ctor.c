/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$.ctor
ENTRY_POINT: 019beb54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRSystem__PollNextEventWithPose___ctor
                (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
      goto LAB_019beb78;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_019beb78:
  (*(code *)*puVar1)(0);
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_019bebdc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_019bebdc:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x20) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto FUN_019bec40;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724(plVar2,*unaff_x20,2);
FUN_019bec40:
  (*(code *)*puVar1)(0,plVar2,&stack0x00000050,&stack0x00000010,puVar1[1]);
  fVar11 = (float)uStack0000000000000050 - (float)uStack0000000000000030;
  fVar7 = (float)uStack0000000000000054 - (float)uStack0000000000000034;
  fVar8 = SUB84(uStack0000000000000054,4) - SUB84(uStack0000000000000034,4);
  fVar9 = (float)in_stack_00000020;
  fVar10 = (float)((ulong)in_stack_00000020 >> 0x20);
  fVar6 = fVar8 * fVar10 + fVar11 * in_stack_00000018._4_4_ + fVar7 * fVar9;
  if (DAT_03774e1b == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1b = '\x01';
  }
  fVar11 = fVar11 - in_stack_00000018._4_4_ * fVar6;
  fVar7 = fVar7 - fVar9 * fVar6;
  fVar8 = fVar8 - fVar10 * fVar6;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  return SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar7 * fVar7) - unaff_s8;
}


