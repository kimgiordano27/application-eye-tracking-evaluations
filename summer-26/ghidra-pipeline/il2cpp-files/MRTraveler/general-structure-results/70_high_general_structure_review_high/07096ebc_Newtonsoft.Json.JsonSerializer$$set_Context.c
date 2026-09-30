/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Context
ENTRY_POINT: 07096ebc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializer__set_Context
          (undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((DAT_0941bdde & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea2830);
    DAT_0941bdde = 1;
  }
  puVar1 = PTR_DAT_08ea2830;
  if ((param_2 == 0) || (param_3 == 0)) {
    puVar1 = PTR_DAT_08e806f0;
    if (param_2 != 0) {
      puVar1 = PTR_DAT_08ea28a0;
    }
    uVar3 = thunk_FUN_03ce5214(puVar1);
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e9c728);
    FUN_070660f4(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_03ce5214(PTR_DAT_08ea28a8);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,uVar3);
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0) {
      if (param_4 == 0x40000000) {
        uVar6 = 4;
      }
      else if (param_4 == 0x10000000) {
        uVar6 = 5;
      }
      else {
        if (0x1f < param_4) {
          thunk_FUN_03ce5214(PTR_DAT_08e76350);
          uVar3 = thunk_FUN_03cf5234();
          uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e9d680);
          uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e82ec0);
          FUN_0705df24(uVar3,uVar4,uVar5,0);
          uVar4 = thunk_FUN_03ce5214(PTR_DAT_08ea28a8);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar3,uVar4);
        }
        if (*(int *)(*(long *)PTR_DAT_08ea2830 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if (DAT_0941be42 == '\0') {
          FUN_03c8f898(PTR_DAT_08ea2830);
          DAT_0941be42 = '\x01';
        }
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar2 = *(long *)puVar1;
        }
        if (**(char **)(lVar2 + 0xb8) == '\0') {
          uVar3 = FUN_070970c4(param_1,param_2,param_3,param_4);
          return uVar3;
        }
        uVar6 = param_4 & 1 | 4;
      }
      uVar3 = FUN_06f736f4(param_2,param_3,uVar6,0);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


