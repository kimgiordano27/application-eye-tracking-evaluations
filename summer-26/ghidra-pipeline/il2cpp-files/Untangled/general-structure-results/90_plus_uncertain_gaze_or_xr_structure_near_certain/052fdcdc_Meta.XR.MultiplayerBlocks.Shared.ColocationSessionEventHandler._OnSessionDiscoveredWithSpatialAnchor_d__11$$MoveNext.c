/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$MoveNext
ENTRY_POINT: 052fdcdc
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


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__MoveNext
               (long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  while( true ) {
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      uVar3 = *unaff_x25;
                    /* try { // try from 052fdcec to 053fdcf7 has its CatchHandler @ 052fd9f8 */
      lVar1 = thunk_FUN_02ef170c(param_1,uVar3);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(param_1,uVar3);
      }
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052fdcc4 with catch @ 052fdd00
                       catch(type#2 @ 00000000) { ... } // from try @ 052fdcf8 with catch @ 052fdd00
                        */
    lVar2 = *unaff_x24;
                    /* try { // try from 052fdd04 to 053fdd67 has its CatchHandler @ 052fdd04
                       catch() { ... } // from try @ 052fdd04 with catch @ 052fdd04
                       catch() { ... } // from try @ 052fdd94 with catch @ 052fdd04
                       catch() { ... } // from try @ 052fddd0 with catch @ 052fdd04
                       catch() { ... } // from try @ 052fde24 with catch @ 052fdd04 */
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x24;
    }
    lVar1 = FUN_02eca9b4(*(long *)(lVar2 + 0xb8) + 0x28,lVar1,unaff_x20);
    if (unaff_x20 == lVar1) break;
    param_1 = FUN_05649124(lVar1);
    unaff_x20 = lVar1;
  }
  return;
}


