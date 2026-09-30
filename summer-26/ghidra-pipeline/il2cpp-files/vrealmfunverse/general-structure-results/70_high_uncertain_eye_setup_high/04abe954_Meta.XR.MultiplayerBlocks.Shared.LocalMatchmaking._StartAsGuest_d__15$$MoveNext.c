/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAsGuest>d__15$$MoveNext
ENTRY_POINT: 04abe954
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04abeb38) */

void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAsGuest>d__15__MoveNext(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *plVar7;
  int iVar8;
  undefined1 auVar9 [16];
  long *in_stack_00000018;
  
  iVar8 = 0;
  plVar7 = *(long **)(unaff_x22 + 0xf90);
  do {
    lVar2 = *param_1;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar7) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04abe9ac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(param_1,*plVar7,0);
LAB_04abe9ac:
    uVar5 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto LAB_04abeae8;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
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
    lVar3 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04abea40;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,lVar2,0);
LAB_04abea40:
    auVar9 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if (iVar8 == 0) {
      *(undefined1 (*) [16])(unaff_x20 + 8) = auVar9;
      thunk_FUN_02bb0e9c(unaff_x20 + 8,0);
    }
    else {
      lVar2 = *(long *)(unaff_x20 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar2 + 0x18) <= iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      pauVar4 = (undefined1 (*) [16])(lVar2 + (long)(int)(iVar8 - 1U) * 0x10 + 0x20);
      *pauVar4 = auVar9;
      thunk_FUN_02bb0e9c(pauVar4,0);
    }
    iVar8 = iVar8 + 1;
    param_1 = in_stack_00000018;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04abeb04;
    }
  }
LAB_04abeae8:
  puVar1 = (undefined8 *)FUN_02b7654c(in_stack_00000018,*(long *)PTR_DAT_06312f78,0);
LAB_04abeb04:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


