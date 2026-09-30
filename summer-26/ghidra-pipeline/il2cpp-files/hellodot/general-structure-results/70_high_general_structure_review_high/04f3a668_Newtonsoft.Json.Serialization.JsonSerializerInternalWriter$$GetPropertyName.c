/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
ENTRY_POINT: 04f3a668
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  int in_w8;
  int iVar5;
  ulong unaff_x20;
  ulong uVar6;
  int unaff_w21;
  long unaff_x22;
  long unaff_x25;
  long unaff_x29;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  psVar4 = (short *)(unaff_x22 + 0x14);
  if ((-1 < unaff_w21 + -1) || ((int)unaff_x20 != 0)) {
    iVar5 = unaff_w21 + -2;
    do {
      do {
        uVar3 = (uint)unaff_x20;
        uVar6 = (unaff_x20 & 0xffffffff) / 10;
        psVar4 = psVar4 + -1;
        *psVar4 = (short)unaff_x20 + (short)((unaff_x20 & 0xffffffff) / 10) * -10 + 0x30;
        iVar2 = iVar5 + -1;
        bVar1 = -1 < iVar5;
        unaff_x20 = uVar6;
        iVar5 = iVar2;
      } while (bVar1);
    } while (9 < uVar3);
  }
  FUN_04dd585c();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


