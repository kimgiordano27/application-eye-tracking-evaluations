/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.CustomMatchmakingFusion.<GetSessionList>d__25$$MoveNext
ENTRY_POINT: 0565ecf8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Fusion_CustomMatchmakingFusion_<GetSessionList>d__25__MoveNext
          (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_031c09d4(lVar2);
  }
  lVar2 = thunk_FUN_031c3cac();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_031c09d4(lVar2);
    }
    lVar2 = thunk_FUN_031c3cac();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
        thunk_FUN_031c3ef0();
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_031c09d4(lVar2);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
          thunk_FUN_031c3ef0();
                    /* WARNING: Could not recover jumptable at 0x0565edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
          return uVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03189058();
    }
  }
  FUN_0595040c(2,0);
  return 0;
}


