/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_SerializationBinder
ENTRY_POINT: 0718cfbc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_SerializationBinder(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long unaff_x22;
  long lVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  puVar3 = PTR_DAT_09212ec8;
  puVar2 = PTR_DAT_09212ec0;
  puVar1 = PTR_DAT_09212eb8;
  _in_stack_00000008 = FUN_0661ceb8();
  iVar7 = 0;
  iVar6 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar8 = *(long *)puVar1;
    lVar4 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar4 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    if (**(int **)(lVar4 + 0xb8) <= iVar6) break;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar5 = FUN_0662adb0(&stack0x00000008,iVar6,*(undefined8 *)puVar2);
    if (uVar5 != 0) goto LAB_0718d09c;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 4;
  }
  uVar5 = 0;
LAB_0718d09c:
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return (uint)((uVar5 - 1 ^ uVar5) * 0x100020004 >> 0x31) + iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


