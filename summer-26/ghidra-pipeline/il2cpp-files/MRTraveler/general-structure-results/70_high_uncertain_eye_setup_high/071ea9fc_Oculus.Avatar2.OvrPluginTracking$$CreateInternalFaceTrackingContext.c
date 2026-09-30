/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalFaceTrackingContext
ENTRY_POINT: 071ea9fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071eb020) */
/* WARNING: Removing unreachable block (ram,0x071eae30) */
/* WARNING: Removing unreachable block (ram,0x071eaef4) */
/* WARNING: Removing unreachable block (ram,0x071eb00c) */

long Oculus_Avatar2_OvrPluginTracking__CreateInternalFaceTrackingContext(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar13;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  do {
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08eaa618) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_071eaa50;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071eaa50:
    plVar4 = (long *)(*(code *)*puVar3)();
    iVar2 = FUN_04614d78(plVar4,*(undefined8 *)PTR_DAT_08eaa5f0);
    if (iVar2 == 1) {
      uVar5 = FUN_0461aa48(plVar4,*(undefined8 *)PTR_DAT_08eaa5f8);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *(long *)(unaff_x22 + 0x10);
      lVar10 = *unaff_x28;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(unaff_x22,uVar5,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
      FUN_052124c0(lVar7,*(undefined8 *)PTR_DAT_08e96e78);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar10 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e81e08) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_071eab68;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
LAB_071eab7c:
      lVar10 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_071eabc8;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*unaff_x27,0);
LAB_071eabc8:
      uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar9 & 1) != 0) {
        lVar10 = thunk_FUN_03cf5234(*unaff_x19);
        FUN_071ec77c(lVar10,0);
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_071eac38;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*unaff_x29,0);
LAB_071eac38:
        lVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        plVar13 = (long *)(lVar10 + 0x10);
        *plVar13 = lVar8;
        thunk_FUN_03d233cc(plVar13);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar8 = *plVar13;
        if (*(int *)(lVar7 + 0x18) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar9 = FUN_071eb534(lVar8,unaff_w21);
          if ((uVar9 & 1) != 0) goto code_r0x071eac94;
          goto LAB_071eacc0;
        }
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar11 = *unaff_x28;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
          FUN_05212cf4(lVar7,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar7 + 0x18) = 1;
          *(long *)(lVar10 + 0x20) = lVar8;
          thunk_FUN_03d233cc((long *)(lVar10 + 0x20),lVar8);
        }
        goto LAB_071eab7c;
      }
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
              puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_071eae18;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e6a288,0);
LAB_071eae18:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05212f00(in_stack_00000008,lVar7,*(undefined8 *)PTR_DAT_08eaa620);
      unaff_x22 = in_stack_00000008;
    }
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_071ea9ec;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071ea9ec:
    uVar9 = (*(code *)*puVar3)();
  } while ((uVar9 & 1) != 0);
  if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_071eaf54;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071eaf54:
    (*(code *)*puVar3)();
  }
  return unaff_x22;
code_r0x071eac94:
  plVar6 = (long *)*plVar13;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  uVar9 = thunk_FUN_06f73d88(uVar5,*(undefined8 *)PTR_DAT_08eaa648,0);
  if ((uVar9 & 1) != 0) {
LAB_071eacc0:
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar5,lVar10,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar9 = FUN_04607abc(lVar7,uVar5,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar9 & 1) == 0) {
      lVar10 = *plVar13;
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar11 = *unaff_x28;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar10;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(lVar7,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  goto LAB_071eab7c;
}


