/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 08e0dce0
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 *unaff_x22;
  undefined8 *puVar9;
  
  FUN_04947ee4(PTR_DAT_0ac6aa08);
  FUN_04947ee4(PTR_DAT_0ac6aa10);
  FUN_04947ee4(PTR_DAT_0ac6aa18);
  FUN_04947ee4(PTR_DAT_0ac0cab0);
  FUN_04947ee4(PTR_DAT_0ac6aa20);
  FUN_04947ee4(PTR_DAT_0ac6a9f0);
  *(undefined1 *)(unaff_x21 + 0xc5d) = 1;
  lVar4 = thunk_FUN_04983f60(*unaff_x22);
  FUN_08dbf2f0(lVar4,0);
  puVar3 = PTR_DAT_0ac6aa20;
  puVar2 = PTR_DAT_0ac6aa08;
  puVar1 = PTR_DAT_0ac0cab0;
  if (lVar4 != 0) {
    puVar9 = (undefined8 *)(lVar4 + 0x10);
    *puVar9 = unaff_x20;
    thunk_FUN_049ee3d8(puVar9);
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
    FUN_06427d0c(uVar5,lVar4,*(undefined8 *)puVar3,0);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
    lVar4 = FUN_04a7eb24(*puVar9,0,*(undefined8 *)puVar1);
    puVar3 = PTR_DAT_0ac6aa10;
    puVar2 = PTR_DAT_0ac6aa00;
    puVar1 = PTR_DAT_0ac6a9f8;
    if (lVar4 != 0) {
      uVar8 = *(undefined8 *)(lVar4 + 0xa0);
      uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6aa18);
      FUN_0642c6ac(uVar6,uVar5,uVar7,uVar8,*(undefined8 *)puVar3);
      uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
      FUN_06351420(uVar5,uVar6,*(undefined8 *)puVar1);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


