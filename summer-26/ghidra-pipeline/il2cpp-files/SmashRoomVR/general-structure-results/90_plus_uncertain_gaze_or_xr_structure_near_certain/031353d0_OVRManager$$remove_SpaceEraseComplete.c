/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 031353d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__remove_SpaceEraseComplete(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xeb8) = 1;
  uVar1 = FUN_03135190();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (unaff_x20 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_03922f24(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(unaff_x19 + 0x58);
    }
    else {
      lVar2 = *(long *)(unaff_x19 + 0x60);
    }
    if (lVar2 != 0) {
      FUN_0392e738(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


