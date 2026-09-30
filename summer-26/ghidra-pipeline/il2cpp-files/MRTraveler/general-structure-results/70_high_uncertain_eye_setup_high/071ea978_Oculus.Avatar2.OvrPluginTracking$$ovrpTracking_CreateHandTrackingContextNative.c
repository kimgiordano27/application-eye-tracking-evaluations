/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateHandTrackingContextNative
ENTRY_POINT: 071ea978
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071eae30) */
/* WARNING: Removing unreachable block (ram,0x071eaef4) */
/* WARNING: Removing unreachable block (ram,0x071eb00c) */
/* WARNING: Removing unreachable block (ram,0x071eb020) */

long Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateHandTrackingContextNative(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar17;
  long in_stack_00000008;
  
  puVar5 = PTR_DAT_08eaa640;
  puVar4 = PTR_DAT_08e96e68;
  puVar3 = PTR_DAT_08e81e10;
  puVar2 = PTR_DAT_08e6a290;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar12 = *param_1;
    lVar11 = *(long *)puVar2;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_071ea9ec;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(param_1,lVar11,0);
LAB_071ea9ec:
    uVar14 = (*(code *)*puVar7)(param_1,puVar7[1]);
    if ((uVar14 & 1) == 0) {
      if (param_1 == (long *)0x0) {
        return unaff_x22;
      }
      lVar11 = *param_1;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 == 0) goto LAB_071eaf38;
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_071eaf20;
    }
    lVar11 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08eaa618) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_071eaa50;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(param_1,*(long *)PTR_DAT_08eaa618,0);
LAB_071eaa50:
    plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
    iVar6 = FUN_04614d78(plVar8,*(undefined8 *)PTR_DAT_08eaa5f0);
    if (iVar6 == 1) {
      uVar9 = FUN_0461aa48(plVar8,*(undefined8 *)PTR_DAT_08eaa5f8);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar11 = *(long *)(unaff_x22 + 0x10);
      lVar12 = *(long *)puVar4;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(unaff_x22,uVar9,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      lVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
      FUN_052124c0(lVar11,*(undefined8 *)PTR_DAT_08e96e78);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e81e08) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_071eab68;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
      plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
LAB_071eab7c:
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar2;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_071eabc8;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar8,lVar12,0);
LAB_071eabc8:
      uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar14 & 1) != 0) {
        lVar12 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
        FUN_071ec77c(lVar12,0);
        lVar13 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_071eac38;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar3,0);
LAB_071eac38:
        lVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        plVar17 = (long *)(lVar12 + 0x10);
        *plVar17 = lVar13;
        thunk_FUN_03d233cc(plVar17);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar13 = *plVar17;
        if (*(int *)(lVar11 + 0x18) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar14 = FUN_071eb534(lVar13,unaff_w21);
          if ((uVar14 & 1) != 0) break;
          goto LAB_071eacc0;
        }
        lVar12 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)puVar4;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(int *)(lVar12 + 0x18) == 0) {
          FUN_05212cf4(lVar11,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar11 + 0x18) = 1;
          *(long *)(lVar12 + 0x20) = lVar13;
          thunk_FUN_03d233cc((long *)(lVar12 + 0x20),lVar13);
        }
        goto LAB_071eab7c;
      }
      if (plVar8 != (long *)0x0) {
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e6a288) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_071eae18;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e6a288,0);
LAB_071eae18:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05212f00(in_stack_00000008,lVar11,*(undefined8 *)PTR_DAT_08eaa620);
      unaff_x22 = in_stack_00000008;
    }
  } while( true );
  plVar10 = (long *)*plVar17;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
  uVar14 = thunk_FUN_06f73d88(uVar9,*(undefined8 *)PTR_DAT_08eaa648,0);
  if ((uVar14 & 1) != 0) {
LAB_071eacc0:
    uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar9,lVar12,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar14 = FUN_04607abc(lVar11,uVar9,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar14 & 1) == 0) {
      lVar12 = *plVar17;
      lVar13 = *(long *)(lVar11 + 0x10);
      lVar15 = *(long *)puVar4;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = lVar12;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(lVar11,lVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_071eab7c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_071eaf20:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_071eaf54;
    }
  }
LAB_071eaf38:
  puVar7 = (undefined8 *)FUN_03cf1348(param_1,*(long *)PTR_DAT_08e6a288,0);
LAB_071eaf54:
  (*(code *)*puVar7)(param_1,puVar7[1]);
  return unaff_x22;
}


