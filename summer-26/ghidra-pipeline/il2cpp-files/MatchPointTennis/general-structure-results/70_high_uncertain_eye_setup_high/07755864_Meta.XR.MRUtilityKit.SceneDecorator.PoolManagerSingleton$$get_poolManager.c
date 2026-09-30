/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerSingleton$$get_poolManager
ENTRY_POINT: 07755864
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerSingleton__get_poolManager(long param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint in_w8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar18;
  long *plVar19;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  while( true ) {
    if (in_w8 != 0) {
      lVar13 = *(long *)(param_1 + 0x78);
      if (lVar13 == 0) goto LAB_07755af4;
      uVar3 = *(uint *)(lVar13 + 0x18);
      if (0 < (long)((ulong)uVar3 << 0x20)) {
        uVar9 = 0;
        do {
          if (unaff_x22 == 0) goto LAB_07755af4;
          if ((*(uint *)(unaff_x22 + 0x18) <= uVar9) || (uVar3 <= uVar9)) goto LAB_07755af8;
          *(int *)(unaff_x24 + uVar9 * 4) =
               *(int *)(lVar13 + 0x20 + uVar9 * 4) + *(int *)(unaff_x24 + uVar9 * 4);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)uVar3);
      }
    }
    puVar5 = PTR_DAT_09f31358;
    unaff_w23 = unaff_w23 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_w23) break;
    param_1 = FUN_05badb74();
    if (param_1 == 0) goto LAB_07755af4;
    in_w8 = (uint)*(byte *)(param_1 + 0x68);
  }
  if (unaff_x21 != (long *)0x0) {
    if ((int)unaff_x21[3] < 1) goto LAB_07755978;
    lVar13 = 8;
    plVar19 = unaff_x21 + 4;
    goto LAB_077558f0;
  }
LAB_07755af4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_077558f0:
  do {
    if (unaff_x22 == 0) goto LAB_07755af4;
    if ((ulong)*(uint *)(unaff_x22 + 0x18) <= lVar13 - 8U) {
LAB_07755af8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar4 = *(undefined4 *)(unaff_x22 + lVar13 * 4);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
    FUN_0773a138(lVar6,uVar4,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 == 0)) {
      uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar8,0);
    }
    if ((ulong)*(uint *)(unaff_x21 + 3) <= lVar13 - 8U) goto LAB_07755af8;
    *plVar19 = lVar6;
    thunk_FUN_044bb4b4(plVar19,lVar6);
    lVar6 = lVar13 + -7;
    lVar13 = lVar13 + 1;
    plVar19 = plVar19 + 1;
    unaff_x25 = (undefined8 *)PTR_DAT_09f1e6a8;
  } while (lVar6 < (int)unaff_x21[3]);
LAB_07755978:
  lVar13 = FUN_04447c90(*unaff_x25);
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    iVar18 = 0;
    do {
      lVar6 = FUN_05badb74();
      if (lVar6 == 0) goto LAB_07755af4;
      if (*(char *)(lVar6 + 0x68) != '\0') {
        lVar7 = *(long *)(unaff_x20 + 0x130);
        if (lVar7 == 0) goto LAB_07755af4;
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar3) {
          uVar10 = 0;
          do {
            if (uVar3 <= uVar10) goto LAB_07755af8;
            lVar11 = (long)(int)uVar10;
            lVar15 = *(long *)(lVar7 + lVar11 * 8 + 0x20);
            if ((lVar15 == 0) || (lVar14 = *(long *)(lVar6 + 0x70), lVar14 == 0)) goto LAB_07755af4;
            if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_07755af8;
            lVar16 = *(long *)(lVar6 + 0x78);
            if (lVar16 == 0) goto LAB_07755af4;
            if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_07755af8;
            uVar12 = *(uint *)(lVar14 + lVar11 * 4 + 0x20);
            iVar2 = *(int *)(lVar16 + lVar11 * 4 + 0x20) + uVar12;
            if ((int)uVar12 < iVar2) {
              if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_07755af8;
              lVar15 = *(long *)(lVar15 + 0x10);
              puVar1 = (uint *)(lVar13 + lVar11 * 4 + 0x20);
              lVar14 = unaff_x21[lVar11 + 4];
              lVar11 = (long)iVar2 - (long)(int)uVar12;
              puVar17 = (undefined4 *)(lVar15 + (long)(int)uVar12 * 4 + 0x20);
              do {
                if ((lVar14 == 0) || (lVar13 == 0)) goto LAB_07755af4;
                if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_07755af8;
                if (lVar15 == 0) goto LAB_07755af4;
                if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_07755af8;
                lVar16 = *(long *)(lVar14 + 0x10);
                if (lVar16 == 0) goto LAB_07755af4;
                if (*(uint *)(lVar16 + 0x18) <= *puVar1) goto LAB_07755af8;
                lVar11 = lVar11 + -1;
                uVar12 = uVar12 + 1;
                *(undefined4 *)(lVar16 + (long)(int)*puVar1 * 4 + 0x20) = *puVar17;
                *puVar1 = *puVar1 + 1;
                puVar17 = puVar17 + 1;
              } while (lVar11 != 0);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar3);
        }
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(unaff_x19 + 0x18));
  }
  return;
}


