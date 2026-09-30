/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 05de3170
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long unaff_x20;
  
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05e134d8(0x30,0);
  }
  if (DAT_07a3d293 == '\0') {
    FUN_031f20f4(PTR_DAT_075a1470);
    DAT_07a3d293 = '\x01';
  }
  puVar1 = PTR_DAT_075a9128;
  if (unaff_x20 == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    uVar3 = FUN_05c857f0();
    uVar5 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  puVar2 = PTR_DAT_075e81c8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = FUN_05d547ec();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
  }
  FUN_05de3040(uVar3,uVar5,uVar4,0);
  return;
}


