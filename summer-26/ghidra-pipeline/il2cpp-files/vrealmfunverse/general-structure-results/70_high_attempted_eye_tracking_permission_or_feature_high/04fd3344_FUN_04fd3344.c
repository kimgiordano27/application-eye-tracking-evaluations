/*
FUNCTION_NAME: FUN_04fd3344
ENTRY_POINT: 04fd3344
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_04fd3344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = System_Func<Collider,_Transform>_TypeInfo;
  if ((DAT_066cbe6f & 1) == 0) {
    FUN_02b3c81c(System_Func<Collider,_Transform>_TypeInfo);
    FUN_02b3c81c(Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo);
    DAT_066cbe6f = 1;
  }
  puVar2 = Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_TypeInfo;
  FUN_04dbdb8c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = OVRSceneModelLoader__get_SceneManager(param_2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  thunk_FUN_02bb0e9c();
  uVar4 = FUN_04fa9c40(param_2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_02bb0e9c();
  uVar4 = FUN_04fa9e20(param_2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar3 = FUN_04fa9e9c(param_2,0);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar4 = FUN_04fa9f18(param_2,0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar4 = FUN_04fa9f94(param_2,0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0
                    (param_2,0);
  uVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_04fd346c(uVar5,uVar4);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x40),uVar5);
  return;
}


