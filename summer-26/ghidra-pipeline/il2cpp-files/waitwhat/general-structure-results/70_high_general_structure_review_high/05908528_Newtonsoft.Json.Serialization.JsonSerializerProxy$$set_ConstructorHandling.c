/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 05908528
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int unaff_w22;
  int unaff_w23;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *unaff_x26;
  uint in_stack_00000028;
  
  uVar3 = FUN_058e1620();
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar3 = FUN_058e5ac4();
    if ((uVar3 & 1) == 0) {
      uVar7 = 0;
      iVar6 = 1;
      goto LAB_059085c8;
    }
  }
  iVar6 = 0;
  uVar7 = 1;
LAB_059085c8:
  puVar2 = PTR_DAT_070fbe68;
  iVar6 = iVar6 + unaff_w22 + unaff_w23;
  if ((int)unaff_w21 < iVar6) {
    uVar4 = 0;
  }
  else {
    FUN_049f4510(&stack0x00000020);
    uVar8 = in_stack_00000028;
    puVar1 = PTR_DAT_070c9c80;
    puVar5 = (undefined1 *)register0x00000008;
    if (uVar7 == 0) {
      if (unaff_w21 <= in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar9 = *(long *)PTR_DAT_070c9c80;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar9 = *(long *)puVar1;
      }
      *(undefined2 *)(unaff_x20 + (long)(int)uVar8 * 2) =
           *(undefined2 *)(*(long *)(lVar9 + 0xb8) + 10);
      puVar5 = (undefined1 *)0x0;
    }
    if (uVar7 == 0) {
      puVar5 = (undefined1 *)register0x00000008;
    }
    uVar7 = in_stack_00000028 + (uVar7 ^ 1);
    uVar8 = *(uint *)(puVar5 + 8);
    lVar9 = *(long *)PTR_DAT_070fbe70;
    if (uVar8 < uVar7) {
      FUN_05950030(0);
      uVar8 = *(uint *)(puVar5 + 8);
    }
    if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar7 * 2,uVar8 - uVar7,
                 *(undefined8 *)puVar2);
    *unaff_x19 = iVar6;
    uVar4 = 1;
  }
  return uVar4;
}


