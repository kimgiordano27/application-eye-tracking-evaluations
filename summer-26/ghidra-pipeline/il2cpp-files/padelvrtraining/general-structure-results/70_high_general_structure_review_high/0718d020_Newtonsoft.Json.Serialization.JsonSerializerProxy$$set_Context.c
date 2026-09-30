/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Context
ENTRY_POINT: 0718d020
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


int Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Context(long param_1)

{
  long lVar1;
  ulong uVar2;
  byte in_w8;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long in_stack_00000018;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      param_1 = FUN_03d8f26c();
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar1 = *(long *)(unaff_x25 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    if (**(int **)(lVar1 + 0xb8) <= unaff_w19) break;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar2 = FUN_0662adb0(&stack0x00000008,unaff_w19,*unaff_x24);
    if (uVar2 != 0) goto LAB_0718d09c;
    unaff_w19 = unaff_w19 + 1;
    unaff_w20 = unaff_w20 + 4;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    unaff_x25 = *unaff_x23;
    lVar1 = *(long *)(unaff_x25 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    param_1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    in_w8 = *(byte *)(param_1 + 0x135);
  }
  uVar2 = 0;
LAB_0718d09c:
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return (uint)((uVar2 - 1 ^ uVar2) * 0x100020004 >> 0x31) + unaff_w20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


