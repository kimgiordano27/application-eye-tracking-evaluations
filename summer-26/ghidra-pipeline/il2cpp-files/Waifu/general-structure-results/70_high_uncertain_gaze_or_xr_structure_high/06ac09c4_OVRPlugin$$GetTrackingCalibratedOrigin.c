/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 06ac09c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetTrackingCalibratedOrigin(undefined4 *param_1,long param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uStack0000000000000004;
  
                    /* catch() { ... } // from try @ 06ac09a8 with catch @ 06ac09d8 */
                    /* try { // try from 06ac09e0 to 06bc09e7 has its CatchHandler @ 06ac09e8 */
  if ((DAT_086e220c & 1) == 0) {
                    /* catch() { ... } // from try @ 06ac097c with catch @ 06ac09e8
                       catch() { ... } // from try @ 06ac09e0 with catch @ 06ac09e8 */
                    /* try { // try from 06ac09ec to 06bc182f has its CatchHandler @ 06ac09ec
                       catch() { ... } // from try @ 06ac09ec with catch @ 06ac09ec
                       catch() { ... } // from try @ 06ac1a7c with catch @ 06ac09ec
                       catch() { ... } // from try @ 06ac1b54 with catch @ 06ac09ec */
    FUN_0335b6c8(&DAT_083cbfd8,1);
    DataMemoryBarrier(2,3);
    DAT_086e220c = 1;
  }
  uVar13 = *param_1;
  uVar7 = (ulong)(uint)param_1[1];
  uVar10 = (ulong)(uint)param_1[2];
  uVar15 = param_1[3];
  if (DAT_086d7c55 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c55 = '\x01';
  }
  lVar1 = *(long *)(DAT_083d2c90 + 0xb8);
  FUN_07a00c3c(uVar13,uVar7,uVar10,uVar15,*(undefined4 *)(lVar1 + 0x48),
               *(undefined4 *)(lVar1 + 0x4c),*(undefined4 *)(lVar1 + 0x50),0);
  uStack0000000000000004 = (undefined4)uVar7;
  if (*(int *)(DAT_083cbfd8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_06ac0910();
  uVar13 = *param_1;
  uVar8 = (ulong)(uint)param_1[1];
  uVar11 = (ulong)(uint)param_1[2];
  uVar15 = param_1[3];
  if (DAT_086d7c56 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c56 = '\x01';
  }
  lVar1 = *(long *)(DAT_083d2c90 + 0xb8);
  FUN_07a00c3c(uVar13,uVar8,uVar11,uVar15,*(undefined4 *)(lVar1 + 0x18),
               *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),0);
  uStack0000000000000004 = (undefined4)uVar8;
  uVar5 = FUN_06ac0910();
  fVar2 = (float)FUN_07a009b0(uVar4,uVar7,uVar10,uVar5,uVar8,uVar11,0);
  fVar9 = *(float *)(param_3 + 0x2c);
  fVar12 = *(float *)(param_3 + 0x30);
  fVar6 = *(float *)(param_3 + 0x28);
  fVar3 = (float)FUN_07a00400(*(undefined4 *)(param_3 + 0x24),fVar6,fVar9,fVar12,0);
  fVar17 = (float)uVar5;
  fVar14 = (float)uVar7;
  fVar16 = (float)uVar10;
  return (*(float *)(param_2 + 0x2c) *
          ((fVar16 * fVar3 + fVar17 * fVar6 + fVar14 * fVar12) - fVar2 * fVar9) +
         *(float *)(param_2 + 0x24) *
         (((fVar17 * fVar12 - fVar2 * fVar3) - fVar14 * fVar6) - fVar16 * fVar9) +
         *(float *)(param_2 + 0x30) *
         ((fVar14 * fVar9 + fVar17 * fVar3 + fVar2 * fVar12) - fVar16 * fVar6)) -
         *(float *)(param_2 + 0x28) *
         ((fVar2 * fVar6 + fVar17 * fVar9 + fVar16 * fVar12) - fVar14 * fVar3);
}


