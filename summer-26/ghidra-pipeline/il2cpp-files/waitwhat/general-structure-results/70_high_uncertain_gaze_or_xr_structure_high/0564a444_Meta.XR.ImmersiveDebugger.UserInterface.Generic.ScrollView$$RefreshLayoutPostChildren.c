/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 0564a444
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  long *unaff_x19;
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(param_2 + 0x40)) {
    thunk_FUN_031c3ef0();
    uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058();
}


