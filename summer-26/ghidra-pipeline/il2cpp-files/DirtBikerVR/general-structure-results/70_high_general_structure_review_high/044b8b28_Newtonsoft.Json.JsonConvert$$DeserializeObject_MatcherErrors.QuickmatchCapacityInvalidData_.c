/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.QuickmatchCapacityInvalidData>
ENTRY_POINT: 044b8b28
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
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_QuickmatchCapacityInvalidData>
          (long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  if (param_1 == (long *)0x0) {
    FUN_03ac40ec();
    param_1 = *(long **)(unaff_x19 + 0x38);
  }
  if ((*(ushort *)(*param_1 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b8b58 to 045b8b67 has its CatchHandler @ 044b8b68 */
  FUN_048ba3a4(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 044b8af8 with catch @ 044b8b68
                       catch() { ... } // from try @ 044b8b58 with catch @ 044b8b68 */
                    /* try { // try from 044b8b6c to 045b8b6f has its CatchHandler @ 044b8b78 */
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
                    /* try { // try from 044b8b70 to 045b8b7b has its CatchHandler @ 044b8934 */
    thunk_FUN_03afed3c();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044b8b6c with catch @ 044b8b78
                        */
                    /* try { // try from 044b8b7c to 045b8bb7 has its CatchHandler @ 044b8b7c
                       catch() { ... } // from try @ 044b8b7c with catch @ 044b8b7c
                       catch() { ... } // from try @ 044b8ca4 with catch @ 044b8b7c
                       catch() { ... } // from try @ 044b8cf4 with catch @ 044b8b7c
                       catch() { ... } // from try @ 044b8d58 with catch @ 044b8b7c
                       catch() { ... } // from try @ 044b8db8 with catch @ 044b8b7c */
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_03afed3c();
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar2 = thunk_FUN_03ac74bc();
    FUN_0495fe6c(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
                    /* try { // try from 044b8bb8 to 045b8bbf has its CatchHandler @ 044b8d24 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


