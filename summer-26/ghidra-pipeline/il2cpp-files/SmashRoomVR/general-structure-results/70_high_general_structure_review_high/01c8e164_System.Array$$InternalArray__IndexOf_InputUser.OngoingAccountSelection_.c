/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<InputUser.OngoingAccountSelection>
ENTRY_POINT: 01c8e164
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__IndexOf<InputUser_OngoingAccountSelection>
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((*(byte *)(unaff_x22 + 0x83a) & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x22 + 0x83a) = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(param_2,uVar4,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x368), lVar3 != 0)) {
      uVar4 = FUN_03704a10(lVar3,0);
      *(undefined8 *)(param_1 + 0xa0) = uVar4;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0xa0),uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


