/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking.<JoinOpenRoom>d__28$$MoveNext
ENTRY_POINT: 04ab9d74
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


/* WARNING: Removing unreachable block (ram,0x04ab9f74) */

void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking_<JoinOpenRoom>d__28__MoveNext(code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  undefined1 auVar10 [16];
  
  plVar2 = (long *)(*param_1)();
  puVar1 = PTR_DAT_06312f90;
  if (plVar2 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar4 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04ab9de8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)puVar1,0);
LAB_04ab9de8:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar4 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 == 0) goto LAB_04ab9f24;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04ab9f0c;
      }
      if (plVar2 == (long *)0x0) {
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
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04ab9e7c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar2,lVar4,0);
LAB_04ab9e7c:
      auVar10 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (iVar9 == 0) {
        *(undefined1 (*) [16])(unaff_x20 + 8) = auVar10;
        thunk_FUN_02bb0e9c(unaff_x20 + 8,0);
      }
      else {
        lVar4 = *(long *)(unaff_x20 + 0x18);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar4 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        pauVar6 = (undefined1 (*) [16])(lVar4 + (long)(int)(iVar9 - 1U) * 0x10 + 0x20);
        *pauVar6 = auVar10;
        thunk_FUN_02bb0e9c(pauVar6,0);
      }
      iVar9 = iVar9 + 1;
    } while (plVar2 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_04ab9f0c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04ab9f40;
    }
  }
LAB_04ab9f24:
  puVar3 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)PTR_DAT_06312f78,0);
LAB_04ab9f40:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


