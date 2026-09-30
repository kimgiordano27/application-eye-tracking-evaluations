/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<ShareAnchorsWithUser>d__27$$MoveNext
ENTRY_POINT: 04ac83dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04ac86f0) */

void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<ShareAnchorsWithUser>d__27__MoveNext
               (void)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  undefined1 auVar11 [16];
  long *plStack0000000000000018;
  
  plStack0000000000000018 = (long *)0x0;
  unaff_x20[2] = 0;
  unaff_x20[3] = 0;
  unaff_x20[0] = 0;
  unaff_x20[1] = 0;
  unaff_x20[6] = 0;
  unaff_x20[7] = 0;
  unaff_x20[4] = 0;
  unaff_x20[5] = 0;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  iVar3 = FUN_031b33f0();
  *unaff_x20 = iVar3;
  if (iVar3 < 2) {
    uVar6 = 0;
    unaff_x20[6] = 0;
    unaff_x20[7] = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
    }
    uVar6 = FUN_02b3c908(lVar4,iVar3 + -1);
    *(undefined8 *)(unaff_x20 + 6) = uVar6;
  }
  thunk_FUN_02bb0e9c(unaff_x20 + 6,uVar6);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02b76218(lVar4);
  }
  lVar7 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04ac84ec;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02b7654c();
LAB_04ac84ec:
  plStack0000000000000018 = (long *)(*(code *)*puVar5)();
  puVar1 = PTR_DAT_06312f90;
  if (plStack0000000000000018 != (long *)0x0) {
    iVar3 = 0;
    do {
      plVar2 = plStack0000000000000018;
      lVar4 = *plStack0000000000000018;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04ac8564;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plStack0000000000000018,*(long *)puVar1,0);
LAB_04ac8564:
      uVar9 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      plVar2 = plStack0000000000000018;
      if ((uVar9 & 1) == 0) {
        if (plStack0000000000000018 == (long *)0x0) {
          return;
        }
        lVar4 = *plStack0000000000000018;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 == 0) goto LAB_04ac86a0;
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04ac8688;
      }
      if (plStack0000000000000018 == (long *)0x0) {
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
      lVar7 = *plVar2;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04ac85f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar2,lVar4,0);
LAB_04ac85f8:
      auVar11 = (*(code *)*puVar5)(plVar2,puVar5[1]);
      if (iVar3 == 0) {
        *(undefined1 (*) [16])(unaff_x20 + 2) = auVar11;
        thunk_FUN_02bb0e9c(unaff_x20 + 2,0);
      }
      else {
        lVar4 = *(long *)(unaff_x20 + 6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar4 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        pauVar8 = (undefined1 (*) [16])(lVar4 + (long)(int)(iVar3 - 1U) * 0x10 + 0x20);
        *pauVar8 = auVar11;
        thunk_FUN_02bb0e9c(pauVar8,0);
      }
      iVar3 = iVar3 + 1;
    } while (plStack0000000000000018 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_04ac8688:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04ac86bc;
    }
  }
LAB_04ac86a0:
  puVar5 = (undefined8 *)FUN_02b7654c(plStack0000000000000018,*(long *)PTR_DAT_06312f78,0);
LAB_04ac86bc:
  (*(code *)*puVar5)(plVar2,puVar5[1]);
  return;
}


