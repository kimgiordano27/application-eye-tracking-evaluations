/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 05309e24
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam00000000071c130f & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3a288);
    bRam00000000071c130f = 1;
  }
  puVar1 = PTR_DAT_06d3a288;
  lVar5 = *(long *)(param_1 + 0x38);
  do {
    lVar3 = FUN_05648f2c(lVar5,param_2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02ef170c(lVar3,uVar6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(lVar3,uVar6);
      }
    }
    lVar3 = FUN_02eca9b4((long *)(param_1 + 0x38),lVar4,lVar5);
    bVar2 = lVar5 != lVar3;
    lVar5 = lVar3;
  } while (bVar2);
  return;
}


