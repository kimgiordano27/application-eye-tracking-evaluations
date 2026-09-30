/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_TypeNameHandling
ENTRY_POINT: 04f9b1d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_TypeNameHandling(long param_1)

{
  undefined8 uVar1;
  int in_w8;
  undefined8 uVar2;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar5;
  long unaff_x25;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x25 + 0x578);
  puVar5 = *(undefined8 **)(unaff_x24 + 0x470);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x480);
  puVar3 = *(undefined8 **)(unaff_x21 + 0x478);
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
    param_1 = *unaff_x20;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  uVar1 = thunk_FUN_02d9d534(*puVar6);
  FUN_04887bd0(uVar1,uVar2,*puVar5);
  puVar5 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
  *puVar5 = uVar1;
  thunk_FUN_02dd37b4(puVar5,uVar1);
  uVar1 = thunk_FUN_02d9d534(*puVar4);
  FUN_047ca43c(uVar1,*puVar3);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
  *puVar3 = uVar1;
  thunk_FUN_02dd37b4(puVar3,uVar1);
  return;
}


