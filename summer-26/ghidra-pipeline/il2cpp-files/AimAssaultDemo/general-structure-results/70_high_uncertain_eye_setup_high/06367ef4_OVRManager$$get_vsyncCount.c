/*
FUNCTION_NAME: OVRManager$$get_vsyncCount
ENTRY_POINT: 06367ef4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06368318) */

long OVRManager__get_vsyncCount(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  int iVar10;
  long unaff_x20;
  long unaff_x22;
  long *plVar11;
  
  if ((unaff_x22 != 0) && (lVar4 = thunk_FUN_037787d0(), lVar4 == 0)) {
    uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,0);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  *(long *)(param_1 + 0x20) = unaff_x22;
  thunk_FUN_037aeb94();
  uVar5 = FUN_06368ae0(param_1);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar6 = FUN_047f96e4(*(long *)(unaff_x19 + 0x10),uVar5,*(undefined8 *)PTR_DAT_07db5618);
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 == 0) {
        lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5608);
        FUN_06368d28();
      }
      else {
        lVar4 = FUN_06368f0c();
      }
      if (((*(long *)(unaff_x19 + 0x10) != 0) &&
          (FUN_054503ec(*(long *)(unaff_x19 + 0x10),lVar4,*(undefined8 *)PTR_DAT_07db55f8),
          unaff_x22 != 0)) && (lVar4 != 0)) {
        FUN_06368f74();
        FUN_06368f74();
        puVar2 = PTR_DAT_07db5300;
        puVar1 = PTR_DAT_07db52e0;
        plVar11 = *(long **)(unaff_x22 + 0x98);
        if (plVar11 == (long *)0x0) {
LAB_06368100:
          if (*(long *)(unaff_x22 + 0xa8) != 0) {
            FUN_063693c8();
          }
          if (*(long *)(unaff_x22 + 0xc0) != 0) {
            FUN_063693f4();
          }
          plVar11 = *(long **)(unaff_x22 + 0xf8);
          if (plVar11 == (long *)0x0) {
            return lVar4;
          }
          lVar8 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db52f0) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0636818c;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07db52f0,0);
LAB_0636818c:
          plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar2 = PTR_DAT_07db52f8;
          puVar1 = PTR_DAT_07d89700;
          do {
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar8 = *plVar11;
            uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar6 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06368204;
                }
                uVar6 = uVar6 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,0);
LAB_06368204:
            uVar6 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar11 == (long *)0x0) {
                return lVar4;
              }
              lVar8 = *plVar11;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 == 0) goto LAB_063682c0;
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_063682a8;
            }
            lVar4 = *plVar11;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06368260;
                }
                uVar6 = uVar6 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar2,0);
LAB_06368260:
            (*(code *)*puVar7)(plVar11,puVar7[1]);
            lVar4 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType();
          } while( true );
        }
        iVar10 = 0;
        do {
          lVar8 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06368064;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,0);
LAB_06368064:
          iVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          if (iVar3 <= iVar10) goto LAB_06368100;
          plVar11 = *(long **)(unaff_x22 + 0x98);
          if (plVar11 == (long *)0x0) break;
          lVar8 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_063680cc;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar2,0);
LAB_063680cc:
          (*(code *)*puVar7)(plVar11,iVar10,puVar7[1]);
          FUN_0636926c();
          plVar11 = *(long **)(unaff_x22 + 0x98);
          iVar10 = iVar10 + 1;
        } while (plVar11 != (long *)0x0);
      }
    }
    else if (*(long *)(unaff_x19 + 0x10) != 0) {
      lVar4 = FUN_047f963c(*(long *)(unaff_x19 + 0x10),uVar5,*(undefined8 *)PTR_DAT_07db5620);
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar9 = piVar9 + 4;
    if (uVar6 == 0) break;
LAB_063682a8:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_063682dc;
    }
  }
LAB_063682c0:
  puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d896f8,0);
FUN_063682dc:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
  return lVar4;
}


