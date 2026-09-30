/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 0601cbec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__SuggestBodyTrackingCalibrationOverride(void)

{
  uint in_w8;
  float *pfVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  float unaff_s10;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  float in_stack_00000078;
  float fStack000000000000007c;
  
  fVar6 = in_stack_00000018;
  fVar4 = fStack0000000000000014;
  fVar5 = fStack0000000000000010;
  if (in_w8 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    fStack000000000000000c = unaff_s10;
    in_stack_00000078 = unaff_s9;
    fStack000000000000007c = unaff_s8;
    FUN_06034378(&stack0x00000010,*(long *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x19 + 0x24),0);
    fVar9 = in_stack_00000018;
    fVar11 = fStack0000000000000010;
    if (DAT_07a3ca81 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3ca81 = '\x01';
    }
    fVar11 = fVar11 - fVar5;
    fVar10 = fStack0000000000000014 - fVar4;
    fVar9 = fVar9 - fVar6;
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar2 = SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10);
    if (fVar2 <= DAT_014ba9b8) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar2 = pfVar1[2];
    }
    else {
      fVar7 = fVar11 / fVar2;
      fVar8 = fVar10 / fVar2;
      fVar2 = fVar9 / fVar2;
    }
    if (DAT_07a4437f == '\0') {
      FUN_031f20f4(PTR_DAT_075b9420);
      DAT_07a4437f = '\x01';
    }
    fVar3 = fVar2 * fVar2 + fVar7 * fVar7 + fVar8 * fVar8;
    if (**(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) <= fVar3) {
      fVar5 = (fStack000000000000007c - fVar6) * fVar2 +
              (fStack000000000000000c - fVar5) * fVar7 + (in_stack_00000078 - fVar4) * fVar8;
      fVar4 = (fVar7 * fVar5) / fVar3;
      fVar6 = (fVar8 * fVar5) / fVar3;
      fVar3 = (fVar2 * fVar5) / fVar3;
    }
    else {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar4 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar3 = pfVar1[2];
    }
    return 0.0 < fVar9 * fVar3 + fVar11 * fVar4 + fVar10 * fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


