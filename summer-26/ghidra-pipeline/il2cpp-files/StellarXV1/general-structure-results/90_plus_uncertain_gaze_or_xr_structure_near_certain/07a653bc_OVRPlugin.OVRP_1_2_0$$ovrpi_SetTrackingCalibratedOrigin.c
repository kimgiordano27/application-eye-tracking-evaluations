/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 07a653bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(void)

{
  undefined *puVar1;
  long lVar2;
  float *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  
  lVar2 = thunk_FUN_040b4e00(*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10),*unaff_x20);
  if (DAT_098854e9 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e9 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  fVar4 = *unaff_x19;
  uVar5 = *(undefined8 *)(unaff_x19 + 1);
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar3 = (float)uVar5;
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6) <
      *(float *)(*(long *)(*unaff_x21 + 0xb8) + 0xc)) {
    if (lVar2 == 0) goto LAB_07a65590;
    uVar5 = 0;
    goto LAB_07a6544c;
  }
  fVar4 = *unaff_x19;
  uVar5 = *(undefined8 *)(unaff_x19 + 1);
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar3 = (float)uVar5;
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar4 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    uVar5 = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
  }
  else {
    uVar5 = CONCAT44((float)((ulong)*(undefined8 *)unaff_x19 >> 0x20) / fVar4,
                     (float)*(undefined8 *)unaff_x19 / fVar4);
    fVar4 = unaff_x19[2] / fVar4;
  }
  fVar3 = (float)((ulong)uVar5 >> 0x20);
  *(undefined8 *)unaff_x19 = uVar5;
  unaff_x19[2] = fVar4;
  if (ABS((float)uVar5) <= ABS(fVar3)) {
    if (fVar3 <= 0.0) {
      if (lVar2 == 0) goto LAB_07a65590;
      uVar5 = 4;
    }
    else {
      if (lVar2 == 0) goto LAB_07a65590;
      uVar5 = 5;
    }
  }
  else if ((float)uVar5 <= 0.0) {
    if (lVar2 == 0) goto LAB_07a65590;
    uVar5 = 3;
  }
  else {
    if (lVar2 == 0) {
LAB_07a65590:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = 2;
  }
LAB_07a6544c:
                    /* WARNING: Could not recover jumptable at 0x07a65468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),uVar5,*(undefined8 *)(lVar2 + 0x28));
  return;
}


