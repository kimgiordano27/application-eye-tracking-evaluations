/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<Dictionary.Entry<Int32Enum,-HVRButtonState>>
ENTRY_POINT: 01c98dbc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__Insert<Dictionary_Entry<Int32Enum,_HVRButtonState>>
               (ulong param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x21;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x22 + 0x8b8) = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_0391f968(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_2 + 0x30) == 0) goto LAB_01c98e5c;
    FUN_0391b78c(*(long *)(param_2 + 0x30),param_3 & 1,0);
  }
  lVar2 = *(long *)(param_2 + 0x38);
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)(uint)lVar4) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar2 = *(long *)(lVar2 + lVar4 * 8 + 0x20);
      if (lVar2 == 0) break;
      FUN_0391b78c(lVar2,param_3 & 1,0);
      lVar2 = *(long *)(param_2 + 0x38);
      lVar4 = lVar4 + 1;
    } while (lVar2 != 0);
  }
LAB_01c98e5c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


