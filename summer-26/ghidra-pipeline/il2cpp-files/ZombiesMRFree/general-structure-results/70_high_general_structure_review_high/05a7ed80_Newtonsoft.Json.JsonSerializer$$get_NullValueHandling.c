/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_NullValueHandling
ENTRY_POINT: 05a7ed80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__get_NullValueHandling(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  undefined2 *unaff_x23;
  long lVar14;
  long unaff_x24;
  undefined8 uVar15;
  long *unaff_x27;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  if (unaff_w20 == 0) {
Newtonsoft_Json_JsonSerializer__get_ContractResolver:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  uVar1 = *(undefined2 *)(unaff_x24 + ((long)(((ulong)unaff_w20 << 0x20) + -0x100000000) >> 0x1f));
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar8 = FUN_05a3d9e8(uVar1,0);
  if ((uVar8 & 1) == 0) {
    if (unaff_w19 == 0) goto Newtonsoft_Json_JsonSerializer__get_ContractResolver;
    uVar1 = *unaff_x23;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar7 = FUN_05a3d9e8(uVar1,0);
  }
  else {
    uVar7 = 1;
  }
  puVar2 = PTR_DAT_06faa1c0;
  uVar9 = FUN_03cf8674();
  uVar10 = FUN_03cf8674();
  uVar11 = FUN_03cf8674();
  uVar9 = FUN_05b3c254(uVar9,0);
  uVar10 = FUN_05b3c254(uVar10,0);
  uVar11 = FUN_05b3c254(uVar11,0);
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  FUN_04ec6c60(&stack0x00000080,uVar9,unaff_w21,uVar10,unaff_w20,uVar11,unaff_w19,1);
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar12 = *(long *)puVar2;
  }
  uVar6 = in_stack_000000a8;
  uVar5 = in_stack_000000a0;
  uVar4 = in_stack_00000098;
  uVar11 = in_stack_00000090;
  uVar10 = in_stack_00000088;
  uVar9 = in_stack_00000080;
  puVar3 = PTR_DAT_06faa1d8;
  lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
  if (lVar14 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar12 = *(long *)puVar2;
    }
    uVar15 = **(undefined8 **)(lVar12 + 0xb8);
    lVar14 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06faa1d0);
    FUN_04ba4c58(lVar14,uVar15,*(undefined8 *)PTR_DAT_06faa1e0,0);
    plVar13 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar13 = lVar14;
    thunk_FUN_03048534(plVar13,lVar14);
  }
  in_stack_00000080 = uVar9;
  in_stack_00000088 = uVar10;
  in_stack_00000090 = uVar11;
  in_stack_00000098 = uVar4;
  in_stack_000000a0 = uVar5;
  in_stack_000000a8 = uVar6;
  FUN_03db211c(unaff_w20 + unaff_w21 + unaff_w19 + (~uVar7 & 1),&stack0x00000080,lVar14,
               *(undefined8 *)puVar3);
  return;
}


