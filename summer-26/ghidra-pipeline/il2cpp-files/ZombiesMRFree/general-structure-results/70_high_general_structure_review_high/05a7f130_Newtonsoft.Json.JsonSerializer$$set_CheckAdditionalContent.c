/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_CheckAdditionalContent
ENTRY_POINT: 05a7f130
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


undefined8 Newtonsoft_Json_JsonSerializer__set_CheckAdditionalContent(void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar9;
  int unaff_w22;
  int unaff_w23;
  uint uVar10;
  long lVar11;
  long in_stack_00000000;
  uint in_stack_00000028;
  
  uVar5 = FUN_05a3da78();
  puVar4 = PTR_DAT_06fa3c78;
  bVar2 = (uVar5 & 1) == 0;
  uVar10 = (uint)!bVar2;
  iVar1 = (uint)bVar2 + unaff_w23 + unaff_w22;
  if ((int)unaff_w21 < iVar1) {
    uVar6 = 0;
  }
  else {
    FUN_04b2f994(&stack0x00000020);
    puVar3 = PTR_DAT_06f6dce0;
    puVar8 = (undefined1 *)register0x00000008;
    if (uVar10 == 0) {
      lVar11 = (long)(int)in_stack_00000028;
      if (unaff_w21 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar7 = *(long *)PTR_DAT_06f6dce0;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar7 = *(long *)puVar3;
      }
      puVar8 = (undefined1 *)0x0;
      *(undefined2 *)(unaff_x20 + lVar11 * 2) = *(undefined2 *)(*(long *)(lVar7 + 0xb8) + 10);
    }
    if (uVar10 == 0) {
      puVar8 = (undefined1 *)register0x00000008;
    }
    uVar9 = *(uint *)(puVar8 + 8);
    uVar10 = in_stack_00000028 + (uVar10 ^ 1);
    lVar11 = *(long *)PTR_DAT_06fa3c88;
    if (uVar9 < uVar10) {
      FUN_05b0fafc(0);
      uVar9 = *(uint *)(puVar8 + 8);
    }
    lVar7 = in_stack_00000000;
    if ((*(byte *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    FUN_04b2f994(&stack0x00000010,lVar7 + (long)(int)uVar10 * 2,uVar9 - uVar10,*(undefined8 *)puVar4
                );
    *unaff_x19 = iVar1;
    uVar6 = 1;
  }
  return uVar6;
}


