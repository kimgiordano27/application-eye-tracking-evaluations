/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnConnectRequest
ENTRY_POINT: 05b2e418
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


undefined8
Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnConnectRequest
          (void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar1 = thunk_FUN_0322f04c();
  if (lVar1 == 0) {
    FUN_05e223a8(2,0);
    return 0;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4(lVar1);
  }
  if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_0322f29c();
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4(lVar1);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_0322f29c();
                    /* WARNING: Could not recover jumptable at 0x05b2e4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2730();
}


