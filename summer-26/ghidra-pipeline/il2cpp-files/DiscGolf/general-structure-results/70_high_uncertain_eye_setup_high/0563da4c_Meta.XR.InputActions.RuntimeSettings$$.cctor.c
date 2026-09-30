/*
FUNCTION_NAME: Meta.XR.InputActions.RuntimeSettings$$.cctor
ENTRY_POINT: 0563da4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_InputActions_RuntimeSettings___cctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar5;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xb10));
  FUN_02d965b8(System_Collections_Generic_IEnumerable<VolumeParameter>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_IEnumerable<X509Extension>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_IEnumerable<XAttribute>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_IEnumerable<XNode>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xb5a) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if ((unaff_x20 & 1) == 0) {
LAB_0563dc08:
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x10),0);
    *(undefined1 *)(unaff_x19 + 0x3a) = 1;
    return;
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      FUN_04010c90(lVar3,*(undefined8 *)
                          System_Collections_Generic_IEnumerable<X509Extension>_TypeInfo);
      puVar2 = System_Collections_Generic_IEnumerable<Toggle>_TypeInfo;
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      in_stack_00000040 = in_stack_00000010;
      while (uVar4 = FUN_05156804(&stack0x00000030,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
        if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0562cc1c(in_stack_00000040,0);
      }
      FUN_05156800(&stack0x00000030,
                   *(undefined8 *)System_Collections_Generic_IEnumerable<string>_TypeInfo);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 == 0) goto LAB_0563dc38;
      iVar1 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0550afb4(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      }
    }
    lVar3 = *(long *)(unaff_x19 + 0x28);
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        FUN_04010c90(&stack0x00000018,lVar3,
                     *(undefined8 *)System_Collections_Generic_IEnumerable<VolumeParameter>_TypeInfo
                    );
        puVar2 = System_Collections_Generic_IEnumerable<Type>_TypeInfo;
        while (uVar4 = FUN_05156804(&stack0x00000018,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
          if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0562cc1c(in_stack_00000028,0);
        }
        FUN_05156800(&stack0x00000018,
                     *(undefined8 *)System_Collections_Generic_IEnumerable<Task>_TypeInfo);
        lVar3 = *(long *)(unaff_x19 + 0x28);
        if (lVar3 == 0) goto LAB_0563dc38;
        iVar1 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_0550afb4(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
        }
      }
      FUN_0563d690();
      plVar5 = (long *)(unaff_x19 + 0x18);
      if (*plVar5 != 0) {
        FUN_05659b74(plVar5);
        *plVar5 = 0;
      }
      goto LAB_0563dc08;
    }
  }
LAB_0563dc38:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


