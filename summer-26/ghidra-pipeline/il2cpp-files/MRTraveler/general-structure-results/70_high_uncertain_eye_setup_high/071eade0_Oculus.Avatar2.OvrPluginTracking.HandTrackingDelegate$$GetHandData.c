/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.HandTrackingDelegate$$GetHandData
ENTRY_POINT: 071eade0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x071eb020) */

long Oculus_Avatar2_OvrPluginTracking_HandTrackingDelegate__GetHandData
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong in_x9;
  int *piVar11;
  long in_x10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  do {
    piVar11 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_071eae18;
      }
      in_x9 = in_x9 - 1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
    do {
      puVar6 = (undefined8 *)FUN_03cf1348(unaff_x23,param_3,0);
LAB_071eae18:
      (*(code *)*puVar6)(unaff_x23,puVar6[1]);
      do {
        if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb28(unaff_x26);
        }
        if ((unaff_w24 != 10) && (unaff_w24 != 0)) {
LAB_071eaef8:
          if (unaff_x20 == (long *)0x0) {
            return in_stack_00000008;
          }
          lVar7 = *unaff_x20;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_071eaf38;
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_071eaf20;
        }
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_05212f00(in_stack_00000008,unaff_x22,*(undefined8 *)PTR_DAT_08eaa620);
LAB_071ea9a0:
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_071ea9ec;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348();
LAB_071ea9ec:
        uVar8 = (*(code *)*puVar6)();
        if ((uVar8 & 1) == 0) goto LAB_071eaef8;
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08eaa618) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_071eaa50;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348();
LAB_071eaa50:
        plVar3 = (long *)(*(code *)*puVar6)();
        iVar2 = FUN_04614d78(plVar3,*(undefined8 *)PTR_DAT_08eaa5f0);
        if (iVar2 == 1) {
          uVar4 = FUN_0461aa48(plVar3,*(undefined8 *)PTR_DAT_08eaa5f8);
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar7 = *(long *)(in_stack_00000008 + 0x10);
          lVar9 = *unaff_x28;
          *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uVar1 = *(uint *)(in_stack_00000008 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_03d233cc();
          }
          else {
            FUN_05212cf4(in_stack_00000008,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_071ea9a0;
        }
        unaff_x22 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
        FUN_052124c0(unaff_x22,*(undefined8 *)PTR_DAT_08e96e78);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e81e08) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_071eab68;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
        unaff_x23 = (long *)(*(code *)*puVar6)(plVar3,puVar6[1]);
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
LAB_071eab7c:
        lVar7 = *unaff_x23;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_071eabc8;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(unaff_x23,*unaff_x27,0);
LAB_071eabc8:
        uVar8 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
        if ((uVar8 & 1) != 0) {
          lVar7 = thunk_FUN_03cf5234(*unaff_x19);
          FUN_071ec77c(lVar7,0);
          lVar9 = *unaff_x23;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x29) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_071eac38;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348(unaff_x23,*unaff_x29,0);
LAB_071eac38:
          lVar9 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          plVar3 = (long *)(lVar7 + 0x10);
          *plVar3 = lVar9;
          thunk_FUN_03d233cc(plVar3);
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar9 = *plVar3;
          if (*(int *)(unaff_x22 + 0x18) != 0) {
            if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar8 = FUN_071eb534(lVar9,unaff_w21);
            if ((uVar8 & 1) != 0) goto code_r0x071eac94;
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
            FUN_05212cf4(unaff_x22,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          else {
            *(undefined4 *)(unaff_x22 + 0x18) = 1;
            *(long *)(lVar7 + 0x20) = lVar9;
            thunk_FUN_03d233cc((long *)(lVar7 + 0x20),lVar9);
          }
          goto LAB_071eab7c;
        }
        unaff_x26 = 0;
        unaff_w24 = 10;
      } while (unaff_x23 == (long *)0x0);
      param_1 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_08e6a288;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
code_r0x071eac94:
  plVar5 = (long *)*plVar3;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  uVar8 = thunk_FUN_06f73d88(uVar4,*(undefined8 *)PTR_DAT_08eaa648,0);
  if ((uVar8 & 1) != 0) {
LAB_071eacc0:
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar4,lVar7,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar8 = FUN_04607abc(unaff_x22,uVar4,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar8 & 1) == 0) {
      lVar7 = *plVar3;
      lVar9 = *(long *)(unaff_x22 + 0x10);
      lVar10 = *unaff_x28;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
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
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_071eaf20:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_071eaf54;
    }
  }
LAB_071eaf38:
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_071eaf54:
  (*(code *)*puVar6)();
  return in_stack_00000008;
}


