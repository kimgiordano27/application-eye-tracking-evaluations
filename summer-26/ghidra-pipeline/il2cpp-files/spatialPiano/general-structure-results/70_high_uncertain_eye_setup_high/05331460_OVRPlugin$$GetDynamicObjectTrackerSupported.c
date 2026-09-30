/*
FUNCTION_NAME: OVRPlugin$$GetDynamicObjectTrackerSupported
ENTRY_POINT: 05331460
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetDynamicObjectTrackerSupported(void)

{
  float *pfVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float in_s3;
  float in_s4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s15;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fVar5 = in_s4 * in_s4 + fStack000000000000008c * fStack000000000000008c + in_s3 * in_s3;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar5) {
    fVar4 = in_s4 * ((fStack0000000000000088 + unaff_s11) - unaff_s15) +
            fStack000000000000008c * ((fStack0000000000000038 + unaff_s8) - fStack0000000000000020)
            + in_s3 * ((fStack000000000000003c + unaff_s9) - in_stack_00000018._4_4_);
    fVar3 = (fStack000000000000008c * fVar4) / fVar5;
    fVar2 = (in_s3 * fVar4) / fVar5;
    fVar4 = (in_s4 * fVar4) / fVar5;
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar1;
    fVar2 = pfVar1[1];
    fVar4 = pfVar1[2];
    in_s3 = in_stack_00000028;
    in_s4 = fStack0000000000000024;
  }
  if (0.0 <= in_s4 * fVar4 + fStack000000000000008c * fVar3 + in_s3 * fVar2) {
    if (fVar5 < fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) {
      fVar2 = in_stack_00000028;
      fVar3 = fStack000000000000008c;
      fVar4 = fStack0000000000000024;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      *(undefined1 *)(unaff_x21 + 0x2c1) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = pfVar1[1];
    fVar3 = *pfVar1;
    fVar4 = pfVar1[2];
  }
  if (DAT_06bb42c8 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42c8 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar3 = (fStack0000000000000038 + unaff_s8) - (fStack0000000000000020 + fVar3);
  fVar4 = (fStack0000000000000088 + unaff_s11) - (unaff_s15 + fVar4);
  fVar5 = (fStack000000000000003c + unaff_s9) - (in_stack_00000018._4_4_ + fVar2);
  return SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
}


