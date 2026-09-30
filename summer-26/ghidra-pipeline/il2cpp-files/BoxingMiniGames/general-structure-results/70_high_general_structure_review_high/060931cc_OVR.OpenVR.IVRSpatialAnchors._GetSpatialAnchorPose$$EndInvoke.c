/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 060931cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke
          (float param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *unaff_x19;
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  ulong uVar6;
  float unaff_s8;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  
  param_1 = param_1 / *(float *)((long)param_3 + 0x14);
  uVar2 = NEON_fmov(0x3f800000,4);
  fVar7 = (float)uVar2 / (float)*(undefined8 *)((long)param_3 + 0xc);
  fVar8 = (float)((ulong)uVar2 >> 0x20) /
          (float)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
  FUN_0609299c();
  fVar9 = fVar7 * (((float)in_stack_00000008 - (float)uStack0000000000000014) - (float)*param_3);
  fVar10 = fVar8 * (((float)((ulong)in_stack_00000008 >> 0x20) - SUB84(uStack0000000000000014,4)) -
                   (float)((ulong)*param_3 >> 0x20));
  fVar11 = param_1 * (((float)uStack0000000000000010 - (float)uStack000000000000001c) -
                     *(float *)(param_3 + 1));
  FUN_0609299c(&stack0x00000008,param_2);
  fVar7 = fVar7 * (((float)in_stack_00000008 + (float)uStack0000000000000014) - (float)*param_3);
  fVar8 = fVar8 * (((float)((ulong)in_stack_00000008 >> 0x20) + SUB84(uStack0000000000000014,4)) -
                  (float)((ulong)*param_3 >> 0x20));
  uVar6 = CONCAT44(fVar8,fVar7);
  param_1 = param_1 * (((float)uStack0000000000000010 + (float)uStack000000000000001c) -
                      *(float *)(param_3 + 1));
  uVar4 = uVar6 ^ (uVar6 ^ CONCAT44(fVar10,fVar9)) &
                  CONCAT44(-(uint)(fVar10 < fVar8),-(uint)(fVar9 < fVar7));
  fVar5 = (float)(uVar4 >> 0x20);
  fVar3 = (float)uVar4;
  if (fVar3 <= fVar5) {
    fVar3 = fVar5;
  }
  uVar6 = uVar6 ^ (uVar6 ^ CONCAT44(fVar10,fVar9)) &
                  CONCAT44(-(uint)(fVar8 < fVar10),-(uint)(fVar7 < fVar9));
  fVar7 = fVar11;
  if (param_1 <= fVar11) {
    fVar7 = param_1;
  }
  if (fVar11 <= param_1) {
    fVar11 = param_1;
  }
  fVar8 = (float)(uVar6 >> 0x20);
  if (fVar3 <= fVar7) {
    fVar3 = fVar7;
  }
  fVar7 = (float)uVar6;
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  if (fVar11 <= fVar7) {
    fVar7 = fVar11;
  }
  if ((fVar7 < 0.0) || (fVar7 < fVar3)) {
    uVar2 = 0;
    *(float *)(unaff_x19 + 3) = fVar7;
  }
  else {
    *(float *)(unaff_x19 + 3) = fVar3;
    if ((unaff_s8 <= 0.0) || (fVar3 <= unaff_s8)) {
      fVar11 = -1.0;
      fVar8 = -1.0;
      if (0.0 <= fVar3) {
        fVar8 = 1.0;
      }
      if (0.0 <= fVar7) {
        fVar11 = 1.0;
      }
      fVar5 = fVar3;
      if (fVar8 != fVar11) {
        fVar5 = fVar7;
        if (fVar7 <= fVar3) {
          fVar5 = fVar3;
        }
        *(float *)(unaff_x19 + 3) = fVar5;
      }
      fVar3 = (float)((ulong)*param_3 >> 0x20) +
              (float)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20) * fVar5;
      fVar11 = *(float *)(param_3 + 1) + *(float *)((long)param_3 + 0x14) * fVar5;
      *unaff_x19 = CONCAT44(fVar3,(float)*param_3 +
                                  (float)*(undefined8 *)((long)param_3 + 0xc) * fVar5);
      *(float *)(unaff_x19 + 1) = fVar11;
      uVar1 = FUN_06093054(param_2,0);
      uVar2 = 1;
      *(undefined4 *)((long)unaff_x19 + 0xc) = uVar1;
      *(float *)(unaff_x19 + 2) = fVar3;
      *(float *)((long)unaff_x19 + 0x14) = fVar11;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


