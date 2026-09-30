/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$ComputeLogHash
ENTRY_POINT: 0560b40c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0560b4d4) */

void Meta_XR_ImmersiveDebugger_UserInterface_Console__ComputeLogHash(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long in_x9;
  long lVar5;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 in_stack_00000030;
  
  while( true ) {
    lVar5 = *(long *)(in_x9 + 0x88);
    *(int *)(param_2 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      puVar4 = (undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
      *puVar4 = unaff_x21;
      thunk_FUN_0333a630(puVar4,unaff_x21);
    }
    else {
      FUN_041e2c78(param_2,unaff_x21,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    uVar3 = FUN_052d44b4(&stack0x00000020,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
    unaff_x21 = in_stack_00000030;
    if ((uVar3 & 1) == 0) {
      FUN_052d44b0(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
      lVar5 = *(long *)(unaff_x20 + 0x30);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05946274(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      return;
    }
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_041e41b4(*(long *)(unaff_x20 + 0x28),in_stack_00000030,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
    param_2 = *(long *)(unaff_x20 + 0x38);
    if (param_2 == 0) break;
    in_w10 = *(int *)(param_2 + 0x1c);
    in_x9 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    param_1 = *(long *)(param_2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


