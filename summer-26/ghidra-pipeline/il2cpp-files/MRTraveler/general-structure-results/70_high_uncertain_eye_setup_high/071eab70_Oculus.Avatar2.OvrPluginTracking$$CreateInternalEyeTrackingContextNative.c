/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContextNative
ENTRY_POINT: 071eab70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x071eae30) */
/* WARNING: Removing unreachable block (ram,0x071eaef4) */
/* WARNING: Removing unreachable block (ram,0x071eb00c) */
/* WARNING: Removing unreachable block (ram,0x071eb020) */

long Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContextNative
               (code *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar12;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  do {
    plVar3 = (long *)(*param_1)(param_2,param_3);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
LAB_071eab7c:
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_071eabc8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*unaff_x27,0);
LAB_071eabc8:
    uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar9 & 1) != 0) {
      lVar7 = thunk_FUN_03cf5234(*unaff_x19);
      FUN_071ec77c(lVar7,0);
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x29) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_071eac38;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*unaff_x29,0);
LAB_071eac38:
      lVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar12 = (long *)(lVar7 + 0x10);
      *plVar12 = lVar8;
      thunk_FUN_03d233cc(plVar12);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar8 = *plVar12;
      if (*(int *)(unaff_x22 + 0x18) != 0) {
        if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar9 = FUN_071eb534(lVar8,unaff_w21);
        if ((uVar9 & 1) != 0) break;
        goto LAB_071eacc0;
      }
      lVar7 = *(long *)(unaff_x22 + 0x10);
      lVar10 = *unaff_x28;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar7 + 0x18) == 0) {
        FUN_05212cf4(unaff_x22,lVar8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      else {
        *(undefined4 *)(unaff_x22 + 0x18) = 1;
        *(long *)(lVar7 + 0x20) = lVar8;
        thunk_FUN_03d233cc((long *)(lVar7 + 0x20),lVar8);
      }
      goto LAB_071eab7c;
    }
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_071eae18;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e6a288,0);
LAB_071eae18:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05212f00(in_stack_00000008,unaff_x22,*(undefined8 *)PTR_DAT_08eaa620);
LAB_071ea9a0:
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_071ea9ec;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_071ea9ec:
    uVar9 = (*(code *)*puVar4)();
    if ((uVar9 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return in_stack_00000008;
      }
      lVar7 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_071eaf38;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_071eaf20;
    }
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08eaa618) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_071eaa50;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_071eaa50:
    param_2 = (long *)(*(code *)*puVar4)();
    iVar2 = FUN_04614d78(param_2,*(undefined8 *)PTR_DAT_08eaa5f0);
    if (iVar2 == 1) {
      uVar6 = FUN_0461aa48(param_2,*(undefined8 *)PTR_DAT_08eaa5f8);
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *(long *)(in_stack_00000008 + 0x10);
      lVar8 = *unaff_x28;
      *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(in_stack_00000008 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(in_stack_00000008,uVar6,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_071ea9a0;
    }
    unaff_x22 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
    FUN_052124c0(unaff_x22,*(undefined8 *)PTR_DAT_08e96e78);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81e08) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_071eab68;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(param_2,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
    param_1 = (code *)*puVar4;
    param_3 = puVar4[1];
  } while( true );
  plVar5 = (long *)*plVar12;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  uVar9 = thunk_FUN_06f73d88(uVar6,*(undefined8 *)PTR_DAT_08eaa648,0);
  if ((uVar9 & 1) != 0) {
LAB_071eacc0:
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar6,lVar7,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar9 = FUN_04607abc(unaff_x22,uVar6,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar9 & 1) == 0) {
      lVar7 = *plVar12;
      lVar8 = *(long *)(unaff_x22 + 0x10);
      lVar10 = *unaff_x28;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(unaff_x22,lVar7,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_071eab7c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_071eaf20:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_071eaf54;
    }
  }
LAB_071eaf38:
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_071eaf54:
  (*(code *)*puVar4)();
  return in_stack_00000008;
}


