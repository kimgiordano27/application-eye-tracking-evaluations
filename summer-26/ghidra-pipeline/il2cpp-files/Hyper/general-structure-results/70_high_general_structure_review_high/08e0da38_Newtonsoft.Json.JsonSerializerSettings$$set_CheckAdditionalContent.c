/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_CheckAdditionalContent
ENTRY_POINT: 08e0da38
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  
  lVar7 = thunk_FUN_04983f60(*unaff_x22);
  FUN_08dbf2f0(lVar7,0);
  puVar6 = PTR_DAT_0ac6a9b0;
  puVar5 = PTR_DAT_0ac6a9a8;
  puVar4 = PTR_DAT_0ac6a9a0;
  puVar3 = PTR_DAT_0ac6a998;
  puVar2 = PTR_DAT_0ac6a990;
  puVar1 = PTR_DAT_0ac6a988;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x10) = unaff_x20;
    thunk_FUN_049ee3d8();
    uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
    FUN_06427d0c(uVar8,lVar7,*(undefined8 *)puVar6,0);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar5);
    FUN_0642c6ac(uVar9,uVar8,uVar10,0,*(undefined8 *)puVar4);
    uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
    FUN_06351420(uVar8,uVar9,*(undefined8 *)puVar1);
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


