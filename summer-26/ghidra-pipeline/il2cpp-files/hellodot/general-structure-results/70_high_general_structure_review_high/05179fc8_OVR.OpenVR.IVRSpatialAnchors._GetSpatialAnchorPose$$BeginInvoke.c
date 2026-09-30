/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 05179fc8
PROGRAM: hellodot-libil2cpp.so
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
OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke
          (long param_1,undefined4 param_2,float *param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
                    /* try { // try from 05179fd4 to 05279fd7 has its CatchHandler @ 0517a1ac */
  if ((DAT_06a710df & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607b00);
    DAT_06a710df = 1;
  }
  FUN_05179a70(param_1);
  puVar2 = PTR_DAT_06607b00;
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_0517a184:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0517a184 to 0527a187 has its CatchHandler @ 0517a1b8 */
    FUN_02ce7c7c();
  }
  lVar3 = FUN_0460e944(*(long *)(param_1 + 0x30),param_2,*(undefined8 *)PTR_DAT_06607b00);
  if (lVar3 == 0) goto LAB_0517a184;
  uVar1 = 1 - *(int *)(param_1 + 0x48);
  if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_0517a188:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0517a188 to 0527a18b has its CatchHandler @ 0517a1a4 */
    FUN_02ce7c84();
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0517a184;
                    /* try { // try from 0517a050 to 0527a077 has its CatchHandler @ 0517a1b0 */
  lVar6 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
  lVar3 = FUN_0460e944(*(long *)(param_1 + 0x30),param_2,*(undefined8 *)puVar2);
  if (lVar3 == 0) goto LAB_0517a184;
  if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x48)) goto LAB_0517a188;
  if (lVar6 == 0) goto LAB_0517a184;
  if (*(char *)(lVar6 + 0x10) != '\0') {
                    /* try { // try from 0517a084 to 0527a087 has its CatchHandler @ 0517a1a8 */
    lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(param_1 + 0x48) * 8 + 0x20);
    if (lVar3 == 0) goto LAB_0517a184;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      fVar9 = *(float *)(lVar6 + 0x24);
      fVar11 = *(float *)(lVar6 + 0x28);
      fVar13 = *(float *)(lVar6 + 0x2c);
      fVar14 = *(float *)(lVar3 + 0x20);
      fVar15 = *(float *)(lVar3 + 0x24);
      fVar16 = *(float *)(lVar3 + 0x28);
      fVar17 = *(float *)(lVar3 + 0x2c);
      fVar7 = (float)FUN_05ee9a10(*(undefined4 *)(lVar6 + 0x20),0);
      fVar8 = (fVar15 * fVar11 + fVar17 * fVar7 + fVar14 * fVar13) - fVar16 * fVar9;
      fVar10 = (fVar16 * fVar7 + fVar17 * fVar9 + fVar15 * fVar13) - fVar14 * fVar11;
      fVar12 = (fVar14 * fVar9 + fVar17 * fVar11 + fVar16 * fVar13) - fVar15 * fVar7;
      fVar7 = ((fVar17 * fVar13 - fVar14 * fVar7) - fVar15 * fVar9) - fVar16 * fVar11;
      uVar4 = 1;
      goto LAB_0517a164;
    }
  }
  if (DAT_06a67311 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065caa08);
    DAT_06a67311 = '\x01';
  }
  uVar4 = 0;
  pfVar5 = *(float **)(*(long *)PTR_DAT_065caa08 + 0xb8);
  fVar8 = *pfVar5;
  fVar10 = pfVar5[1];
  fVar12 = pfVar5[2];
  fVar7 = pfVar5[3];
LAB_0517a164:
  *param_3 = fVar8;
  param_3[1] = fVar10;
  param_3[2] = fVar12;
  param_3[3] = fVar7;
  return uVar4;
}


