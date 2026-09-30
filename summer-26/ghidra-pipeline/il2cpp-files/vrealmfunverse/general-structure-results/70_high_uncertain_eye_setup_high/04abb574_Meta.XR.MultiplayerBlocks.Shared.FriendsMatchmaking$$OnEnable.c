/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking$$OnEnable
ENTRY_POINT: 04abb574
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04abb7dc) */

void Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking__OnEnable(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar9;
  
  lVar2 = FUN_02b76218();
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02b76218(lVar2);
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_04abb5e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04abb5e0:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_06312f90;
  if (plVar4 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar2 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04abb658;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)puVar1,0);
LAB_04abb658:
      uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar2 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 == 0) goto LAB_04abb78c;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_04abb774;
      }
      if (plVar4 == (long *)0x0) {
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
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04abb6ec;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar4,lVar2,0);
LAB_04abb6ec:
      uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (iVar9 == 0) {
        *(undefined8 *)(unaff_x20 + 8) = uVar5;
        thunk_FUN_02bb0e9c(unaff_x20 + 8);
      }
      else {
        lVar2 = *(long *)(unaff_x20 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar2 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        *(undefined8 *)(lVar2 + (long)(int)(iVar9 - 1U) * 8 + 0x20) = uVar5;
        thunk_FUN_02bb0e9c();
      }
      iVar9 = iVar9 + 1;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_04abb774:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04abb7a8;
    }
  }
LAB_04abb78c:
  puVar3 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)PTR_DAT_06312f78,0);
LAB_04abb7a8:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


