/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$remove_AnchorShareRequestReceived
ENTRY_POINT: 05665e58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__remove_AnchorShareRequestReceived
               (void)

{
  bool in_ZR;
  uint uVar1;
  void *pvVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  if (in_ZR) {
    pvVar2 = (void *)thunk_FUN_031c3ef0();
    memcpy(&stack0x000000a8,pvVar2,0xa8);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar3 + 0x40)) {
      pvVar2 = (void *)thunk_FUN_031c3ef0();
      memcpy(&stack0x00000000,pvVar2,0xa8);
      pcVar4 = *(code **)(*unaff_x19 + 0x1b8);
      memcpy(&stack0x000001f8,&stack0x000000a8,0xa8);
      memcpy(&stack0x00000150,&stack0x00000000,0xa8);
      uVar1 = (*pcVar4)();
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03189058();
}


