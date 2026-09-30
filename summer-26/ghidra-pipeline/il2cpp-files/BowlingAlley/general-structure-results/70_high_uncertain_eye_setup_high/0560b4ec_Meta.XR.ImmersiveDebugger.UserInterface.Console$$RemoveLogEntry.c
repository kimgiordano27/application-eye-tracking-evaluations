/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$RemoveLogEntry
ENTRY_POINT: 0560b4ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0560b538) */

void Meta_XR_ImmersiveDebugger_UserInterface_Console__RemoveLogEntry(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 != 1) {
    FUN_052d44b0(&stack0x00000020,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
                    /* WARNING: Subroutine does not return */
    FUN_033a8ff4(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar9 = *plVar5;
  __cxa_end_catch();
  FUN_052d44b0(&stack0x00000020,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032c82b0(lVar9);
  }
  lVar9 = *(long *)(unaff_x20 + 0x30);
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  if (lVar9 != 0) {
    if (0 < *(int *)(lVar9 + 0x18)) {
      FUN_041e3694(&stack0x00000008,lVar9,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30));
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar4 = FUN_052d44b4(&stack0x00000020,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68)),
            uVar3 = in_stack_00000030, (uVar4 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_041e41b4(*(long *)(unaff_x20 + 0x28),in_stack_00000030,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
        lVar9 = *(long *)(unaff_x20 + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar6 = *(long *)(lVar9 + 0x10);
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
          *puVar7 = uVar3;
          thunk_FUN_0333a630(puVar7,uVar3);
        }
        else {
          FUN_041e2c78(lVar9,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      FUN_052d44b0(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
      lVar9 = *(long *)(unaff_x20 + 0x30);
      if (lVar9 == 0) goto LAB_0560b4d0;
      iVar1 = *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05946274(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
      }
    }
    return;
  }
LAB_0560b4d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


