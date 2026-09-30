/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<MatcherErrors.QuickmatchRoomGroupNameFormatInvalidData>
ENTRY_POINT: 044b8e1c
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
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
                    /* try { // try from 044b8e1c to 045b8e43 has its CatchHandler @ 044b8f70 */
  plVar3 = *(long **)(param_3 + 0x38);
  if (plVar3 == (long *)0x0) {
    FUN_03ac40ec(param_3);
    plVar3 = *(long **)(param_3 + 0x38);
  }
                    /* try { // try from 044b8e54 to 045b8e6b has its CatchHandler @ 044b8f60 */
  if ((*(ushort *)(*plVar3 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
  FUN_048ba4ec(lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  if (lVar1 != 0) {
                    /* try { // try from 044b8e74 to 045b8e83 has its CatchHandler @ 044b8f68 */
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x10),param_2);
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x18),param_1);
                    /* try { // try from 044b8ea0 to 045b8ec7 has its CatchHandler @ 044b8f70 */
    if ((*(ushort *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar2 = thunk_FUN_03ac74bc();
    FUN_049601f0(uVar2,lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
                    /* try { // try from 044b8ed8 to 045b8eeb has its CatchHandler @ 044b8f5c */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


