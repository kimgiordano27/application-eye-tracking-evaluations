/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateFaceTrackingContextNative
ENTRY_POINT: 071ea700
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071eae30) */
/* WARNING: Removing unreachable block (ram,0x071eaef4) */
/* WARNING: Removing unreachable block (ram,0x071eb00c) */
/* WARNING: Removing unreachable block (ram,0x071eb020) */

long Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateFaceTrackingContextNative(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar19;
  long *plVar20;
  
  FUN_03c8f898(PTR_DAT_08eaa610);
  FUN_03c8f898(PTR_DAT_08e81e10);
  FUN_03c8f898(PTR_DAT_08eaa618);
  FUN_03c8f898(PTR_DAT_08e6a290);
  FUN_03c8f898(PTR_DAT_08eaa620);
  FUN_03c8f898(PTR_DAT_08e96e68);
  FUN_03c8f898(PTR_DAT_08e96e78);
  FUN_03c8f898(PTR_DAT_08eaa628);
  FUN_03c8f898(PTR_DAT_08e96e88);
  FUN_03c8f898(PTR_DAT_08e96e80);
  FUN_03c8f898(PTR_DAT_08e80ef0);
  FUN_03c8f898(PTR_DAT_08eaa630);
  FUN_03c8f898(PTR_DAT_08eaa638);
  FUN_03c8f898(PTR_DAT_08eaa640);
  FUN_03c8f898(PTR_DAT_08eaa548);
  FUN_03c8f898(PTR_DAT_08eaa648);
  *(undefined1 *)(unaff_x20 + 0xafb) = 1;
  lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
  FUN_052124c0(lVar8,*(undefined8 *)PTR_DAT_08e96e78);
  if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar9 = FUN_071eb114();
  puVar5 = PTR_DAT_08eaa628;
  puVar4 = PTR_DAT_08eaa620;
  puVar3 = PTR_DAT_08eaa548;
  if (lVar8 != 0) {
    FUN_05212f00(lVar8,uVar9,*(undefined8 *)PTR_DAT_08eaa620);
    uVar9 = FUN_071eb230();
    FUN_05212f00(lVar8,uVar9,*(undefined8 *)puVar4);
    uVar1 = *(undefined4 *)(lVar8 + 0x18);
    lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
    FUN_05212530(lVar10,uVar1,*(undefined8 *)puVar5);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar11 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_08eaa600;
    lVar19 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar19 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar11 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar11 + 0xb8);
      lVar19 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eaa608);
      System_Collections_Generic_HashSet<Vector3Int>__System_Collections_Generic_ICollection<T>_Add
                (lVar19,uVar9,*(undefined8 *)PTR_DAT_08eaa630,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      *plVar12 = lVar19;
      thunk_FUN_03d233cc(plVar12,lVar19);
    }
    plVar12 = (long *)FUN_0461fadc(lVar8,lVar19,*(undefined8 *)puVar4);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08eaa610) {
            puVar13 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_071ea96c;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08eaa610,0);
LAB_071ea96c:
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar6 = PTR_DAT_08eaa640;
      puVar5 = PTR_DAT_08e96e68;
      puVar4 = PTR_DAT_08e81e10;
      puVar3 = PTR_DAT_08e6a290;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      do {
        lVar11 = *plVar12;
        lVar8 = *(long *)puVar3;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar8) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_071ea9ec;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar12,lVar8,0);
LAB_071ea9ec:
        uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar12 == (long *)0x0) {
            return lVar10;
          }
          lVar8 = *plVar12;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar16 == 0) goto LAB_071eaf38;
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_071eaf20;
        }
        lVar8 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08eaa618) {
              puVar13 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_071eaa50;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08eaa618,0);
LAB_071eaa50:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        iVar7 = FUN_04614d78(plVar14,*(undefined8 *)PTR_DAT_08eaa5f0);
        if (iVar7 == 1) {
          uVar9 = FUN_0461aa48(plVar14,*(undefined8 *)PTR_DAT_08eaa5f8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)puVar5;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
            thunk_FUN_03d233cc();
          }
          else {
            FUN_05212cf4(lVar10,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
          FUN_052124c0(lVar8,*(undefined8 *)PTR_DAT_08e96e78);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar11 = *plVar14;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e81e08) {
                puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_071eab68;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
          plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
LAB_071eab7c:
          lVar19 = *plVar14;
          lVar11 = *(long *)puVar3;
          uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar11) {
                puVar13 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_071eabc8;
              }
              uVar16 = uVar16 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar14,lVar11,0);
LAB_071eabc8:
          uVar16 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if ((uVar16 & 1) != 0) {
            lVar11 = thunk_FUN_03cf5234(*(undefined8 *)puVar6);
            FUN_071ec77c(lVar11,0);
            lVar19 = *plVar14;
            uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                  puVar13 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_071eac38;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar4,0);
LAB_071eac38:
            lVar19 = (*(code *)*puVar13)(plVar14,puVar13[1]);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            plVar20 = (long *)(lVar11 + 0x10);
            *plVar20 = lVar19;
            thunk_FUN_03d233cc(plVar20);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            lVar19 = *plVar20;
            if (*(int *)(lVar8 + 0x18) != 0) {
              if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar16 = FUN_071eb534(lVar19,unaff_w21);
              if ((uVar16 & 1) != 0) goto code_r0x071eac94;
              goto LAB_071eacc0;
            }
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar17 = *(long *)puVar5;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            if (*(int *)(lVar11 + 0x18) == 0) {
              FUN_05212cf4(lVar8,lVar19,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            else {
              *(undefined4 *)(lVar8 + 0x18) = 1;
              *(long *)(lVar11 + 0x20) = lVar19;
              thunk_FUN_03d233cc((long *)(lVar11 + 0x20),lVar19);
            }
            goto LAB_071eab7c;
          }
          if (plVar14 != (long *)0x0) {
            lVar11 = *plVar14;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar16 != 0) {
              piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e6a288) {
                  puVar13 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_071eae18;
                }
                uVar16 = uVar16 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)PTR_DAT_08e6a288,0);
LAB_071eae18:
            (*(code *)*puVar13)(plVar14,puVar13[1]);
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_05212f00(lVar10,lVar8,*(undefined8 *)PTR_DAT_08eaa620);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
code_r0x071eac94:
  plVar15 = (long *)*plVar20;
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar9 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
  uVar16 = thunk_FUN_06f73d88(uVar9,*(undefined8 *)PTR_DAT_08eaa648,0);
  if ((uVar16 & 1) != 0) {
LAB_071eacc0:
    uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar9,lVar11,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar16 = FUN_04607abc(lVar8,uVar9,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar16 & 1) == 0) {
      lVar11 = *plVar20;
      lVar19 = *(long *)(lVar8 + 0x10);
      lVar17 = *(long *)puVar5;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        *(long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(lVar8,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  goto LAB_071eab7c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
LAB_071eaf20:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar13 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_071eaf54;
    }
  }
LAB_071eaf38:
  puVar13 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e6a288,0);
LAB_071eaf54:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return lVar10;
}


