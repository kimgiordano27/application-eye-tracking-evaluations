/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 0718cf10
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


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormatHandling
              (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000018;
  
  puVar2 = PTR_DAT_09212eb0;
  lVar1 = tpidr_el0;
  lStack0000000000000018 = *(long *)(lVar1 + 0x28);
  if ((DAT_09843065 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09212eb8);
    FUN_03d2d2b0(PTR_DAT_09212ec0);
    FUN_03d2d2b0(PTR_DAT_09212ec8);
    FUN_03d2d2b0(PTR_DAT_09212eb0);
    DAT_09843065 = 1;
  }
  lVar9 = *(long *)puVar2;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_03d8f2c8(lVar9);
    lVar6 = *(long *)(lVar9 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  puVar4 = PTR_DAT_09212ec8;
  puVar3 = PTR_DAT_09212ec0;
  puVar2 = PTR_DAT_09212eb8;
  _in_stack_00000008 = FUN_0661ceb8(param_1,param_2,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
  iVar8 = 0;
  iVar7 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar9 = *(long *)puVar2;
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (**(int **)(lVar6 + 0xb8) <= iVar7) break;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar5 = FUN_0662adb0(&stack0x00000008,iVar7,*(undefined8 *)puVar3);
    if (uVar5 != 0) goto LAB_0718d09c;
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
  }
  uVar5 = 0;
LAB_0718d09c:
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000018) {
    return (uint)((uVar5 - 1 ^ uVar5) * 0x100020004 >> 0x31) + iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


