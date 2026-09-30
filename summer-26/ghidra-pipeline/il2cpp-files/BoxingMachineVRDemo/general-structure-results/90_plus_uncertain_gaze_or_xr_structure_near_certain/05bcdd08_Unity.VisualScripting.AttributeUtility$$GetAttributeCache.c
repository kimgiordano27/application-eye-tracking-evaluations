/*
FUNCTION_NAME: Unity.VisualScripting.AttributeUtility$$GetAttributeCache
ENTRY_POINT: 05bcdd08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_VisualScripting_AttributeUtility__GetAttributeCache(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = thunk_FUN_02dc61f4(
                            Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_Remove__
                            );
  FUN_050096cc(param_1,uVar1,0);
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  FUN_05bcce08(*unaff_x20,param_1);
  uVar1 = thunk_FUN_02dc61f4(
                            Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(param_1,uVar1);
}


