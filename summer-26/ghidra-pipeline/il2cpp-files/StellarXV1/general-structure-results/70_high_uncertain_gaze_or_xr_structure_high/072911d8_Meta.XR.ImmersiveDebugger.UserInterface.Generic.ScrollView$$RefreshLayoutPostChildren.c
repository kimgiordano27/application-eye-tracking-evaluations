/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 072911d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_040dedf8(PTR_DAT_09287028);
  uVar1 = thunk_FUN_040b4efc();
  FUN_075d4b88(uVar1,param_1,0);
  uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c2020);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar1,uVar2);
}


