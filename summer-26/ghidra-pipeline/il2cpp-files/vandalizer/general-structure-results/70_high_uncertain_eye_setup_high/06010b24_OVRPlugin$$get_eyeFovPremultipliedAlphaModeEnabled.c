/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 06010b24
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


float OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled(void)

{
  int in_w8;
  float *pfVar1;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined4 uStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x20 + 0x545) = 1;
  }
  if (**(float **)(*unaff_x25 + 0xb8) <= unaff_s8) {
    fVar2 = unaff_s9 * unaff_s15 +
            fStack0000000000000014 * unaff_s12 + fStack0000000000000018 * unaff_s13;
    unaff_s12 = unaff_s12 - (fStack0000000000000014 * fVar2) / unaff_s8;
    unaff_s13 = unaff_s13 - (fStack0000000000000018 * fVar2) / unaff_s8;
    unaff_s15 = unaff_s15 - (unaff_s9 * fVar2) / unaff_s8;
  }
  if (*(char *)(unaff_x21 + 0xa81) == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    *(undefined1 *)(unaff_x21 + 0xa81) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar2 = SQRT(unaff_s15 * unaff_s15 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13);
  if (fVar2 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x23 + 0xa82) = 1;
    }
    pfVar1 = *(float **)(*unaff_x22 + 0xb8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  else {
    fVar3 = unaff_s12 / fVar2;
    fVar4 = unaff_s13 / fVar2;
    fVar2 = unaff_s15 / fVar2;
  }
  fVar2 = (float)FUN_06e45b4c(uStack0000000000000008,fStack0000000000000004,fStack0000000000000000,
                              fVar3,fVar4,fVar2,0);
  return (fStack0000000000000010 * fStack0000000000000004 + unaff_s11 * fVar3 + unaff_s10 * fVar2) -
         fStack000000000000000c * fStack0000000000000000;
}


