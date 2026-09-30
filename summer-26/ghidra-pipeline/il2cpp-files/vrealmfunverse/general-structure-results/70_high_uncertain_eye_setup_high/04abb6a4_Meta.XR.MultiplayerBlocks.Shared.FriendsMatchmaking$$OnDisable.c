/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$OnDisable
ENTRY_POINT: 04abb6a4
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


/* WARNING: Removing unreachable block (ram,0x04abb7dc) */

void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__OnDisable(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  long *in_stack_00000018;
  
  do {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04abb6ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(unaff_x21,param_2,0);
LAB_04abb6ec:
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if (unaff_w23 == 0) {
      *(undefined8 *)(unaff_x20 + 8) = uVar2;
      thunk_FUN_02bb0e9c(unaff_x20 + 8);
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_w23 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(undefined8 *)(lVar3 + (long)(int)(unaff_w23 - 1U) * 8 + 0x20) = uVar2;
      thunk_FUN_02bb0e9c();
    }
    unaff_w23 = unaff_w23 + 1;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04abb658;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*unaff_x22,0);
LAB_04abb658:
    uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_04abb78c;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    param_2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    unaff_x21 = in_stack_00000018;
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02b76218(param_2);
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04abb7a8;
    }
  }
LAB_04abb78c:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*(long *)PTR_DAT_06312f78,0);
LAB_04abb7a8:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


