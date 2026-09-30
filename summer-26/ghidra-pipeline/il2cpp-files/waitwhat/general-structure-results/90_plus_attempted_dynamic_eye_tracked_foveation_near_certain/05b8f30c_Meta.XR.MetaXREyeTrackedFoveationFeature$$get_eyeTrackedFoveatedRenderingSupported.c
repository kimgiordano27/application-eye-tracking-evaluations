/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 05b8f30c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 156
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__get_eyeTrackedFoveatedRenderingSupported
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long unaff_x23;
  long lVar10;
  
  puVar1 = PTR_DAT_071122b8;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_071122b8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_05b8f368;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08();
LAB_05b8f368:
    uVar7 = (*(code *)*puVar4)();
    lVar5 = unaff_x23;
    if ((uVar7 & 1) == 0) {
      lVar5 = 0;
    }
    if ((uVar7 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      lVar10 = *(long *)(unaff_x19 + 0x60);
      if ((lVar10 == 0) || (plVar9 = *(long **)(unaff_x19 + 0x38), plVar9 == (long *)0x0))
      goto LAB_05b8f598;
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_071137c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05b8f3f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)PTR_DAT_071137c0,0);
LAB_05b8f3f8:
      bVar2 = (*(code *)*puVar4)(plVar9,lVar10 + 0x18,puVar4[1]);
      unaff_x23 = lVar5;
    }
    if (unaff_x23 != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x60);
      *(byte *)(unaff_x23 + 0x10) = bVar2 & 1;
      if (lVar5 != 0) {
        if (*(char *)(lVar5 + 0x10) == '\0') {
          return;
        }
        plVar9 = *(long **)(unaff_x19 + 0x28);
        if (plVar9 != (long *)0x0) {
          lVar10 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_05b8f478;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,0);
LAB_05b8f478:
          uVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
          plVar9 = *(long **)(unaff_x19 + 0x48);
          *(undefined4 *)(lVar5 + 0x14) = uVar3;
          puVar1 = PTR_DAT_07112a48;
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
            lVar10 = *(long *)(unaff_x19 + 0x60);
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07112a48) {
                  puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_05b8f4e8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)PTR_DAT_07112a48,0);
LAB_05b8f4e8:
            lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
            if ((lVar5 != 0) && (uVar3 = FUN_069e74e4(lVar5,0), lVar10 != 0)) {
              *(undefined4 *)(lVar10 + 0x50) = uVar3;
              *(undefined4 *)(lVar10 + 0x54) = param_2;
              *(undefined4 *)(lVar10 + 0x58) = param_3;
              plVar9 = *(long **)(unaff_x19 + 0x48);
              if (plVar9 != (long *)0x0) {
                lVar5 = *plVar9;
                lVar10 = *(long *)(unaff_x19 + 0x60);
                uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_05b8f564;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)puVar1,0);
LAB_05b8f564:
                lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
                if ((lVar5 != 0) && (uVar3 = FUN_069e7560(lVar5,0), lVar10 != 0)) {
                  *(undefined4 *)(lVar10 + 0x5c) = uVar3;
                  *(undefined4 *)(lVar10 + 0x60) = param_2;
                  *(undefined4 *)(lVar10 + 100) = param_3;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05b8f598:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


