/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 03296c28
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  
  if (in_w8 == 0) {
    FUN_01c54a38(param_1,*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (param_2 != 0) {
      thunk_FUN_01c21c38();
      *(long *)(param_1 + 0x38) = param_2;
      return;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar1 = thunk_FUN_01c496e0();
    uVar2 = thunk_FUN_01c273e8(
                              Method_Oculus_Platform_Models_DeserializableList<Room>_get_HasNextPage__
                              );
    FUN_0323fc78(uVar1,uVar2,0);
  }
  else {
    thunk_FUN_01c273e8(PTR_DAT_04237cd0);
    uVar1 = thunk_FUN_01c496e0();
    uVar2 = thunk_FUN_01c273e8(
                              Method_Oculus_Platform_Models_DeserializableList<Purchase>_get_HasNextPage__
                              );
    FUN_032d1aa4(uVar1,uVar2,0);
  }
  uVar2 = thunk_FUN_01c273e8(Method_Oculus_Platform_Models_DeserializableList<Room>_get_NextUrl__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


