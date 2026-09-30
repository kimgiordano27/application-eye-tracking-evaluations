/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_FloatParseHandling
ENTRY_POINT: 08e0d884
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_FloatParseHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x24;
  
  thunk_FUN_049ee3d8();
  lVar6 = *unaff_x24;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *unaff_x24;
  }
  puVar5 = PTR_DAT_0ac6a968;
  puVar4 = PTR_DAT_0ac6a960;
  puVar3 = PTR_DAT_0ac6a958;
  puVar2 = PTR_DAT_0ac6a948;
  puVar1 = PTR_DAT_0ac6a940;
  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
  lVar10 = puVar9[2];
  if (lVar10 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      puVar9 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6a950);
    FUN_063d4f5c(lVar10,uVar11,*(undefined8 *)PTR_DAT_0ac6a970,0);
    plVar7 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *plVar7 = lVar10;
    thunk_FUN_049ee3d8(plVar7,lVar10);
  }
  uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
  FUN_06421e50();
  uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar5);
  FUN_0717ef20(uVar8,lVar10,uVar11,*(undefined8 *)puVar4);
  uVar11 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
  FUN_06351420(uVar11,uVar8,*(undefined8 *)puVar1);
  return uVar11;
}


