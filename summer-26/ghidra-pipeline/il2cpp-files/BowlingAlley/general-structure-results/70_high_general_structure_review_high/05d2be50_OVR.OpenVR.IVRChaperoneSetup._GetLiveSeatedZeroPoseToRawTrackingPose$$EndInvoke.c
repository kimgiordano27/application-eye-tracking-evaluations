/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 05d2be50
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  float unaff_s8;
  undefined8 unaff_d9;
  float unaff_s10;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  
  fVar7 = (float)unaff_d9 *
          (((float)in_stack_00000008 - uStack0000000000000010._4_4_) - (float)*unaff_x21);
  fVar4 = (float)((ulong)unaff_d9 >> 0x20);
  fVar8 = fVar4 * (((float)((ulong)in_stack_00000008 >> 0x20) - uStack0000000000000010._8_4_) -
                  (float)((ulong)*unaff_x21 >> 0x20));
  fVar9 = unaff_s10 *
          (((float)uStack0000000000000010 - (float)uStack000000000000001c) -
          *(float *)(unaff_x21 + 1));
  OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize___ctor(&stack0x00000008);
  fVar2 = (float)unaff_d9 *
          (((float)in_stack_00000008 + (float)uStack0000000000000014) - (float)*unaff_x21);
  fVar4 = fVar4 * (((float)((ulong)in_stack_00000008 >> 0x20) + SUB84(uStack0000000000000014,4)) -
                  (float)((ulong)*unaff_x21 >> 0x20));
  uVar6 = CONCAT44(fVar4,fVar2);
  uVar5 = uVar6 ^ (uVar6 ^ CONCAT44(fVar8,fVar7)) &
                  CONCAT44(-(uint)(fVar8 < fVar4),-(uint)(fVar7 < fVar2));
  uVar6 = uVar6 ^ (uVar6 ^ CONCAT44(fVar8,fVar7)) &
                  CONCAT44(-(uint)(fVar4 < fVar8),-(uint)(fVar2 < fVar7));
  fVar7 = (float)(uVar5 >> 0x20);
  fVar4 = unaff_s10 *
          (((float)uStack0000000000000010 + (float)uStack000000000000001c) -
          *(float *)(unaff_x21 + 1));
  fVar2 = (float)uVar5;
  if (fVar2 <= fVar7) {
    fVar2 = fVar7;
  }
  fVar7 = fVar9;
  if (fVar4 <= fVar9) {
    fVar7 = fVar4;
  }
  fVar8 = (float)(uVar6 >> 0x20);
  if (fVar9 <= fVar4) {
    fVar9 = fVar4;
  }
  if (fVar2 <= fVar7) {
    fVar2 = fVar7;
  }
  fVar4 = (float)uVar6;
  if (fVar8 <= fVar4) {
    fVar4 = fVar8;
  }
  if (fVar9 <= fVar4) {
    fVar4 = fVar9;
  }
  if ((fVar4 < 0.0) || (fVar4 < fVar2)) {
    uVar1 = 0;
    *(float *)(unaff_x19 + 3) = fVar4;
  }
  else {
    *(float *)(unaff_x19 + 3) = fVar2;
    if ((unaff_s8 <= 0.0) || (fVar2 <= unaff_s8)) {
      fVar7 = 1.0;
      fVar9 = fVar7;
      if (fVar2 < 0.0) {
        fVar9 = -1.0;
      }
      if (fVar4 < 0.0) {
        fVar7 = -1.0;
      }
      fVar8 = fVar2;
      if (fVar9 != fVar7) {
        fVar8 = fVar4;
        if (fVar4 <= fVar2) {
          fVar8 = fVar2;
        }
        *(float *)(unaff_x19 + 3) = fVar8;
      }
      fVar2 = (float)((ulong)*unaff_x21 >> 0x20) +
              (float)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20) * fVar8;
      fVar9 = *(float *)(unaff_x21 + 1) + *(float *)((long)unaff_x21 + 0x14) * fVar8;
      *unaff_x19 = CONCAT44(fVar2,(float)*unaff_x21 +
                                  (float)*(undefined8 *)((long)unaff_x21 + 0xc) * fVar8);
      *(float *)(unaff_x19 + 1) = fVar9;
      uVar3 = FUN_05d2bcb8();
      uVar1 = 1;
      *(undefined4 *)((long)unaff_x19 + 0xc) = uVar3;
      *(float *)(unaff_x19 + 2) = fVar2;
      *(float *)((long)unaff_x19 + 0x14) = fVar9;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


