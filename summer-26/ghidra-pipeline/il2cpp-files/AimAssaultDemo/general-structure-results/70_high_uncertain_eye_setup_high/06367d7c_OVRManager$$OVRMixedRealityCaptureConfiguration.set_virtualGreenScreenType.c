/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType
ENTRY_POINT: 06367d7c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06368318) */

long OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
               (long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  
  if ((DAT_0825c436 & 1) == 0) {
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
    DAT_0825c436 = 1;
  }
  if (param_2 == 0) {
    plVar5 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07db5610,1);
    if (plVar5 == (long *)0x0) goto LAB_063680fc;
    if ((param_3 != 0) &&
       (lVar6 = thunk_FUN_037787d0(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_0636830c:
      uVar11 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar11,0);
    }
    if ((int)plVar5[3] == 0) {
LAB_06368308:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar5[4] = param_3;
    thunk_FUN_037aeb94(plVar5 + 4,param_3);
  }
  else {
    if (*(long *)(param_2 + 0x18) == 0) goto LAB_063680fc;
    uVar4 = FUN_05139468(*(long *)(param_2 + 0x18),param_3,*(undefined8 *)PTR_DAT_07db5628);
    if ((uVar4 & 1) != 0) {
      return param_2;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x18);
    plVar5 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07db5610,1);
    if (plVar5 == (long *)0x0) goto LAB_063680fc;
    if ((param_3 != 0) &&
       (lVar6 = thunk_FUN_037787d0(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_0636830c;
    if ((int)plVar5[3] == 0) goto LAB_06368308;
    plVar5[4] = param_3;
    thunk_FUN_037aeb94(plVar5 + 4,param_3);
    plVar5 = (long *)FUN_03f7870c(uVar11,plVar5,*(undefined8 *)PTR_DAT_07db5600);
  }
  uVar11 = FUN_06368ae0(plVar5);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar4 = FUN_047f96e4(*(long *)(param_1 + 0x10),uVar11,*(undefined8 *)PTR_DAT_07db5618);
    if ((uVar4 & 1) == 0) {
      if (param_2 == 0) {
        lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5608);
        FUN_06368d28(lVar6,param_3);
      }
      else {
        lVar6 = FUN_06368f0c(param_2,param_3);
      }
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (FUN_054503ec(*(long *)(param_1 + 0x10),lVar6,*(undefined8 *)PTR_DAT_07db55f8),
          param_3 != 0)) && (lVar6 != 0)) {
        FUN_06368f74(param_1,*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(lVar6 + 0x20));
        FUN_06368f74(param_1,*(undefined8 *)(param_3 + 200),*(undefined8 *)(lVar6 + 0x28));
        puVar2 = PTR_DAT_07db5300;
        puVar1 = PTR_DAT_07db52e0;
        plVar5 = *(long **)(param_3 + 0x98);
        if (plVar5 == (long *)0x0) {
LAB_06368100:
          if (*(long *)(param_3 + 0xa8) != 0) {
            FUN_063693c8(param_1,lVar6);
          }
          if (*(long *)(param_3 + 0xc0) != 0) {
            FUN_063693f4(param_1,lVar6);
          }
          plVar5 = *(long **)(param_3 + 0xf8);
          if (plVar5 == (long *)0x0) {
            return lVar6;
          }
          lVar8 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db52f0) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0636818c;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db52f0,0);
LAB_0636818c:
          plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
          puVar2 = PTR_DAT_07db52f8;
          puVar1 = PTR_DAT_07d89700;
          do {
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar8 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06368204;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar1,0);
LAB_06368204:
            uVar4 = (*(code *)*puVar7)(plVar5,puVar7[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar5 == (long *)0x0) {
                return lVar6;
              }
              lVar8 = *plVar5;
              uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar4 == 0) goto LAB_063682c0;
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_063682a8;
            }
            lVar8 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06368260;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_06368260:
            uVar11 = (*(code *)*puVar7)(plVar5,puVar7[1]);
            lVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
                              (param_1,lVar6,uVar11);
          } while( true );
        }
        iVar10 = 0;
        do {
          lVar8 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06368064;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar1,0);
LAB_06368064:
          iVar3 = (*(code *)*puVar7)(plVar5,puVar7[1]);
          if (iVar3 <= iVar10) goto LAB_06368100;
          plVar5 = *(long **)(param_3 + 0x98);
          if (plVar5 == (long *)0x0) break;
          lVar8 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_063680cc;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_063680cc:
          uVar11 = (*(code *)*puVar7)(plVar5,iVar10,puVar7[1]);
          FUN_0636926c(param_1,lVar6,iVar10,uVar11);
          plVar5 = *(long **)(param_3 + 0x98);
          iVar10 = iVar10 + 1;
        } while (plVar5 != (long *)0x0);
      }
    }
    else if (*(long *)(param_1 + 0x10) != 0) {
      lVar6 = FUN_047f963c(*(long *)(param_1 + 0x10),uVar11,*(undefined8 *)PTR_DAT_07db5620);
      return lVar6;
    }
  }
LAB_063680fc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_063682a8:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_063682dc;
    }
  }
LAB_063682c0:
  puVar7 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07d896f8,0);
FUN_063682dc:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
  return lVar6;
}


