/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MissingMemberHandling
ENTRY_POINT: 06762f00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling(long param_1)

{
  char cVar1;
  ulong uVar2;
  char *unaff_x19;
  uint unaff_w20;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_0674da68();
  if ((uVar2 & 1) != 0) {
    cVar1 = (char)((ulong)in_stack_00000008 >> 0x20);
    if ((unaff_w20 >> 9 & 1) == 0) {
      if (in_stack_00000008._4_4_ == (int)cVar1) {
LAB_06762f4c:
        *unaff_x19 = cVar1;
        return 1;
      }
    }
    else if (in_stack_00000008._4_4_ < 0x100) goto LAB_06762f4c;
  }
  return 0;
}


