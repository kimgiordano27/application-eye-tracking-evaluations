/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<OnRoomOperationResult>d__24$$SetStateMachine
ENTRY_POINT: 04abcf10
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04abcfec) */

void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<OnRoomOperationResult>d__24__SetStateMachine
               (void *param_1,undefined1 *param_2,size_t param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  uint uVar6;
  long *unaff_x23;
  int unaff_w24;
  long *in_stack_00000518;
  
code_r0x04abcf10:
  memcpy(param_1,param_2,param_3);
  thunk_FUN_02bb0e9c(unaff_x21 + 0x38,0);
  uVar6 = unaff_w22;
  do {
    unaff_w22 = uVar6 + 1;
    if (in_stack_00000518 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *in_stack_00000518;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04abce30;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000518,*unaff_x23,0);
LAB_04abce30:
    uVar4 = (*(code *)*puVar1)(in_stack_00000518,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000518 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000518;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_04abcf98;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_04abcf80;
    }
    if (in_stack_00000518 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218(lVar2);
    }
    lVar3 = *in_stack_00000518;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04abcec4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000518,lVar2,0);
LAB_04abcec4:
    (*(code *)*puVar1)(&stack0x00000008,in_stack_00000518,puVar1[1]);
    memcpy(&stack0x00000298,&stack0x00000008,0x280);
    if (unaff_w22 != 0) break;
    memcpy((void *)(unaff_x20 + 8),&stack0x00000298,0x280);
    thunk_FUN_02bb0e9c(unaff_x20 + 0x20,0);
    uVar6 = unaff_w22;
  } while( true );
  lVar2 = *(long *)(unaff_x20 + 0x288);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar2 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  unaff_x21 = lVar2 + (long)(int)uVar6 * (long)unaff_w24;
  param_2 = &stack0x00000298;
  param_3 = 0x280;
  param_1 = (void *)(unaff_x21 + 0x20);
  goto code_r0x04abcf10;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_04abcf80:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04abcfb4;
    }
  }
LAB_04abcf98:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000518,*(long *)PTR_DAT_06312f78,0);
LAB_04abcfb4:
  (*(code *)*puVar1)(in_stack_00000518,puVar1[1]);
  return;
}


