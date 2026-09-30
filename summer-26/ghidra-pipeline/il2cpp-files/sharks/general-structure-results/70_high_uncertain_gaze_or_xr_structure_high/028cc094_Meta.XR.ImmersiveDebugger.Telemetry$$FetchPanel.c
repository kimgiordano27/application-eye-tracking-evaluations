/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$FetchPanel
ENTRY_POINT: 028cc094
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__FetchPanel(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 028cc0a8 to 029cc0cf has its CatchHandler @ 028cc0e4 */
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
                    /* try { // try from 028cc0d0 to 029cc0db has its CatchHandler @ 028cbb9c */
  FUN_028cbf3c();
                    /* try { // try from 028cc0dc to 029cc0e3 has its CatchHandler @ 028cc0e4 */
  lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028cc0a8 with catch @ 028cc0e4
                       catch(type#2 @ 00000000) { ... } // from try @ 028cc0dc with catch @ 028cc0e4
                        */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4(lVar1);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x1c0);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  FUN_019ede80();
  return;
}


