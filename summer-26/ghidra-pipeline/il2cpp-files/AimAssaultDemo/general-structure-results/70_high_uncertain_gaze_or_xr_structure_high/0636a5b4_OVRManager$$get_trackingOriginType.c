/*
FUNCTION_NAME: OVRManager$$get_trackingOriginType
ENTRY_POINT: 0636a5b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0636a818) */
/* WARNING: Removing unreachable block (ram,0x0636a92c) */

void OVRManager__get_trackingOriginType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  
  if (unaff_x20 == 0) goto LAB_0636a924;
  if ((*(long *)(unaff_x20 + 0x98) == 0) && (*(char *)(unaff_x20 + 0xa0) == '\0')) {
    return;
  }
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_0636a924;
  (**(code **)(*plVar4 + 0x5d8))
            (plVar4,*(undefined8 *)PTR_DAT_07db5448,*(undefined8 *)(*plVar4 + 0x5e0));
  if (*(char *)(unaff_x20 + 0xa0) == '\0') {
    plVar4 = *(long **)(unaff_x20 + 0x98);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db52e0) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0636a850;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db52e0,0);
LAB_0636a850:
      iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (0 < iVar3) {
        plVar4 = *(long **)(unaff_x20 + 0x98);
        if (plVar4 != (long *)0x0) {
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db5300) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0636a8fc;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db5300,0);
LAB_0636a8fc:
          (*(code *)*puVar5)(plVar4,0,puVar5[1]);
          FUN_06369b34();
          return;
        }
        goto LAB_0636a924;
      }
    }
    plVar4 = *(long **)(unaff_x19 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_0636a924;
    (**(code **)(*plVar4 + 0x578))(plVar4,*(undefined8 *)(*plVar4 + 0x580));
    plVar4 = *(long **)(unaff_x19 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_0636a924;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x588);
    uVar6 = *(undefined8 *)(*plVar4 + 0x590);
    goto LAB_0636a8e0;
  }
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_0636a924;
  (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0));
  plVar4 = *(long **)(unaff_x20 + 0x98);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db52f0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0636a6b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db52f0,0);
LAB_0636a6b8:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar2 = PTR_DAT_07db52f8;
    puVar1 = PTR_DAT_07d89700;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    do {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0636a728;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar1,0);
LAB_0636a728:
      uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar8 & 1) == 0) goto LAB_0636a7a0;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0636a784;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar2,0);
LAB_0636a784:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      FUN_06369b34();
    } while( true );
  }
  goto LAB_0636a81c;
LAB_0636a7a0:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0636a800;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07d896f8,0);
LAB_0636a800:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
LAB_0636a81c:
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x5a8);
    uVar6 = *(undefined8 *)(*plVar4 + 0x5b0);
LAB_0636a8e0:
                    /* WARNING: Could not recover jumptable at 0x0636a8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar4,uVar6);
    return;
  }
LAB_0636a924:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


