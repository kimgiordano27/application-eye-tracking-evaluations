/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$PopulateInternal
ENTRY_POINT: 061e06bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__PopulateInternal(long param_1,long param_2,byte param_3)

{
  undefined4 uVar1;
  
  FUN_062855bc(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_037aeb94((long *)(param_1 + 0x10),param_2);
  *(byte *)(param_1 + 0x24) = param_3 & 1;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x25) = 1;
    *(undefined4 *)(param_1 + 0x20) = uVar1;
                    /* try { // try from 061e070c to 062e070f has its CatchHandler @ 061e0870 */
                    /* try { // try from 061e0710 to 062e071b has its CatchHandler @ 061e0878 */
    thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x18),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


