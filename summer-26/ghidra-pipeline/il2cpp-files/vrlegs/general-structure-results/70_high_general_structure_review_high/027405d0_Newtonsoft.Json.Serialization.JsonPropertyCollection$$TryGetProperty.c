/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonPropertyCollection$$TryGetProperty
ENTRY_POINT: 027405d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Serialization_JsonPropertyCollection__TryGetProperty
               (long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  if ((DAT_04124998 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc03b8);
    FUN_01ab69ac(PTR_DAT_03cf5ce8);
    DAT_04124998 = 1;
  }
  puVar6 = PTR_DAT_03cc03b8;
  if (param_1 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfa138);
    FUN_026a44fc(uVar4,uVar3,0);
  }
  else {
    if ((int)param_3 < 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cc17d0);
      puVar6 = PTR_DAT_03cd75d8;
    }
    else if ((int)param_2 < 0) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbe010);
      puVar6 = PTR_DAT_03cf03a8;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x18);
      if ((int)param_2 <= (int)(uVar1 - param_3)) {
        if ((param_2 <= uVar1) && (param_3 <= uVar1 - param_2)) {
          lVar2 = *(long *)(*(long *)PTR_DAT_03cf5ce8 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01a46ff8();
          }
          uVar3 = FUN_0200257c(param_1 + 0x20,param_2,
                               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28));
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar6);
          }
          Newtonsoft_Json_Serialization_JsonProperty__get_ShouldSerialize(uVar3,param_3,param_4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_027916b4(0);
      }
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbe010);
      puVar6 = PTR_DAT_03cf7858;
    }
    uVar5 = thunk_FUN_01a6ca08(puVar6);
    FUN_026ade84(uVar4,uVar3,uVar5,0);
  }
  uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfa150);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4,uVar3);
}


