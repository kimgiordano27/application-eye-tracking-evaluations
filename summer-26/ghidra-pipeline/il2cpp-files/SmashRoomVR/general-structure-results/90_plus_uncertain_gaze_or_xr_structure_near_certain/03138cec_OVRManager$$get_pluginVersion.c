/*
FUNCTION_NAME: OVRManager$$get_pluginVersion
ENTRY_POINT: 03138cec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__get_pluginVersion(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  (**(code **)(param_1 + 0x188))();
  lVar1 = thunk_FUN_01afaadc(*(undefined8 *)Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__
                            );
  FUN_03901184(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_03902b90(lVar1,in_stack_00000018,0);
  FUN_0390345c(lVar1,0,in_stack_00000000,0);
  FUN_0390482c(lVar1,in_stack_00000008,0,0);
  FUN_03904ddc(lVar1,0);
  FUN_03904ed8(lVar1,0);
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_03900e48(*(long *)(unaff_x19 + 0x28),lVar1,0);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar1 = *(long *)(unaff_x19 + 0x30);
    uVar3 = FUN_03900d8c(*(long *)(unaff_x19 + 0x28),0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178(uVar3,uVar3);
    }
    FUN_0395bdc0(lVar1,uVar3,0);
  }
  return;
}


