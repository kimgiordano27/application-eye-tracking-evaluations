/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_StringEscapeHandling
ENTRY_POINT: 07479a58
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_StringEscapeHandling(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 uVar3;
  
  if (param_1 == in_w8) {
    uVar1 = thunk_FUN_07367938();
    if ((uVar1 & 1) == 0) goto LAB_0747aa18;
    uVar3 = 0x43e;
  }
  else if (param_1 == 0x5722d6f1) {
    uVar1 = thunk_FUN_07367938();
    if ((uVar1 & 1) == 0) goto LAB_0747aa18;
    uVar3 = 0x40c;
  }
  else {
    if ((param_1 != 0x572e0fe4) || (uVar1 = thunk_FUN_07367938(), (uVar1 & 1) == 0)) {
LAB_0747aa18:
      thunk_FUN_04097b88(PTR_DAT_08fa1148);
      uVar3 = FUN_0735c7b4();
      thunk_FUN_04097b88(PTR_DAT_08f7c590);
      uVar2 = thunk_FUN_0406deb8();
      FUN_074e732c(uVar2,uVar3,0);
      uVar3 = thunk_FUN_04097b88(PTR_DAT_08fa1150);
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar2,uVar3);
    }
    uVar3 = 0x43a;
  }
  uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f656c8);
  FUN_07477650(uVar2,uVar3,1,0);
  return uVar2;
}


