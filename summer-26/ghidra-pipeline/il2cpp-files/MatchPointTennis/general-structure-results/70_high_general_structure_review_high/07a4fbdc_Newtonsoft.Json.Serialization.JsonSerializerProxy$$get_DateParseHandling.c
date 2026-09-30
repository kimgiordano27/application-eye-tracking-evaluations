/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DateParseHandling
ENTRY_POINT: 07a4fbdc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DateParseHandling
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_09f40bf0;
  if ((DAT_0a5251ce & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f40bf0);
    DAT_0a5251ce = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_07a3ac44(param_1,param_2,param_3,param_4,0);
  if ((param_3 >> 9 & 1) == 0) {
    if (uVar2 == (int)(char)uVar2) {
      return;
    }
  }
  else if (uVar2 < 0x100) {
    return;
  }
  thunk_FUN_044adef4(PTR_DAT_09f255e0);
  uVar3 = thunk_FUN_0448520c();
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09f40d30);
  FUN_07a4d218(uVar3,uVar4);
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09f44ff0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar3,uVar4);
}


