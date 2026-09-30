/*
FUNCTION_NAME: FUN_05a0b4e0
ENTRY_POINT: 05a0b4e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05a0b4e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = Method_System_Nullable<OVRPlugin_Result>_get_Value__;
  if ((DAT_06bc1fa2 & 1) == 0) {
    FUN_02f08768(Method_System_Nullable<XRManagementAnalytics_BuildEvent>__ctor__);
    FUN_02f08768(Method_System_Nullable<OVRPlugin_Result>_get_Value__);
    DAT_06bc1fa2 = 1;
  }
  puVar2 = Method_System_Nullable<XRManagementAnalytics_BuildEvent>__ctor__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* catch() { ... } // from try @ 05a0b580 with catch @ 05a0b558
                       catch() { ... } // from try @ 05a0b5b8 with catch @ 05a0b558
                       catch() { ... } // from try @ 05a0b5e0 with catch @ 05a0b558 */
  FUN_03d75878(param_1 + 8,param_2,*(undefined8 *)puVar2);
  return;
}


