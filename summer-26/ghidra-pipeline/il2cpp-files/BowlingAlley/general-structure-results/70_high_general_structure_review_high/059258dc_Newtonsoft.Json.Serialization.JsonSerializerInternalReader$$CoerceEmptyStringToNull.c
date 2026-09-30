/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 059258dc
PROGRAM: BowlingAlley-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull
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
  
  if ((DAT_076d53a1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727fa20);
    thunk_FUN_032e1da0(PTR_DAT_07296c98);
    thunk_FUN_032e1da0(PTR_DAT_07290a70);
    DAT_076d53a1 = 1;
  }
  puVar3 = PTR_DAT_07296c98;
  puVar2 = PTR_DAT_0727fa20;
  uVar5 = (uint)param_2;
  if ((int)uVar5 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar1 = *(undefined2 *)(param_1 + uVar7 * 2);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar4 = FUN_058a1fe4(uVar1,0);
      if ((uVar4 & 1) == 0) {
        lVar6 = *(long *)puVar3;
        if (uVar5 < (uint)uVar7) {
          FUN_05943e6c(0);
        }
        goto LAB_05925994;
      }
      uVar7 = uVar7 + 1;
    } while ((param_2 & 0xffffffff) != uVar7);
    uVar7 = param_2 & 0xffffffff;
  }
  lVar6 = *(long *)puVar3;
LAB_05925994:
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  auVar8._8_4_ = uVar5 - (int)uVar7;
  auVar8._0_8_ = param_1 + (long)(int)uVar7 * 2;
  auVar8._12_4_ = 0;
  return auVar8;
}


