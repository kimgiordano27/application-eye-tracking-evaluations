/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 07c2550c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke
               (float param_1,float param_2)

{
  bool in_NG;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 unaff_s8;
  float in_s16;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack0000000000000000;
  ulong uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  fStack0000000000000000 = in_s16;
  if ((!in_NG) && (fStack0000000000000000 = 1.0, param_2 <= 1.0)) {
    fStack0000000000000000 = param_2;
  }
  uVar9 = *unaff_x20;
  fVar12 = fStack0000000000000000;
  if (fStack0000000000000000 <= param_1) {
    fVar12 = param_1;
  }
  fVar10 = *(float *)(unaff_x21 + 1);
  fVar11 = *(float *)(unaff_x20 + 1);
  fVar7 = (float)*unaff_x21;
  fVar8 = (float)((ulong)*unaff_x21 >> 0x20);
  uVar2 = *(undefined4 *)(unaff_x21 + 2);
  uVar3 = *(undefined4 *)((long)unaff_x21 + 0x14);
  uVar4 = *(undefined4 *)(unaff_x21 + 3);
  uStack0000000000000018 = 0;
  uStack0000000000000010 = (ulong)(uint)fVar12;
  uVar1 = FUN_09516694(*(undefined4 *)((long)unaff_x21 + 0xc),0);
  iVar5 = *(int *)(unaff_x21 + 4);
  iVar6 = *(int *)(unaff_x20 + 4);
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 2) = uVar2;
  *(undefined4 *)((long)unaff_x19 + 0x14) = uVar3;
  *(float *)(unaff_x19 + 1) = fVar10 + fVar12 * (fVar11 - fVar10);
  *(undefined4 *)((long)unaff_x19 + 0xc) = uVar1;
  fVar10 = (float)uStack0000000000000010 * ((float)iVar6 - (float)iVar5) + (float)iVar5;
  iVar5 = -0x80000000;
  if (fVar10 != INFINITY) {
    iVar5 = (int)fVar10;
  }
  *unaff_x19 = CONCAT44(fVar8 + ((float)((ulong)uVar9 >> 0x20) - fVar8) * fVar12,
                        fVar7 + ((float)uVar9 - fVar7) * fVar12);
  *(undefined4 *)(unaff_x19 + 3) = uVar4;
  *(undefined4 *)((long)unaff_x19 + 0x1c) = unaff_s8;
  *(int *)(unaff_x19 + 4) = iVar5;
  return;
}


