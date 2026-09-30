/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.QuickmatchRoomGroupNameFormatInvalidData>
ENTRY_POINT: 044b7fc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_QuickmatchRoomGroupNameFormatInvalidData>
          (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
  FUN_048b9eec(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar1 != 0) {
                    /* try { // try from 044b7ff0 to 045b7fff has its CatchHandler @ 044b8000 */
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
                    /* catch() { ... } // from try @ 044b7f90 with catch @ 044b8000
                       catch() { ... } // from try @ 044b7ff0 with catch @ 044b8000 */
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
                    /* try { // try from 044b8004 to 045b8007 has its CatchHandler @ 044b8010 */
    thunk_FUN_03afed3c();
                    /* try { // try from 044b8008 to 045b8013 has its CatchHandler @ 044b7dcc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044b8004 with catch @ 044b8010
                        */
                    /* try { // try from 044b8014 to 045b804f has its CatchHandler @ 044b8014
                       catch() { ... } // from try @ 044b8014 with catch @ 044b8014
                       catch() { ... } // from try @ 044b813c with catch @ 044b8014
                       catch() { ... } // from try @ 044b818c with catch @ 044b8014
                       catch() { ... } // from try @ 044b81f0 with catch @ 044b8014
                       catch() { ... } // from try @ 044b8250 with catch @ 044b8014 */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar2 = thunk_FUN_03ac74bc();
    FUN_0495e938(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 044b8050 to 045b8057 has its CatchHandler @ 044b81bc */
  FUN_03a8a9c0();
}


