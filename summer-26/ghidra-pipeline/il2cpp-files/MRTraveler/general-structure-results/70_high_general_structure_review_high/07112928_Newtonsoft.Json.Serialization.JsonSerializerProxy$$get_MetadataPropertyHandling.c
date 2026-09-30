/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 07112928
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling(void)

{
  undefined *puVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  long lVar4;
  undefined4 uVar5;
  long unaff_x20;
  char *unaff_x21;
  char cVar6;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x247) = in_w8;
  puVar1 = PTR_DAT_08ea1b30;
  cVar6 = *unaff_x21;
  if (((unaff_x20 != 0) && (cVar6 < '\0')) && (0 < *(int *)(unaff_x20 + 0x10))) {
    sVar2 = FUN_06f6fafc();
    if ((sVar2 == 0x58) || (sVar2 = FUN_06f6fafc(), sVar2 == 0x78)) {
      cVar6 = *unaff_x21;
      if (DAT_0941218d == '\0') {
        FUN_03c8f898(PTR_DAT_08e83798);
        DAT_0941218d = '\x01';
      }
      uVar3 = System_Convert__ToInt16();
      lVar4 = *(long *)puVar1;
      uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar4);
      }
      FUN_070fc634(cVar6,uVar3,uVar5);
      return;
    }
    cVar6 = *unaff_x21;
  }
  if (DAT_0941218d == '\0') {
    FUN_03c8f898(PTR_DAT_08e83798);
    DAT_0941218d = '\x01';
  }
  if (unaff_x20 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = System_Convert__ToInt16();
    uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_070fc18c((int)cVar6,uVar3,uVar5);
  return;
}


