/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateEyeTrackingContextNative
ENTRY_POINT: 071ea83c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x071eae30) */
/* WARNING: Removing unreachable block (ram,0x071eaef4) */
/* WARNING: Removing unreachable block (ram,0x071eb00c) */
/* WARNING: Removing unreachable block (ram,0x071eb020) */

long Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateEyeTrackingContextNative(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 *unaff_x23;
  undefined8 uVar20;
  long *unaff_x24;
  long *plVar21;
  
  FUN_071eb230();
  FUN_05212f00();
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
  FUN_05212530(lVar8,uVar1,*unaff_x23);
  lVar9 = *unaff_x24;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar9 = *unaff_x24;
  }
  if (*(long *)(*(long *)(lVar9 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar9 = *unaff_x24;
    }
    uVar20 = **(undefined8 **)(lVar9 + 0xb8);
    uVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eaa608);
    System_Collections_Generic_HashSet<Vector3Int>__System_Collections_Generic_ICollection<T>_Add
              (uVar10,uVar20,*(undefined8 *)PTR_DAT_08eaa630,0);
    puVar11 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *puVar11 = uVar10;
    thunk_FUN_03d233cc(puVar11,uVar10);
  }
  plVar12 = (long *)FUN_0461fadc();
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar9 = *plVar12;
  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar17 != 0) {
    piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08eaa610) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_071ea96c;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08eaa610,0);
LAB_071ea96c:
  plVar12 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
  puVar6 = PTR_DAT_08eaa640;
  puVar5 = PTR_DAT_08e96e68;
  puVar4 = PTR_DAT_08e81e10;
  puVar3 = PTR_DAT_08e6a290;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar15 = *plVar12;
    lVar9 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_071ea9ec;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar12,lVar9,0);
LAB_071ea9ec:
    uVar17 = (*(code *)*puVar11)(plVar12,puVar11[1]);
    if ((uVar17 & 1) == 0) {
      if (plVar12 == (long *)0x0) {
        return lVar8;
      }
      lVar9 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar17 == 0) goto LAB_071eaf38;
      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_071eaf20;
    }
    lVar9 = *plVar12;
    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08eaa618) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_071eaa50;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08eaa618,0);
LAB_071eaa50:
    plVar13 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
    iVar7 = FUN_04614d78(plVar13,*(undefined8 *)PTR_DAT_08eaa5f0);
    if (iVar7 == 1) {
      uVar10 = FUN_0461aa48(plVar13,*(undefined8 *)PTR_DAT_08eaa5f8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar15 = *(long *)puVar5;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(lVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    else {
      lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
      FUN_052124c0(lVar9,*(undefined8 *)PTR_DAT_08e96e78);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar15 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e81e08) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_071eab68;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
      plVar13 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
LAB_071eab7c:
      lVar16 = *plVar13;
      lVar15 = *(long *)puVar3;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_071eabc8;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_03cf1348(plVar13,lVar15,0);
LAB_071eabc8:
      uVar17 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if ((uVar17 & 1) != 0) {
        lVar15 = thunk_FUN_03cf5234(*(undefined8 *)puVar6);
        FUN_071ec77c(lVar15,0);
        lVar16 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_071eac38;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar4,0);
LAB_071eac38:
        lVar16 = (*(code *)*puVar11)(plVar13,puVar11[1]);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        plVar21 = (long *)(lVar15 + 0x10);
        *plVar21 = lVar16;
        thunk_FUN_03d233cc(plVar21);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar16 = *plVar21;
        if (*(int *)(lVar9 + 0x18) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar17 = FUN_071eb534(lVar16,unaff_w21);
          if ((uVar17 & 1) != 0) break;
          goto LAB_071eacc0;
        }
        lVar15 = *(long *)(lVar9 + 0x10);
        lVar18 = *(long *)puVar5;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(int *)(lVar15 + 0x18) == 0) {
          FUN_05212cf4(lVar9,lVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar9 + 0x18) = 1;
          *(long *)(lVar15 + 0x20) = lVar16;
          thunk_FUN_03d233cc((long *)(lVar15 + 0x20),lVar16);
        }
        goto LAB_071eab7c;
      }
      if (plVar13 != (long *)0x0) {
        lVar15 = *plVar13;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e6a288) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_071eae18;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e6a288,0);
LAB_071eae18:
        (*(code *)*puVar11)(plVar13,puVar11[1]);
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05212f00(lVar8,lVar9,*(undefined8 *)PTR_DAT_08eaa620);
    }
  } while( true );
  plVar14 = (long *)*plVar21;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar10 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
  uVar17 = thunk_FUN_06f73d88(uVar10,*(undefined8 *)PTR_DAT_08eaa648,0);
  if ((uVar17 & 1) != 0) {
LAB_071eacc0:
    uVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar10,lVar15,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar17 = FUN_04607abc(lVar9,uVar10,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar17 & 1) == 0) {
      lVar15 = *plVar21;
      lVar16 = *(long *)(lVar9 + 0x10);
      lVar18 = *(long *)puVar5;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar15;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(lVar9,lVar15,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  goto LAB_071eab7c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_071eaf20:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_071eaf54;
    }
  }
LAB_071eaf38:
  puVar11 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e6a288,0);
LAB_071eaf54:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
  return lVar8;
}


