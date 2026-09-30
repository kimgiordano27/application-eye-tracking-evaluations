/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 05b8f3b8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_7;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature___ctor
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x21;
  long unaff_x22;
  long lVar9;
  
  do {
    if (*(long *)(in_x10 + -2) == param_6) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_05b8f3f8;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_031c0d08();
LAB_05b8f3f8:
  bVar2 = (*(code *)*puVar4)();
  if (unaff_x22 != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x60);
    *(byte *)(unaff_x22 + 0x10) = bVar2 & 1;
    if (lVar9 != 0) {
      if (*(char *)(lVar9 + 0x10) == '\0') {
        return;
      }
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05b8f478;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_031c0d08(plVar8,*unaff_x21,0);
LAB_05b8f478:
        uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        plVar8 = *(long **)(unaff_x19 + 0x48);
        *(undefined4 *)(lVar9 + 0x14) = uVar3;
        puVar1 = PTR_DAT_07112a48;
        if (plVar8 != (long *)0x0) {
          lVar9 = *plVar8;
          lVar5 = *(long *)(unaff_x19 + 0x60);
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07112a48) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_05b8f4e8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)PTR_DAT_07112a48,0);
LAB_05b8f4e8:
          lVar9 = (*(code *)*puVar4)(plVar8,puVar4[1]);
          if ((lVar9 != 0) && (uVar3 = FUN_069e74e4(lVar9,0), lVar5 != 0)) {
            *(undefined4 *)(lVar5 + 0x50) = uVar3;
            *(undefined4 *)(lVar5 + 0x54) = param_3;
            *(undefined4 *)(lVar5 + 0x58) = param_4;
            plVar8 = *(long **)(unaff_x19 + 0x48);
            if (plVar8 != (long *)0x0) {
              lVar9 = *plVar8;
              lVar5 = *(long *)(unaff_x19 + 0x60);
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_05b8f564;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)FUN_031c0d08(plVar8,*(long *)puVar1,0);
LAB_05b8f564:
              lVar9 = (*(code *)*puVar4)(plVar8,puVar4[1]);
              if ((lVar9 != 0) && (uVar3 = FUN_069e7560(lVar9,0), lVar5 != 0)) {
                *(undefined4 *)(lVar5 + 0x5c) = uVar3;
                *(undefined4 *)(lVar5 + 0x60) = param_3;
                *(undefined4 *)(lVar5 + 100) = param_4;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


