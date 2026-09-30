/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<Room.GetRegionsListResponse>
ENTRY_POINT: 044b9510
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


undefined8
Newtonsoft_Json_JsonConvert__DeserializeObject<Room_GetRegionsListResponse>
          (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (long *)0x0) {
    FUN_03ac40ec(param_4);
    param_1 = *(long **)(param_4 + 0x38);
  }
                    /* try { // try from 044b952c to 045b9543 has its CatchHandler @ 044b9638 */
  if ((*(ushort *)(*param_1 + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  lVar1 = thunk_FUN_03ac74bc();
                    /* try { // try from 044b954c to 045b955b has its CatchHandler @ 044b9640 */
  FUN_048ba860(lVar1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x10),param_3);
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x18),param_2);
                    /* try { // try from 044b9578 to 045b959f has its CatchHandler @ 044b9648 */
    if ((*(ushort *)(*(long *)(*(long *)(param_4 + 0x38) + 0x28) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar2 = thunk_FUN_03ac74bc();
    FUN_04960d5c(uVar2,lVar1,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20),
                 *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30));
                    /* try { // try from 044b95b0 to 045b95c3 has its CatchHandler @ 044b9634 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


