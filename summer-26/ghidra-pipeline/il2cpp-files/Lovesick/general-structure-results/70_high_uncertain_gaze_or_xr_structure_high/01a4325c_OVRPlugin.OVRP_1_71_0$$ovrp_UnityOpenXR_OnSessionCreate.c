/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 01a4325c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar1 = *unaff_x19;
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_01a45574();
    uVar3 = FUN_01a631e8();
    FUN_01a455dc(uVar2);
  }
  return uVar3;
}


