/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 06ac0a9c
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__RecenterTrackingOrigin(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d12;
  undefined8 unaff_d14;
  undefined4 uStack0000000000000004;
  
  if (in_w8 == 0) {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x23 + 0xc56) = 1;
  }
  FUN_07a00c3c(0);
  uStack0000000000000004 = (undefined4)unaff_d12;
  uVar3 = FUN_06ac0910();
  fVar1 = (float)FUN_07a009b0(param_1,param_2,param_3,uVar3,unaff_d12,unaff_d14,0);
  fVar5 = *(float *)(unaff_x20 + 0x2c);
  fVar6 = *(float *)(unaff_x20 + 0x30);
  fVar4 = *(float *)(unaff_x20 + 0x28);
  fVar2 = (float)FUN_07a00400(*(undefined4 *)(unaff_x20 + 0x24),fVar4,fVar5,fVar6,0);
  fVar9 = (float)uVar3;
  fVar7 = (float)param_2;
  fVar8 = (float)param_3;
  return (*(float *)(unaff_x19 + 0x2c) *
          ((fVar8 * fVar2 + fVar9 * fVar4 + fVar7 * fVar6) - fVar1 * fVar5) +
         *(float *)(unaff_x19 + 0x24) *
         (((fVar9 * fVar6 - fVar1 * fVar2) - fVar7 * fVar4) - fVar8 * fVar5) +
         *(float *)(unaff_x19 + 0x30) *
         ((fVar7 * fVar5 + fVar9 * fVar2 + fVar1 * fVar6) - fVar8 * fVar4)) -
         *(float *)(unaff_x19 + 0x28) *
         ((fVar1 * fVar4 + fVar9 * fVar5 + fVar8 * fVar6) - fVar7 * fVar2);
}


