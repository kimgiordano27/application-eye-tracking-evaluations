/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$SetClientVersion
ENTRY_POINT: 06969cf4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__SetClientVersion(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool in_ZR;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (in_ZR) {
    if (((*(long *)(unaff_x20 + 0x60) == 0) || (*(long *)(unaff_x20 + 0x10) == 0)) ||
       (lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_06969f7c;
    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x60) + 0x18);
    iVar5 = FUN_06936294(lVar7,0);
    if (iVar1 != iVar5) goto LAB_06969d24;
  }
  else {
LAB_06969d24:
    FUN_069695f4();
  }
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xe8), lVar7 != 0)) {
    uVar6 = FUN_06936294(lVar7,0);
    *(undefined4 *)(unaff_x20 + 0x58) = uVar6;
    puVar4 = PTR_DAT_084b6ff0;
    puVar3 = PTR_DAT_084b5d60;
    puVar2 = PTR_DAT_08486738;
    if (*(long *)(unaff_x20 + 0x60) != 0) {
      iVar1 = *(int *)(*(long *)(unaff_x20 + 0x60) + 0x18);
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          if (((*(long *)(unaff_x20 + 0x10) == 0) ||
              (lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xe8), lVar7 == 0)) ||
             ((lVar7 = *(long *)(lVar7 + 0x58), lVar7 == 0 ||
              (lVar7 = FUN_04de82e0(lVar7,iVar5,*(undefined8 *)puVar3), lVar7 == 0))))
          goto LAB_06969f7c;
          lVar11 = *(long *)(lVar7 + 0x78);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar8 = FUN_07c9c218(lVar11,0,0);
          fVar12 = 0.0;
          if ((uVar8 & 1) != 0) {
            if (lVar11 == 0) goto LAB_06969f7c;
            if (*(char *)(lVar11 + 0x98) != '\0') {
              plVar9 = *(long **)(lVar7 + 0x80);
              if (plVar9 == (long *)0x0) goto LAB_06969f7c;
              fVar12 = (float)(**(code **)(*plVar9 + 0x528))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x530));
              if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_06969f7c;
              plVar9 = *(long **)(lVar7 + 0x80);
              fVar12 = fVar12 - *(float *)(*(long *)(unaff_x20 + 0x10) + 0x108);
              fVar17 = 0.0;
              if (0.0 <= fVar12) {
                fVar17 = fVar12;
              }
              if (plVar9 == (long *)0x0) goto LAB_06969f7c;
              fVar12 = (float)(**(code **)(*plVar9 + 0x4e8))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x4f0));
              if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_06969f7c;
              plVar9 = *(long **)(lVar7 + 0x80);
              fVar12 = fVar12 - *(float *)(*(long *)(unaff_x20 + 0x10) + 0x10c);
              fVar15 = 0.0;
              if (0.0 <= fVar12) {
                fVar15 = fVar12;
              }
              if (plVar9 == (long *)0x0) goto LAB_06969f7c;
              fVar12 = (float)(**(code **)(*plVar9 + 0x2b8))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x2c0));
              plVar9 = *(long **)(lVar7 + 0x80);
              if (plVar9 == (long *)0x0) goto LAB_06969f7c;
              fVar13 = (float)(**(code **)(*plVar9 + 0x2c8))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x2d0));
              lVar11 = *(long *)(lVar7 + 0x78);
              if (lVar11 == 0) goto LAB_06969f7c;
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
              fVar15 = *(float *)(lVar11 + 0xa8) +
                       (fVar17 + fVar15) * fVar14 * *(float *)(lVar11 + 0x7c);
              fVar17 = 1.0;
              if (fVar15 <= 1.0) {
                fVar17 = fVar15;
              }
              fVar13 = fVar12;
              if (0.0 <= fVar15) {
                fVar13 = fVar17;
              }
              fVar13 = *(float *)(unaff_x20 + 0x24) * fVar13;
              fVar17 = *(float *)(unaff_x20 + 0x38);
              if (fVar13 <= *(float *)(unaff_x20 + 0x38)) {
                fVar17 = fVar13;
              }
              if (0.0 <= fVar13) {
                fVar12 = fVar17;
              }
            }
          }
          if ((*(long *)(unaff_x20 + 0x60) == 0) ||
             (lVar11 = FUN_04de82e0(*(long *)(unaff_x20 + 0x60),iVar5,*(undefined8 *)puVar4),
             lVar11 == 0)) goto LAB_06969f7c;
          FUN_06968960(fVar12,*(undefined4 *)(unaff_x19 + 0x28),lVar11,*(undefined4 *)(lVar7 + 0x70)
                      );
          iVar5 = iVar5 + 1;
        } while (iVar1 != iVar5);
      }
      uVar6 = *(undefined4 *)(unaff_x19 + 0x28);
      uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
      FUN_07ca4ee0(uVar6,uVar10,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar10;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar10);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return;
    }
  }
LAB_06969f7c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


