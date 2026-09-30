/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 020fa5a8
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
Meta_XR_MetaXRFeature__OnSessionStateChange
          (undefined1 param_1 [16],float param_2,float param_3,undefined1 param_4 [16],
          undefined1 param_5 [16],undefined1 param_6 [16])

{
  bool bVar1;
  long unaff_x19;
  long *plVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float unaff_s8;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000080;
  float in_stack_00000088;
  
  uVar6 = param_6._8_8_;
  uVar5 = param_6._4_4_;
  plVar2 = *(long **)(unaff_x19 + 0x840);
  fVar9 = param_6._0_4_ - unaff_s8;
  fVar8 = param_2 - unaff_s15;
  fVar7 = param_3 - unaff_s14;
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    uVar5 = 0;
    uVar6 = 0;
    bVar1 = *(char *)(unaff_x20 + 0x395) == '\0';
    param_2 = fStack0000000000000008;
    param_3 = fStack000000000000000c;
    fVar4 = in_stack_00000000._4_4_;
  }
  else {
    bVar1 = false;
    fVar4 = param_6._0_4_;
  }
  if (bVar1) {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    uVar5 = 0;
    uVar6 = 0;
    *(undefined1 *)(unaff_x20 + 0x395) = 1;
    param_2 = fStack0000000000000008;
    param_3 = fStack000000000000000c;
    fVar4 = in_stack_00000000._4_4_;
  }
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    uVar5 = 0;
    uVar6 = 0;
    param_2 = fStack0000000000000008;
    param_3 = fStack000000000000000c;
    fVar4 = in_stack_00000000._4_4_;
  }
  if (SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8) <=
      SQRT((fStack000000000000005c - unaff_s14) * (fStack000000000000005c - unaff_s14) +
           (fStack0000000000000058 - unaff_s8) * (fStack0000000000000058 - unaff_s8) +
           (unaff_s13 - unaff_s15) * (unaff_s13 - unaff_s15))) {
    in_stack_00000080 = in_stack_00000088;
  }
  if (DAT_0722bd89 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e1a840);
    uVar5 = 0;
    uVar6 = 0;
    DAT_0722bd89 = '\x01';
    param_2 = fStack0000000000000008;
    param_3 = fStack000000000000000c;
    fVar4 = in_stack_00000000._4_4_;
  }
  fVar7 = fVar4 - fStack0000000000000058;
  fVar8 = (param_3 - fStack000000000000005c) * (param_3 - fStack000000000000005c) +
          fVar7 * fVar7 + (param_2 - unaff_s13) * (param_2 - unaff_s13);
  if ((fVar8 != 0.0) &&
     ((in_stack_00000080 < 0.0 || (in_stack_00000080 * in_stack_00000080 < fVar8)))) {
    if (*(int *)(*plVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    fVar4 = fStack0000000000000058 + (fVar7 / SQRT(fVar8)) * in_stack_00000080;
    uVar5 = 0;
    uVar6 = 0;
  }
  auVar3._4_4_ = uVar5;
  auVar3._0_4_ = fVar4;
  auVar3._8_8_ = uVar6;
  return auVar3;
}


