/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginFaceTrackingProvider$$.ctor
ENTRY_POINT: 071ead34
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x071eae30) */
/* WARNING: Removing unreachable block (ram,0x071eaef4) */
/* WARNING: Removing unreachable block (ram,0x071eb00c) */
/* WARNING: Removing unreachable block (ram,0x071eb020) */

long Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long in_x10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar11;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  do {
    *(int *)(unaff_x22 + 0x18) = (int)in_x10 + 1;
    *(long *)(param_1 + in_x10 * 8 + 0x20) = param_3;
    thunk_FUN_03d233cc();
LAB_071eab7c:
    lVar6 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_071eabc8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(unaff_x23,*unaff_x27,0);
LAB_071eabc8:
    uVar9 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (unaff_x23 != (long *)0x0) {
        lVar6 = *unaff_x23;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_071eae18;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(unaff_x23,*(long *)PTR_DAT_08e6a288,0);
LAB_071eae18:
        (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05212f00(in_stack_00000008,unaff_x22,*(undefined8 *)PTR_DAT_08eaa620);
LAB_071ea9a0:
      lVar6 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071ea9ec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071ea9ec:
      uVar9 = (*(code *)*puVar3)();
      if ((uVar9 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
          return in_stack_00000008;
        }
        lVar6 = *unaff_x20;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 == 0) goto LAB_071eaf38;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        break;
      }
      lVar6 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08eaa618) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071eaa50;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071eaa50:
      plVar11 = (long *)(*(code *)*puVar3)();
      iVar2 = FUN_04614d78(plVar11,*(undefined8 *)PTR_DAT_08eaa5f0);
      if (iVar2 == 1) {
        uVar5 = FUN_0461aa48(plVar11,*(undefined8 *)PTR_DAT_08eaa5f8);
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar6 = *(long *)(in_stack_00000008 + 0x10);
        lVar7 = *unaff_x28;
        *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar1 = *(uint *)(in_stack_00000008 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_03d233cc();
        }
        else {
          FUN_05212cf4(in_stack_00000008,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_071ea9a0;
      }
      unaff_x22 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
      FUN_052124c0(unaff_x22,*(undefined8 *)PTR_DAT_08e96e78);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar6 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e81e08) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071eab68;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
      unaff_x23 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      goto LAB_071eab7c;
    }
    lVar6 = thunk_FUN_03cf5234(*unaff_x19);
    FUN_071ec77c(lVar6,0);
    lVar7 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_071eac38;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(unaff_x23,*unaff_x29,0);
LAB_071eac38:
    lVar7 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = lVar7;
    thunk_FUN_03d233cc(plVar11);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar11;
    if (*(int *)(unaff_x22 + 0x18) == 0) {
      lVar6 = *(long *)(unaff_x22 + 0x10);
      lVar8 = *unaff_x28;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
        FUN_05212cf4(unaff_x22,lVar7,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      else {
        *(undefined4 *)(unaff_x22 + 0x18) = 1;
        *(long *)(lVar6 + 0x20) = lVar7;
        thunk_FUN_03d233cc((long *)(lVar6 + 0x20),lVar7);
      }
      goto LAB_071eab7c;
    }
    if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar9 = FUN_071eb534(lVar7,unaff_w21);
    if ((uVar9 & 1) != 0) {
      plVar4 = (long *)*plVar11;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar9 = thunk_FUN_06f73d88(uVar5,*(undefined8 *)PTR_DAT_08eaa648,0);
      if ((uVar9 & 1) == 0) goto LAB_071eab7c;
    }
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar5,lVar6,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar9 = FUN_04607abc(unaff_x22,uVar5,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar9 & 1) != 0) goto LAB_071eab7c;
    param_3 = *plVar11;
    param_1 = *(long *)(unaff_x22 + 0x10);
    lVar6 = *unaff_x28;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_x10 = (long)(int)*(uint *)(unaff_x22 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x22 + 0x18)) {
      FUN_05212cf4(unaff_x22,param_3,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      goto LAB_071eab7c;
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_071eaf54;
    }
  }
LAB_071eaf38:
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071eaf54:
  (*(code *)*puVar3)();
  return in_stack_00000008;
}


