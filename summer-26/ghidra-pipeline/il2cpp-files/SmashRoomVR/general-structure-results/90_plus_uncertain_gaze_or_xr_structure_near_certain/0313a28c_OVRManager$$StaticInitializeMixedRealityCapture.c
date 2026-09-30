/*
FUNCTION_NAME: OVRManager$$StaticInitializeMixedRealityCapture
ENTRY_POINT: 0313a28c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__StaticInitializeMixedRealityCapture(long param_1)

{
  ulong uVar1;
  long *unaff_x19;
  undefined8 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c();
  }
  thunk_FUN_01b4f09c();
  if (unaff_x19[4] != 0) {
    uVar2 = *(undefined8 *)(unaff_x19[4] + 0x58);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_0391f968(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (unaff_x19[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0313a30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x1c8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


