/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxDestroy
ENTRY_POINT: 06969c70
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_65_0__ovrp_KtxDestroy(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 in_w8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  *(undefined1 *)(unaff_x20 + 0xce) = in_w8;
  if (*(int *)(unaff_x19 + 0x10) != 1) {
    if (*(int *)(unaff_x19 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_x19 + 0x28) = 0x3d4ccccd;
    goto LAB_06969f14;
  }
  lVar11 = *(long *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (lVar11 == 0) goto LAB_06969f7c;
  uVar6 = FUN_06936c7c(lVar11,0);
  if ((uVar6 & 1) == 0) goto LAB_06969f14;
  lVar9 = *(long *)(lVar11 + 0x10);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0xd0) == 0)) ||
     (lVar10 = *(long *)(*(long *)(lVar9 + 0xd0) + 0x18), lVar10 == 0)) goto LAB_06969f7c;
  if (*(char *)(lVar10 + 0x18) == '\0') goto LAB_06969f14;
  if (*(long *)(lVar9 + 0xe8) == 0) goto LAB_06969f7c;
  iVar1 = *(int *)(lVar11 + 0x58);
  iVar5 = FUN_06936294(*(long *)(lVar9 + 0xe8),0);
  if (iVar1 == iVar5) {
    if (((*(long *)(lVar11 + 0x60) == 0) || (*(long *)(lVar11 + 0x10) == 0)) ||
       (lVar9 = *(long *)(*(long *)(lVar11 + 0x10) + 0xe8), lVar9 == 0)) goto LAB_06969f7c;
    iVar1 = *(int *)(*(long *)(lVar11 + 0x60) + 0x18);
    iVar5 = FUN_06936294(lVar9,0);
    if (iVar1 != iVar5) goto LAB_06969d24;
  }
  else {
LAB_06969d24:
    FUN_069695f4(lVar11);
  }
  if ((*(long *)(lVar11 + 0x10) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar11 + 0x10) + 0xe8), lVar9 != 0)) {
    uVar18 = FUN_06936294(lVar9,0);
    *(undefined4 *)(lVar11 + 0x58) = uVar18;
    puVar4 = PTR_DAT_084b6ff0;
    puVar3 = PTR_DAT_084b5d60;
    puVar2 = PTR_DAT_08486738;
    if (*(long *)(lVar11 + 0x60) != 0) {
      iVar1 = *(int *)(*(long *)(lVar11 + 0x60) + 0x18);
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          if ((((*(long *)(lVar11 + 0x10) == 0) ||
               (lVar9 = *(long *)(*(long *)(lVar11 + 0x10) + 0xe8), lVar9 == 0)) ||
              (lVar9 = *(long *)(lVar9 + 0x58), lVar9 == 0)) ||
             (lVar9 = FUN_04de82e0(lVar9,iVar5,*(undefined8 *)puVar3), lVar9 == 0))
          goto LAB_06969f7c;
          lVar10 = *(long *)(lVar9 + 0x78);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar6 = FUN_07c9c218(lVar10,0,0);
          fVar12 = 0.0;
          if ((uVar6 & 1) != 0) {
            if (lVar10 == 0) goto LAB_06969f7c;
            if (*(char *)(lVar10 + 0x98) != '\0') {
              plVar7 = *(long **)(lVar9 + 0x80);
              if (plVar7 == (long *)0x0) goto LAB_06969f7c;
              fVar12 = (float)(**(code **)(*plVar7 + 0x528))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x530));
              if (*(long *)(lVar11 + 0x10) == 0) goto LAB_06969f7c;
              plVar7 = *(long **)(lVar9 + 0x80);
              fVar12 = fVar12 - *(float *)(*(long *)(lVar11 + 0x10) + 0x108);
              fVar17 = 0.0;
              if (0.0 <= fVar12) {
                fVar17 = fVar12;
              }
              if (plVar7 == (long *)0x0) goto LAB_06969f7c;
              fVar12 = (float)(**(code **)(*plVar7 + 0x4e8))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x4f0));
              if (*(long *)(lVar11 + 0x10) == 0) goto LAB_06969f7c;
              plVar7 = *(long **)(lVar9 + 0x80);
              fVar12 = fVar12 - *(float *)(*(long *)(lVar11 + 0x10) + 0x10c);
              fVar15 = 0.0;
              if (0.0 <= fVar12) {
                fVar15 = fVar12;
              }
              if (plVar7 == (long *)0x0) goto LAB_06969f7c;
              fVar12 = (float)(**(code **)(*plVar7 + 0x2b8))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x2c0));
              plVar7 = *(long **)(lVar9 + 0x80);
              if (plVar7 == (long *)0x0) goto LAB_06969f7c;
              fVar13 = (float)(**(code **)(*plVar7 + 0x2c8))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
              lVar10 = *(long *)(lVar9 + 0x78);
              if (lVar10 == 0) goto LAB_06969f7c;
              fVar13 = (fVar12 * 3.0) / fVar13;
              fVar16 = 1.0;
              if (fVar13 <= 1.0) {
                fVar16 = fVar13;
              }
              fVar12 = 0.0;
              fVar14 = fVar12;
              if (0.0 <= fVar13) {
                fVar14 = fVar16;
              }
              fVar15 = *(float *)(lVar10 + 0xa8) +
                       (fVar17 + fVar15) * fVar14 * *(float *)(lVar10 + 0x7c);
              fVar17 = 1.0;
              if (fVar15 <= 1.0) {
                fVar17 = fVar15;
              }
              fVar13 = fVar12;
              if (0.0 <= fVar15) {
                fVar13 = fVar17;
              }
              fVar13 = *(float *)(lVar11 + 0x24) * fVar13;
              fVar17 = *(float *)(lVar11 + 0x38);
              if (fVar13 <= *(float *)(lVar11 + 0x38)) {
                fVar17 = fVar13;
              }
              if (0.0 <= fVar13) {
                fVar12 = fVar17;
              }
            }
          }
          if ((*(long *)(lVar11 + 0x60) == 0) ||
             (lVar10 = FUN_04de82e0(*(long *)(lVar11 + 0x60),iVar5,*(undefined8 *)puVar4),
             lVar10 == 0)) goto LAB_06969f7c;
          FUN_06968960(fVar12,*(undefined4 *)(unaff_x19 + 0x28),lVar10,*(undefined4 *)(lVar9 + 0x70)
                      );
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
LAB_06969f14:
      uVar18 = *(undefined4 *)(unaff_x19 + 0x28);
      uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
      FUN_07ca4ee0(uVar18,uVar8,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar8);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return 1;
    }
  }
LAB_06969f7c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


