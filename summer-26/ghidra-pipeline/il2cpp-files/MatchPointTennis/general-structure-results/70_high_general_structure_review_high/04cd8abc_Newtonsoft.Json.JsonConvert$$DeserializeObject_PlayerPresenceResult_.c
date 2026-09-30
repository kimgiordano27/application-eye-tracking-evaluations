/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<PlayerPresenceResult>
ENTRY_POINT: 04cd8abc
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
Newtonsoft_Json_JsonConvert__DeserializeObject<PlayerPresenceResult>
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_3 + 0x38);
                    /* try { // try from 04cd8acc to 04dd8ad3 has its CatchHandler @ 04cd8bfc */
  if (plVar3 == (long *)0x0) {
    FUN_04482014(param_3);
                    /* try { // try from 04cd8ad8 to 04dd8ae3 has its CatchHandler @ 04cd8bf8 */
    plVar3 = *(long **)(param_3 + 0x38);
  }
  if ((*(byte *)(*plVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 04cd8ae8 to 04dd8aef has its CatchHandler @ 04cd8be4 */
    FUN_04481fb8();
  }
  lVar1 = thunk_FUN_0448520c();
  FUN_05ca7f8c(lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
  if (lVar1 != 0) {
                    /* try { // try from 04cd8b04 to 04dd8b07 has its CatchHandler @ 04cd8bdc */
                    /* try { // try from 04cd8b08 to 04dd8b23 has its CatchHandler @ 04cd8a3c */
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x10),param_2);
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    thunk_FUN_044bb4b4((undefined8 *)(lVar1 + 0x18),param_1);
                    /* try { // try from 04cd8b24 to 04dd8b2f has its CatchHandler @ 04cd8bf4 */
    if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar2 = thunk_FUN_0448520c();
                    /* try { // try from 04cd8b3c to 04dd8b43 has its CatchHandler @ 04cd8be0 */
    FUN_055553f4(uVar2,lVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


