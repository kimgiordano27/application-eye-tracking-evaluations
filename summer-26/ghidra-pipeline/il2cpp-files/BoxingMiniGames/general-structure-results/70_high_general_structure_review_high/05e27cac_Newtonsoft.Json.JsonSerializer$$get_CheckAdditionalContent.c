/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_CheckAdditionalContent
ENTRY_POINT: 05e27cac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent(void)

{
  uint uVar1;
  ushort uVar2;
  bool in_ZR;
  ulong uVar3;
  ulong uVar4;
  ulong in_x9;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  uVar1 = *unaff_x19;
  uVar4 = 0xfffffffffffffff;
  if (!in_ZR) {
    uVar4 = in_x9;
  }
  if (unaff_w21 == 10) {
    uVar4 = 0x1999999999999999;
  }
  if ((int)uVar1 < (int)unaff_w20) {
    puVar5 = (ushort *)(unaff_x22 + (long)(int)uVar1 * 2);
    lVar6 = (long)(int)unaff_w20 - (long)(int)uVar1;
    uVar7 = 0;
    do {
      if (unaff_w20 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      uVar2 = *puVar5;
      uVar8 = uVar2 - 0x30;
      if (9 < uVar8) {
        uVar8 = (uint)uVar2;
        if (uVar2 - 0x41 < 0x1a) {
          uVar8 = uVar8 - 0x37;
        }
        else {
          if (0x19 < uVar8 - 0x61) {
            return uVar7;
          }
          uVar8 = uVar8 - 0x57;
        }
      }
      if (unaff_w21 <= (int)uVar8) {
        return uVar7;
      }
      if ((uVar4 < uVar7) || (uVar3 = uVar7 * (long)unaff_w21 + (ulong)uVar8, uVar3 < uVar7)) {
        FUN_05e28aa0();
        uVar4 = FUN_05e27da0();
        return uVar4;
      }
      uVar1 = uVar1 + 1;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 1;
      *unaff_x19 = uVar1;
      uVar7 = uVar3;
    } while (lVar6 != 0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


