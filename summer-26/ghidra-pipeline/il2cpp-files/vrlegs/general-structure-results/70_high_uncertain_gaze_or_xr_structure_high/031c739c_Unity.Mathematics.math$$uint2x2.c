/*
FUNCTION_NAME: Unity.Mathematics.math$$uint2x2
ENTRY_POINT: 031c739c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Mathematics_math__uint2x2(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01a6ca08(*(undefined8 *)(param_1 + 0xd28));
  uVar1 = thunk_FUN_01a89e68();
  uVar2 = thunk_FUN_01a6ca08(
                            OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo
                            );
  FUN_0276a4a8(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01a6ca08(
                            _Common_ScriptableObjects_Scripts_OneSessionPlayerPrefsData<bool>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar1,uVar2);
}


