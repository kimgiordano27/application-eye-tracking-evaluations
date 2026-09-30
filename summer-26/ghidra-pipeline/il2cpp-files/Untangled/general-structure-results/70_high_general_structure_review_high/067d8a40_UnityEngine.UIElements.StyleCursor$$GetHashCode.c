/*
FUNCTION_NAME: UnityEngine.UIElements.StyleCursor$$GetHashCode
ENTRY_POINT: 067d8a40
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void UnityEngine_UIElements_StyleCursor__GetHashCode(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    param_1 = *unaff_x21;
  }
  puVar3 = Unity_VisualScripting_FullSerializer_fsDictionaryConverter_TypeInfo;
  puVar2 = Unity_VisualScripting_FullSerializer_fsDateConverter_TypeInfo;
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x48);
  if (lVar4 != 0) {
    FUN_03fd16fc(&stack0x00000008,lVar4,
                 *(undefined8 *)Unity_VisualScripting_FullSerializer_fsEnumConverter_TypeInfo);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
LAB_067d8a90:
    uVar5 = FUN_04df6d30(&stack0x00000020,*(undefined8 *)puVar3);
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(long *)(in_stack_00000030 + 0x70) != 0) goto code_r0x067d8ab0;
      goto LAB_067d8ac0;
    }
    FUN_04df6d2c(&stack0x00000020,*(undefined8 *)puVar2);
    lVar4 = *unaff_x21;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar4 = *unaff_x21;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05624da8(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
code_r0x067d8ab0:
  lVar4 = *(long *)(*(long *)(in_stack_00000030 + 0x70) + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
LAB_067d8ac0:
    FUN_0688bbe8(in_stack_00000030,0);
  }
  goto LAB_067d8a90;
}


