/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<Room.FoundRoomResponse>
ENTRY_POINT: 044b8230
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject<Room_FoundRoomResponse>(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  
  if (unaff_x22 != 0) {
                    /* try { // try from 044b8238 to 045b8247 has its CatchHandler @ 044b8248 */
    *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
                    /* catch() { ... } // from try @ 044b81d8 with catch @ 044b8248
                       catch() { ... } // from try @ 044b8238 with catch @ 044b8248 */
                    /* try { // try from 044b824c to 045b824f has its CatchHandler @ 044b8258 */
    *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* try { // try from 044b8250 to 045b825b has its CatchHandler @ 044b8014 */
    thunk_FUN_03afed3c();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044b824c with catch @ 044b8258
                        */
                    /* try { // try from 044b825c to 045b8297 has its CatchHandler @ 044b825c
                       catch() { ... } // from try @ 044b825c with catch @ 044b825c
                       catch() { ... } // from try @ 044b8384 with catch @ 044b825c
                       catch() { ... } // from try @ 044b83d4 with catch @ 044b825c
                       catch() { ... } // from try @ 044b8438 with catch @ 044b825c
                       catch() { ... } // from try @ 044b8498 with catch @ 044b825c */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar1 = thunk_FUN_03ac74bc();
    FUN_0495f32c();
                    /* try { // try from 044b8298 to 045b829f has its CatchHandler @ 044b8404 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


