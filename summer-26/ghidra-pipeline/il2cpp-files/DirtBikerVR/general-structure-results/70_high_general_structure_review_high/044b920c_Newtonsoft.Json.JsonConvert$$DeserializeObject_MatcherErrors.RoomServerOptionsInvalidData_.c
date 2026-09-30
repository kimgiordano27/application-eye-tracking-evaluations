/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.RoomServerOptionsInvalidData>
ENTRY_POINT: 044b920c
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
Newtonsoft_Json_JsonConvert__DeserializeObject<MatcherErrors_RoomServerOptionsInvalidData>
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
                    /* try { // try from 044b9230 to 045b923f has its CatchHandler @ 044b9240 */
  lVar1 = thunk_FUN_03ac74bc();
                    /* catch() { ... } // from try @ 044b91d0 with catch @ 044b9240
                       catch() { ... } // from try @ 044b9230 with catch @ 044b9240 */
  FUN_048ba6a0(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
                    /* try { // try from 044b9244 to 045b9247 has its CatchHandler @ 044b9250 */
  if (lVar1 != 0) {
                    /* try { // try from 044b9248 to 045b9253 has its CatchHandler @ 044b900c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044b9244 with catch @ 044b9250
                        */
    *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
                    /* try { // try from 044b9254 to 045b928f has its CatchHandler @ 044b9254
                       catch() { ... } // from try @ 044b9254 with catch @ 044b9254
                       catch() { ... } // from try @ 044b937c with catch @ 044b9254
                       catch() { ... } // from try @ 044b93cc with catch @ 044b9254
                       catch() { ... } // from try @ 044b9430 with catch @ 044b9254
                       catch() { ... } // from try @ 044b9490 with catch @ 044b9254 */
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
    thunk_FUN_03afed3c();
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar2 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b9290 to 045b9297 has its CatchHandler @ 044b93fc */
    FUN_049609ec(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
                    /* try { // try from 044b92ac to 045b92d3 has its CatchHandler @ 044b9400 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


