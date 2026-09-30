/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig$$add_GetCameraHandler
ENTRY_POINT: 0636bffc
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig__add_GetCameraHandler
               (float *param_1,float param_2,float param_3,float param_4,float param_5,
               undefined1 param_6 [16],float param_7,undefined1 param_8 [16],undefined8 param_9)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  float fVar6;
  float fVar7;
  undefined8 unaff_d8;
  float unaff_s9;
  undefined8 unaff_d10;
  float unaff_s11;
  float in_s16;
  float fVar8;
  float fVar9;
  float in_register_00005204;
  float in_s17;
  float fVar10;
  float fVar11;
  float in_s18;
  float fVar12;
  float in_s19;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_register_00005264;
  float in_s20;
  float fVar16;
  float fVar17;
  float in_s21;
  float fVar18;
  float in_s22;
  float in_s23;
  float in_s24;
  float in_s25;
  
                    /* try { // try from 0636c004 to 0646c00f has its CatchHandler @ 0636c14c */
  fVar13 = in_s21 + in_s21;
  fVar18 = in_s25 + in_s25;
  fVar16 = in_s20 + in_s20;
                    /* try { // try from 0636c020 to 0646c023 has its CatchHandler @ 0636c138 */
  *param_1 = in_s22 + param_5 * fVar13 + (param_3 * fVar16 - param_4 * fVar18);
  param_1[1] = in_s23 + param_5 * fVar18 + (param_4 * fVar13 - param_2 * fVar16);
  param_1[2] = in_s24 + param_5 * fVar16 + (param_2 * fVar18 - param_3 * fVar13);
  pfVar4 = (float *)(*(long *)(unaff_x19 + 0xd0) + unaff_x20 * 0x10);
  fVar18 = pfVar4[2];
  fVar14 = pfVar4[3];
  fVar13 = *pfVar4;
  fVar16 = pfVar4[1];
                    /* try { // try from 0636c0c0 to 0646c0cb has its CatchHandler @ 0636c128 */
                    /* try { // try from 0636c0f8 to 0646c0fb has its CatchHandler @ 0636c148 */
                    /* try { // try from 0636c100 to 0646c103 has its CatchHandler @ 0636c144 */
                    /* try { // try from 0636c108 to 0646c10b has its CatchHandler @ 0636c13c */
  *pfVar4 = (param_5 * fVar13 + param_3 * fVar18 + param_2 * fVar14) - param_4 * fVar16;
  pfVar4[1] = (param_5 * fVar16 + param_4 * fVar13 + param_3 * fVar14) - param_2 * fVar18;
  pfVar4[2] = (param_5 * fVar18 + param_2 * fVar16 + param_4 * fVar14) - param_3 * fVar13;
  pfVar4[3] = (param_5 * fVar14 - (param_2 * fVar13 + param_3 * fVar16)) - param_4 * fVar18;
                    /* try { // try from 0636c110 to 0646c113 has its CatchHandler @ 0636c134 */
                    /* try { // try from 0636c118 to 0646c11b has its CatchHandler @ 0636c130 */
  fVar6 = (param_7 + unaff_s11 + in_s17 + (param_2 * in_register_00005264 - param_3 * in_s19)) -
          unaff_s9;
  fVar18 = (param_6._0_4_ +
           (float)unaff_d10 + in_s16 + (param_8._0_4_ - (float)param_9 * in_register_00005264)) -
           (float)unaff_d8;
  fVar16 = (float)((ulong)unaff_d8 >> 0x20);
  fVar14 = (param_6._4_4_ +
           (float)((ulong)unaff_d10 >> 0x20) +
           in_register_00005204 + (param_8._4_4_ - (float)((ulong)param_9 >> 0x20) * in_s18)) -
           fVar16;
                    /* try { // try from 0636c120 to 0646c123 has its CatchHandler @ 0636c12c */
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x120) + unaff_x22 * 4);
                    /* try { // try from 0636c124 to 0646c163 has its CatchHandler @ 0636bae0 */
                    /* catch() { ... } // from try @ 0636c0c0 with catch @ 0636c128 */
  *puVar2 = CONCAT44(fVar14 + (float)((ulong)*puVar2 >> 0x20),fVar18 + (float)*puVar2);
  *(float *)(puVar2 + 1) = fVar6 + *(float *)(puVar2 + 1);
  pfVar4 = (float *)(*(long *)(unaff_x19 + 0x130) + unaff_x20 * 0x10);
  fVar13 = *pfVar4;
  fVar7 = pfVar4[1];
  fVar8 = pfVar4[2];
  fVar10 = pfVar4[3];
  *pfVar4 = (param_5 * fVar13 + param_3 * fVar8 + param_2 * fVar10) - param_4 * fVar7;
  pfVar4[1] = (param_5 * fVar7 + param_4 * fVar13 + param_3 * fVar10) - param_2 * fVar8;
  pfVar4[2] = (param_5 * fVar8 + param_2 * fVar7 + param_4 * fVar10) - param_3 * fVar13;
  pfVar4[3] = (param_5 * fVar10 - (param_2 * fVar13 + param_3 * fVar7)) - param_4 * fVar8;
  fVar13 = (float)unaff_d8 + fVar18;
  fVar16 = fVar16 + fVar14;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0xc0) + unaff_x22 * 4);
  *puVar2 = CONCAT44(fVar16,fVar13);
  *(float *)(puVar2 + 1) = unaff_s9 + fVar6;
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0xe0) + unaff_x22 * 4);
  *puVar2 = CONCAT44(fVar14 + (float)((ulong)*puVar2 >> 0x20),fVar18 + (float)*puVar2);
  *(float *)(puVar2 + 1) = fVar6 + *(float *)(puVar2 + 1);
  if ((unaff_w21 & 6) != 0) {
    puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x140) + unaff_x20 * 0xc);
    *puVar2 = CONCAT44(fVar16,fVar13);
    *(float *)(puVar2 + 1) = unaff_s9 + fVar6;
  }
  if (((unaff_w21 & 0x7000) != 0) &&
     (uVar1 = *(uint *)(*(long *)(unaff_x19 + 0x40) + unaff_x20 * 4), uVar3 = (ulong)uVar1,
     -1 < (int)uVar1)) {
    pfVar5 = (float *)(*(long *)(unaff_x19 + 0x80) + uVar3 * 0xc);
    pfVar4 = (float *)(*(long *)(unaff_x19 + 0x90) + uVar3 * 0x10);
    fVar13 = *pfVar5;
    fVar16 = pfVar5[1];
    fVar18 = pfVar5[2];
    fVar8 = *pfVar4;
    fVar7 = pfVar4[1];
    fVar14 = pfVar4[2];
    fVar6 = pfVar4[3];
    if ((unaff_w21 >> 0xf & 1) != 0) {
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0xa0) + uVar3 * 0xc);
      pfVar5 = (float *)(*(long *)(unaff_x19 + 0x50) + unaff_x20 * 0xc);
      fVar10 = *pfVar4 * *pfVar5;
      fVar9 = pfVar4[1] * pfVar5[1];
      fVar11 = pfVar4[2] * pfVar5[2];
      fVar12 = fVar8 * fVar9 - fVar7 * fVar10;
      fVar15 = fVar7 * fVar11 - fVar14 * fVar9;
      fVar17 = fVar14 * fVar10 - fVar8 * fVar11;
      fVar15 = fVar15 + fVar15;
      fVar17 = fVar17 + fVar17;
      fVar12 = fVar12 + fVar12;
      fVar13 = fVar13 + fVar10 + fVar6 * fVar15 + (fVar7 * fVar12 - fVar14 * fVar17);
      fVar16 = fVar16 + fVar9 + fVar6 * fVar17 + (fVar14 * fVar15 - fVar8 * fVar12);
      fVar18 = fVar18 + fVar11 + fVar6 * fVar12 + (fVar8 * fVar17 - fVar7 * fVar15);
    }
    if ((unaff_w21 >> 0xe & 1) != 0) {
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0x100) + unaff_x20 * 0xc);
      *pfVar4 = fVar13;
      pfVar4[1] = fVar16;
      pfVar4[2] = fVar18;
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0x110) + unaff_x20 * 0x10);
      *pfVar4 = fVar8;
      pfVar4[1] = fVar7;
      pfVar4[2] = fVar14;
      pfVar4[3] = fVar6;
    }
    if ((unaff_w21 >> 0xc & 1) != 0) {
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0xb0) + unaff_x20 * 0xc);
      *pfVar4 = fVar13;
      pfVar4[1] = fVar16;
      pfVar4[2] = fVar18;
    }
    if ((unaff_w21 >> 0xd & 1) != 0) {
      pfVar4 = (float *)(*(long *)(unaff_x19 + 0xf0) + unaff_x20 * 0x10);
      *pfVar4 = fVar8;
      pfVar4[1] = fVar7;
      pfVar4[2] = fVar14;
      pfVar4[3] = fVar6;
    }
  }
  return;
}


