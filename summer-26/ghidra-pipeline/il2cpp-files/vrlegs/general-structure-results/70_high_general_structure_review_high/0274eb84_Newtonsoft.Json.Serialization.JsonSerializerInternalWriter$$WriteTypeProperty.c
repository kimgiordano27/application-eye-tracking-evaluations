/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
ENTRY_POINT: 0274eb84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_01ab69ac(PTR_DAT_03cbf088);
  FUN_01ab69ac(PTR_DAT_03cf7bd0);
  FUN_01ab69ac(PTR_DAT_03cbeeb0);
  FUN_01ab69ac(PTR_DAT_03cfa3a0);
  *(undefined1 *)(unaff_x25 + 0xa5d) = 1;
  puVar3 = PTR_DAT_03cfa3a0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_0274c9b0(unaff_w22,*(undefined8 *)puVar3);
  if ((unaff_x23 == 0) || (unaff_x21 == 0)) {
    uVar6 = 0;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    puVar3 = PTR_DAT_03cf6080;
    uVar7 = FUN_025bb98c();
    uVar1 = *(undefined4 *)(unaff_x23 + 0x10);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
    puVar4 = PTR_DAT_03cf7bd0;
    uVar8 = FUN_025bb98c();
    uVar2 = *(undefined4 *)(unaff_x21 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar3);
    }
    puVar3 = PTR_DAT_03cbeeb0;
    uVar9 = FUN_026f401c();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar4);
    }
    uVar6 = FUN_0274ed30(uVar7,uVar1,uVar8,uVar2,uVar9,uVar5,&stack0x00000020,&stack0x00000028);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar3);
    }
    uVar7 = FUN_0274322c(&stack0x00000020);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_02749af4(&stack0x00000010,uVar7,in_stack_00000028);
    unaff_x19[1] = in_stack_00000018;
    *unaff_x19 = in_stack_00000010;
  }
  return uVar6 & 1;
}


