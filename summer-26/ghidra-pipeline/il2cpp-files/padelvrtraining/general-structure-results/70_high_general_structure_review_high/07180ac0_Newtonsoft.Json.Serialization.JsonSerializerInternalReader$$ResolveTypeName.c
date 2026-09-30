/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 07180ac0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  long unaff_x19;
  short *unaff_x20;
  int unaff_w23;
  short unaff_w24;
  long unaff_x25;
  undefined1 unaff_w26;
  
  while( true ) {
    while( true ) {
      unaff_w23 = unaff_w23 + -1;
      if (unaff_w23 < 2) {
        return;
      }
      sVar1 = *unaff_x20;
      sVar3 = unaff_w24;
      if (sVar1 != 0) {
        unaff_x20 = unaff_x20 + 1;
        sVar3 = sVar1;
      }
      if (*(char *)(unaff_x25 + 0x200) == '\0') {
        FUN_03d2d2b0();
        *(undefined1 *)(unaff_x25 + 0x200) = unaff_w26;
      }
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) break;
      FUN_06ff15f4();
    }
    if (*(uint *)(unaff_x19 + 0x10) <= uVar2) break;
    *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
    *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


