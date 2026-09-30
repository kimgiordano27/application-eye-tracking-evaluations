/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParsePostValueAsync>d__4$$MoveNext
ENTRY_POINT: 058cc51c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonTextReader_<ParsePostValueAsync>d__4__MoveNext(void)

{
  ushort uVar1;
  int *unaff_x19;
  int unaff_w20;
  int *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  
  do {
    uVar1 = FUN_058cc634();
    if (9 < (ushort)(uVar1 - 0x30)) {
      unaff_w23 = unaff_w24;
      if (0 < *(int *)(unaff_x22 + 0x10)) {
        *(int *)(unaff_x22 + 0x10) = *(int *)(unaff_x22 + 0x10) + -1;
      }
      break;
    }
    unaff_w24 = unaff_w24 + 1;
    unaff_w26 = unaff_w26 * unaff_w27 + (uint)uVar1 + -0x30;
    if (unaff_w26 == 0) {
      unaff_w25 = unaff_w25 + 1;
    }
  } while (unaff_w23 != unaff_w24);
  *unaff_x21 = unaff_w25;
  *unaff_x19 = unaff_w26;
  return unaff_w20 <= unaff_w23;
}


