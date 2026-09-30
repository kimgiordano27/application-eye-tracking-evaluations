/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
ENTRY_POINT: 054bcdd0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized(long *param_1)

{
  byte bVar1;
  
  if ((DAT_06dbacfd & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a21a58);
    DAT_06dbacfd = 1;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06a21a58 + 0x130);
    if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a21a58))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(param_1);
    }
    if (param_1[8] != 0) {
      FUN_054545c4(param_1[8],param_1,0,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


