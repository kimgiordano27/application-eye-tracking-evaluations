/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 05ff2d20
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuUtilSupported(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  undefined4 uVar5;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0xce0));
  FUN_031f20f4(PTR_DAT_075f6cd0);
  *(undefined1 *)(unaff_x20 + 0x874) = 1;
  *(undefined8 *)(unaff_x19 + 0x50) = 0x3e4ccccd3e4ccccd;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f3748);
    FUN_042cc39c(lVar3,uVar4,*(undefined8 *)PTR_DAT_075f6cd8,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar3;
    thunk_FUN_0329bf60(plVar2,lVar3);
  }
  *(long *)(unaff_x19 + 0x58) = lVar3;
  thunk_FUN_0329bf60((long *)(unaff_x19 + 0x58),lVar3);
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar1 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar1 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar1 + 0xb8);
    lVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f3748);
    FUN_042cc39c(lVar3,uVar4,*(undefined8 *)PTR_DAT_075f6ce0,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar2 = lVar3;
    thunk_FUN_0329bf60(plVar2,lVar3);
  }
  *(long *)(unaff_x19 + 0x60) = lVar3;
  thunk_FUN_0329bf60((long *)(unaff_x19 + 0x60),lVar3);
  if (DAT_07a3ca82 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3ca82 = '\x01';
  }
  uVar5 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x6c) = **(undefined8 **)(*(long *)PTR_DAT_0759b378 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x74) = uVar5;
  thunk_FUN_06e54964();
  return;
}


