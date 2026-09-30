/*
FUNCTION_NAME: OVRManager$$LoadMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 0336aea0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__LoadMixedRealityCaptureConfigurationFileFromCmd(long *param_1,char *param_2)

{
  if ((DAT_04533561 & 1) == 0) {
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ResourceManager_DeferredCallbackRegisterRequest>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_HashSet_Enumerator<ResourceManager_InstanceOperation>_Dispose__
                );
    DAT_04533561 = 1;
  }
  if (*param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0336aefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3c8))
              (param_1,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 0xc),
               *(undefined8 *)(*param_1 + 0x3d0));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0336af18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
  return;
}


