/*
FUNCTION_NAME: FUN_070d0c24
ENTRY_POINT: 070d0c24
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_070d0c24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = MyBox_ColliderGizmoPreset_TypeInfo;
  if ((DAT_07a5a9ba & 1) == 0) {
    FUN_031f20f4(MyBox_ColliderGizmoPreset_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_90_0_TypeInfo);
    DAT_07a5a9ba = 1;
  }
  puVar3 = OVRPlugin_OVRP_1_90_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_8_0_TypeInfo;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar4 = *(long *)puVar1;
  }
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(lVar4 + 0xb8);
  *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(lVar4 + 0xb8);
  uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_04d9aed4(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x28),uVar5);
  FUN_05e44034(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x10),param_2);
  return;
}


