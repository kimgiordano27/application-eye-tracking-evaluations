/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 032cd918
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(void)

{
  long lVar1;
  long unaff_x19;
  
                    /* try { // try from 032cd918 to 033cd93b has its CatchHandler @ 032cd8c4 */
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032cd904 with catch @ 032cd924
                        */
    lVar1 = FUN_01ecaf44();
  }
  thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x90));
                    /* try { // try from 032cd93c to 033cd953 has its CatchHandler @ 032cd98c */
  return;
}


