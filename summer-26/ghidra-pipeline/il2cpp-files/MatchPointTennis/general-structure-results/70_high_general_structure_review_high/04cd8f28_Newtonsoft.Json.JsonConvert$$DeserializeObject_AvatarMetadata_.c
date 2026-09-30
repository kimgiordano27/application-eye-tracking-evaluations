/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<AvatarMetadata>
ENTRY_POINT: 04cd8f28
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<AvatarMetadata>
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 04cd8f2c to 04dd8f33 has its CatchHandler @ 04cd90ac */
  if (param_1 == (long *)0x0) {
                    /* try { // try from 04cd8f38 to 04dd8f47 has its CatchHandler @ 04cd90a0 */
    FUN_04482014(param_4);
    param_1 = *(long **)(param_4 + 0x38);
  }
  if ((*(byte *)(*param_1 + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
                    /* try { // try from 04cd8f54 to 04dd8f63 has its CatchHandler @ 04cd90a8 */
  lVar1 = thunk_FUN_0448520c();
  FUN_05ca81f8(lVar1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
  if (lVar1 != 0) {
                    /* try { // try from 04cd8f70 to 04dd8f77 has its CatchHandler @ 04cd909c */
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x10),param_3);
                    /* try { // try from 04cd8f7c to 04dd8f87 has its CatchHandler @ 04cd9098 */
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x18),param_2);
                    /* try { // try from 04cd8f8c to 04dd8f93 has its CatchHandler @ 04cd9084 */
    if ((*(byte *)(*(long *)(*(long *)(param_4 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar2 = thunk_FUN_0448520c();
                    /* try { // try from 04cd8fa8 to 04dd8fab has its CatchHandler @ 04cd907c */
    FUN_0555669c(uVar2,lVar1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
                    /* try { // try from 04cd8fc4 to 04dd8fcf has its CatchHandler @ 04cd9094 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


