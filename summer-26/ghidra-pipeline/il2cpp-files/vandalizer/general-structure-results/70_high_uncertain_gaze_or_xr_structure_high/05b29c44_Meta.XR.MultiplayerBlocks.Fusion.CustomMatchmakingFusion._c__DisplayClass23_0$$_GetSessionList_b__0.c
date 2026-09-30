/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion.<>c__DisplayClass23_0$$<GetSessionList>b__0
ENTRY_POINT: 05b29c44
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion_<>c__DisplayClass23_0__<GetSessionList>b__0
               (long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  thunk_FUN_03200ae0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4();
    }
    lVar1 = FUN_05b29d14(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
    thunk_FUN_03200ae0();
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    **(long **)(lVar2 + 0xb8) = lVar1;
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    thunk_FUN_0329bf60(*(undefined8 *)(lVar2 + 0xb8),lVar1);
  }
  return lVar1;
}


