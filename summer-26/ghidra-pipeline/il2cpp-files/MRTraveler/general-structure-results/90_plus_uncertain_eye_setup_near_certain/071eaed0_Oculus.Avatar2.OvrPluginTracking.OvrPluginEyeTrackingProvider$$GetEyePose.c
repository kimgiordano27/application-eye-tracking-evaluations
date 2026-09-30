/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginEyeTrackingProvider$$GetEyePose
ENTRY_POINT: 071eaed0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x071eb108) */
/* WARNING: Removing unreachable block (ram,0x071eaff8) */

long Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider__GetEyePose(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w25;
  long lVar11;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  if (unaff_w25 == 1) {
    plVar6 = (long *)__cxa_begin_catch();
    lVar11 = *plVar6;
    __cxa_end_catch();
    iVar2 = 0;
    do {
      if (unaff_x23 != (long *)0x0) {
        lVar8 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_071eae18;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(unaff_x23,*(long *)PTR_DAT_08e6a288,0);
LAB_071eae18:
        (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      }
      if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb28(lVar11);
      }
      if ((iVar2 != 10) && (iVar2 != 0)) {
LAB_071eaef8:
        lVar11 = 0;
        goto code_r0x071eaefc;
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05212f00(in_stack_00000008,unaff_x22,*(undefined8 *)PTR_DAT_08eaa620);
LAB_071ea9a0:
      lVar11 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071ea9ec;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071ea9ec:
      uVar7 = (*(code *)*puVar3)();
      if ((uVar7 & 1) == 0) goto LAB_071eaef8;
      lVar11 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08eaa618) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071eaa50;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071eaa50:
      plVar6 = (long *)(*(code *)*puVar3)();
      iVar2 = FUN_04614d78(plVar6,*(undefined8 *)PTR_DAT_08eaa5f0);
      if (iVar2 == 1) {
        uVar4 = FUN_0461aa48(plVar6,*(undefined8 *)PTR_DAT_08eaa5f8);
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar11 = *(long *)(in_stack_00000008 + 0x10);
        lVar8 = *unaff_x28;
        *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar1 = *(uint *)(in_stack_00000008 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_03d233cc();
        }
        else {
          FUN_05212cf4(in_stack_00000008,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_071ea9a0;
      }
      unaff_x22 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e96e80);
      FUN_052124c0(unaff_x22,*(undefined8 *)PTR_DAT_08e96e78);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar11 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e81e08) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071eab68;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e81e08,0);
LAB_071eab68:
      unaff_x23 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
LAB_071eab7c:
      lVar11 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_071eabc8;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(unaff_x23,*unaff_x27,0);
LAB_071eabc8:
      uVar7 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      if ((uVar7 & 1) != 0) {
        lVar11 = thunk_FUN_03cf5234(*unaff_x19);
        FUN_071ec77c(lVar11,0);
        lVar8 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_071eac38;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(unaff_x23,*unaff_x29,0);
LAB_071eac38:
        lVar8 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        plVar6 = (long *)(lVar11 + 0x10);
        *plVar6 = lVar8;
        thunk_FUN_03d233cc(plVar6);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar8 = *plVar6;
        if (*(int *)(unaff_x22 + 0x18) != 0) {
          if (*(int *)(*(long *)PTR_DAT_08e80ef0 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar7 = FUN_071eb534(lVar8,unaff_w21);
          if ((uVar7 & 1) != 0) goto code_r0x071eac94;
          goto LAB_071eacc0;
        }
        lVar11 = *(long *)(unaff_x22 + 0x10);
        lVar9 = *unaff_x28;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(int *)(lVar11 + 0x18) == 0) {
          FUN_05212cf4(unaff_x22,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(unaff_x22 + 0x18) = 1;
          *(long *)(lVar11 + 0x20) = lVar8;
          thunk_FUN_03d233cc((long *)(lVar11 + 0x20),lVar8);
        }
        goto LAB_071eab7c;
      }
      lVar11 = 0;
      iVar2 = 10;
    } while( true );
  }
  if (unaff_x23 != (long *)0x0) {
    lVar11 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto code_r0x071eafe8;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
code_r0x071eafe8:
    (*(code *)*puVar3)();
  }
  if (unaff_w25 != 1) {
    if (unaff_x20 != (long *)0x0) {
      lVar11 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x071eb0f0;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
code_r0x071eb0f0:
      (*(code *)*puVar3)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0();
  }
  plVar6 = (long *)__cxa_begin_catch();
  lVar11 = *plVar6;
  __cxa_end_catch();
code_r0x071eaefc:
  if (unaff_x20 != (long *)0x0) {
    lVar8 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_071eaf54;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_071eaf54:
    (*(code *)*puVar3)();
  }
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar11);
  }
  return in_stack_00000008;
code_r0x071eac94:
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  uVar7 = thunk_FUN_06f73d88(uVar4,*(undefined8 *)PTR_DAT_08eaa648,0);
  if ((uVar7 & 1) != 0) {
LAB_071eacc0:
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e95970);
    FUN_04d5ef3c(uVar4,lVar11,*(undefined8 *)PTR_DAT_08eaa638,0);
    uVar7 = FUN_04607abc(unaff_x22,uVar4,*(undefined8 *)PTR_DAT_08e95968);
    if ((uVar7 & 1) == 0) {
      lVar11 = *plVar6;
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
        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar11;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4(unaff_x22,lVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_071eab7c;
}


