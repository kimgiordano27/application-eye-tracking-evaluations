/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 0717a518
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary
          (ulong param_1,long param_2,ulong param_3)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0ff0);
    FUN_03d2d2b0(PTR_DAT_091dad68);
    FUN_03d2d2b0(PTR_DAT_091dad78);
    *(undefined1 *)(unaff_x21 + 0xfbc) = 1;
  }
  puVar3 = PTR_DAT_091dad68;
  puVar2 = PTR_DAT_091a0ff0;
  uVar5 = (uint)param_3;
  if ((int)uVar5 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar1 = *(undefined2 *)(param_2 + uVar7 * 2);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      uVar4 = FUN_070cf01c(uVar1,0);
      if ((uVar4 & 1) == 0) {
        lVar6 = *(long *)puVar3;
        if (uVar5 < (uint)uVar7) {
          FUN_0719919c(0);
        }
        goto LAB_0717a5c8;
      }
      uVar7 = uVar7 + 1;
    } while ((param_3 & 0xffffffff) != uVar7);
    uVar7 = param_3 & 0xffffffff;
  }
  lVar6 = *(long *)puVar3;
LAB_0717a5c8:
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  auVar8._8_4_ = uVar5 - (int)uVar7;
  auVar8._0_8_ = param_2 + (long)(int)uVar7 * 2;
  auVar8._12_4_ = 0;
  return auVar8;
}


