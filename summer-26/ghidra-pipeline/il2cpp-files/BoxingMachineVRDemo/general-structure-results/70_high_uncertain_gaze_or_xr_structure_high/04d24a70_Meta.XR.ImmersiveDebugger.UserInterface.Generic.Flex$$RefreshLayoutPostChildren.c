/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 04d24a70
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren(long param_1)

{
  uint uVar1;
  uint in_w9;
  code *pcVar2;
  
  pcVar2 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x1f8);
  if ((in_w9 & 1) == 0) {
    FUN_02d9a2e0(param_1);
  }
  uVar1 = (*pcVar2)();
  return ~uVar1 & 1;
}


