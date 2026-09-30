/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 0601c4d4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__get_faceTracking2Enabled(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  float fVar4;
  undefined4 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  int unaff_w19;
  long unaff_x20;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  
  FUN_06034378();
  fVar15 = fStack0000000000000018;
  fVar11 = fStack0000000000000014;
  puVar3 = PTR_DAT_075f2ee0;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
                    /* try { // try from 0601c4e8 to 0611c4ef has its CatchHandler @ 0601c5c0 */
    fStack000000000000000c = fStack0000000000000010;
                    /* try { // try from 0601c4fc to 0611c4ff has its CatchHandler @ 0601c5bc */
    FUN_06034378(&stack0x00000010,*(long *)(unaff_x20 + 0x40),8,0);
    uVar5 = in_stack_00000028;
    fVar12 = fStack0000000000000020;
    fVar4 = fStack0000000000000018;
    fVar16 = fStack0000000000000010;
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar3;
    }
    lVar8 = *(long *)(lVar7 + 0xb8);
    bVar6 = unaff_w19 != 0;
                    /* try { // try from 0601c538 to 0611c563 has its CatchHandler @ 0601c5c4 */
    lVar7 = 0x74;
    if (bVar6) {
      lVar7 = 0x2c;
    }
    lVar1 = 0x70;
    if (bVar6) {
      lVar1 = 0x28;
    }
    lVar2 = 0x6c;
    if (bVar6) {
      lVar2 = 0x24;
    }
    fVar14 = fStack0000000000000024;
                    /* try { // try from 0601c564 to 0611c56f has its CatchHandler @ 0601c5b8 */
                    /* try { // try from 0601c574 to 0611c57f has its CatchHandler @ 0601c5b4 */
    fVar10 = (float)FUN_06e464bc(uStack000000000000001c,fVar12,fStack0000000000000024,uVar5,
                                 *(undefined4 *)(lVar8 + lVar2),*(undefined4 *)(lVar8 + lVar1),
                                 *(undefined4 *)(lVar8 + lVar7),0);
                    /* try { // try from 0601c580 to 0611c5db has its CatchHandler @ 0601c298 */
    if (DAT_07a3ca81 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3ca81 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar13 = SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar12 * fVar12);
    if (fVar13 <= DAT_014ba9b8) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar9 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar10 = *pfVar9;
      fVar12 = pfVar9[1];
      fVar14 = pfVar9[2];
    }
    else {
      fVar10 = fVar10 / fVar13;
      fVar12 = fVar12 / fVar13;
      fVar14 = fVar14 / fVar13;
    }
    fVar16 = fVar4 * fVar14 + fVar16 * fVar10 + fStack0000000000000014 * fVar12;
    fVar11 = fVar15 * fVar14 + fStack000000000000000c * fVar10 + fVar11 * fVar12;
    fVar15 = fVar11 - fVar16;
    return (0.0 < fVar15 || fVar15 < 0.0) && ABS(fVar11 - fVar16) < DAT_014baab8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


