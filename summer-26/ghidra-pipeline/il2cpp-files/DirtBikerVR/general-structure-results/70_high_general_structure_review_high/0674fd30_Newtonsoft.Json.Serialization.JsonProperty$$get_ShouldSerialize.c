/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldSerialize
ENTRY_POINT: 0674fd30
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__get_ShouldSerialize(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xac3) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_06762bd8(0x30,0);
  }
  if (DAT_089760b7 == '\0') {
    FUN_03a8a718(PTR_DAT_08493e18);
    DAT_089760b7 = '\x01';
  }
  puVar1 = PTR_DAT_084a5b08;
  if (unaff_x19 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_065cab58();
    uVar4 = *(undefined4 *)(unaff_x19 + 0x10);
  }
  uVar3 = FUN_066d1144(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar1);
  }
  Newtonsoft_Json_Serialization_JsonProperty__set_ItemReferenceLoopHandling(uVar2,uVar4,7,uVar3);
  return;
}


