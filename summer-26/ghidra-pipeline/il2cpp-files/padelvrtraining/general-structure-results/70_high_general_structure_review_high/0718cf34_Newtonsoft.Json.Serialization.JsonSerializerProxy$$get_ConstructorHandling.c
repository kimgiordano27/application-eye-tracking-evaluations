/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ConstructorHandling
ENTRY_POINT: 0718cf34
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ConstructorHandling
              (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long unaff_x21;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  
  plVar8 = *(long **)(unaff_x21 + 0xeb0);
  lStack0000000000000018 = param_1;
  if ((*(byte *)(unaff_x23 + 0x65) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09212eb8);
    FUN_03d2d2b0(PTR_DAT_09212ec0);
    FUN_03d2d2b0(PTR_DAT_09212ec8);
    FUN_03d2d2b0(PTR_DAT_09212eb0);
    *(undefined1 *)(unaff_x23 + 0x65) = 1;
  }
  lVar9 = *plVar8;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar5 = *(long *)(lVar9 + 0x38);
  if (lVar5 == 0) {
    FUN_03d8f2c8(lVar9);
    lVar5 = *(long *)(lVar9 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03d8f26c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  puVar3 = PTR_DAT_09212ec8;
  puVar2 = PTR_DAT_09212ec0;
  puVar1 = PTR_DAT_09212eb8;
  _in_stack_00000008 = FUN_0661ceb8(param_2);
  iVar7 = 0;
  iVar6 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar9 = *(long *)puVar1;
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if (**(int **)(lVar5 + 0xb8) <= iVar6) break;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar4 = FUN_0662adb0(&stack0x00000008,iVar6,*(undefined8 *)puVar2);
    if (uVar4 != 0) goto LAB_0718d09c;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 4;
  }
  uVar4 = 0;
LAB_0718d09c:
  if (*(long *)(unaff_x22 + 0x28) == lStack0000000000000018) {
    return (uint)((uVar4 - 1 ^ uVar4) * 0x100020004 >> 0x31) + iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


