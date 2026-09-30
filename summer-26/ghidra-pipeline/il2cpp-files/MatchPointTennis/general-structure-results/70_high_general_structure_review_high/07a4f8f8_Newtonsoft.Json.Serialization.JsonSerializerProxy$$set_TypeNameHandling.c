/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 07a4f8f8
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling(void)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x20;
  char *unaff_x21;
  long *unaff_x23;
  
  sVar2 = FUN_078aee34();
  if ((sVar2 != 0x58) && (sVar2 = FUN_078aee34(), sVar2 != 0x78)) {
    cVar1 = *unaff_x21;
    if (DAT_0a51d028 == '\0') {
      FUN_04447ba8(PTR_DAT_09f28738);
      DAT_0a51d028 = '\x01';
    }
    if (unaff_x20 == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = FUN_078b1c78();
      uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07a39b44((int)cVar1,uVar3,uVar4);
    return;
  }
  cVar1 = *unaff_x21;
  if (DAT_0a51d028 == '\0') {
    FUN_04447ba8(PTR_DAT_09f28738);
    DAT_0a51d028 = '\x01';
  }
  uVar3 = FUN_078b1c78();
  uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x23);
  }
  FUN_07a39fec(cVar1,uVar3,uVar4);
  return;
}


