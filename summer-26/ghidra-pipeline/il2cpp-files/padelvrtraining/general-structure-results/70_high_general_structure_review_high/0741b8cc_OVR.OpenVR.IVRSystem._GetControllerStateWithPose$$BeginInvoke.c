/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 0741b8cc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(long param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float unaff_s10;
  float fVar5;
  float unaff_s11;
  float fVar6;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(unaff_x23 + 0x2cc) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar6 = *(float *)(unaff_x20 + 0x54);
  uVar3 = *unaff_x19;
  fVar5 = *(float *)(unaff_x19 + 1);
  if (*(char *)(unaff_x24 + 0x37d) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    *(undefined1 *)(unaff_x24 + 0x37d) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar2 = (float)uVar3;
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  fVar1 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4);
  fVar6 = SQRT(unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8) * fVar6;
  if (fVar1 <= unaff_s11) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    uVar3 = **(undefined8 **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar1 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_091a0f88 + 0xb8) + 1);
  }
  else {
    uVar3 = CONCAT44(fVar4 / fVar1,fVar2 / fVar1);
    fVar1 = fVar5 / fVar1;
  }
  *unaff_x19 = CONCAT44(fVar4 + (float)((ulong)uVar3 >> 0x20) * fVar6,fVar2 + (float)uVar3 * fVar6);
  *(float *)(unaff_x19 + 1) = fVar5 + fVar6 * fVar1;
  return;
}


