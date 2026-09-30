/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 0633277c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x06332854) */
/* WARNING: Removing unreachable block (ram,0x06332918) */
/* WARNING: Removing unreachable block (ram,0x06332a30) */
/* WARNING: Removing unreachable block (ram,0x06332a44) */

long OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__Invoke
               (long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int in_w9;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar11;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  do {
    *(int *)(unaff_x22 + 0x1c) = in_w9 + 1;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      FUN_049ceef4(unaff_x22,unaff_x26,
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 0x70));
    }
    else {
      *(undefined4 *)(unaff_x22 + 0x18) = 1;
      *(long *)(param_2 + 0x20) = unaff_x26;
      thunk_FUN_037aeb94((long *)(param_2 + 0x20),unaff_x26);
    }
LAB_063325a0:
    lVar6 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_063325ec;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x27,0);
LAB_063325ec:
    uVar8 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (unaff_x23 != (long *)0x0) {
        lVar6 = *unaff_x23;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0633283c;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(unaff_x23,*(long *)PTR_DAT_07d896f8,0);
LAB_0633283c:
        (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf100(in_stack_00000008,unaff_x22,*(undefined8 *)PTR_DAT_07db4198);
LAB_063323c4:
      lVar6 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06332410;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c();
LAB_06332410:
      uVar8 = (*(code *)*puVar3)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
          return in_stack_00000008;
        }
        lVar6 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_0633295c;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        break;
      }
      lVar6 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db4190) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06332474;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c();
LAB_06332474:
      plVar11 = (long *)(*(code *)*puVar3)();
      iVar2 = FUN_03f56b48(plVar11,*(undefined8 *)PTR_DAT_07db4168);
      if (iVar2 == 1) {
        uVar5 = FUN_03f5ce3c(plVar11,*(undefined8 *)PTR_DAT_07db4170);
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar6 = *(long *)(in_stack_00000008 + 0x10);
        lVar7 = *unaff_x28;
        *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = *(uint *)(in_stack_00000008 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(in_stack_00000008,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_063323c4;
      }
      unaff_x22 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07da1db8);
      FUN_049ce6c0(unaff_x22,*(undefined8 *)PTR_DAT_07da1db0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d97980) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0633258c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07d97980,0);
LAB_0633258c:
      unaff_x23 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      goto LAB_063325a0;
    }
    lVar6 = thunk_FUN_037788cc(*unaff_x19);
    OVR_OpenVR_IVRCompositor__FadeToColor__BeginInvoke(lVar6,0);
    lVar7 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0633265c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x29,0);
LAB_0633265c:
    lVar7 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = lVar7;
    thunk_FUN_037aeb94(plVar11);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    unaff_x26 = *plVar11;
    if (*(int *)(unaff_x22 + 0x18) != 0) {
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar8 = FUN_06332f4c(unaff_x26,unaff_w21);
      if ((uVar8 & 1) != 0) {
        plVar4 = (long *)*plVar11;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar8 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar5,*(undefined8 *)PTR_DAT_07db41c0,0);
        if ((uVar8 & 1) == 0) goto LAB_063325a0;
      }
      uVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d9b2d0);
      FUN_044a3874(uVar5,lVar6,*(undefined8 *)PTR_DAT_07db41b0,0);
      uVar8 = FUN_03f45cf0(unaff_x22,uVar5,*(undefined8 *)PTR_DAT_07da08e8);
      if ((uVar8 & 1) == 0) {
        lVar6 = *plVar11;
        lVar7 = *(long *)(unaff_x22 + 0x10);
        lVar9 = *unaff_x28;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(unaff_x22,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      }
      goto LAB_063325a0;
    }
    in_w9 = *(int *)(unaff_x22 + 0x1c);
    param_2 = *(long *)(unaff_x22 + 0x10);
    param_1 = *unaff_x28;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar10 = piVar10 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06332978;
    }
  }
LAB_0633295c:
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_06332978:
  (*(code *)*puVar3)();
  return in_stack_00000008;
}


