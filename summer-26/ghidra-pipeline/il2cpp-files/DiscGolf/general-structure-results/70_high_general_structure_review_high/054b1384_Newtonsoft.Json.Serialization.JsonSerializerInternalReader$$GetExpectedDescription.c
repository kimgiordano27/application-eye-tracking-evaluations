/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 054b1384
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription
               (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  undefined8 uVar4;
  long *unaff_x25;
  
  if (in_w9 == 0) {
    thunk_FUN_02df485c();
    param_1 = *(undefined8 **)(*unaff_x25 + 0xb8);
  }
  uVar4 = *param_1;
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a215a0);
  FUN_03b814dc(uVar1,uVar4,*(undefined8 *)PTR_DAT_06a21600,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x40);
  *puVar2 = uVar1;
  LeanTween__value(puVar2,uVar1);
  lVar3 = *unaff_x25;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *unaff_x25;
  }
  puVar2 = *(undefined8 **)(lVar3 + 0xb8);
  if (puVar2[9] == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar2 = *(undefined8 **)(*unaff_x25 + 0xb8);
    }
    uVar4 = *puVar2;
    uVar1 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a215f0);
    FUN_03b7ebfc(uVar1,uVar4,*(undefined8 *)PTR_DAT_06a21608,0);
    puVar2 = (undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x48);
    *puVar2 = uVar1;
    LeanTween__value(puVar2,uVar1);
  }
  FUN_03375888();
  return;
}


