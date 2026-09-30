/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$Invoke
ENTRY_POINT: 079e3afc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRSystem__PollNextEventWithPose__Invoke
                (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  undefined1 in_stack_00000008 [16];
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
      goto LAB_079e3b20;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_079e3b20:
  (*(code *)*puVar2)(0);
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_079e3b84;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_079e3b84:
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x20) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_079e3be8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x20,2);
LAB_079e3be8:
  (*(code *)*puVar2)(0,plVar3,&stack0x00000040);
  fVar9 = in_stack_00000048;
  uVar1 = in_stack_00000040;
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar7 = (float)uVar1 - (float)in_stack_00000020;
  fVar8 = (float)((ulong)uVar1 >> 0x20) - (float)((ulong)in_stack_00000020 >> 0x20);
  fVar10 = (fVar9 - in_stack_00000028) * (float)in_stack_00000008._12_4_ +
           fVar7 * in_stack_00000008._4_4_ + fVar8 * in_stack_00000008._8_4_;
  fVar7 = fVar7 - in_stack_00000008._4_4_ * fVar10;
  fVar8 = fVar8 - in_stack_00000008._8_4_ * fVar10;
  fVar9 = (fVar9 - in_stack_00000028) - (float)in_stack_00000008._12_4_ * fVar10;
  return SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8) - unaff_s8;
}


