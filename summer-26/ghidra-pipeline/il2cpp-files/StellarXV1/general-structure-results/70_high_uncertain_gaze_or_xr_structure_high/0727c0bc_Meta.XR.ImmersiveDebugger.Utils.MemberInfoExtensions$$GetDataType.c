/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$GetDataType
ENTRY_POINT: 0727c0bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__GetDataType(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  uVar1 = FUN_06e2323c();
  FUN_07dfb290(*unaff_x21,0);
  FUN_07df8920();
  FUN_0727c1a8();
  lVar2 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_076bca34(lVar2,0);
  Meta_XR_ImmersiveDebugger_DebugInspectorManager_WatchManagerFromInspector__get_TelemetryAnnotation
            (lVar2,uVar1);
  memcpy((void *)(lVar2 + 0x18),&stack0x00000000,0x60);
  return lVar2;
}


