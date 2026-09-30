/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 06035aa8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  
  FUN_031f20f4(PTR_DAT_075f7a20);
  FUN_031f20f4(PTR_DAT_075f7a28);
  FUN_031f20f4(PTR_DAT_075f7a30);
  FUN_031f20f4(PTR_DAT_075f7a38);
  FUN_031f20f4(PTR_DAT_075f7a40);
  FUN_031f20f4(PTR_DAT_075f7a48);
  FUN_031f20f4(PTR_DAT_075f79b8);
  *(undefined1 *)(unaff_x19 + 0xc29) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x22;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7a20);
    FUN_042d79b4(lVar5,uVar6,*(undefined8 *)PTR_DAT_075f7a40,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *plVar4 = lVar5;
    thunk_FUN_0329bf60(plVar4,lVar5);
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_075f7a38;
  puVar1 = PTR_DAT_075f7a30;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7a28);
    FUN_042e1d94(lVar7,uVar6,*(undefined8 *)PTR_DAT_075f7a48,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar4 = lVar7;
    thunk_FUN_0329bf60(plVar4,lVar7);
  }
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_04cfed08(uVar6,4,lVar5,lVar7,*(undefined8 *)puVar1);
  return uVar6;
}


