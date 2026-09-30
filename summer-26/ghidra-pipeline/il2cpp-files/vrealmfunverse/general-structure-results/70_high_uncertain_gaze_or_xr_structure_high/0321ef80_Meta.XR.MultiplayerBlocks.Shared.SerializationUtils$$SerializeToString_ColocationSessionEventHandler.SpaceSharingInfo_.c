/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<ColocationSessionEventHandler.SpaceSharingInfo>
ENTRY_POINT: 0321ef80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<ColocationSessionEventHandler_SpaceSharingInfo>
               (long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 uVar2;
  
                    /* try { // try from 0321ef84 to 0331ef8b has its CatchHandler @ 0321efa8 */
  FUN_02b3c81c(*(undefined8 *)(param_1 + 600));
  puVar1 = *(undefined8 **)(unaff_x19 + 0x38);
                    /* try { // try from 0321ef8c to 0331efc7 has its CatchHandler @ 0321ef08 */
  if (puVar1 == (undefined8 *)0x0) {
    FUN_02b76274();
    puVar1 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  uVar2 = *puVar1;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0321ef84 with catch @ 0321efa8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0321ef6c with catch @ 0321efac
                        */
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_04d8a7b0(uVar2,0);
                    /* try { // try from 0321efc8 to 0331efcb has its CatchHandler @ 0321efe4 */
                    /* try { // try from 0321efcc to 0331efe7 has its CatchHandler @ 0321ef08 */
  if (*(int *)(*(long *)PTR_DAT_0631e258 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631e258);
  }
                    /* catch() { ... } // from try @ 0321efc8 with catch @ 0321efe4 */
                    /* try { // try from 0321efe8 to 0331efef has its CatchHandler @ 0321eff8 */
                    /* try { // try from 0321eff0 to 0331effb has its CatchHandler @ 0321ef08 */
  thunk_FUN_02b48b48(uVar2,0);
  return;
}


