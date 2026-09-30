/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValueAsync
ENTRY_POINT: 08e0e1a4
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


undefined8 Newtonsoft_Json_JsonTextReader__ParsePostValueAsync(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 uVar9;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 *puVar11;
  
  *(undefined1 *)(unaff_x21 + 0xc62) = 1;
  lVar5 = thunk_FUN_04983f60(*unaff_x22);
  FUN_08dbf2f0(lVar5,0);
  puVar4 = PTR_DAT_0ac6aab0;
  puVar3 = PTR_DAT_0ac6aa98;
  puVar2 = PTR_DAT_0ac6aa80;
  puVar1 = PTR_DAT_0ac0cab0;
  if (lVar5 != 0) {
    puVar11 = (undefined8 *)(lVar5 + 0x10);
    *puVar11 = unaff_x20;
    thunk_FUN_049ee3d8(puVar11);
    uVar6 = FUN_04a7eb24(*puVar11,0,*(undefined8 *)puVar3);
    uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
    FUN_06421e50(uVar7,lVar5,*(undefined8 *)puVar4,0);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x90);
    lVar5 = FUN_04a7eb24(*puVar11,0,*(undefined8 *)puVar1);
    puVar3 = PTR_DAT_0ac6aaa8;
    puVar2 = PTR_DAT_0ac6aaa0;
    puVar1 = PTR_DAT_0ac6aa88;
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)(lVar5 + 0xb0);
      uVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6aa90);
      FUN_0642bfcc(uVar8,uVar7,uVar9,uVar10,*(undefined8 *)puVar1);
      uVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_07181a8c(uVar7,uVar6,uVar8,*(undefined8 *)puVar2);
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


