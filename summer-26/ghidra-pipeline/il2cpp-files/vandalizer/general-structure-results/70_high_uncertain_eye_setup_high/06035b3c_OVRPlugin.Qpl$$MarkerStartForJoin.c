/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 06035b3c
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


undefined8 OVRPlugin_Qpl__MarkerStartForJoin(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long in_x9;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x22;
  
  uVar7 = *param_1;
  uVar3 = thunk_FUN_0322f148(**(undefined8 **)(in_x9 + 0xa20));
  FUN_042d79b4(uVar3,uVar7,*(undefined8 *)PTR_DAT_075f7a40,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_0329bf60(puVar4,uVar3);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *unaff_x22;
  }
  puVar2 = PTR_DAT_075f7a38;
  puVar1 = PTR_DAT_075f7a30;
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar5 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7a28);
    FUN_042e1d94(lVar8,uVar7,*(undefined8 *)PTR_DAT_075f7a48,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar6 = lVar8;
    thunk_FUN_0329bf60(plVar6,lVar8);
  }
  uVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_04cfed08(uVar7,4,uVar3,lVar8,*(undefined8 *)puVar1);
  return uVar7;
}


