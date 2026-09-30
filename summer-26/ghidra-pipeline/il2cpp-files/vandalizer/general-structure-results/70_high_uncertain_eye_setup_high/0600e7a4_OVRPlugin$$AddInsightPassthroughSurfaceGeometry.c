/*
FUNCTION_NAME: OVRPlugin$$AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 0600e7a4
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


/* WARNING: Removing unreachable block (ram,0x0600ea34) */

float OVRPlugin__AddInsightPassthroughSurfaceGeometry(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (!in_ZR && in_NG == in_OV) {
    if (*(char *)(unaff_x24 + 0xa81) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      *(undefined1 *)(unaff_x24 + 0xa81) = 1;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (unaff_s11 <= DAT_014ba9b8) {
      if (DAT_07a3ca82 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b378);
        DAT_07a3ca82 = '\x01';
      }
      pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
      fVar2 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
    }
    else {
      fVar2 = unaff_s13 / unaff_s11;
      fVar5 = unaff_s14 / unaff_s11;
      fVar6 = unaff_s15 / unaff_s11;
    }
    unaff_s13 = unaff_s12 * fVar2;
    unaff_s14 = unaff_s12 * fVar5;
    unaff_s15 = unaff_s12 * fVar6;
  }
  if (unaff_s10 * unaff_s15 + fStack000000000000002c * unaff_s13 + unaff_s9 * unaff_s14 < 0.0) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    unaff_s13 = *pfVar1;
    unaff_s14 = pfVar1[1];
    unaff_s15 = pfVar1[2];
  }
  if (DAT_07a44545 == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a44545 = '\x01';
  }
  fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000010._4_4_ + unaff_s13);
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000028 + unaff_s14);
  fStack0000000000000020 = fStack0000000000000020 - (fStack0000000000000024 + unaff_s15);
  if (**(float **)(*unaff_x21 + 0xb8) <= unaff_s8) {
    fVar2 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar2) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar2) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar2) / unaff_s8;
  }
  if (*(char *)(unaff_x24 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    *(undefined1 *)(unaff_x24 + 0xa81) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar2 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar2 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    fStack0000000000000018 = **(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar2;
  }
  uVar3 = FUN_0600d840();
  fVar2 = (float)FUN_05f58000(uVar3,0);
  fVar2 = fVar2 - (float)(int)(fVar2 / 360.0) * 360.0;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  fVar5 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar4 = (ulong)(uint)fStack0000000000000018;
  if ((fVar5 < fVar2) && (uVar4 = uVar3, ABS(fVar2 - fVar5) < ABS(360.0 - fVar2))) {
    uVar4 = FUN_0600d8ec();
  }
  fVar2 = (float)FUN_0600db00();
  return in_stack_00000010._4_4_ + unaff_s13 + (float)uVar4 * fVar2;
}


