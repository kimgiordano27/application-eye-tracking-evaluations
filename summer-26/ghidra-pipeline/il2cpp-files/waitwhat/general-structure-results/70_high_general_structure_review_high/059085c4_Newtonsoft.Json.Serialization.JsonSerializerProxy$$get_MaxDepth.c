/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_MaxDepth
ENTRY_POINT: 059085c4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_MaxDepth(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int in_w8;
  undefined1 *puVar5;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint unaff_w24;
  uint uVar6;
  long lVar7;
  uint in_stack_00000028;
  
  puVar3 = PTR_DAT_070fbe68;
  if ((int)unaff_w21 < in_w8 + 1) {
    uVar4 = 0;
  }
  else {
    FUN_049f4510(&stack0x00000020);
    uVar1 = in_stack_00000028;
    puVar2 = PTR_DAT_070c9c80;
    puVar5 = (undefined1 *)register0x00000008;
    if ((unaff_w24 & 1) == 0) {
      if (unaff_w21 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar7 = *(long *)PTR_DAT_070c9c80;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar2;
      }
      *(undefined2 *)(unaff_x20 + (long)(int)uVar1 * 2) =
           *(undefined2 *)(*(long *)(lVar7 + 0xb8) + 10);
      puVar5 = (undefined1 *)0x0;
    }
    if (unaff_w24 == 0) {
      puVar5 = (undefined1 *)register0x00000008;
    }
    uVar1 = in_stack_00000028 + (unaff_w24 ^ 1);
    uVar6 = *(uint *)(puVar5 + 8);
    lVar7 = *(long *)PTR_DAT_070fbe70;
    if (uVar6 < uVar1) {
      FUN_05950030(0);
      uVar6 = *(uint *)(puVar5 + 8);
    }
    if ((*(ushort *)(*(long *)(lVar7 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar1 * 2,uVar6 - uVar1,
                 *(undefined8 *)puVar3);
    *unaff_x19 = in_w8 + 1;
    uVar4 = 1;
  }
  return uVar4;
}


