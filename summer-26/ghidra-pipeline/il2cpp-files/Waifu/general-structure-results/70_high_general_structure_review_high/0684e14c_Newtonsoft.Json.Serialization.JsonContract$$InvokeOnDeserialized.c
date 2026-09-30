/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized
ENTRY_POINT: 0684e14c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_0335b6c8(&DAT_083cf538,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xde0) = 1;
  if (unaff_x20 != 0) {
    if (DAT_086d9b23 == '\0') {
      FUN_0335b6c8(&DAT_083fc368,1);
      DataMemoryBarrier(2,3);
      DAT_086d9b23 = '\x01';
    }
    uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
    uVar2 = FUN_067cdc70(0);
    if (*(int *)(DAT_083cf538 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cf538);
    }
    uVar2 = FUN_0683b80c(unaff_x20 + 0x14,uVar1,7,uVar2);
    return uVar2;
  }
  *unaff_x19 = 0;
  return 0;
}


