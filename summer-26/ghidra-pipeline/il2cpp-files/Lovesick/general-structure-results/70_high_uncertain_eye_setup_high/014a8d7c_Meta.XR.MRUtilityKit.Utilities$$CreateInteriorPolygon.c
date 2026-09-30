/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Utilities$$CreateInteriorPolygon
ENTRY_POINT: 014a8d7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014a8fbc) */

void Meta_XR_MRUtilityKit_Utilities__CreateInteriorPolygon(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *in_x9;
  int *piVar7;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  do {
    lVar2 = (*in_x9)(param_1,param_2);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(lVar2 + 0x18) == 0) {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      lVar8 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar2 = *(long *)(lVar8 + 0x38);
      if (lVar2 == 0) {
        FUN_00d59478(lVar8);
        lVar2 = *(long *)(lVar8 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_00d5941c();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar2 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_00d5941c();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_016ac474(lVar6,unaff_x22,**(undefined8 **)(lVar2 + 0xb8),0);
    }
    else {
      if ((int)*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar3 = *(long **)(lVar2 + 0x20);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      uVar9 = *unaff_x26;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar5 = FUN_0178a8c4(uVar4,uVar9,0);
      if (((uVar5 & 1) == 0) && (*(int *)(lVar2 + 0x18) < 3)) {
        if (*(int *)(lVar2 + 0x18) == 1) {
          lVar2 = *(long *)(unaff_x21 + 0x18);
          plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((in_stack_00000008 != 0) &&
             (lVar6 = thunk_FUN_00d6225c(in_stack_00000008,*(undefined8 *)(*plVar3 + 0x40)),
             lVar6 == 0)) {
            uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar4,0);
          }
          if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar3[4] = in_stack_00000008;
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_016ac474(lVar2,unaff_x22,plVar3,0);
        }
      }
      else {
        if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_014da334(*unaff_x20,0,0);
      }
    }
    lVar2 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_014a8cfc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724();
LAB_014a8cfc:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar5 == 0) goto LAB_014a8f3c;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_014a8d58;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724();
LAB_014a8d58:
    unaff_x22 = (*(code *)*puVar1)();
    param_1 = *(long **)(unaff_x21 + 0x18);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_2 = *(undefined8 *)(*param_1 + 0x260);
    in_x9 = *(code **)(*param_1 + 600);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_10310) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_014a8f58;
    }
  }
LAB_014a8f3c:
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_014a8f58:
  (*(code *)*puVar1)();
  return;
}


