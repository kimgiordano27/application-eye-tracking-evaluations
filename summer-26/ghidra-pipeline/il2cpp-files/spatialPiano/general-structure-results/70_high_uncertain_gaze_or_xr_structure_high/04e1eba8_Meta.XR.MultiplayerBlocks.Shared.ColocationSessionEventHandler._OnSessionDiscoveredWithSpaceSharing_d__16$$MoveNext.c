/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpaceSharing>d__16$$MoveNext
ENTRY_POINT: 04e1eba8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpaceSharing>d__16__MoveNext
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,int param_5,
               long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((int)param_4 < (int)(param_5 + param_4)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = (long)(int)(param_5 + param_4) - (long)(int)param_4;
    lVar2 = param_2 + (long)(int)param_4 * 8 + 0x20;
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar1 = FUN_050d3cc0(lVar2,param_3,
                           *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 8;
      param_4 = param_4 + 1;
    } while (lVar3 != 0);
  }
  return 0xffffffff;
}


