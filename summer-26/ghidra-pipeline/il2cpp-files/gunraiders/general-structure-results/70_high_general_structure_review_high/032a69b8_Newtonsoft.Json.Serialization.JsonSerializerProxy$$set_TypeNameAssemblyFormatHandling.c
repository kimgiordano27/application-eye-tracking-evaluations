/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 032a69b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormatHandling
               (long param_1)

{
  bool in_ZR;
  uint in_w8;
  uint in_w9;
  uint in_w10;
  int in_w11;
  uint *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (in_ZR) {
    if (param_1 == 0) {
LAB_032a6a84:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    if (in_w11 != 3) goto LAB_032a6a6c;
    if (in_w8 <= (uint)((long)(int)in_w10 | 2U)) goto LAB_032a6a80;
    if (param_1 == 0) goto LAB_032a6a84;
    if (*(uint *)(param_1 + 0x18) <= in_w9) goto LAB_032a6a80;
    *(uint *)(param_1 + (ulong)in_w9 * 4 + 0x20) =
         (uint)*(byte *)(unaff_x20 + ((long)(int)in_w10 | 2U) + 0x20) << 0x10;
  }
  if ((((*(uint *)(param_1 + 0x18) <= in_w9) || (in_w8 <= (uint)((long)(int)in_w10 | 1U))) ||
      (puVar1 = (uint *)(param_1 + (ulong)in_w9 * 4 + 0x20),
      *puVar1 = *puVar1 | (uint)*(byte *)(unaff_x20 + ((long)(int)in_w10 | 1U) + 0x20) << 8,
      *(uint *)(param_1 + 0x18) <= in_w9)) || (in_w8 <= in_w10)) {
LAB_032a6a80:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  puVar1 = (uint *)(param_1 + (ulong)in_w9 * 4 + 0x20);
  *puVar1 = *puVar1 | (uint)*(byte *)(unaff_x20 + (int)in_w10 + 0x20);
LAB_032a6a6c:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}


