/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 055cf650
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 in_w8;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  
  *(undefined1 *)(unaff_x20 + 0x5b4) = in_w8;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar2 = *unaff_x22;
  }
  puVar1 = PTR_DAT_06a7bad0;
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar4 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a7bac8);
    FUN_052785c0(lVar5,uVar6,*(undefined8 *)PTR_DAT_06a831c8,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar3 = lVar5;
    thunk_FUN_02ee2be8(plVar3,lVar5);
  }
  FUN_03958e54(unaff_x19 + 0x20,lVar5,*(undefined8 *)puVar1);
  return;
}


