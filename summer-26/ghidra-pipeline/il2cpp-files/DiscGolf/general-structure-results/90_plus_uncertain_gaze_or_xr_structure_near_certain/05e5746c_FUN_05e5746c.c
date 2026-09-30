/*
FUNCTION_NAME: FUN_05e5746c
ENTRY_POINT: 05e5746c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


undefined1 FUN_05e5746c(undefined1 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_24;
  
  if ((DAT_06dc3ae3 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d058);
    DAT_06dc3ae3 = 1;
  }
  if (param_2 == 1) {
    if (*(int *)(*(long *)PTR_DAT_06a0d058 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    param_1 = param_1 + 1;
  }
  else {
    if (param_2 != 0) {
      local_24 = param_2;
      uVar1 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>__ctor__
                                );
      uVar1 = thunk_FUN_02dd2d7c(uVar1,&local_24);
      uVar2 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_List<OVRPermissionsRequester_Permission>_Add__
                                );
      uVar1 = FUN_0536388c(uVar2,uVar1,0);
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar2 = thunk_FUN_02dd3144();
      FUN_05452924(uVar2,uVar1,0);
      uVar1 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar2,uVar1);
    }
    if (*(int *)(*(long *)PTR_DAT_06a0d058 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
  }
  return *param_1;
}


