/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<Vector4>
ENTRY_POINT: 01cbf48c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__get_Item<Vector4>(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0xa6c) = 1;
  }
  if (param_3 != 0) {
    uVar1 = FUN_01cb8664(param_3);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_3 + 0x10) == 0) goto LAB_01cbf544;
      uVar2 = FUN_0391c2b8(*(long *)(param_3 + 0x10),0);
      uVar3 = FUN_0391c2b8(param_2,0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar1 = FUN_03922f24(uVar2,uVar3,0);
      if ((uVar1 & 1) != 0) {
        FUN_01cbf548(param_2,param_3);
        FUN_01cbfd04(param_2,param_3);
        return;
      }
    }
    return;
  }
LAB_01cbf544:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


