/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Culture
ENTRY_POINT: 05e27b74
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


void Newtonsoft_Json_JsonSerializer__get_Culture(void)

{
  undefined2 uVar1;
  ulong uVar2;
  uint *unaff_x19;
  uint unaff_w20;
  uint unaff_w22;
  uint uVar3;
  undefined2 *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  do {
    if (unaff_w20 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar1 = *unaff_x23;
    if (*(int *)(*(long *)(unaff_x24 + 0x88) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar2 = FUN_05d8835c(uVar1,0);
    uVar3 = unaff_w22;
    if ((uVar2 & 1) == 0) break;
    unaff_x25 = unaff_x25 + -1;
    unaff_w22 = unaff_w22 + 1;
    unaff_x23 = unaff_x23 + 1;
    uVar3 = unaff_w20;
  } while (unaff_x25 != 0);
  *unaff_x19 = uVar3;
  return;
}


