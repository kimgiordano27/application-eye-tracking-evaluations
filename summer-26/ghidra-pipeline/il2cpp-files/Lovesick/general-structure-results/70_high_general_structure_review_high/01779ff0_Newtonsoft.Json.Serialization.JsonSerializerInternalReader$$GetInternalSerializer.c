/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 01779ff0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  long unaff_x19;
  short *unaff_x20;
  int unaff_w22;
  int iVar5;
  int unaff_w26;
  
  FUN_0161af98();
  puVar4 = StringLiteral_4591;
  if (0 < unaff_w26 - unaff_w22) {
    iVar5 = (unaff_w26 - unaff_w22) + 1;
    do {
      sVar1 = *unaff_x20;
      sVar3 = 0x30;
      if (sVar1 != 0) {
        unaff_x20 = unaff_x20 + 1;
        sVar3 = sVar1;
      }
      if (DAT_037781dd == '\0') {
        thunk_FUN_00d48444(puVar4);
        DAT_037781dd = '\x01';
      }
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
        if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_0161aa84();
      }
      iVar5 = iVar5 + -1;
    } while (1 < iVar5);
  }
  return;
}


