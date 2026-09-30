/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 0633281c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x06332a44) */

long OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
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
  int *in_x10;
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
  
code_r0x0633281c:
  if (!(bool)in_ZR) goto LAB_06332808;
LAB_06332820:
  puVar6 = (undefined8 *)FUN_0377596c(unaff_x23,param_3,0);
  do {
    (*(code *)*puVar6)(unaff_x23,puVar6[1]);
    do {
      if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7ac(unaff_x26);
      }
      if ((unaff_w24 != 10) && (unaff_w24 != 0)) {
LAB_0633291c:
        if (unaff_x20 == (long *)0x0) {
          return in_stack_00000008;
        }
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_0633295c;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_06332944;
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf100(in_stack_00000008,unaff_x22,*(undefined8 *)PTR_DAT_07db4198);
LAB_063323c4:
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06332410;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c();
LAB_06332410:
      uVar8 = (*(code *)*puVar6)();
      if ((uVar8 & 1) == 0) goto LAB_0633291c;
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db4190) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06332474;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c();
LAB_06332474:
      plVar3 = (long *)(*(code *)*puVar6)();
      iVar2 = FUN_03f56b48(plVar3,*(undefined8 *)PTR_DAT_07db4168);
      if (iVar2 == 1) {
        uVar4 = FUN_03f5ce3c(plVar3,*(undefined8 *)PTR_DAT_07db4170);
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *(long *)(in_stack_00000008 + 0x10);
        lVar9 = *unaff_x28;
        *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = *(uint *)(in_stack_00000008 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(in_stack_00000008,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_063323c4;
      }
      unaff_x22 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07da1db8);
      FUN_049ce6c0(unaff_x22,*(undefined8 *)PTR_DAT_07da1db0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d97980) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0633258c;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar3,*(long *)PTR_DAT_07d97980,0);
LAB_0633258c:
      unaff_x23 = (long *)(*(code *)*puVar6)(plVar3,puVar6[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
LAB_063325a0:
      lVar7 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_063325ec;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x27,0);
LAB_063325ec:
      uVar8 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
      if ((uVar8 & 1) != 0) {
        lVar7 = thunk_FUN_037788cc(*unaff_x19);
        OVR_OpenVR_IVRCompositor__FadeToColor__BeginInvoke(lVar7,0);
        lVar9 = *unaff_x23;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar8 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x29) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0633265c;
            }
            uVar8 = uVar8 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x29,0);
LAB_0633265c:
        lVar9 = (*(code *)*puVar6)(unaff_x23,puVar6[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar3 = (long *)(lVar7 + 0x10);
        *plVar3 = lVar9;
        thunk_FUN_037aeb94(plVar3);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *plVar3;
        if (*(int *)(unaff_x22 + 0x18) != 0) {
          if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar8 = FUN_06332f4c(lVar9,unaff_w21);
          if ((uVar8 & 1) != 0) goto code_r0x063326b8;
          goto LAB_063326e4;
        }
        lVar7 = *(long *)(unaff_x22 + 0x10);
        lVar10 = *unaff_x28;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)(lVar7 + 0x18) == 0) {
          FUN_049ceef4(unaff_x22,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(unaff_x22 + 0x18) = 1;
          *(long *)(lVar7 + 0x20) = lVar9;
          thunk_FUN_037aeb94((long *)(lVar7 + 0x20),lVar9);
        }
        goto LAB_063325a0;
      }
      unaff_x26 = 0;
      unaff_w24 = 10;
    } while (unaff_x23 == (long *)0x0);
    param_1 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)PTR_DAT_07d896f8;
    if (in_x9 == 0) goto LAB_06332820;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_06332808:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x0633281c;
    }
    puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
code_r0x063326b8:
  plVar5 = (long *)*plVar3;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  uVar8 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                    (uVar4,*(undefined8 *)PTR_DAT_07db41c0,0);
  if ((uVar8 & 1) != 0) {
LAB_063326e4:
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d9b2d0);
    FUN_044a3874(uVar4,lVar7,*(undefined8 *)PTR_DAT_07db41b0,0);
    uVar8 = FUN_03f45cf0(unaff_x22,uVar4,*(undefined8 *)PTR_DAT_07da08e8);
    if ((uVar8 & 1) == 0) {
      lVar7 = *plVar3;
      lVar9 = *(long *)(unaff_x22 + 0x10);
      lVar10 = *unaff_x28;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4(unaff_x22,lVar7,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_063325a0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_06332944:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_06332978;
    }
  }
LAB_0633295c:
  puVar6 = (undefined8 *)FUN_0377596c();
LAB_06332978:
  (*(code *)*puVar6)();
  return in_stack_00000008;
}


