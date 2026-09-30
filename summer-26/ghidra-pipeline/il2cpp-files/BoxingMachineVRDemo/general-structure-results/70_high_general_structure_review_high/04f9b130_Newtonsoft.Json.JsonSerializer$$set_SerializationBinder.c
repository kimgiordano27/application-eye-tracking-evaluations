/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_SerializationBinder
ENTRY_POINT: 04f9b130
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


void Newtonsoft_Json_JsonSerializer__set_SerializationBinder(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 uVar10;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  thunk_FUN_02dd37b4();
  puVar2 = PTR_DAT_06774a38;
  if (0x61 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x630) = in_stack_00000000;
    *(undefined8 *)(unaff_x19 + 0x638) = in_stack_00000008;
    thunk_FUN_02dd37b4(unaff_x19 + 0x638,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x19;
    thunk_FUN_02dd37b4();
    iVar6 = FUN_04f912a4();
    *(int *)(*(long *)(*unaff_x23 + 0xb8) + 0x10) = iVar6 + -1;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b78a98 == '\0') {
      FUN_02d6084c(PTR_DAT_06774a38);
      DAT_06b78a98 = '\x01';
    }
    puVar5 = PTR_DAT_06777480;
    puVar4 = PTR_DAT_06777478;
    puVar3 = PTR_DAT_06777470;
    puVar1 = PTR_DAT_06763578;
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar7 = *(long *)puVar2;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_04887bd0(uVar8,uVar10,*(undefined8 *)puVar3);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    *puVar9 = uVar8;
    thunk_FUN_02dd37b4(puVar9,uVar8);
    uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
    FUN_047ca43c(uVar8,*(undefined8 *)puVar4);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
    *puVar9 = uVar8;
    thunk_FUN_02dd37b4(puVar9,uVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


