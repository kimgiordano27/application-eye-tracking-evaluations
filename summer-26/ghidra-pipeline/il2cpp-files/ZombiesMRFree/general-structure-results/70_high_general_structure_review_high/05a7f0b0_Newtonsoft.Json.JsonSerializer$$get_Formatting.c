/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Formatting
ENTRY_POINT: 05a7f0b0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__get_Formatting(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar8;
  int unaff_w22;
  int unaff_w23;
  uint uVar9;
  long *unaff_x26;
  long lVar10;
  long in_stack_00000000;
  uint in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar3 = FUN_05a3da78();
    if ((uVar3 & 1) == 0) {
      uVar9 = 0;
      iVar7 = 1;
      goto LAB_05a7f150;
    }
  }
  iVar7 = 0;
  uVar9 = 1;
LAB_05a7f150:
  puVar2 = PTR_DAT_06fa3c78;
  iVar7 = iVar7 + unaff_w23 + unaff_w22;
  if ((int)unaff_w21 < iVar7) {
    uVar4 = 0;
  }
  else {
    FUN_04b2f994(&stack0x00000020);
    puVar1 = PTR_DAT_06f6dce0;
    puVar6 = (undefined1 *)register0x00000008;
    if (uVar9 == 0) {
      lVar10 = (long)(int)in_stack_00000028;
      if (unaff_w21 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar5 = *(long *)PTR_DAT_06f6dce0;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar5 = *(long *)puVar1;
      }
      puVar6 = (undefined1 *)0x0;
      *(undefined2 *)(unaff_x20 + lVar10 * 2) = *(undefined2 *)(*(long *)(lVar5 + 0xb8) + 10);
    }
    if (uVar9 == 0) {
      puVar6 = (undefined1 *)register0x00000008;
    }
    uVar8 = *(uint *)(puVar6 + 8);
    uVar9 = in_stack_00000028 + (uVar9 ^ 1);
    lVar10 = *(long *)PTR_DAT_06fa3c88;
    if (uVar8 < uVar9) {
      FUN_05b0fafc(0);
      uVar8 = *(uint *)(puVar6 + 8);
    }
    lVar5 = in_stack_00000000;
    if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    FUN_04b2f994(&stack0x00000010,lVar5 + (long)(int)uVar9 * 2,uVar8 - uVar9,*(undefined8 *)puVar2);
    *unaff_x19 = iVar7;
    uVar4 = 1;
  }
  return uVar4;
}


