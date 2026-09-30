/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 06ac0a3c
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__SetTrackingCalibratedOrigin(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 unaff_d9;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 unaff_d11;
  undefined4 uVar15;
  undefined4 uStack0000000000000004;
  
  FUN_07a00c3c(0);
  uStack0000000000000004 = (undefined4)unaff_d9;
  if (*(int *)(DAT_083cbfd8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_06ac0910();
  uVar13 = *unaff_x21;
  uVar7 = (ulong)(uint)unaff_x21[1];
  uVar9 = (ulong)(uint)unaff_x21[2];
  uVar15 = unaff_x21[3];
  if (DAT_086d7c56 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c56 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
  FUN_07a00c3c(uVar13,uVar7,uVar9,uVar15,*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c)
               ,*(undefined4 *)(lVar1 + 0x20),0);
  uStack0000000000000004 = (undefined4)uVar7;
  uVar5 = FUN_06ac0910();
  fVar2 = (float)FUN_07a009b0(uVar4,unaff_d9,unaff_d11,uVar5,uVar7,uVar9,0);
  fVar8 = *(float *)(unaff_x20 + 0x2c);
  fVar10 = *(float *)(unaff_x20 + 0x30);
  fVar6 = *(float *)(unaff_x20 + 0x28);
  fVar3 = (float)FUN_07a00400(*(undefined4 *)(unaff_x20 + 0x24),fVar6,fVar8,fVar10,0);
  fVar14 = (float)uVar5;
  fVar11 = (float)unaff_d9;
  fVar12 = (float)unaff_d11;
  return (*(float *)(unaff_x19 + 0x2c) *
          ((fVar12 * fVar3 + fVar14 * fVar6 + fVar11 * fVar10) - fVar2 * fVar8) +
         *(float *)(unaff_x19 + 0x24) *
         (((fVar14 * fVar10 - fVar2 * fVar3) - fVar11 * fVar6) - fVar12 * fVar8) +
         *(float *)(unaff_x19 + 0x30) *
         ((fVar11 * fVar8 + fVar14 * fVar3 + fVar2 * fVar10) - fVar12 * fVar6)) -
         *(float *)(unaff_x19 + 0x28) *
         ((fVar2 * fVar6 + fVar14 * fVar8 + fVar12 * fVar10) - fVar11 * fVar3);
}


