/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 060a0b58
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float Meta_XR_MetaXRFeature__OnSessionStateChange(float param_1)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  float fVar6;
  float unaff_s15;
  float fVar7;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fVar3 = unaff_s14 * unaff_s14;
  fVar2 = fVar3 + unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  if (param_1 <= fVar2) {
    fVar6 = unaff_s14 * unaff_s9 + unaff_s11 * fStack000000000000005c + unaff_s15 * unaff_s10;
    fVar3 = (unaff_s11 * fVar6) / fVar2;
    fStack000000000000005c = fStack000000000000005c - fVar3;
    unaff_s10 = unaff_s10 - (unaff_s15 * fVar6) / fVar2;
    unaff_s9 = unaff_s9 - (unaff_s14 * fVar6) / fVar2;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s9;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * fStack000000000000005c + fStack0000000000000008 * unaff_s10 <= 0.0)
  {
    if (DAT_07ed76b5 == '\0') {
      FUN_03642964(PTR_DAT_079f4dc0);
      DAT_07ed76b5 = '\x01';
    }
    fStack000000000000005c = **(float **)(*unaff_x22 + 0xb8);
  }
  if (*(char *)(unaff_x23 + 0x6b6) == '\0') {
    FUN_03642964(PTR_DAT_079f4dc0);
    *(undefined1 *)(unaff_x23 + 0x6b6) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar6 = *(float *)(lVar1 + 0x18);
  fVar7 = *(float *)(lVar1 + 0x1c);
  fVar5 = *(float *)(lVar1 + 0x20);
  fVar2 = (float)FUN_07250fcc();
  if (*(char *)(unaff_x21 + 0xc9c) == '\0') {
    FUN_03642964(PTR_DAT_079f4df8);
    *(undefined1 *)(unaff_x21 + 0xc9c) = 1;
  }
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fStack000000000000000c * fStack000000000000000c;
  fVar6 = fStack0000000000000058 * fVar6;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar4) {
    fVar6 = fVar6 - (fVar2 * (fStack0000000000000058 * fVar5 * fVar3 +
                             fVar6 * fVar2 + fStack0000000000000058 * fVar7 * fStack000000000000000c
                             )) / fVar4;
  }
  return fStack000000000000005c + fVar6;
}


