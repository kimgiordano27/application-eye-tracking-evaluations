/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$HostOrJoinSessionAutomatically
ENTRY_POINT: 0530334c
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__HostOrJoinSessionAutomatically(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar1 = *unaff_x22;
  }
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_02f411dc();
  uVar2 = FUN_066c67ec();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* try { // try from 0530338c to 0540338f has its CatchHandler @ 053033a4 */
                    /* try { // try from 05303390 to 05403393 has its CatchHandler @ 053033a0 */
    thunk_FUN_02f12b58(*unaff_x21);
  }
                    /* try { // try from 05303394 to 054033c3 has its CatchHandler @ 05302fb0 */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05303390 with catch @ 053033a0
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 0530338c with catch @ 053033a4
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 05303260 with catch @ 053033a8
                        */
  FUN_066cdfd0(uVar2,0);
  return;
}


