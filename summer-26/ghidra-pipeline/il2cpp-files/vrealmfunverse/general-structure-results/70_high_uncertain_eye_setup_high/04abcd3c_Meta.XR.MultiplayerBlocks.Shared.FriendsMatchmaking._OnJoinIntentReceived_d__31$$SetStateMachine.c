/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<OnJoinIntentReceived>d__31$$SetStateMachine
ENTRY_POINT: 04abcd3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04abcfec) */

void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<OnJoinIntentReceived>d__31__SetStateMachine
               (ushort *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar8;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(param_2 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04abcdb0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04abcdb0:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_06312f90;
  if (plVar3 != (long *)0x0) {
    iVar8 = 0;
    do {
      lVar4 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04abce30;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)puVar1,0);
LAB_04abce30:
      uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar4 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_04abcf98;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04abcf80;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04abcec4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar3,lVar4,0);
LAB_04abcec4:
      (*(code *)*puVar2)(&stack0x00000008,plVar3,puVar2[1]);
      memcpy(&stack0x00000298,&stack0x00000008,0x280);
      if (iVar8 == 0) {
        memcpy((void *)(unaff_x20 + 8),&stack0x00000298,0x280);
        thunk_FUN_02bb0e9c(unaff_x20 + 0x20,0);
      }
      else {
        lVar4 = *(long *)(unaff_x20 + 0x288);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar4 + 0x18) <= iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar4 = lVar4 + (long)(int)(iVar8 - 1U) * 0x280;
        memcpy((void *)(lVar4 + 0x20),&stack0x00000298,0x280);
        thunk_FUN_02bb0e9c(lVar4 + 0x38,0);
      }
      iVar8 = iVar8 + 1;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04abcf80:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04abcfb4;
    }
  }
LAB_04abcf98:
  puVar2 = (undefined8 *)FUN_02b7654c(plVar3,*(long *)PTR_DAT_06312f78,0);
LAB_04abcfb4:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


