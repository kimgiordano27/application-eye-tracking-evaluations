/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 0177a060
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(long param_1)

{
  short sVar1;
  uint uVar2;
  long in_x9;
  int in_w10;
  long unaff_x19;
  short *unaff_x20;
  short unaff_w22;
  int unaff_w23;
  short unaff_w24;
  long unaff_x25;
  undefined1 unaff_w26;
  
  while( true ) {
    *(short *)(in_x9 + param_1 * 2) = unaff_w22;
    *(int *)(unaff_x19 + 0x18) = in_w10;
    while( true ) {
      unaff_w23 = unaff_w23 + -1;
      if (unaff_w23 < 2) {
        return;
      }
      sVar1 = *unaff_x20;
      unaff_w22 = unaff_w24;
      if (sVar1 != 0) {
        unaff_x20 = unaff_x20 + 1;
        unaff_w22 = sVar1;
      }
      if (*(char *)(unaff_x25 + 0x1dd) == '\0') {
        thunk_FUN_00d48444();
        *(undefined1 *)(unaff_x25 + 0x1dd) = unaff_w26;
      }
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      param_1 = (long)(int)uVar2;
      if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) break;
      FUN_0161aa84();
    }
    if (*(uint *)(unaff_x19 + 0x10) <= uVar2) break;
    in_x9 = *(long *)(unaff_x19 + 8);
    in_w10 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


