/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameAssemblyFormat
ENTRY_POINT: 0744da58
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameAssemblyFormat
               (long param_1,long param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_074f9228(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03f786f8(PTR_DAT_0910e1d8);
    uVar2 = thunk_FUN_03f4e68c();
    uVar1 = thunk_FUN_03f786f8(PTR_DAT_09122aa0);
    FUN_0740f0b8(uVar2,uVar1,0);
  }
  else {
    if (-1 < param_3) {
      uVar1 = FUN_03f18fb0(param_2,param_3,param_4 & 1);
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      thunk_FUN_03f86000();
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x78);
      thunk_FUN_03f86000((undefined8 *)(param_1 + 0x18));
      return;
    }
    thunk_FUN_03f786f8(PTR_DAT_0910bbd0);
    uVar2 = thunk_FUN_03f4e68c();
    uVar1 = thunk_FUN_03f786f8(PTR_DAT_091281c8);
    uVar3 = thunk_FUN_03f786f8(PTR_DAT_09131268);
    FUN_07416834(uVar2,uVar1,uVar3,0);
  }
  uVar1 = thunk_FUN_03f786f8(PTR_DAT_09131278);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar2,uVar1);
}


