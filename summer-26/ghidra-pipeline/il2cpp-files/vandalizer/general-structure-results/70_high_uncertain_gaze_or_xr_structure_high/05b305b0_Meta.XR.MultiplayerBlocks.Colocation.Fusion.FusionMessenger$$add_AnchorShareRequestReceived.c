/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$add_AnchorShareRequestReceived
ENTRY_POINT: 05b305b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__add_AnchorShareRequestReceived
                 (long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  
  plVar1 = (long *)thunk_FUN_0322f148(**(undefined8 **)(param_1 + 0x788));
  FUN_05db4a28(plVar1,0);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4(lVar2);
  }
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar1);
    }
  }
  return plVar1;
}


