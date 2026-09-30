/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MetadataPropertyHandling
ENTRY_POINT: 032a6994
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MetadataPropertyHandling(long param_1)

{
  int iVar1;
  uint in_w8;
  uint in_w9;
  uint *puVar2;
  uint in_w17;
  long unaff_x19;
  long unaff_x20;
  
  iVar1 = in_w8 - in_w17;
  if (iVar1 == 1) {
    if (param_1 == 0) {
LAB_032a6a84:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    if (iVar1 == 2) {
      if (param_1 == 0) goto LAB_032a6a84;
    }
    else {
      if (iVar1 != 3) goto LAB_032a6a6c;
      if (in_w8 <= (uint)((long)(int)in_w17 | 2U)) goto LAB_032a6a80;
      if (param_1 == 0) goto LAB_032a6a84;
      if (*(uint *)(param_1 + 0x18) <= in_w9) goto LAB_032a6a80;
      *(uint *)(param_1 + (ulong)in_w9 * 4 + 0x20) =
           (uint)*(byte *)(unaff_x20 + ((long)(int)in_w17 | 2U) + 0x20) << 0x10;
    }
    if ((*(uint *)(param_1 + 0x18) <= in_w9) || (in_w8 <= (uint)((long)(int)in_w17 | 1U)))
    goto LAB_032a6a80;
    puVar2 = (uint *)(param_1 + (ulong)in_w9 * 4 + 0x20);
    *puVar2 = *puVar2 | (uint)*(byte *)(unaff_x20 + ((long)(int)in_w17 | 1U) + 0x20) << 8;
  }
  if ((in_w9 < *(uint *)(param_1 + 0x18)) && (in_w17 < in_w8)) {
    puVar2 = (uint *)(param_1 + (ulong)in_w9 * 4 + 0x20);
    *puVar2 = *puVar2 | (uint)*(byte *)(unaff_x20 + (int)in_w17 + 0x20);
LAB_032a6a6c:
    *(undefined4 *)(unaff_x19 + 0x1c) = 0;
    return;
  }
LAB_032a6a80:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


