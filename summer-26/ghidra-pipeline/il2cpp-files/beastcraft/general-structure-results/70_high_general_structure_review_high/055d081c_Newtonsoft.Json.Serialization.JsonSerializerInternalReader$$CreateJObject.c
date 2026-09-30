/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJObject
ENTRY_POINT: 055d081c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJObject
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x23;
  undefined8 uVar3;
  long *unaff_x25;
  
  if (unaff_x23 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      param_1 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar3 = *param_1;
    uVar1 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a83240);
    FUN_05288cbc(uVar1,uVar3,*(undefined8 *)PTR_DAT_06a83268,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x28);
    *puVar2 = uVar1;
    thunk_FUN_02ee2be8(puVar2,uVar1);
  }
  FUN_036e8540();
  return;
}


