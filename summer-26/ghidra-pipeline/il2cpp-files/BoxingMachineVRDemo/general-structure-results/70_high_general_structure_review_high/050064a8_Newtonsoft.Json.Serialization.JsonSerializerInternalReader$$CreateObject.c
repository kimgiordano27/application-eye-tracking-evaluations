/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject
ENTRY_POINT: 050064a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
                    /* try { // try from 050064bc to 051064cb has its CatchHandler @ 0500653c */
  if ((DAT_06b791a5 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06777060);
                    /* try { // try from 050064cc to 05106513 has its CatchHandler @ 05006374 */
    DAT_06b791a5 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(0x30,0);
  }
  if (DAT_06b77dad == '\0') {
    FUN_02d6084c(PTR_DAT_0676c428);
    DAT_06b77dad = '\x01';
  }
  puVar1 = PTR_DAT_06777060;
  if (param_1 == 0) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05006520 with catch @ 05006528
                        */
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
                    /* try { // try from 05006514 to 05106517 has its CatchHandler @ 05006534 */
                    /* try { // try from 05006518 to 0510651f has its CatchHandler @ 0500652c */
    uVar2 = FUN_04e8a8a0(param_1,0);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 05006520 to 05106523 has its CatchHandler @ 05006528 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05006474 with catch @ 05006524
                       try { // try from 05006524 to 05106557 has its CatchHandler @ 05006374 */
  }
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05006518 with catch @ 0500652c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05006478 with catch @ 05006530
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05006514 with catch @ 05006534
                        */
  uVar3 = FUN_04f6d5ec(param_2,0);
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05006498 with catch @ 05006538
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 050064bc with catch @ 0500653c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05006454 with catch @ 05006540
                        */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
                    /* try { // try from 05006558 to 0510655b has its CatchHandler @ 0500657c */
                    /* try { // try from 0500655c to 05106583 has its CatchHandler @ 05006374 */
  FUN_050062c0(uVar2,uVar4,7,uVar3);
  return;
}


