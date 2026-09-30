/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 028f9afc
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
                    /* try { // try from 028f9b2c to 029f9b2f has its CatchHandler @ 028f9b38 */
                    /* try { // try from 028f9b30 to 029f9b5b has its CatchHandler @ 028f96a8 */
  uVar2 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
  if (lVar3 != 0) {
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028f9b2c with catch @ 028f9b38
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028f9a60 with catch @ 028f9b3c
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028f99a8 with catch @ 028f9b40
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028f99e8 with catch @ 028f9b44
                        */
    FUN_02b9f22c(lVar3,uVar1,uVar2,0);
                    /* try { // try from 028f9b5c to 029f9b5f has its CatchHandler @ 028f9b74 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


