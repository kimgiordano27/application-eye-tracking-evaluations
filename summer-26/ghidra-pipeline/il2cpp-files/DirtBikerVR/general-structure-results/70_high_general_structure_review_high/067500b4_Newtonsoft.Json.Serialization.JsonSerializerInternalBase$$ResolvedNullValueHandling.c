/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ResolvedNullValueHandling
ENTRY_POINT: 067500b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ResolvedNullValueHandling
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
                    /* try { // try from 067500c4 to 068500c7 has its CatchHandler @ 067500d0 */
                    /* catch() { ... } // from try @ 067500c4 with catch @ 067500d0 */
                    /* try { // try from 067500d4 to 068500db has its CatchHandler @ 067500e4 */
  if ((DAT_0897bac5 & 1) == 0) {
                    /* try { // try from 067500dc to 068500e7 has its CatchHandler @ 0674fd94 */
    FUN_03a8a718(PTR_DAT_084a5b08);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 067500d4 with catch @ 067500e4
                        */
    DAT_0897bac5 = 1;
  }
  FUN_066d15d8(param_2,0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06762bd8(0x30,0);
  }
  if (DAT_089760b7 == '\0') {
    FUN_03a8a718(PTR_DAT_08493e18);
    DAT_089760b7 = '\x01';
  }
  puVar1 = PTR_DAT_084a5b08;
  if (param_1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_065cab58(param_1,0);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  uVar3 = FUN_066d0fa4(param_3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar1);
  }
  Newtonsoft_Json_Serialization_JsonProperty__set_ItemReferenceLoopHandling
            (uVar2,uVar4,param_2,uVar3);
  return;
}


