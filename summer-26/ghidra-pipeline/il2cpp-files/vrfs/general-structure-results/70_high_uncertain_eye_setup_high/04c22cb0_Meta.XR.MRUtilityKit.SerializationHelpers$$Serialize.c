/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Serialize
ENTRY_POINT: 04c22cb0
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers__Serialize(undefined8 param_1)

{
  undefined8 *unaff_x19;
  code *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_015c2790(param_1);
  (*unaff_x24)(&stack0x00000008);
  unaff_x19[2] = in_stack_00000018;
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  return;
}


