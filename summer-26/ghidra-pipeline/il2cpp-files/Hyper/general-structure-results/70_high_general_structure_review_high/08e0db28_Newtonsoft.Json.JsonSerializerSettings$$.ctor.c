/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 08e0db28
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


undefined8 Newtonsoft_Json_JsonSerializerSettings___ctor(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x9b8);
  if ((*(byte *)(unaff_x21 + 0xc5c) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac6a9c0);
    FUN_04947ee4(PTR_DAT_0ac6a9c8);
    FUN_04947ee4(PTR_DAT_0ac6a9d0);
    FUN_04947ee4(PTR_DAT_0ac6a9d8);
    FUN_04947ee4(PTR_DAT_0ac6a9e0);
    FUN_04947ee4(PTR_DAT_0ac0cab0);
    FUN_04947ee4(PTR_DAT_0ac6a9e8);
    FUN_04947ee4(PTR_DAT_0ac6a9b8);
    *(undefined1 *)(unaff_x21 + 0xc5c) = 1;
  }
  lVar4 = thunk_FUN_04983f60(*puVar9);
  FUN_08dbf2f0(lVar4,0);
  puVar3 = PTR_DAT_0ac6a9e8;
  puVar2 = PTR_DAT_0ac6a9d0;
  puVar1 = PTR_DAT_0ac0cab0;
  if (lVar4 != 0) {
    puVar9 = (undefined8 *)(lVar4 + 0x10);
    *puVar9 = param_2;
    thunk_FUN_049ee3d8(puVar9,param_2);
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
    FUN_06421e50(uVar5,lVar4,*(undefined8 *)puVar3,0);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    lVar4 = FUN_04a7eb24(*puVar9,0,*(undefined8 *)puVar1);
    puVar3 = PTR_DAT_0ac6a9d8;
    puVar2 = PTR_DAT_0ac6a9c8;
    puVar1 = PTR_DAT_0ac6a9c0;
    if (lVar4 != 0) {
      uVar8 = *(undefined8 *)(lVar4 + 0x78);
      uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6a9e0);
      FUN_0642bfcc(uVar6,uVar5,uVar7,uVar8,*(undefined8 *)puVar3);
      uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
      FUN_06351420(uVar5,uVar6,*(undefined8 *)puVar1);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


