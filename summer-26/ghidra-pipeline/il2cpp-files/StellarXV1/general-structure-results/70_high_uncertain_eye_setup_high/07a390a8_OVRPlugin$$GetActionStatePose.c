/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 07a390a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4)

{
  undefined *puVar1;
  float *pfVar2;
  uint in_w9;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x22;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((in_w9 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ecf08);
    *(undefined1 *)(unaff_x22 + 0x27b) = 1;
  }
  fVar3 = (float)FUN_07a385a8();
  fVar11 = param_2;
  fVar10 = param_3;
  fVar4 = (float)FUN_07a3877c();
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  fVar9 = param_2 * fVar10 - param_3 * fVar11;
  fVar10 = param_3 * fVar4 - fVar3 * fVar10;
  fVar11 = fVar3 * fVar11 - param_2 * fVar4;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar1 = PTR_DAT_092ecf08;
  fVar3 = SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10);
  if (fVar3 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar9 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar11 = pfVar2[2];
  }
  else {
    fVar9 = fVar9 / fVar3;
    fVar10 = fVar10 / fVar3;
    fVar11 = fVar11 / fVar3;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar5 = FUN_07a573d4(fVar9,fVar10,fVar11,unaff_x20 + 3,0);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  uVar8 = unaff_x20[2];
  uVar6 = *unaff_x20;
  uVar7 = unaff_x20[1];
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_089d99f0(uVar6,uVar7,uVar8,uVar5,fVar10,fVar11,param_4);
  return;
}


