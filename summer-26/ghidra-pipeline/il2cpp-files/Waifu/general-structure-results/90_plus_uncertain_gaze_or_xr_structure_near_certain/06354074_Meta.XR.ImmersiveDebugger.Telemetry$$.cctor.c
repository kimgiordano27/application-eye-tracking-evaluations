/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 06354074
PROGRAM: Waifu-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry___cctor(void)

{
  short *psVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int in_w8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar10;
  int unaff_w24;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 unaff_d10;
  float fVar18;
  float unaff_s11;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 uStack0000000000000018;
  float in_stack_00000038;
  
  iVar10 = 0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar19 = 0.0;
  do {
    iVar3 = in_w8 + unaff_w24 + iVar10;
    psVar1 = (short *)(*(long *)(unaff_x19 + 8) + (long)iVar3 * 0x10);
    uVar5 = psVar1[1];
    fVar17 = (float)unaff_d10;
    fVar18 = (float)((ulong)unaff_d10 >> 0x20);
    if (uVar5 != 0 || *psVar1 != 0) {
      lVar4 = *(long *)(unaff_x19 + 8) + (long)iVar3 * 0x10;
      iVar3 = unaff_w22 + (uint)uVar5;
      fVar12 = fStack000000000000000c * *(float *)(lVar4 + 4);
      pfVar2 = (float *)(*(long *)(unaff_x19 + 0x78) + (long)iVar3 * 0x10);
      fVar13 = pfVar2[1];
      fVar11 = fStack0000000000000008 * *(float *)(lVar4 + 8);
      fVar14 = pfVar2[2];
      puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0x88) + (long)iVar3 * 0xc);
      uVar21 = *puVar9;
      fVar27 = in_stack_00000000._4_4_ * *(float *)(lVar4 + 0xc);
      fVar23 = *(float *)(puVar9 + 1);
      fVar15 = fVar11 * *pfVar2 - fVar12 * fVar13;
      fVar11 = fVar27 * fVar13 - fVar11 * fVar14;
                    /* try { // try from 06354118 to 0645411b has its CatchHandler @ 063542f8 */
      fVar26 = fVar12 * fVar14 - fVar27 * *pfVar2;
      fVar20 = (float)uVar21;
      fStack0000000000000010 = fVar17 - fVar20;
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      fVar27 = fVar18 - fVar22;
      fVar16 = unaff_s11 - fVar23;
                    /* try { // try from 0635416c to 06454177 has its CatchHandler @ 063542f0 */
      fVar13 = fVar12 + pfVar2[3] * (fVar11 + fVar11) +
               (fVar13 * (fVar15 + fVar15) - fVar14 * (fVar26 + fVar26));
      uStack0000000000000018 = 0;
      fStack0000000000000014 = fVar27;
      fVar11 = fVar16;
      fVar12 = (float)FUN_0638dfac(0);
      fVar15 = fVar16 * fVar27 - fVar11 * fStack0000000000000014;
      fVar26 = fVar11 * fStack0000000000000010 - fVar16 * fVar12;
      fVar14 = fVar12 * fStack0000000000000014 - fVar27 * fStack0000000000000010;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar26 = fVar26 + fVar26;
                    /* try { // try from 063541d8 to 064541f3 has its CatchHandler @ 063542ec */
                    /* try { // try from 06354214 to 0645421f has its CatchHandler @ 063542f4 */
      fVar24 = fVar24 + ((fVar20 + fStack0000000000000010 + fVar15 * fVar13 +
                                   (fVar27 * fVar14 - fVar11 * fVar26)) - fVar17);
      fVar25 = fVar25 + ((fVar22 + fStack0000000000000014 + fVar26 * fVar13 +
                                   (fVar11 * fVar15 - fVar12 * fVar14)) - fVar18);
      fVar19 = fVar19 + ((fVar23 + fVar16 + fVar13 * fVar14 + (fVar12 * fVar26 - fVar27 * fVar15)) -
                        unaff_s11);
    }
    iVar10 = iVar10 + 1;
  } while (unaff_w21 != iVar10);
  fVar11 = *(float *)(*(long *)(unaff_x19 + 0x98) + unaff_x20 * 4) * -0.5 + 1.0;
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if ((uint)ABS(fVar11) < 0x7f800001) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar11)) {
      bVar6 = fVar11 < 1.0;
      bVar7 = fVar11 == 1.0;
      bVar8 = false;
    }
  }
  fVar12 = 1.0;
  if (bVar7 || bVar6 != bVar8) {
    fVar12 = fVar11;
  }
  bVar6 = true;
  if (((uint)ABS(fVar12) < 0x7f800001) && (bVar6 = false, !NAN(fVar12))) {
    bVar6 = fVar12 < 0.0;
  }
  fVar11 = 0.0;
  if (!bVar6) {
    fVar11 = fVar12;
  }
  fVar12 = (float)unaff_w21;
                    /* try { // try from 06354288 to 0645429b has its CatchHandler @ 063542e8 */
  puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0xa8) + unaff_x20 * 0xc);
                    /* try { // try from 0635429c to 064542e3 has its CatchHandler @ 0635403c */
  fVar24 = fVar17 + (fVar24 * fVar11) / fVar12;
  fVar25 = fVar18 + (fVar25 * fVar11) / fVar12;
  fVar19 = unaff_s11 + (fVar19 * fVar11) / fVar12;
  *puVar9 = CONCAT44(fVar25,fVar24);
  *(float *)(puVar9 + 1) = fVar19;
  puVar9 = (undefined8 *)(*(long *)(unaff_x19 + 0xb8) + unaff_x20 * 0xc);
  in_stack_00000038 = 1.0 - in_stack_00000038;
  *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) + (fVar25 - fVar18) * in_stack_00000038,
                     (float)*puVar9 + (fVar24 - fVar17) * in_stack_00000038);
  *(float *)(puVar9 + 1) = *(float *)(puVar9 + 1) + in_stack_00000038 * (fVar19 - unaff_s11);
                    /* try { // try from 063542e4 to 064542e7 has its CatchHandler @ 063542f8 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06354288 with catch @ 063542e8
                       try { // try from 063542e8 to 0645430f has its CatchHandler @ 0635403c */
  return;
}


