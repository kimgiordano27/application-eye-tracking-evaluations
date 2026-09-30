/*
FUNCTION_NAME: FUN_09712848
ENTRY_POINT: 09712848
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_09712848(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = OVROverlay_LayerTexture_var;
  if ((DAT_0a54744f & 1) == 0) {
    FUN_04447ba8(OVRPassthroughLayer_DeferredPassthroughMeshAddition_var);
    FUN_04447ba8(OVRPassthroughLayer_SerializedSurfaceGeometry_var);
    FUN_04447ba8(OVRPassthroughLayer_Settings_var);
    FUN_04447ba8(OVRPlugin_SpaceQueryResult_var);
    FUN_04447ba8(OVRPlugin_Vector3f_var);
    FUN_04447ba8(OVROverlay_LayerTexture_var);
    DAT_0a54744f = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0448520c(*(undefined8 *)OVRPassthroughLayer_SerializedSurfaceGeometry_var);
    FUN_0554a0ac(lVar5,uVar6,*(undefined8 *)OVRPlugin_SpaceQueryResult_var,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_044bb4b4(plVar4,lVar5);
    lVar3 = *(long *)puVar1;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = OVRPassthroughLayer_Settings_var;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_0448520c(*(undefined8 *)
                                OVRPassthroughLayer_DeferredPassthroughMeshAddition_var);
    FUN_073ab0a8(lVar7,uVar6,*(undefined8 *)OVRPlugin_Vector3f_var,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar4 = lVar7;
    thunk_FUN_044bb4b4(plVar4,lVar7);
  }
  FUN_0594c4ec(param_1,lVar5,lVar7,10000,*(undefined8 *)puVar2);
  return;
}


