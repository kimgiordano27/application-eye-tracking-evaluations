/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 04e1cc28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  int in_w8;
  
  if (in_w8 + 1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
                    /* catch(type#1 @ 06402238) { ... } // from try @ 04e1cb6c with catch @ 04e1cc84
                       try { // try from 04e1cc84 to 04f1cca7 has its CatchHandler @ 04e1cb38 */
      uVar1 = FUN_06194870(param_2 + 0x20 + (long)(int)param_4 * 0x2c);
      if ((uVar1 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 04e1cb8c with catch @ 04e1cc90
                        */
    } while (in_w8 + 1 <= (int)param_4);
  }
                    /* try { // try from 04e1cca8 to 04f1ccbf has its CatchHandler @ 04e1cd94 */
  return 0xffffffff;
}


