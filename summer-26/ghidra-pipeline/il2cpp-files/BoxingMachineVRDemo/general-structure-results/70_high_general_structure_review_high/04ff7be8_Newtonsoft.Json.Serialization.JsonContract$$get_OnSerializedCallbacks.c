/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 04ff7be8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if ((DAT_06b79107 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067763c8);
    DAT_06b79107 = 1;
  }
  if (-1 < *(char *)(param_1 + 0x24)) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_067763c8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_04ff6790(param_1,uVar2,uVar1,1);
    if ((uVar3 & 1) != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x80;
      return 1;
    }
  }
  FUN_04fff378(param_1,0);
  return 0;
}


