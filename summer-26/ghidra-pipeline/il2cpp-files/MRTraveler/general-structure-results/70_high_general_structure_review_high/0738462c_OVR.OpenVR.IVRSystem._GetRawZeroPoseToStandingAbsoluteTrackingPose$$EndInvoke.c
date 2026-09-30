/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 0738462c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__EndInvoke(void)

{
  int iVar1;
  undefined *puVar2;
  long unaff_x19;
  long unaff_x20;
  double dVar3;
  int iVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  double dVar6;
  float unaff_s11;
  double in_stack_00000028;
  
  puVar2 = PTR_DAT_08e6a6b8;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  dVar6 = (double)(unaff_s10 * unaff_s11);
  dVar3 = modf(dVar6,&stack0x00000028);
  if (0.0 <= unaff_s10 * unaff_s11) {
    if (dVar3 == 0.5) {
      dVar3 = 1.0;
      goto LAB_0738468c;
    }
    dVar6 = (double)(long)(dVar6 + 0.5);
  }
  else if (dVar3 == -0.5) {
    dVar3 = -1.0;
LAB_0738468c:
    dVar6 = in_stack_00000028;
    if (((long)in_stack_00000028 & 1U) != 0) {
      dVar6 = in_stack_00000028 + dVar3;
    }
  }
  else {
    dVar6 = (double)(long)(dVar6 + -0.5);
  }
  iVar4 = *(int *)(unaff_x19 + 0x3c);
  iVar1 = -0x80000000;
  if (dVar6 != INFINITY) {
    iVar1 = (int)dVar6;
  }
  if (*(char *)(unaff_x20 + 0x2d1) == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x20 + 0x2d1) = 1;
  }
  fVar5 = unaff_s8 * unaff_s9 * (float)iVar4;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  dVar6 = (double)fVar5;
  dVar3 = modf(dVar6,&stack0x00000028);
  if (0.0 <= fVar5) {
    if (dVar3 != 0.5) {
      in_stack_00000028 = (double)(long)(dVar6 + 0.5);
      goto LAB_07384774;
    }
    dVar3 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      in_stack_00000028 = (double)(long)(dVar6 + -0.5);
      goto LAB_07384774;
    }
    dVar3 = -1.0;
  }
  if (((long)in_stack_00000028 & 1U) != 0) {
    in_stack_00000028 = in_stack_00000028 + dVar3;
  }
LAB_07384774:
  iVar4 = -0x80000000;
  if (in_stack_00000028 != INFINITY) {
    iVar4 = (int)in_stack_00000028;
  }
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  return CONCAT44(iVar4,iVar1);
}


