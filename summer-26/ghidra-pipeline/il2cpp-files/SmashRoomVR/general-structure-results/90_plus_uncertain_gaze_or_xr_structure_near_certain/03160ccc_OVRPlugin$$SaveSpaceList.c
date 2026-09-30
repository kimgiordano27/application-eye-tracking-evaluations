/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 03160ccc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SaveSpaceList
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  long unaff_x22;
  uint uStack000000000000000c;
  uint uStack0000000000000014;
  
  if (*(char *)(unaff_x22 + 0x256) == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    *(undefined1 *)(unaff_x22 + 0x256) = 1;
  }
  puVar1 = *(undefined4 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  FUN_03927140(param_1,param_2,param_3,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  *param_4 = param_5;
  param_4[8] = param_6;
  param_4[9] = 0;
  *(ulong *)(param_4 + 6) = (ulong)uStack0000000000000014;
  *(ulong *)(param_4 + 4) = (ulong)uStack000000000000000c;
  *(ulong *)(param_4 + 3) = (ulong)uStack000000000000000c << 0x20;
  *(undefined8 *)(param_4 + 1) = 0;
  return;
}


