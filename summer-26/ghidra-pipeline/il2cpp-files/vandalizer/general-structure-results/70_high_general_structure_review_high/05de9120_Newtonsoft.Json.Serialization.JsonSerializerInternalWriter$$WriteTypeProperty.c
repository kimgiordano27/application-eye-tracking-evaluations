/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 05de9120
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 uVar4;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x46b) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05e134d8(0x30,0);
  }
  if (DAT_07a3d293 == '\0') {
    FUN_031f20f4(PTR_DAT_075a1470);
    DAT_07a3d293 = '\x01';
  }
  puVar1 = PTR_DAT_075e8c08;
  if (unaff_x19 == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_05c857f0();
    uVar4 = *(undefined4 *)(unaff_x19 + 0x10);
  }
  uVar3 = FUN_05d88d18(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
  }
  FUN_05e0e29c(uVar2,uVar4,0xe7,uVar3,0);
  return;
}


