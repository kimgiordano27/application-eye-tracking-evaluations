/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerComponent.DefaultCallbacks$$OnGet
ENTRY_POINT: 07755834
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_DefaultCallbacks__OnGet
                 (long *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  int iVar18;
  long *plVar19;
  undefined8 *unaff_x25;
  
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    iVar18 = 0;
    do {
      lVar6 = FUN_05badb74();
      if (lVar6 == 0) goto LAB_07755af4;
      if (*(char *)(lVar6 + 0x68) != '\0') {
        lVar6 = *(long *)(lVar6 + 0x78);
        if (lVar6 == 0) goto LAB_07755af4;
        uVar3 = *(uint *)(lVar6 + 0x18);
        if (0 < (long)((ulong)uVar3 << 0x20)) {
          uVar10 = 0;
          do {
            if (unaff_x22 == 0) goto LAB_07755af4;
            if ((*(uint *)(unaff_x22 + 0x18) <= uVar10) || (uVar3 <= uVar10)) goto LAB_07755af8;
            *(int *)(unaff_x22 + 0x20 + uVar10 * 4) =
                 *(int *)(lVar6 + 0x20 + uVar10 * 4) + *(int *)(unaff_x22 + 0x20 + uVar10 * 4);
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)(int)uVar3);
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(unaff_x19 + 0x18));
  }
  puVar5 = PTR_DAT_09f31358;
  if (param_1 == (long *)0x0) {
LAB_07755af4:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (0 < (int)param_1[3]) {
    lVar6 = 8;
    plVar19 = param_1 + 4;
    do {
      if (unaff_x22 == 0) goto LAB_07755af4;
      if ((ulong)*(uint *)(unaff_x22 + 0x18) <= lVar6 - 8U) {
LAB_07755af8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      uVar4 = *(undefined4 *)(unaff_x22 + lVar6 * 4);
      lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
      FUN_0773a138(lVar7,uVar4,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*param_1 + 0x40)), lVar8 == 0)) {
        uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar9,0);
      }
      if ((ulong)*(uint *)(param_1 + 3) <= lVar6 - 8U) goto LAB_07755af8;
      *plVar19 = lVar7;
      thunk_FUN_044bb4b4(plVar19,lVar7);
      lVar7 = lVar6 + -7;
      lVar6 = lVar6 + 1;
      plVar19 = plVar19 + 1;
      unaff_x25 = (undefined8 *)PTR_DAT_09f1e6a8;
    } while (lVar7 < (int)param_1[3]);
  }
  lVar6 = FUN_04447c90(*unaff_x25);
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    iVar18 = 0;
    do {
      lVar7 = FUN_05badb74();
      if (lVar7 == 0) goto LAB_07755af4;
      if (*(char *)(lVar7 + 0x68) != '\0') {
        lVar8 = *(long *)(unaff_x20 + 0x130);
        if (lVar8 == 0) goto LAB_07755af4;
        uVar3 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar3) {
          uVar11 = 0;
          do {
            if (uVar3 <= uVar11) goto LAB_07755af8;
            lVar12 = (long)(int)uVar11;
            lVar15 = *(long *)(lVar8 + lVar12 * 8 + 0x20);
            if ((lVar15 == 0) || (lVar14 = *(long *)(lVar7 + 0x70), lVar14 == 0)) goto LAB_07755af4;
            if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_07755af8;
            lVar16 = *(long *)(lVar7 + 0x78);
            if (lVar16 == 0) goto LAB_07755af4;
            if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_07755af8;
            uVar13 = *(uint *)(lVar14 + lVar12 * 4 + 0x20);
            iVar2 = *(int *)(lVar16 + lVar12 * 4 + 0x20) + uVar13;
            if ((int)uVar13 < iVar2) {
              if (*(uint *)(param_1 + 3) <= uVar11) goto LAB_07755af8;
              lVar15 = *(long *)(lVar15 + 0x10);
              puVar1 = (uint *)(lVar6 + lVar12 * 4 + 0x20);
              lVar14 = param_1[lVar12 + 4];
              lVar12 = (long)iVar2 - (long)(int)uVar13;
              puVar17 = (undefined4 *)(lVar15 + (long)(int)uVar13 * 4 + 0x20);
              do {
                if ((lVar14 == 0) || (lVar6 == 0)) goto LAB_07755af4;
                if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_07755af8;
                if (lVar15 == 0) goto LAB_07755af4;
                if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_07755af8;
                lVar16 = *(long *)(lVar14 + 0x10);
                if (lVar16 == 0) goto LAB_07755af4;
                if (*(uint *)(lVar16 + 0x18) <= *puVar1) goto LAB_07755af8;
                lVar12 = lVar12 + -1;
                uVar13 = uVar13 + 1;
                *(undefined4 *)(lVar16 + (long)(int)*puVar1 * 4 + 0x20) = *puVar17;
                *puVar1 = *puVar1 + 1;
                puVar17 = puVar17 + 1;
              } while (lVar12 != 0);
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)uVar3);
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(unaff_x19 + 0x18));
  }
  return param_1;
}


