/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldDeserialize
ENTRY_POINT: 05ddafb4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__get_ShouldDeserialize
               (undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uStack0000000000000018;
  
  uStack0000000000000018 = param_3;
  if ((DAT_07a453c1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075e3878);
    FUN_031f20f4(PTR_DAT_075e3110);
    FUN_031f20f4(PTR_DAT_075e3440);
    DAT_07a453c1 = 1;
  }
  FUN_05e4cd08(*param_4,0);
  if (*(int *)(param_4 + 1) < 0) {
    FUN_05e21fe0(0);
  }
  FUN_05010750();
  if ((*(byte *)((long)param_4 + 0x1c) & 1) == 0) {
    if (param_3 <= *(uint *)(param_4 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    *(undefined2 *)(param_2 + (long)(int)*(uint *)(param_4 + 1) * 2) = 0x2f;
  }
  puVar1 = PTR_DAT_075e3110;
  FUN_05e4cd08(param_4[2],0);
  if (*(int *)(param_4 + 3) < 0) {
    FUN_05e21fe0(0);
  }
  lVar2 = *(long *)puVar1;
  if (uStack0000000000000018 < *(int *)(param_4 + 1) + (~(uint)*(byte *)((long)param_4 + 0x1c) & 1))
  {
    FUN_05e21fe0(0);
  }
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_05010750();
  return;
}


