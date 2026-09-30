/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateHandTrackingContext
ENTRY_POINT: 071ea8c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071eae30) */
/* WARNING: Removing unreachable block (ram,0x071eaef4) */
/* WARNING: Removing unreachable block (ram,0x071eb00c) */
/* WARNING: Removing unreachable block (ram,0x071eb020) */

long Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateHandTrackingContext(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *in_x9;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined4 unaff_w21;
  undefined8 uVar18;
  long *unaff_x24;
  long *plVar19;
  long in_stack_00000008;
  
  uVar18 = *param_1;
  uVar7 = thunk_FUN_03cf5234(*in_x9);
  System_Collections_Generic_HashSet<Vector3Int>__System_Collections_Generic_ICollection<T>_Add
            (uVar7,uVar18,*(undefined8 *)PTR_DAT_08eaa630,0);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_03d233cc(puVar8,uVar7);
  plVar9 = (long *)FUN_0461fadc();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar12 = *plVar9;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08eaa610) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_071ea96c;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08eaa610,0);
LAB_071ea96c:
  plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
  puVar5 = PTR_DAT_08eaa640;
  puVar4 = PTR_DAT_08e96e68;
  puVar3 = PTR_DAT_08e81e10;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar13 = *plVar9;
    lVar12 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_071ea9ec;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,lVar12,0);
LAB_071ea9ec:
    uVar15 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return in_stack_00000008;
      }
      lVar12 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 == 0) goto LAB_071eaf38;
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_071eaf20;
    }
    lVar12 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08eaa618) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_071eaa50;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08eaa618,0);
LAB_071eaa50:
    plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    iVar6 = FUN_04614d78(plVar10,*(undefined8 *)PTR_DAT_08eaa5f0);
    if (iVar6 == 1) {
      uVar7 = FUN_0461aa48(plVar10,*(undefined8 *)PTR_DAT_08eaa5f8);
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar12 = *(long *)(in_stack_00000008 + 0x10);
      lVar13 = *(long *)puVar4;
      *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(in_stack_00000008 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(in_stack_00000008,uVar7,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      lVar12 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
      FUN_052124c0(lVar12,*(undefined8 *)PTR_DAT_08e96e78);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar13 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e81e08) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_071eab68;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
      plVar10 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
LAB_071eab7c:
      lVar14 = *plVar10;
      lVar13 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_071eabc8;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_03cf1348(plVar10,lVar13,0);
LAB_071eabc8:
      uVar15 = (*(code *)*puVar8)(plVar10,puVar8[1]);
      if ((uVar15 & 1) != 0) {
        lVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
        FUN_071ec77c(lVar13,0);
        lVar14 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_071eac38;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar3,0);
LAB_071eac38:
        lVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        plVar19 = (long *)(lVar13 + 0x10);
        *plVar19 = lVar14;
        thunk_FUN_03d233cc(plVar19);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar14 = *plVar19;
        if (*(int *)(lVar12 + 0x18) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar15 = FUN_071eb534(lVar14,unaff_w21);
          if ((uVar15 & 1) != 0) break;
          goto LAB_071eacc0;
        }
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(int *)(lVar13 + 0x18) == 0) {
          FUN_05212cf4(lVar12,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar12 + 0x18) = 1;
          *(long *)(lVar13 + 0x20) = lVar14;
          thunk_FUN_03d233cc((long *)(lVar13 + 0x20),lVar14);
        }
        goto LAB_071eab7c;
      }
      if (plVar10 != (long *)0x0) {
        lVar13 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e6a288) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_071eae18;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar8 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)PTR_DAT_08e6a288,0);
LAB_071eae18:
        (*(code *)*puVar8)(plVar10,puVar8[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05212f00(in_stack_00000008,lVar12,*(undefined8 *)PTR_DAT_08eaa620);
    }
  } while( true );
  plVar11 = (long *)*plVar19;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar7 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
  uVar15 = thunk_FUN_06f73d88(uVar7,*(undefined8 *)PTR_DAT_08eaa648,0);
  if ((uVar15 & 1) != 0) {
LAB_071eacc0:
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar7,lVar13,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar15 = FUN_04607abc(lVar12,uVar7,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar15 & 1) == 0) {
      lVar13 = *plVar19;
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = lVar13;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(lVar12,lVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_071eab7c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_071eaf20:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_071eaf54;
    }
  }
LAB_071eaf38:
  puVar8 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e6a288,0);
LAB_071eaf54:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return in_stack_00000008;
}


