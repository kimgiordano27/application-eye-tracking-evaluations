/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MetadataPropertyHandling
ENTRY_POINT: 07a4f91c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MetadataPropertyHandling(void)

{
  char cVar1;
  undefined8 uVar2;
  int in_w8;
  undefined4 uVar3;
  long unaff_x20;
  char *unaff_x21;
  long *unaff_x23;
  
  if (in_w8 == 0x78) {
    cVar1 = *unaff_x21;
    if (DAT_0a51d028 == '\0') {
      FUN_04447ba8(PTR_DAT_09f28738);
      DAT_0a51d028 = '\x01';
    }
    uVar2 = FUN_078b1c78();
    uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x23);
    }
    FUN_07a39fec(cVar1,uVar2,uVar3);
    return;
  }
  cVar1 = *unaff_x21;
  if (DAT_0a51d028 == '\0') {
    FUN_04447ba8(PTR_DAT_09f28738);
    DAT_0a51d028 = '\x01';
  }
  if (unaff_x20 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_078b1c78();
    uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_07a39b44((int)cVar1,uVar2,uVar3);
  return;
}


