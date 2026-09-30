/*
FUNCTION_NAME: OVRManager$$get_sdkVersion
ENTRY_POINT: 03138d3c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__get_sdkVersion(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 uVar3;
  
  FUN_0390345c(param_1,0,param_3,0);
  FUN_0390482c();
  FUN_03904ddc();
  FUN_03904ed8();
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_03900e48();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_0391f968(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar2 = *(long *)(unaff_x19 + 0x30);
    uVar3 = FUN_03900d8c(*(long *)(unaff_x19 + 0x28),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178(uVar3,uVar3);
    }
    FUN_0395bdc0(lVar2,uVar3,0);
  }
  return;
}


