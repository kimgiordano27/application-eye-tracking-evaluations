/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.QuickmatchRoomCodeFormatInvalidData>
ENTRY_POINT: 044b7ef0
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
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_QuickmatchRoomCodeFormatInvalidData>
          (void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  FUN_03ac40ec();
                    /* try { // try from 044b7ef4 to 045b7f0f has its CatchHandler @ 044b7dcc */
  if ((*(ushort *)(**(long **)(unaff_x19 + 0x38) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b7f10 to 045b7f1b has its CatchHandler @ 044b7f60 */
  FUN_048b9ea4(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
                    /* try { // try from 044b7f20 to 045b7f2f has its CatchHandler @ 044b7f5c */
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
    thunk_FUN_03afed3c();
                    /* try { // try from 044b7f38 to 045b7f43 has its CatchHandler @ 044b7f6c */
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_03afed3c();
                    /* try { // try from 044b7f44 to 045b7f8f has its CatchHandler @ 044b7dcc */
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar2 = thunk_FUN_03ac74bc();
    FUN_0495e884(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


