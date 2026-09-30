/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpatialAnchor>d__10$$SetStateMachine
ENTRY_POINT: 052fdcd0
PROGRAM: Untangled-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10__SetStateMachine
               (long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  do {
    lVar2 = FUN_05649124(param_1);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      uVar4 = *unaff_x25;
      lVar3 = thunk_FUN_02ef170c(lVar2,uVar4);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(lVar2,uVar4);
      }
    }
    lVar2 = *unaff_x24;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x24;
    }
    param_1 = FUN_02eca9b4(*(long *)(lVar2 + 0xb8) + 0x28,lVar3,unaff_x20);
    bVar1 = unaff_x20 != param_1;
    unaff_x20 = param_1;
  } while (bVar1);
  return;
}


