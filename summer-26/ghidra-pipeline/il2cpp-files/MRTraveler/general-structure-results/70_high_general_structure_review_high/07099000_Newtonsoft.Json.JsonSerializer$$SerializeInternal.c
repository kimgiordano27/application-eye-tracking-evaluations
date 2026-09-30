/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SerializeInternal
ENTRY_POINT: 07099000
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_JsonSerializer__SerializeInternal
                (long param_1,uint param_2,long param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_4;
  if ((int)param_4 <= (int)param_2) {
    uVar1 = param_2;
  }
  bVar4 = 0 < (int)param_2;
  bVar5 = 0 < (int)param_4;
  uVar6 = 0;
  if (((0 < (int)param_4) && (uVar1 != 0)) && (0 < (int)param_2)) {
    uVar7 = 0;
    do {
      uVar6 = FUN_03cf3840(*(undefined2 *)(param_1 + uVar7 * 2),*(undefined2 *)(param_3 + uVar7 * 2)
                           ,param_5);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar6 = uVar7 + 1;
      bVar4 = uVar6 < param_2;
      bVar5 = uVar6 < param_4;
    } while (((bVar5) && ((ulong)uVar1 - 1 != uVar7)) && (uVar7 = uVar6, uVar6 < param_2));
  }
  if ((uint)uVar6 != uVar1) {
    if (bVar4) {
      if (bVar5) {
        uVar2 = *(undefined2 *)(param_3 + (uVar6 & 0xffffffff) * 2);
        uVar3 = *(undefined2 *)(param_1 + (uVar6 & 0xffffffff) * 2);
        goto LAB_03cf3800;
      }
      uVar6 = 1;
    }
    else {
      uVar6 = (ulong)-(uint)bVar5;
    }
    return uVar6;
  }
  uVar2 = *(undefined2 *)(param_3 + (long)(int)(uVar1 - 1) * 2);
  uVar3 = *(undefined2 *)(param_1 + (long)(int)(uVar1 - 1) * 2);
LAB_03cf3800:
  uVar6 = FUN_03cf3840(uVar3,uVar2,param_5);
  return uVar6;
}


