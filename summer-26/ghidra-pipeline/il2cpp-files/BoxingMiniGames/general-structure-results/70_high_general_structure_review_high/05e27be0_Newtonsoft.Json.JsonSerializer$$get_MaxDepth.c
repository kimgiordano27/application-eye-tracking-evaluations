/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_MaxDepth
ENTRY_POINT: 05e27be0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__get_MaxDepth
                (int param_1,long param_2,uint param_3,uint *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  uint uVar8;
  
  if ((DAT_07eded1d & 1) == 0) {
    FUN_03642964(PTR_DAT_07a0b588);
    DAT_07eded1d = 1;
  }
  if ((param_1 == 10) && ((param_5 & 1) == 0)) {
    uVar3 = *param_4;
    if ((int)param_3 <= (int)uVar3) {
      return 0;
    }
    uVar5 = 0;
    puVar6 = (ushort *)(param_2 + (long)(int)uVar3 * 2);
    lVar7 = (long)(int)param_3 - (long)(int)uVar3;
    do {
      if (param_3 <= uVar3) goto LAB_05e27d80;
      uVar4 = *puVar6;
      if (9 < uVar4 - 0x30) break;
      if (0xccccccccccccccc < uVar5) goto LAB_05e27c94;
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 1;
      *param_4 = uVar3;
      uVar5 = uVar5 * 10 + (ulong)(uVar4 - 0x30);
    } while (lVar7 != 0);
    if (uVar5 < 0x8000000000000001) {
      return uVar5;
    }
LAB_05e27c94:
    FUN_05e28a58();
  }
  uVar5 = 0x1fffffffffffffff;
  if (param_1 != 8) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar3 = *param_4;
  uVar2 = 0xfffffffffffffff;
  if (param_1 != 0x10) {
    uVar2 = uVar5;
  }
  if (param_1 == 10) {
    uVar2 = 0x1999999999999999;
  }
  if ((int)param_3 <= (int)uVar3) {
    return 0;
  }
  puVar6 = (ushort *)(param_2 + (long)(int)uVar3 * 2);
  lVar7 = (long)(int)param_3 - (long)(int)uVar3;
  uVar5 = 0;
  while (uVar3 < param_3) {
    uVar4 = *puVar6;
    uVar8 = uVar4 - 0x30;
    if (9 < uVar8) {
      uVar8 = (uint)uVar4;
      if (uVar4 - 0x41 < 0x1a) {
        uVar8 = uVar8 - 0x37;
      }
      else {
        if (0x19 < uVar8 - 0x61) {
          return uVar5;
        }
        uVar8 = uVar8 - 0x57;
      }
    }
    if (param_1 <= (int)uVar8) {
      return uVar5;
    }
    if ((uVar2 < uVar5) || (uVar1 = uVar5 * (long)param_1 + (ulong)uVar8, uVar1 < uVar5)) {
      FUN_05e28aa0();
      uVar5 = FUN_05e27da0();
      return uVar5;
    }
    uVar3 = uVar3 + 1;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
    *param_4 = uVar3;
    uVar5 = uVar1;
    if (lVar7 == 0) {
      return uVar1;
    }
  }
LAB_05e27d80:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


