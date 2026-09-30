/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpaceSharing>d__15$$MoveNext
ENTRY_POINT: 04e1e120
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpaceSharing>d__15__MoveNext
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 04e1e05c with catch @ 04e1e174
                       try { // try from 04e1e174 to 04f1e197 has its CatchHandler @ 04e1e028 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 04e1e07c with catch @ 04e1e180
                        */
      uVar2 = FUN_05a9c5cc(param_2 + 0x20 + (long)(int)param_4 * 0x38);
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
                    /* try { // try from 04e1e198 to 04f1e1af has its CatchHandler @ 04e1e284 */
    } while (iVar1 <= (int)param_4);
  }
                    /* try { // try from 04e1e1b0 to 04f1e1d3 has its CatchHandler @ 04e1e028 */
  return 0xffffffff;
}


