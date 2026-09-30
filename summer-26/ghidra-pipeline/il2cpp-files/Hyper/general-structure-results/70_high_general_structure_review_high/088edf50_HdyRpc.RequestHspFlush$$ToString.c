/*
FUNCTION_NAME: HdyRpc.RequestHspFlush$$ToString
ENTRY_POINT: 088edf50
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void HdyRpc_RequestHspFlush__ToString(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  undefined4 *unaff_x19;
  undefined1 (*unaff_x20) [16];
  undefined1 auVar3 [16];
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar2 + 2) * 0x10 + 0x138);
        goto LAB_088edf94;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_088edf94:
  auVar3 = (*(code *)*puVar1)();
  *unaff_x20 = auVar3;
  *unaff_x19 = auVar3._8_4_;
  return;
}


