/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DateFormatString
ENTRY_POINT: 05e27b50
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_DateFormatString(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_079f4610;
  uVar4 = *unaff_x19;
  uVar5 = uVar4;
  if ((int)uVar4 < (int)unaff_w20) {
    puVar6 = (undefined2 *)(unaff_x21 + (long)(int)uVar4 * 2);
    lVar7 = (long)(int)unaff_w20 - (long)(int)uVar4;
    do {
      if (unaff_w20 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      uVar1 = *puVar6;
      if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar3 = FUN_05d8835c(uVar1,0);
      uVar5 = uVar4;
      if ((uVar3 & 1) == 0) break;
      lVar7 = lVar7 + -1;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
      uVar5 = unaff_w20;
    } while (lVar7 != 0);
  }
  *unaff_x19 = uVar5;
  return;
}


