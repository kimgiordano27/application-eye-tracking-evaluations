/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 032a69d8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling(long param_1)

{
  uint in_w8;
  uint in_w9;
  uint in_w10;
  long in_x11;
  uint *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  if ((in_w9 < *(uint *)(param_1 + 0x18)) &&
     (*(uint *)(param_1 + (ulong)in_w9 * 4 + 0x20) =
           (uint)*(byte *)(unaff_x20 + in_x11 + 0x20) << 0x10, in_w9 < *(uint *)(param_1 + 0x18))) {
    if (((uint)((long)(int)in_w10 | 1U) < in_w8) &&
       ((puVar1 = (uint *)(param_1 + (ulong)in_w9 * 4 + 0x20),
        *puVar1 = *puVar1 | (uint)*(byte *)(unaff_x20 + ((long)(int)in_w10 | 1U) + 0x20) << 8,
        in_w9 < *(uint *)(param_1 + 0x18) && (in_w10 < in_w8)))) {
      puVar1 = (uint *)(param_1 + (ulong)in_w9 * 4 + 0x20);
      *puVar1 = *puVar1 | (uint)*(byte *)(unaff_x20 + (int)in_w10 + 0x20);
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


