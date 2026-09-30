/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 02caf254
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin__SetSimultaneousHandsAndControllersEnabled(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000028;
  
  uVar1 = il2cpp_codegen_object_new((Il2CppClass *)*param_1);
  Request__ctor_m1E18C977DA3EFD314F430CAB4B36134F3A6D712A(uVar1,in_stack_00000028,in_stack_00000008)
  ;
  *(undefined8 *)(unaff_x29 + -8) = uVar1;
  return *(undefined8 *)(unaff_x29 + -8);
}


