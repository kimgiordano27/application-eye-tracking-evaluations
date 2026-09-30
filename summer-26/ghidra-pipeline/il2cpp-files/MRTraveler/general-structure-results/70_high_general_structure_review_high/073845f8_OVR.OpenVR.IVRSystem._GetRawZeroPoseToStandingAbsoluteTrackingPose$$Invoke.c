/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 073845f8
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


undefined8
OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke
          (float param_1,float param_2)

{
  undefined *puVar1;
  long unaff_x19;
  int iVar2;
  double dVar3;
  int iVar4;
  float unaff_s8;
  float unaff_s9;
  double dVar5;
  float fVar6;
  double in_stack_00000028;
  
  FUN_085ecd7c();
  iVar2 = *(int *)(unaff_x19 + 0x3c);
  if (DAT_094102d1 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094102d1 = '\x01';
  }
  puVar1 = PTR_DAT_08e6a6b8;
  fVar6 = unaff_s9 * param_1 * (float)iVar2;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  dVar5 = (double)fVar6;
  dVar3 = modf(dVar5,&stack0x00000028);
  if (0.0 <= fVar6) {
    if (dVar3 == 0.5) {
      dVar3 = 1.0;
      goto LAB_0738468c;
    }
    dVar5 = (double)(long)(dVar5 + 0.5);
  }
  else if (dVar3 == -0.5) {
    dVar3 = -1.0;
LAB_0738468c:
    dVar5 = in_stack_00000028;
    if (((long)in_stack_00000028 & 1U) != 0) {
      dVar5 = in_stack_00000028 + dVar3;
    }
  }
  else {
    dVar5 = (double)(long)(dVar5 + -0.5);
  }
  iVar4 = *(int *)(unaff_x19 + 0x3c);
  iVar2 = -0x80000000;
  if (dVar5 != INFINITY) {
    iVar2 = (int)dVar5;
  }
  if (DAT_094102d1 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094102d1 = '\x01';
  }
  fVar6 = unaff_s8 * param_2 * (float)iVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  dVar5 = (double)fVar6;
  dVar3 = modf(dVar5,&stack0x00000028);
  if (0.0 <= fVar6) {
    if (dVar3 != 0.5) {
      in_stack_00000028 = (double)(long)(dVar5 + 0.5);
      goto LAB_07384774;
    }
    dVar3 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      in_stack_00000028 = (double)(long)(dVar5 + -0.5);
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
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  return CONCAT44(iVar4,iVar2);
}


