/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 056308dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
               (undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_05630324(param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
  if (param_2 < 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dd28);
    uVar1 = thunk_FUN_032a56a0();
    uVar2 = thunk_FUN_032e1da0(PTR_DAT_07282488);
    FUN_0589fe50(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar1,param_4);
  }
  if (param_2 != 0) {
    FUN_0563324c(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70)
                );
    return;
  }
  return;
}


