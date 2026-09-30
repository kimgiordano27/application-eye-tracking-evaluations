/*
FUNCTION_NAME: FUN_0317b5c4
ENTRY_POINT: 0317b5c4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0317b5c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__;
  puVar1 = Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__;
  if ((DAT_075602ba & 1) == 0) {
    FUN_03188a78(
                Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                );
    FUN_03188a78(Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__);
    DAT_075602ba = 1;
  }
  uVar3 = FUN_03188d04("Cannot marshal field \'%s\' of type \'%s\'.",*(undefined8 *)puVar1,
                       *(undefined8 *)puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar3,0);
}


