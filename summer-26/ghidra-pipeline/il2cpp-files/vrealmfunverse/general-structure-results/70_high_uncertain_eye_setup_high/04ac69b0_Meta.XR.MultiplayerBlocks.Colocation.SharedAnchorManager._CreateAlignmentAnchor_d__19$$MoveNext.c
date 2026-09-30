/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<CreateAlignmentAnchor>d__19$$MoveNext
ENTRY_POINT: 04ac69b0
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


/* WARNING: Removing unreachable block (ram,0x04ac6c28) */

void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<CreateAlignmentAnchor>d__19__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000078;
  
  piVar7 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04ac69e8;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04ac69e8:
  in_stack_00000078 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_06312f90;
  in_stack_00000038 = &stack0x00000078;
  in_stack_00000030 = 0;
  if (in_stack_00000078 != (long *)0x0) {
    iVar8 = 0;
    do {
      plVar2 = in_stack_00000078;
      lVar4 = *in_stack_00000078;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04ac6a64;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(in_stack_00000078,*(long *)puVar1,0);
LAB_04ac6a64:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      plVar2 = in_stack_00000078;
      if ((uVar6 & 1) == 0) {
        if (in_stack_00000078 == (long *)0x0) {
          return;
        }
        lVar4 = *in_stack_00000078;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_04ac6bd4;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04ac6bbc;
      }
      if (in_stack_00000078 == (long *)0x0) {
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
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04ac6af8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar2,lVar4,0);
LAB_04ac6af8:
      (*(code *)*puVar3)(&stack0x00000008,plVar2,puVar3[1]);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000058 = in_stack_00000020;
      in_stack_00000050 = in_stack_00000018;
      in_stack_00000060 = in_stack_00000028;
      if (iVar8 == 0) {
        *(undefined8 *)(unaff_x20 + 0x28) = in_stack_00000028;
        *(undefined8 *)(unaff_x20 + 0x10) = in_stack_00000010;
        *(undefined8 *)(unaff_x20 + 8) = in_stack_00000008;
        *(undefined8 *)(unaff_x20 + 0x20) = in_stack_00000020;
        *(undefined8 *)(unaff_x20 + 0x18) = in_stack_00000018;
        thunk_FUN_02bb0e9c(unaff_x20 + 8,0);
      }
      else {
        lVar4 = *(long *)(unaff_x20 + 0x30);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar4 + 0x18) <= iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar4 = lVar4 + (long)(int)(iVar8 - 1U) * 0x28;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000010;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000008;
        *(undefined8 *)(lVar4 + 0x38) = in_stack_00000020;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_00000018;
        *(undefined8 *)(lVar4 + 0x40) = in_stack_00000028;
        thunk_FUN_02bb0e9c(lVar4 + 0x20,0);
      }
      iVar8 = iVar8 + 1;
    } while (in_stack_00000078 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04ac6bbc:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04ac6bf0;
    }
  }
LAB_04ac6bd4:
  puVar3 = (undefined8 *)FUN_02b7654c(in_stack_00000078,*(long *)PTR_DAT_06312f78,0);
LAB_04ac6bf0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


