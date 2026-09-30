/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
ENTRY_POINT: 05ab495c
PROGRAM: ZombiesMRFree-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint in_w8;
  undefined8 uVar3;
  
  if (in_w8 < param_1) {
    if (param_1 == 0x5c3ae3b6) {
      uVar1 = thunk_FUN_05971620();
      if ((uVar1 & 1) == 0) goto LAB_05ab668c;
      uVar3 = 0x40d;
    }
    else {
      if ((param_1 != 0x5c7ad43c) || (uVar1 = thunk_FUN_05971620(), (uVar1 & 1) == 0))
      goto LAB_05ab668c;
      uVar3 = 0x48c;
    }
  }
  else if (param_1 == 0x5c22ded0) {
    uVar1 = thunk_FUN_05971620();
    if ((uVar1 & 1) == 0) goto LAB_05ab668c;
    uVar3 = 0x40b;
  }
  else {
    if ((param_1 != 0x5c2e17c3) || (uVar1 = thunk_FUN_05971620(), (uVar1 & 1) == 0)) {
LAB_05ab668c:
      thunk_FUN_03037804(PTR_DAT_06fac270);
      uVar3 = FUN_059687dc();
      thunk_FUN_03037804(PTR_DAT_06f6d548);
      uVar2 = thunk_FUN_0301080c();
      FUN_05af1770(uVar2,uVar3,0);
      uVar3 = thunk_FUN_03037804(PTR_DAT_06fac278);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar2,uVar3);
    }
    uVar3 = 0x481;
  }
  uVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6dbb8);
  FUN_05ab32ac(uVar2,uVar3,1,0);
  return uVar2;
}


