/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$CreateInteriorTriangleFan
ENTRY_POINT: 014a8ce0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014a8fbc) */

void Meta_XR_MRUtilityKit_Utilities__CreateInteriorTriangleFan(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
code_r0x014a8ce0:
  puVar1 = (undefined8 *)FUN_00d59724();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar7 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar2 == 0) goto LAB_014a8f3c;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_014a8d58;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724();
LAB_014a8d58:
    uVar3 = (*(code *)*puVar1)();
    plVar4 = *(long **)(unaff_x21 + 0x18);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar7 + 0x18) == 0) {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      lVar9 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar7 = *(long *)(lVar9 + 0x38);
      if (lVar7 == 0) {
        FUN_00d59478(lVar9);
        lVar7 = *(long *)(lVar9 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        lVar7 = FUN_00d5941c();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_016ac474(lVar6,uVar3,**(undefined8 **)(lVar7 + 0xb8),0);
    }
    else {
      if ((int)*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar4 = *(long **)(lVar7 + 0x20);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      uVar10 = *unaff_x26;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_01780344(uVar10,0);
      uVar2 = FUN_0178a8c4(uVar5,uVar10,0);
      if (((uVar2 & 1) == 0) && (*(int *)(lVar7 + 0x18) < 3)) {
        if (*(int *)(lVar7 + 0x18) == 1) {
          lVar7 = *(long *)(unaff_x21 + 0x18);
          plVar4 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((in_stack_00000008 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(in_stack_00000008,*(undefined8 *)(*plVar4 + 0x40)),
             lVar6 == 0)) {
            uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar3,0);
          }
          if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar4[4] = in_stack_00000008;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_016ac474(lVar7,uVar3,plVar4,0);
        }
      }
      else {
        if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_014da334(*unaff_x20,0,0);
      }
    }
    lVar7 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar2 == 0) goto code_r0x014a8ce0;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != *unaff_x27) {
      uVar2 = uVar2 - 1;
      piVar8 = piVar8 + 4;
      if (uVar2 == 0) goto code_r0x014a8ce0;
    }
    puVar1 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_10310) {
      puVar1 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_014a8f58;
    }
  }
LAB_014a8f3c:
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_014a8f58:
  (*(code *)*puVar1)();
  return;
}


