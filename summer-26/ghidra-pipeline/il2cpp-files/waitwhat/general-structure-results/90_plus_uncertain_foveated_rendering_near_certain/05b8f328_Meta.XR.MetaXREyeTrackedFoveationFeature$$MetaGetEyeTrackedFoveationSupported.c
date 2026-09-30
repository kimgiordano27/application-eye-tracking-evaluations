/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetEyeTrackedFoveationSupported
ENTRY_POINT: 05b8f328
PROGRAM: waitwhat-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetEyeTrackedFoveationSupported
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x21;
  long unaff_x23;
  long lVar9;
  long lVar10;
  
  piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_6) {
      puVar4 = (undefined8 *)(param_1 + (long)(*piVar7 + 9) * 0x10 + 0x138);
      goto LAB_05b8f368;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_031c0d08();
LAB_05b8f368:
  uVar5 = (*(code *)*puVar4)();
  lVar10 = unaff_x23;
  if ((uVar5 & 1) == 0) {
    lVar10 = 0;
  }
  if ((uVar5 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0x60);
    if ((lVar9 == 0) || (plVar8 = *(long **)(unaff_x19 + 0x38), plVar8 == (long *)0x0))
    goto LAB_05b8f598;
    lVar6 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_071137c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05b8f3f8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)PTR_DAT_071137c0,0);
LAB_05b8f3f8:
    bVar2 = (*(code *)*puVar4)(plVar8,lVar9 + 0x18,puVar4[1]);
    unaff_x23 = lVar10;
  }
  if (unaff_x23 != 0) {
    lVar10 = *(long *)(unaff_x19 + 0x60);
    *(byte *)(unaff_x23 + 0x10) = bVar2 & 1;
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x10) == '\0') {
        return;
      }
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 != (long *)0x0) {
        lVar9 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05b8f478;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_031c0d08(plVar8,*unaff_x21,0);
LAB_05b8f478:
        uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        plVar8 = *(long **)(unaff_x19 + 0x48);
        *(undefined4 *)(lVar10 + 0x14) = uVar3;
        puVar1 = PTR_DAT_07112a48;
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          lVar9 = *(long *)(unaff_x19 + 0x60);
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07112a48) {
                puVar4 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_05b8f4e8;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)PTR_DAT_07112a48,0);
LAB_05b8f4e8:
          lVar10 = (*(code *)*puVar4)(plVar8,puVar4[1]);
          if ((lVar10 != 0) && (uVar3 = FUN_069e74e4(lVar10,0), lVar9 != 0)) {
            *(undefined4 *)(lVar9 + 0x50) = uVar3;
            *(undefined4 *)(lVar9 + 0x54) = param_3;
            *(undefined4 *)(lVar9 + 0x58) = param_4;
            plVar8 = *(long **)(unaff_x19 + 0x48);
            if (plVar8 != (long *)0x0) {
              lVar10 = *plVar8;
              lVar9 = *(long *)(unaff_x19 + 0x60);
              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar5 != 0) {
                piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    puVar4 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_05b8f564;
                  }
                  uVar5 = uVar5 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar1,0);
LAB_05b8f564:
              lVar10 = (*(code *)*puVar4)(plVar8,puVar4[1]);
              if ((lVar10 != 0) && (uVar3 = FUN_069e7560(lVar10,0), lVar9 != 0)) {
                *(undefined4 *)(lVar9 + 0x5c) = uVar3;
                *(undefined4 *)(lVar9 + 0x60) = param_3;
                *(undefined4 *)(lVar9 + 100) = param_4;
                return;
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


