/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 050090d4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic
          (long param_1,ulong param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_06b791db & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06777300);
    FUN_02d6084c(PTR_DAT_06770f78);
    DAT_06b791db = 1;
  }
  puVar3 = PTR_DAT_06777300;
  puVar2 = PTR_DAT_0675e258;
  uVar5 = (uint)param_2;
  if ((int)uVar5 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar1 = *(undefined2 *)(param_1 + uVar7 * 2);
      if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_04f80ed4(uVar1,0);
      if ((uVar4 & 1) == 0) {
        lVar6 = *(long *)puVar3;
        if (uVar5 < (uint)uVar7) {
          FUN_05027268(0);
        }
        goto LAB_05009190;
      }
      uVar7 = uVar7 + 1;
    } while ((param_2 & 0xffffffff) != uVar7);
    uVar7 = param_2 & 0xffffffff;
  }
  lVar6 = *(long *)puVar3;
LAB_05009190:
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  auVar8._8_4_ = uVar5 - (int)uVar7;
  auVar8._0_8_ = param_1 + (long)(int)uVar7 * 2;
  auVar8._12_4_ = 0;
  return auVar8;
}


