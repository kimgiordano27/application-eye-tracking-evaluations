/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 060359cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl__MarkerStart(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int in_w8;
  undefined8 uVar4;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    param_1 = *unaff_x22;
  }
  puVar1 = PTR_DAT_075f7a08;
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x20) == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      param_1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(param_1 + 0xb8);
    uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f79f8);
    FUN_042e1ce0(uVar2,uVar4,*(undefined8 *)PTR_DAT_075f7a18,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *puVar3 = uVar2;
    thunk_FUN_0329bf60(puVar3,uVar2);
  }
  uVar2 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_04cfe804(uVar2,3);
  return uVar2;
}


