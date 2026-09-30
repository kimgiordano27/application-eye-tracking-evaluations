/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpaceSharing
ENTRY_POINT: 05b41e04
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  int in_w8;
  long lVar2;
  undefined8 *puVar3;
  
  if ((int)param_5 < in_w8) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = (long)in_w8 - (long)(int)param_5;
    puVar3 = (undefined8 *)(param_2 + (long)(int)param_5 * 0x10 + 0x28);
    do {
      if (*(uint *)(param_2 + 0x18) <= param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      uVar1 = (**(code **)(*param_1 + 0x1b8))
                        (param_1,puVar3[-1],*puVar3,param_3,param_4,
                         *(undefined8 *)(*param_1 + 0x1c0));
      if ((uVar1 & 1) != 0) {
        return param_5;
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 2;
      param_5 = param_5 + 1;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}


