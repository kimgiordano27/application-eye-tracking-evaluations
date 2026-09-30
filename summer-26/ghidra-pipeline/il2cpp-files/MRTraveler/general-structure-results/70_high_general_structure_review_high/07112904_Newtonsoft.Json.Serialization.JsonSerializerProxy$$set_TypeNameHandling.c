/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameHandling
ENTRY_POINT: 07112904
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling
               (char *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  char cVar6;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x247) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea1b30);
    *(undefined1 *)(unaff_x22 + 0x247) = 1;
  }
  puVar1 = PTR_DAT_08ea1b30;
  cVar6 = *param_1;
  if (((param_2 != 0) && (cVar6 < '\0')) && (0 < *(int *)(param_2 + 0x10))) {
    sVar2 = FUN_06f6fafc(param_2,0,0);
    if ((sVar2 == 0x58) || (sVar2 = FUN_06f6fafc(param_2,0,0), sVar2 == 0x78)) {
      cVar6 = *param_1;
      if (DAT_0941218d == '\0') {
        FUN_03c8f898(PTR_DAT_08e83798);
        DAT_0941218d = '\x01';
      }
      uVar3 = System_Convert__ToInt16(param_2,0);
      lVar4 = *(long *)puVar1;
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar4);
      }
      FUN_070fc634(cVar6,uVar3,uVar5,param_3,0);
      return;
    }
    cVar6 = *param_1;
  }
  if (DAT_0941218d == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    DAT_0941218d = '\x01';
  }
  if (param_2 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = System_Convert__ToInt16(param_2,0);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_070fc18c((int)cVar6,uVar3,uVar5,param_3,0);
  return;
}


