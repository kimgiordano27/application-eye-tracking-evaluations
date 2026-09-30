/*
FUNCTION_NAME: FUN_0392366c
ENTRY_POINT: 0392366c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0392366c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_50 = param_4;
  uStack_4c = param_5;
  local_48 = param_6;
  uStack_44 = param_7;
  local_40 = param_1;
  uStack_3c = param_2;
  local_38 = param_3;
  if ((DAT_03ffadb1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffadb1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03ffade8 == (code *)0x0) {
    DAT_03ffade8 = (code *)FUN_01b47f04(
                                       "UnityEngine.Object::Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object,UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Quaternion&)"
                                       );
  }
  (*DAT_03ffade8)(param_8,param_9,&local_40,&local_50);
  return;
}


