/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized
ENTRY_POINT: 074af2d8
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4 Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerialized(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  long unaff_x19;
  
  bVar2 = *(byte *)(param_1 + 9);
  bVar3 = *(byte *)(unaff_x19 + 9);
  if (bVar2 == bVar3) {
    bVar2 = *(byte *)(param_1 + 10);
    bVar3 = *(byte *)(unaff_x19 + 10);
    if (bVar2 == bVar3) {
      bVar2 = *(byte *)(param_1 + 0xb);
      bVar3 = *(byte *)(unaff_x19 + 0xb);
      if (bVar2 == bVar3) {
        bVar2 = *(byte *)(param_1 + 0xc);
        bVar3 = *(byte *)(unaff_x19 + 0xc);
        if (bVar2 == bVar3) {
          bVar2 = *(byte *)(param_1 + 0xd);
          bVar3 = *(byte *)(unaff_x19 + 0xd);
          if (bVar2 == bVar3) {
            bVar2 = *(byte *)(param_1 + 0xe);
            bVar3 = *(byte *)(unaff_x19 + 0xe);
            if (bVar2 == bVar3) {
              bVar2 = *(byte *)(param_1 + 0xf);
              bVar3 = *(byte *)(unaff_x19 + 0xf);
              if (bVar2 == bVar3) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 1;
  if (bVar3 < bVar2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


