/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_PreserveReferencesHandling
ENTRY_POINT: 07a4f8b0
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_PreserveReferencesHandling
               (ulong param_1,char *param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long unaff_x20;
  char cVar6;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f40bf0);
    *(undefined1 *)(unaff_x22 + 0x1cc) = 1;
  }
  puVar1 = PTR_DAT_09f40bf0;
  cVar6 = *param_2;
  if (((unaff_x20 != 0) && (cVar6 < '\0')) && (0 < *(int *)(unaff_x20 + 0x10))) {
    sVar2 = FUN_078aee34();
    if ((sVar2 == 0x58) || (sVar2 = FUN_078aee34(), sVar2 == 0x78)) {
      cVar6 = *param_2;
      if (DAT_0a51d028 == '\0') {
        FUN_04447ba8(PTR_DAT_09f28738);
        DAT_0a51d028 = '\x01';
      }
      uVar3 = FUN_078b1c78();
      lVar4 = *(long *)puVar1;
      uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar4);
      }
      FUN_07a39fec(cVar6,uVar3,uVar5);
      return;
    }
    cVar6 = *param_2;
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
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a39b44((int)cVar6,uVar3,uVar5);
  return;
}


