/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 05d4d80c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFoveationFeature__OnSessionCreate(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  FUN_06bf3164();
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x34) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x2c) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  uVar1 = thunk_FUN_032a56a0(*unaff_x20);
  FUN_05d52a44();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x18),uVar1);
  return;
}


