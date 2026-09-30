/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c$$<DeserializeClass>b__16_1
ENTRY_POINT: 02d867ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert_<>c__<DeserializeClass>b__16_1(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar1 = FUN_01b47fe8();
  if ((uVar1 & 1) == 0) {
    if (unaff_w22 == 1) {
      pcVar3 = FUN_018d0290;
    }
    else {
      if (unaff_x20 == 0) {
        uVar2 = thunk_FUN_01b14d24(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar2,0);
      }
      pcVar3 = FUN_018d0258;
    }
  }
  else {
    pcVar3 = FUN_018d01e4;
    if (unaff_w22 != 2) {
      pcVar3 = FUN_018d021c;
    }
  }
  *(code **)(unaff_x19 + 0x18) = pcVar3;
  *(code **)(unaff_x19 + 0x38) = FUN_018d018c;
  return;
}


