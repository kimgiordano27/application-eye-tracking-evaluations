/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$Setup
ENTRY_POINT: 0728f318
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__Setup(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long in_x9;
  int in_w10;
  int iVar10;
  int in_w11;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long *plVar15;
  long *plVar16;
  
  for (; puVar4 = PTR_DAT_092c1f30, in_x9 != param_1; in_x9 = *(long *)(in_x9 + 0x18)) {
    if (in_x9 == 0) goto LAB_0728f474;
    if (*(char *)(in_x9 + 0x35) != '\0') {
      lVar5 = *(long *)(in_x9 + 0x20);
      do {
        in_w11 = in_w11 + 1;
        if (lVar5 == 0) {
          *(int *)(unaff_x19 + 0x80) = in_w11;
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar5 = *(long *)(lVar5 + 0x38);
      } while (lVar5 != *(long *)(in_x9 + 0x20));
      in_w10 = in_w10 + 1;
      *(int *)(unaff_x19 + 0x80) = in_w11;
      *(int *)(unaff_x19 + 0x90) = in_w10;
    }
  }
  lVar5 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,in_w10 << 1);
  plVar15 = (long *)(unaff_x19 + 0x88);
  *plVar15 = lVar5;
  thunk_FUN_040ec700(plVar15,lVar5);
  lVar5 = FUN_04077674(*(undefined8 *)puVar4,*(undefined4 *)(unaff_x19 + 0x80));
  plVar16 = (long *)(unaff_x19 + 0x78);
  *plVar16 = lVar5;
  thunk_FUN_040ec700(plVar16,lVar5);
  lVar5 = *(long *)(unaff_x19 + 0x18);
  if ((lVar5 != 0) && (lVar8 = *(long *)(lVar5 + 0x18), lVar8 != 0)) {
    iVar9 = 0;
    iVar10 = 0;
    uVar11 = 0;
    do {
      lVar8 = *(long *)(lVar8 + 0x18);
      if (lVar8 == *(long *)(lVar5 + 0x18)) {
        return;
      }
      if (lVar8 == 0) break;
      if (*(char *)(lVar8 + 0x35) != '\0') {
        lVar13 = *(long *)(lVar8 + 0x20);
        lVar5 = *plVar16;
        iVar12 = 0;
        lVar14 = lVar13;
        do {
          if (((lVar5 == 0) || (lVar14 == 0)) || (lVar6 = *(long *)(lVar14 + 0x40), lVar6 == 0))
          goto LAB_0728f474;
          uVar3 = iVar10 + iVar12;
          if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_0728f484;
          uVar7 = *(undefined8 *)(lVar6 + 0x28);
          lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
          *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar6 + 0x30);
          *(undefined8 *)(lVar5 + 0x20) = uVar7;
          lVar5 = *plVar16;
          if ((lVar5 == 0) || (plVar1 = (long *)(lVar14 + 0x40), *plVar1 == 0)) goto LAB_0728f474;
          if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_0728f484;
          lVar14 = *(long *)(lVar14 + 0x38);
          iVar12 = iVar12 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar3 * 0x10 + 0x2c) = *(undefined4 *)(*plVar1 + 0x44);
        } while (lVar14 != lVar13);
        lVar14 = *plVar15;
        if (lVar14 == 0) break;
        uVar3 = *(uint *)(lVar14 + 0x18);
        if (uVar3 <= uVar11) {
LAB_0728f484:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar2 = uVar11 + 1;
        *(int *)(lVar14 + (long)(int)uVar11 * 4 + 0x20) = iVar9;
        if (uVar3 <= uVar2) goto LAB_0728f484;
        lVar5 = *(long *)(unaff_x19 + 0x18);
        iVar10 = iVar10 + iVar12;
        uVar11 = uVar11 + 2;
        iVar9 = iVar9 + iVar12;
        *(int *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = iVar12;
      }
    } while (lVar5 != 0);
  }
LAB_0728f474:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


