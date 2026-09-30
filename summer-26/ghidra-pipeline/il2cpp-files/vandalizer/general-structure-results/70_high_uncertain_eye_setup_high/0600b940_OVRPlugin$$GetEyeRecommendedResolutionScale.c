/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 0600b940
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetEyeRecommendedResolutionScale(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  float *pfVar3;
  ulong *unaff_x19;
  float *unaff_x22;
  long unaff_x23;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar18;
  float fVar19;
  float unaff_s9;
  float unaff_s12;
  float fVar20;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 in_stack_000000a8;
  
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_0759b378);
    *(undefined1 *)(unaff_x23 + 0xaf2) = 1;
  }
  puVar1 = PTR_DAT_0759b378;
  fVar4 = (float)FUN_06e464bc(0);
  fVar7 = unaff_s9;
  fVar9 = unaff_s12;
  lVar2 = FUN_06e5502c();
  if (lVar2 != 0) {
    fVar5 = (float)FUN_06e6a5c4(lVar2,0);
    if (DAT_07a3ca81 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3ca81 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    fVar6 = SQRT(unaff_s12 * unaff_s12 + fVar4 * fVar4 + unaff_s9 * unaff_s9);
    if (fVar6 <= DAT_014ba9b8) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar4 = *pfVar3;
      unaff_s9 = pfVar3[1];
      unaff_s12 = pfVar3[2];
    }
    else {
      fVar4 = fVar4 / fVar6;
      unaff_s9 = unaff_s9 / fVar6;
      unaff_s12 = unaff_s12 / fVar6;
    }
    puVar1 = PTR_DAT_075d64f0;
    fVar6 = *unaff_x22;
    fVar8 = unaff_x22[1];
    fVar10 = unaff_x22[2];
    fVar11 = unaff_x22[3];
    fVar12 = unaff_x22[4];
    fVar13 = unaff_x22[5];
    fVar14 = fVar4 * fVar6;
    fVar16 = unaff_s9 * fVar8;
    fVar20 = unaff_s12 * fVar10;
    fVar19 = unaff_s12 * fVar13 + fVar4 * fVar11 + unaff_s9 * fVar12;
    if (DAT_07a3fba2 == '\0') {
      FUN_031f20f4(PTR_DAT_075b9420);
      DAT_07a3fba2 = '\x01';
      fVar6 = *unaff_x22;
      fVar8 = unaff_x22[1];
      fVar10 = unaff_x22[2];
      fVar11 = unaff_x22[3];
      fVar12 = unaff_x22[4];
      fVar13 = unaff_x22[5];
    }
    fVar17 = ABS(fVar19);
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fVar18 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8) * 8.0;
    fVar15 = fVar17 * DAT_014bab34;
    if (fVar17 * DAT_014bab34 <= fVar18) {
      fVar15 = fVar18;
    }
    fVar17 = 0.0;
    if (fVar15 <= ABS(0.0 - fVar19)) {
      fVar17 = ((fVar9 * unaff_s12 + fVar5 * fVar4 + fVar7 * unaff_s9) - (fVar20 + fVar14 + fVar16))
               / fVar19;
    }
    FUN_0600bde8(fVar6 + fVar11 * fVar17,fVar8 + fVar12 * fVar17,fVar10 + fVar17 * fVar13);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06e67e1c(0,0,0,&stack0x00000040,0);
    FUN_0600bc38();
    unaff_x19[1] = in_stack_00000008;
    *unaff_x19 = in_stack_00000000 & 0xffffffff00000000;
    *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


