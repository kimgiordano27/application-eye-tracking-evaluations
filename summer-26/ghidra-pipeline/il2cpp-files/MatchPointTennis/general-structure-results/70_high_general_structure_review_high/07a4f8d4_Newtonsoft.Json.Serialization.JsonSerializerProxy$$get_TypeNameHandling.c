/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameHandling
ENTRY_POINT: 07a4f8d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameHandling(void)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long unaff_x20;
  byte *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x23 + 0xbf0);
  if (((unaff_x20 != 0) && ((int)unaff_w22 < 0)) && (0 < *(int *)(unaff_x20 + 0x10))) {
    sVar2 = FUN_078aee34();
    if ((sVar2 == 0x58) || (sVar2 = FUN_078aee34(), sVar2 == 0x78)) {
      bVar1 = *unaff_x21;
      if (DAT_0a51d028 == '\0') {
        FUN_04447ba8(PTR_DAT_09f28738);
        DAT_0a51d028 = '\x01';
      }
      uVar3 = FUN_078b1c78();
      lVar4 = *plVar6;
      uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar4);
      }
      FUN_07a39fec(bVar1,uVar3,uVar5);
      return;
    }
    unaff_w22 = (uint)*unaff_x21;
  }
  if (DAT_0a51d028 == '\0') {
    FUN_04447ba8(PTR_DAT_09f28738);
    DAT_0a51d028 = '\x01';
  }
  if (unaff_x20 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_078b1c78();
    uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*plVar6 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a39b44((int)(char)unaff_w22,uVar3,uVar5);
  return;
}


