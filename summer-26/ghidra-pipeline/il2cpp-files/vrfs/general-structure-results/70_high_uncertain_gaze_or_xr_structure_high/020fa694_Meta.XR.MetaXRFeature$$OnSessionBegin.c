/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 020fa694
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_MetaXRFeature__OnSessionBegin
          (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
          undefined1 param_5 [16],undefined1 param_6 [16])

{
  undefined1 in_w8;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float unaff_s8;
  float fVar5;
  float fVar6;
  float unaff_s13;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  uVar4 = param_6._8_8_;
  uVar3 = param_6._4_4_;
  fVar2 = param_6._0_4_;
  *(undefined1 *)(unaff_x20 + 0xd89) = in_w8;
  fVar5 = fVar2 - fStack0000000000000058;
  fVar6 = (param_3 - fStack000000000000005c) * (param_3 - fStack000000000000005c) +
          fVar5 * fVar5 + (param_2 - unaff_s13) * (param_2 - unaff_s13);
  if ((fVar6 != 0.0) && ((unaff_s8 < 0.0 || (unaff_s8 * unaff_s8 < fVar6)))) {
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    fVar2 = fStack0000000000000058 + (fVar5 / SQRT(fVar6)) * unaff_s8;
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar1._4_4_ = uVar3;
  auVar1._0_4_ = fVar2;
  auVar1._8_8_ = uVar4;
  return auVar1;
}


