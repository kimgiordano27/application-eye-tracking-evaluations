/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_StringEscapeHandling
ENTRY_POINT: 04f9ed98
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_StringEscapeHandling(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint in_w8;
  undefined8 uVar3;
  
  if (param_1 == (in_w8 & 0xffff | 0x106c0000)) {
    uVar1 = thunk_FUN_04e8bd3c();
    if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
    uVar3 = 0x46c;
  }
  else {
    if ((param_1 != 0x356f22fc) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0)) {
LAB_04fa0d28:
      thunk_FUN_02dc61f4(PTR_DAT_06778790);
      uVar3 = FUN_04e83184();
      thunk_FUN_02dc61f4(PTR_DAT_06769758);
      uVar2 = thunk_FUN_02d9d534();
      FUN_050095bc(uVar2,uVar3,0);
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06778798);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar2,uVar3);
    }
    uVar3 = 0x47a;
  }
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
  FUN_04f9d984(uVar2,uVar3,1,0);
  return uVar2;
}


