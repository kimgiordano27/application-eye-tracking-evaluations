/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 04d47f5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails
               (long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if ((DAT_066c86ce & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06332648);
    DAT_066c86ce = 1;
  }
                    /* try { // try from 04d47f94 to 04e47faf has its CatchHandler @ 04d48b54 */
  if (((param_1 == (long *)0x0) || (*param_1 != *(long *)PTR_DAT_06332648)) ||
     ((char)param_1[3] == '\0')) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar1 = thunk_FUN_02b79644();
    puVar3 = PTR_DAT_06332650;
                    /* try { // try from 04d47fec to 04e47ff7 has its CatchHandler @ 04d48b4c */
  }
  else {
    if ((char)param_1[6] == '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
      if (param_1[5] != 0) {
        FUN_04ca82d4(param_1[5],0);
        return;
      }
      return;
    }
                    /* try { // try from 04d48000 to 04e4800b has its CatchHandler @ 04d48abc */
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar1 = thunk_FUN_02b79644();
                    /* try { // try from 04d4800c to 04e48087 has its CatchHandler @ 04d46d44 */
    puVar3 = PTR_DAT_06332668;
  }
  uVar2 = thunk_FUN_02ba3594(puVar3);
  FUN_04cf4a4c(uVar1,uVar2,0);
  uVar2 = thunk_FUN_02ba3594(PTR_DAT_06332670);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,uVar2);
}


