/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 0603574c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionDestroy(void)

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
  
  FUN_031f20f4();
  FUN_031f20f4(PTR_DAT_075f79d0);
  FUN_031f20f4(PTR_DAT_075f79d8);
  FUN_031f20f4(PTR_DAT_075f79e0);
  FUN_031f20f4(PTR_DAT_075f79e8);
  FUN_031f20f4(PTR_DAT_075f79b8);
  *(undefined1 *)(unaff_x19 + 0xc27) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x22;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f79c0);
    FUN_042d777c(lVar5,uVar6,*(undefined8 *)PTR_DAT_075f79e0,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_0329bf60(plVar4,lVar5);
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x22;
  }
  puVar2 = PTR_DAT_075f79d8;
  puVar1 = PTR_DAT_075f79d0;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f79c8);
    FUN_042e1c2c(lVar7,uVar6,*(undefined8 *)PTR_DAT_075f79e8,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar4 = lVar7;
    thunk_FUN_0329bf60(plVar4,lVar7);
  }
  uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar2);
  FUN_04cfe314(uVar6,2,lVar5,lVar7,*(undefined8 *)puVar1);
  return uVar6;
}


