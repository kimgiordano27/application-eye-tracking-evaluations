/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$SetWidth
ENTRY_POINT: 0728f2e0
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__SetWidth(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_x9;
  int in_w10;
  int iVar9;
  int in_w11;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long *plVar15;
  long *plVar16;
  
  do {
    if (in_x9 == 0) goto LAB_0728f474;
    if (*(char *)(in_x9 + 0x35) != '\0') {
      lVar12 = *(long *)(in_x9 + 0x20);
      do {
        in_w11 = in_w11 + 1;
        if (lVar12 == 0) {
          *(int *)(unaff_x19 + 0x80) = in_w11;
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = *(long *)(lVar12 + 0x38);
      } while (lVar12 != *(long *)(in_x9 + 0x20));
      in_w10 = in_w10 + 1;
      *(int *)(unaff_x19 + 0x80) = in_w11;
      *(int *)(unaff_x19 + 0x90) = in_w10;
    }
    puVar4 = PTR_DAT_092c1f30;
    in_x9 = *(long *)(in_x9 + 0x18);
  } while (in_x9 != param_1);
  lVar12 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,in_w10 << 1);
  plVar15 = (long *)(unaff_x19 + 0x88);
  *plVar15 = lVar12;
  thunk_FUN_040ec700(plVar15,lVar12);
  lVar12 = FUN_04077674(*(undefined8 *)puVar4,*(undefined4 *)(unaff_x19 + 0x80));
  plVar16 = (long *)(unaff_x19 + 0x78);
  *plVar16 = lVar12;
  thunk_FUN_040ec700(plVar16,lVar12);
  lVar12 = *(long *)(unaff_x19 + 0x18);
  if ((lVar12 != 0) && (lVar7 = *(long *)(lVar12 + 0x18), lVar7 != 0)) {
    iVar8 = 0;
    iVar9 = 0;
    uVar10 = 0;
    do {
      lVar7 = *(long *)(lVar7 + 0x18);
      if (lVar7 == *(long *)(lVar12 + 0x18)) {
        return;
      }
      if (lVar7 == 0) break;
      if (*(char *)(lVar7 + 0x35) != '\0') {
        lVar13 = *(long *)(lVar7 + 0x20);
        lVar12 = *plVar16;
        iVar11 = 0;
        lVar14 = lVar13;
        do {
          if (((lVar12 == 0) || (lVar14 == 0)) || (lVar5 = *(long *)(lVar14 + 0x40), lVar5 == 0))
          goto LAB_0728f474;
          uVar3 = iVar9 + iVar11;
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_0728f484;
          uVar6 = *(undefined8 *)(lVar5 + 0x28);
          lVar12 = lVar12 + (long)(int)uVar3 * 0x10;
          *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(lVar5 + 0x30);
          *(undefined8 *)(lVar12 + 0x20) = uVar6;
          lVar12 = *plVar16;
          if ((lVar12 == 0) || (plVar1 = (long *)(lVar14 + 0x40), *plVar1 == 0)) goto LAB_0728f474;
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_0728f484;
          lVar14 = *(long *)(lVar14 + 0x38);
          iVar11 = iVar11 + 1;
          *(undefined4 *)(lVar12 + (long)(int)uVar3 * 0x10 + 0x2c) = *(undefined4 *)(*plVar1 + 0x44)
          ;
        } while (lVar14 != lVar13);
        lVar14 = *plVar15;
        if (lVar14 == 0) break;
        uVar3 = *(uint *)(lVar14 + 0x18);
        if (uVar3 <= uVar10) {
LAB_0728f484:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar2 = uVar10 + 1;
        *(int *)(lVar14 + (long)(int)uVar10 * 4 + 0x20) = iVar8;
        if (uVar3 <= uVar2) goto LAB_0728f484;
        lVar12 = *(long *)(unaff_x19 + 0x18);
        iVar9 = iVar9 + iVar11;
        uVar10 = uVar10 + 2;
        iVar8 = iVar8 + iVar11;
        *(int *)(lVar14 + (long)(int)uVar2 * 4 + 0x20) = iVar11;
      }
    } while (lVar12 != 0);
  }
LAB_0728f474:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


