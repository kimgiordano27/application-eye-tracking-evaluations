/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 05abd7ac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  
  puVar1 = PTR_DAT_06f744f8;
  if ((*(byte *)(unaff_x21 + 0x9f) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f744f8);
    *(undefined1 *)(unaff_x21 + 0x9f) = 1;
  }
  FUN_05b32c00(param_1,0);
  lVar3 = *(long *)puVar1;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_02feb320(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
                    /* try { // try from 05abd820 to 05bbd847 has its CatchHandler @ 05abd9b4 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar2 + 0xb8);
  thunk_FUN_03048534((undefined8 *)(param_1 + 0x10));
  return;
}


