/*
FUNCTION_NAME: FUN_0312e2d8
ENTRY_POINT: 0312e2d8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_0312e2d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_40;
  undefined8 uStack_2c;
  
  if ((DAT_03ff1e5e & 1) == 0) {
    thunk_FUN_01ad9084(Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__);
    DAT_03ff1e5e = 1;
  }
  puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  if (DAT_03fed256 == '\0') {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
    DAT_03fed256 = '\x01';
  }
  uVar3 = (*(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
          )[1];
  uVar2 = **(undefined8 **)
            (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8)
  ;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined8 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x3c) = uVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03927648(&uStack_60,0);
  uStack_2c = uStack_4c;
  uStack_40 = uStack_60;
  *(ulong *)(param_1 + 0x58) = CONCAT44(local_54,uStack_58);
  *(undefined8 *)(param_1 + 0x50) = uStack_60;
  *(undefined8 *)(param_1 + 100) = uStack_4c;
  *(ulong *)(param_1 + 0x5c) = CONCAT44(uStack_50,local_54);
  FUN_039211e4(param_1,0);
  return;
}


