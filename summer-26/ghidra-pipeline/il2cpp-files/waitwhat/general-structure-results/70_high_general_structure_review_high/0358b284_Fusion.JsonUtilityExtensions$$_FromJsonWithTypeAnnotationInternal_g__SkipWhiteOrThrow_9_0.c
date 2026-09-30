/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions$$<FromJsonWithTypeAnnotationInternal>g__SkipWhiteOrThrow|9_0
ENTRY_POINT: 0358b284
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_8
*/


void Fusion_JsonUtilityExtensions__<FromJsonWithTypeAnnotationInternal>g__SkipWhiteOrThrow_9_0
               (ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  long unaff_x25;
  long *unaff_x26;
  long in_stack_00000438;
  
  plVar3 = *(long **)(unaff_x21 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x188))(plVar3);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    param_1 = FUN_0358ba60();
    if (*(char *)(unaff_x19 + 0xd0) == '\0') {
      param_1 = 0;
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0358b42c;
      FUN_035bb0b0(*(long *)(unaff_x19 + 0x50),0);
      param_1 = FUN_0358842c();
    }
    plVar3 = *(long **)(unaff_x19 + 0xa8);
    if (plVar3 == (long *)0x0) {
      if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
    }
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070d3760) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0358b33c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)PTR_DAT_070d3760,0);
LAB_0358b33c:
    (*(code *)*puVar1)(plVar3);
    if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
       (lVar4 = FUN_0354c7fc(*(long *)(unaff_x19 + 0x1d0),0), lVar4 == 0)) {
      lVar4 = **(long **)(*(long *)(PTR_DAT_070c1958 + 0x90) + 0xb8);
    }
    lVar2 = *unaff_x26;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *unaff_x26;
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x10) = lVar4;
    param_1 = 0;
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      param_1 = FUN_035b840c(*(long *)(unaff_x19 + 0x50),0);
      if ((param_1 & 1) == 0) {
LAB_0358b3e8:
        param_1 = FUN_0358a674();
      }
      else {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0358b42c;
        if (*(char *)(*(long *)(unaff_x19 + 0x50) + 0xd0) == '\0') goto LAB_0358b3e8;
        memcpy(&stack0x00000018,unaff_x20,0xf8);
        FUN_035869d0();
        param_1 = FUN_069d9070();
      }
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        param_1 = *(ulong *)(*(long *)(unaff_x19 + 0x80) + 0x10);
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
          return;
        }
        goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
      }
    }
  }
LAB_0358b42c:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


