/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 05a7ea98
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ReferenceResolver(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int in_w8;
  int unaff_w19;
  int unaff_w20;
  uint unaff_w21;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x24;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
    param_1 = *unaff_x24;
  }
  uVar5 = in_stack_00000058;
  uVar4 = in_stack_00000050;
  uVar3 = in_stack_00000048;
  uVar2 = in_stack_00000040;
  puVar1 = PTR_DAT_06faa1b0;
  lVar7 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_1 = *unaff_x24;
    }
    uVar8 = **(undefined8 **)(param_1 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06faa1a8);
    FUN_04ba4b84(lVar7,uVar8,*(undefined8 *)PTR_DAT_06faa1b8,0);
    plVar6 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_03048534(plVar6,lVar7);
  }
  in_stack_00000040 = uVar2;
  in_stack_00000048 = uVar3;
  in_stack_00000050 = uVar4;
  in_stack_00000058 = uVar5;
  System_Array__IndexOf<InputControlLayout_ControlItem>
            (unaff_w19 + unaff_w20 + (~unaff_w21 & 1),&stack0x00000040,lVar7,*(undefined8 *)puVar1);
  return;
}


