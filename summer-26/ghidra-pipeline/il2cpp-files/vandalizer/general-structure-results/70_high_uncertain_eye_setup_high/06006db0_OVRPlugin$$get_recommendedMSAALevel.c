/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 06006db0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_recommendedMSAALevel(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_06003a5c();
  *(undefined8 *)(unaff_x19 + 0x148) = param_1;
  thunk_FUN_0329bf60(unaff_x19 + 0x148,param_1);
  uVar1 = thunk_FUN_0322f148(*unaff_x24);
  FUN_06003a5c();
  *(undefined8 *)(unaff_x19 + 0x150) = uVar1;
  thunk_FUN_0329bf60(unaff_x19 + 0x150,uVar1);
  uVar1 = FUN_031f21dc(*unaff_x23,5);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar1;
  thunk_FUN_0329bf60(unaff_x19 + 0x160);
  uVar1 = thunk_FUN_0322f148(*unaff_x21);
  FUN_06002f40();
  *(undefined8 *)(unaff_x19 + 0x170) = uVar1;
  thunk_FUN_0329bf60(unaff_x19 + 0x170,uVar1);
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *unaff_x22;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7238);
    FUN_056fa11c(lVar4,uVar1,*(undefined8 *)PTR_DAT_075f7248,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_0329bf60(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x178) = lVar4;
  thunk_FUN_0329bf60(unaff_x19 + 0x178,lVar4);
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar2 = *unaff_x22;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f7238);
    FUN_056fa11c(lVar4,uVar1,*(undefined8 *)PTR_DAT_075f7250,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar3 = lVar4;
    thunk_FUN_0329bf60(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x180) = lVar4;
  thunk_FUN_0329bf60(unaff_x19 + 0x180,lVar4);
  FUN_0445bf6c();
  return;
}


