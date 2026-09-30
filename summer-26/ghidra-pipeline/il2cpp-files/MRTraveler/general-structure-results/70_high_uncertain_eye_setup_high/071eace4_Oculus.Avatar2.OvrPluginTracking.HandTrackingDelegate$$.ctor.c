/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.HandTrackingDelegate$$.ctor
ENTRY_POINT: 071eace4
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

long Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate___ctor
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  do {
    FUN_04d5ef3c(param_1,param_2,param_3,0);
    uVar6 = FUN_04607abc(unaff_x22,unaff_x26,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar6 & 1) == 0) {
      lVar7 = *unaff_x25;
      lVar8 = *(long *)(unaff_x22 + 0x10);
      lVar9 = *unaff_x28;
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
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
LAB_071eab7c:
    do {
      lVar7 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071eabc8;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(unaff_x23,*unaff_x27,0);
LAB_071eabc8:
      uVar6 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        if (unaff_x23 != (long *)0x0) {
          lVar7 = *unaff_x23;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_071eae18;
              }
              uVar6 = uVar6 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar6 != 0);
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
        lVar7 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_071ea9ec;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071ea9ec:
        uVar6 = (*(code *)*puVar3)();
        if ((uVar6 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) {
            return in_stack_00000008;
          }
          lVar7 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 == 0) goto LAB_071eaf38;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_071eaf20;
        }
        lVar7 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08eaa618) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_071eaa50;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071eaa50:
        plVar4 = (long *)(*(code *)*puVar3)();
        iVar2 = FUN_04614d78(plVar4,*(undefined8 *)PTR_DAT_08eaa5f0);
        if (iVar2 == 1) {
          uVar5 = FUN_0461aa48(plVar4,*(undefined8 *)PTR_DAT_08eaa5f8);
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
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            thunk_FUN_03d233cc();
          }
          else {
            FUN_05212cf4(in_stack_00000008,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_071ea9a0;
        }
        unaff_x22 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
        FUN_052124c0(unaff_x22,*(undefined8 *)PTR_DAT_08e96e78);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar7 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e81e08) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_071eab68;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
        unaff_x23 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        goto LAB_071eab7c;
      }
      param_2 = thunk_FUN_03cf5234(*unaff_x19);
      FUN_071ec77c(param_2,0);
      lVar7 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071eac38;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(unaff_x23,*unaff_x29,0);
LAB_071eac38:
      lVar7 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      unaff_x25 = (long *)(param_2 + 0x10);
      *unaff_x25 = lVar7;
      thunk_FUN_03d233cc(unaff_x25);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar7 = *unaff_x25;
      if (*(int *)(unaff_x22 + 0x18) == 0) {
        lVar8 = *(long *)(unaff_x22 + 0x10);
        lVar9 = *unaff_x28;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(int *)(lVar8 + 0x18) == 0) {
          FUN_05212cf4(unaff_x22,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(unaff_x22 + 0x18) = 1;
          *(long *)(lVar8 + 0x20) = lVar7;
          thunk_FUN_03d233cc((long *)(lVar8 + 0x20),lVar7);
        }
        goto LAB_071eab7c;
      }
      if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar6 = FUN_071eb534(lVar7,unaff_w21);
      if ((uVar6 & 1) == 0) break;
      plVar4 = (long *)*unaff_x25;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar6 = thunk_FUN_06f73d88(uVar5,*(undefined8 *)PTR_DAT_08eaa648,0);
    } while ((uVar6 & 1) == 0);
    param_1 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    param_3 = *(undefined8 *)PTR_DAT_08eaa638;
    unaff_x26 = param_1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar10 = piVar10 + 4;
    if (uVar6 == 0) break;
LAB_071eaf20:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_071eaf54;
    }
  }
LAB_071eaf38:
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071eaf54:
  (*(code *)*puVar3)();
  return in_stack_00000008;
}


