/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 06367ea4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06368318) */

long OVRManager__get_xrSession(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  int iVar10;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long *plVar11;
  
  if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  *(long *)(unaff_x23 + 0x20) = unaff_x22;
  thunk_FUN_037aeb94();
  uVar4 = FUN_03f7870c();
  uVar4 = FUN_06368ae0(uVar4);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar5 = FUN_047f96e4(*(long *)(unaff_x19 + 0x10),uVar4,*(undefined8 *)PTR_DAT_07db5618);
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == 0) {
        lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5608);
        FUN_06368d28();
      }
      else {
        lVar6 = FUN_06368f0c();
      }
      if (((*(long *)(unaff_x19 + 0x10) != 0) &&
          (FUN_054503ec(*(long *)(unaff_x19 + 0x10),lVar6,*(undefined8 *)PTR_DAT_07db55f8),
          unaff_x22 != 0)) && (lVar6 != 0)) {
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
            return lVar6;
          }
          lVar8 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db52f0) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0636818c;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
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
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06368204;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,0);
LAB_06368204:
            uVar5 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar11 == (long *)0x0) {
                return lVar6;
              }
              lVar8 = *plVar11;
              uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar5 == 0) goto LAB_063682c0;
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_063682a8;
            }
            lVar6 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06368260;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar2,0);
LAB_06368260:
            (*(code *)*puVar7)(plVar11,puVar7[1]);
            lVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType();
          } while( true );
        }
        iVar10 = 0;
        do {
          lVar8 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_06368064;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar1,0);
LAB_06368064:
          iVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          if (iVar3 <= iVar10) goto LAB_06368100;
          plVar11 = *(long **)(unaff_x22 + 0x98);
          if (plVar11 == (long *)0x0) break;
          lVar8 = *plVar11;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_063680cc;
              }
              uVar5 = uVar5 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 != 0);
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
      lVar6 = FUN_047f963c(*(long *)(unaff_x19 + 0x10),uVar4,*(undefined8 *)PTR_DAT_07db5620);
      return lVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
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
  return lVar6;
}


