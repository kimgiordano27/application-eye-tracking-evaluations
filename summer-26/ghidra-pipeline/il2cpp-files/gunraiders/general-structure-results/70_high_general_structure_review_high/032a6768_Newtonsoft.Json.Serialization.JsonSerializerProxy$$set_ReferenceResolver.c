/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceResolver
ENTRY_POINT: 032a6768
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceResolver(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w21;
  
  *(undefined4 *)(unaff_x19 + 0x18) = unaff_w21;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0 < (long)((ulong)uVar1 << 0x20)) {
    uVar2 = 0;
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      *(uint *)(param_1 + 0x20 + uVar2 * 4) = -(unaff_w20 & 1);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)uVar1);
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}


