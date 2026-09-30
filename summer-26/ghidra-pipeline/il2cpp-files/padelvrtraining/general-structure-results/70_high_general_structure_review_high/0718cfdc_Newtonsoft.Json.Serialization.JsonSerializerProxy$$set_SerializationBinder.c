/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_SerializationBinder
ENTRY_POINT: 0718cfdc
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


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_SerializationBinder(void)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long lVar5;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  _in_stack_00000008 = FUN_0661ceb8();
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = *unaff_x23;
    lVar1 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar1 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    if (**(int **)(lVar1 + 0xb8) <= iVar3) break;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = FUN_0662adb0(&stack0x00000008,iVar3,*unaff_x24);
    if (uVar2 != 0) goto LAB_0718d09c;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  }
  uVar2 = 0;
LAB_0718d09c:
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return (uint)((uVar2 - 1 ^ uVar2) * 0x100020004 >> 0x31) + iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


