/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteProperty
ENTRY_POINT: 01bc6780
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteProperty
               (long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  FUN_02ebae74(param_1 + 0x28,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (0 < (int)*(ulong *)(param_2 + 0x18)) {
    uVar2 = 0;
    uVar1 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    do {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      FUN_02ec4778(0x3f800000);
      FUN_02ec4b08(param_1 + 0x28,0,0,0);
      uVar1 = (ulong)*(uint *)(param_2 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  return;
}


