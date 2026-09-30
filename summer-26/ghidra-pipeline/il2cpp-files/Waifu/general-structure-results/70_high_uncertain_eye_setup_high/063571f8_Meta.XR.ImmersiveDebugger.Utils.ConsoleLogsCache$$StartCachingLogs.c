/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache$$StartCachingLogs
ENTRY_POINT: 063571f8
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache__StartCachingLogs(void)

{
  int iVar1;
  undefined1 in_ZR;
  uint in_w8;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 unaff_d8;
  float fVar16;
  undefined8 unaff_d10;
  float fVar17;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float in_stack_00000010;
  undefined8 in_stack_00000018;
  float in_stack_00000020;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  while( true ) {
    fVar5 = (float)unaff_d10;
    fVar17 = (float)((ulong)unaff_d10 >> 0x20);
    if (!(bool)in_ZR) {
      iVar1 = (in_w8 >> 0x10) + unaff_w21;
                    /* try { // try from 0635720c to 06457237 has its CatchHandler @ 06357548 */
      puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x78) + (long)iVar1 * (long)unaff_w24);
      uVar8 = *puVar2;
      fVar10 = (float)*(undefined8 *)(*(long *)(unaff_x19 + 0x68) + (long)iVar1 * (long)unaff_w24) -
               in_stack_00000010;
      fVar7 = (float)uVar8 - fVar5;
      fVar9 = (float)((ulong)uVar8 >> 0x20) - fVar17;
      uStack0000000000000040 = CONCAT44(fVar9,fVar7);
      fVar16 = *(float *)(puVar2 + 1) - unaff_s11;
      fVar12 = fVar9 * 0.5;
      uStack0000000000000048 = 0;
      fVar4 = fVar16;
                    /* try { // try from 06357260 to 06457263 has its CatchHandler @ 06357460 */
      fVar3 = (float)FUN_0638dfac(uStack0000000000000040,0);
      unaff_w23 = unaff_w23 + 1;
      fVar15 = (float)((ulong)uStack0000000000000040 >> 0x20);
                    /* try { // try from 0635727c to 0645727f has its CatchHandler @ 0635745c */
      fVar6 = (float)uStack0000000000000040;
      fVar11 = fVar16 * fVar9 - fVar4 * fVar15;
      fVar11 = fVar11 + fVar11;
                    /* try { // try from 0635729c to 064572b7 has its CatchHandler @ 06357478 */
      fVar13 = fVar6 * fVar4 - fVar16 * fVar3;
      fVar14 = fVar15 * fVar3 - fVar6 * fVar9;
      fVar13 = fVar13 + fVar13;
      fVar14 = fVar14 + fVar14;
                    /* try { // try from 063572bc to 064572c3 has its CatchHandler @ 06357468 */
                    /* try { // try from 063572cc to 064572d7 has its CatchHandler @ 0635748c */
      unaff_s13 = unaff_s13 +
                  in_stack_00000020 *
                  (((unaff_s11 + fVar16 * unaff_s12) -
                   (fVar16 + fVar10 * fVar14 + (fVar3 * fVar13 - fVar9 * fVar11)) * unaff_s12) -
                  unaff_s11);
      unaff_d8 = CONCAT44((float)((ulong)unaff_d8 >> 0x20) +
                          (float)((ulong)in_stack_00000018 >> 0x20) *
                          (((fVar17 + fVar12) -
                           (fVar15 + fVar13 * fVar10 + (fVar4 * fVar11 - fVar3 * fVar14)) * 0.5) -
                          fVar17),(float)unaff_d8 +
                                  (float)in_stack_00000018 *
                                  (((fVar5 + fVar7 * 0.5) -
                                   (fVar6 + fVar11 * fVar10 + (fVar9 * fVar14 - fVar4 * fVar13)) *
                                   0.5) - fVar5));
    }
    unaff_w22 = unaff_w22 + -1;
    unaff_w25 = unaff_w25 + 1;
    if (unaff_w22 == 0) break;
    in_w8 = *(uint *)(*(long *)(unaff_x19 + 8) + (long)unaff_w25 * 4);
    in_ZR = (in_w8 & 0xffff) == 0 && in_w8 >> 0x10 == 0;
  }
  if (0 < unaff_w23) {
    fVar4 = (float)unaff_w23;
    fVar6 = (float)unaff_d8 / fVar4;
    fVar3 = (float)((ulong)unaff_d8 >> 0x20) / fVar4;
    puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x98) + unaff_x20 * 0xc);
    *puVar2 = CONCAT44(fVar17 + fVar3,fVar5 + fVar6);
    *(float *)(puVar2 + 1) = unaff_s11 + unaff_s13 / fVar4;
    puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + unaff_x20 * 0xc);
                    /* try { // try from 0635737c to 064573a3 has its CatchHandler @ 06357550 */
    fVar5 = (unaff_s13 / fVar4) * DAT_012eda94;
    *puVar2 = CONCAT44(fVar3 * 0.9 + (float)((ulong)*puVar2 >> 0x20),fVar6 * 0.9 + (float)*puVar2);
    *(float *)(puVar2 + 1) = fVar5 + *(float *)(puVar2 + 1);
  }
                    /* try { // try from 063573a4 to 0645743b has its CatchHandler @ 06357014 */
  return;
}


