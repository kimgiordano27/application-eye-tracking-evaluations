/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling
ENTRY_POINT: 06367da4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06368318) */

long OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x19;
  int iVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long unaff_x22;
  long *plVar11;
  
  FUN_0373b518(PTR_DAT_07db55f8);
  FUN_0373b518(PTR_DAT_07db5600);
  FUN_0373b518(PTR_DAT_07db52e0);
  FUN_0373b518(PTR_DAT_07d896f8);
  FUN_0373b518(PTR_DAT_07db52f0);
  FUN_0373b518(PTR_DAT_07db52f8);
  FUN_0373b518(PTR_DAT_07d89700);
  FUN_0373b518(PTR_DAT_07db5300);
  FUN_0373b518(PTR_DAT_07db5608);
  FUN_0373b518(PTR_DAT_07db5610);
  FUN_0373b518(PTR_DAT_07db5618);
  FUN_0373b518(PTR_DAT_07db5620);
  FUN_0373b518(PTR_DAT_07db5628);
  *(undefined1 *)(unaff_x21 + 0x436) = 1;
  if (unaff_x20 == 0) {
    lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07db5610,1);
    if (lVar5 == 0) goto LAB_063680fc;
    if ((unaff_x22 != 0) && (lVar6 = thunk_FUN_037787d0(), lVar6 == 0)) {
LAB_0636830c:
      uVar10 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar10,0);
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_06368308:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    *(long *)(lVar5 + 0x20) = unaff_x22;
    thunk_FUN_037aeb94();
  }
  else {
    if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_063680fc;
    uVar4 = FUN_05139468();
    if ((uVar4 & 1) != 0) {
      return unaff_x20;
    }
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar5 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07db5610,1);
    if (lVar5 == 0) goto LAB_063680fc;
    if ((unaff_x22 != 0) && (lVar6 = thunk_FUN_037787d0(), lVar6 == 0)) goto LAB_0636830c;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_06368308;
    *(long *)(lVar5 + 0x20) = unaff_x22;
    thunk_FUN_037aeb94();
    lVar5 = FUN_03f7870c(uVar10,lVar5,*(undefined8 *)PTR_DAT_07db5600);
  }
  uVar10 = FUN_06368ae0(lVar5);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar4 = FUN_047f96e4(*(long *)(unaff_x19 + 0x10),uVar10,*(undefined8 *)PTR_DAT_07db5618);
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == 0) {
        lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5608);
        FUN_06368d28();
      }
      else {
        lVar5 = FUN_06368f0c();
      }
      if (((*(long *)(unaff_x19 + 0x10) != 0) &&
          (FUN_054503ec(*(long *)(unaff_x19 + 0x10),lVar5,*(undefined8 *)PTR_DAT_07db55f8),
          unaff_x22 != 0)) && (lVar5 != 0)) {
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
            return lVar5;
          }
          lVar6 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db52f0) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0636818c;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
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
            lVar6 = *plVar11;
            uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06368204;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,0);
LAB_06368204:
            uVar4 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar11 == (long *)0x0) {
                return lVar5;
              }
              lVar6 = *plVar11;
              uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar4 == 0) goto LAB_063682c0;
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_063682a8;
            }
            lVar5 = *plVar11;
            uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06368260;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar2,0);
LAB_06368260:
            (*(code *)*puVar7)(plVar11,puVar7[1]);
            lVar5 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType();
          } while( true );
        }
        iVar9 = 0;
        do {
          lVar6 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06368064;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,0);
LAB_06368064:
          iVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          if (iVar3 <= iVar9) goto LAB_06368100;
          plVar11 = *(long **)(unaff_x22 + 0x98);
          if (plVar11 == (long *)0x0) break;
          lVar6 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_063680cc;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar2,0);
LAB_063680cc:
          (*(code *)*puVar7)(plVar11,iVar9,puVar7[1]);
          FUN_0636926c();
          plVar11 = *(long **)(unaff_x22 + 0x98);
          iVar9 = iVar9 + 1;
        } while (plVar11 != (long *)0x0);
      }
    }
    else if (*(long *)(unaff_x19 + 0x10) != 0) {
      lVar5 = FUN_047f963c(*(long *)(unaff_x19 + 0x10),uVar10,*(undefined8 *)PTR_DAT_07db5620);
      return lVar5;
    }
  }
LAB_063680fc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_063682a8:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto FUN_063682dc;
    }
  }
LAB_063682c0:
  puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d896f8,0);
FUN_063682dc:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
  return lVar5;
}


