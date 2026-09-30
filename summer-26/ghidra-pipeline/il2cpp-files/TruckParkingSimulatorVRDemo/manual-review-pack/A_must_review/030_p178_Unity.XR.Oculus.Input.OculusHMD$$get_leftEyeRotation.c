/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_leftEyeRotation
ENTRY_POINT: 025ebb18
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


undefined4 Unity_XR_Oculus_Input_OculusHMD__get_leftEyeRotation(uint param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *__src;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  uint uVar12;
  ulong uVar13;
  long unaff_x21;
  long *plVar14;
  undefined8 uVar15;
  long *unaff_x24;
  ulong uVar16;
  long lVar17;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  
  lVar8 = *(long *)(unaff_x21 + 0x60);
  if (lVar8 != 0) {
    uVar13 = (ulong)param_1;
    if (*(int *)(lVar8 + 0x18) < (int)param_1) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      FUN_017dbf78((long *)(unaff_x21 + 0x60),uVar13,0,*(undefined8 *)PTR_DAT_02ae46e8);
    }
    if (*(long *)(unaff_x19 + 0x708) != 0) {
      plVar1 = (long *)(unaff_x19 + 0x708);
      if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)param_1) {
        uVar3 = FUN_02753edc(param_1 + 1,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_011ea084(*unaff_x24);
        }
        FUN_017dbcc4(plVar1,uVar3,*(undefined8 *)PTR_DAT_02ae46f0);
      }
      if (*(char *)(unaff_x19 + 0x321) != '\0') {
        if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_025ec22c;
        plVar14 = (long *)(*(long *)(unaff_x19 + 0x368) + 0x38);
        lVar8 = *plVar14;
        if (lVar8 == 0) goto LAB_025ec22c;
        iVar4 = *(int *)(unaff_x19 + 0x490);
        if (0x100 < *(int *)(lVar8 + 0x18) - iVar4) {
          iVar5 = 0x100;
          if (0x100 < iVar4 + 1) {
            iVar5 = iVar4 + 1;
          }
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          FUN_017dbed8(plVar14,iVar5,1,*(undefined8 *)PTR_DAT_02ae46e0);
        }
      }
      if (0 < (int)param_1) {
        lVar8 = 0;
        uVar16 = 0;
        lVar17 = 0x54;
        do {
          if (uVar16 == 0) {
            lVar9 = *unaff_x29;
          }
          else {
            lVar9 = *plVar1;
            if (lVar9 == 0) goto LAB_025ec22c;
            if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
            uVar15 = *(undefined8 *)(lVar9 + uVar16 * 8 + 0x20);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            uVar6 = FUN_027604e8(uVar15,0,0);
            if ((uVar6 & 1) != 0) {
              lVar9 = *unaff_x29;
              plVar14 = (long *)*plVar1;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_011ea084();
                lVar9 = *unaff_x29;
              }
              lVar9 = **(long **)(lVar9 + 0xb8);
              if (lVar9 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar9 = lVar9 + lVar17;
              in_stack_00000150 = *(undefined8 *)(lVar9 + -4);
              in_stack_00000148 = *(undefined8 *)(lVar9 + -0xc);
              in_stack_00000140 = *(undefined8 *)(lVar9 + -0x14);
              in_stack_00000138 = *(undefined8 *)(lVar9 + -0x1c);
              in_stack_00000130 = *(undefined8 *)(lVar9 + -0x24);
              in_stack_00000128 = *(undefined8 *)(lVar9 + -0x2c);
              in_stack_00000120 = *(undefined8 *)(lVar9 + -0x34);
              lVar9 = FUN_02633eb8();
              if (plVar14 == (long *)0x0) goto LAB_025ec22c;
              if ((lVar9 != 0) &&
                 (lVar7 = thunk_FUN_01268d44(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0)) {
                uVar15 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
                FUN_012195a4(uVar15,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar16) goto LAB_025ec230;
              plVar14[uVar16 + 4] = lVar9;
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar9 == 0))
              goto LAB_025ec22c;
              if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
              *(undefined8 *)(lVar9 + lVar8 + 0x30) = 0;
            }
            lVar9 = *plVar1;
            if (lVar9 == 0) goto LAB_025ec22c;
            if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
            lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_025ec22c;
            uVar15 = *(undefined8 *)(lVar9 + 0x38);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            uVar6 = FUN_027604e8(uVar15,0,0);
            if ((uVar6 & 1) == 0) {
              lVar9 = *plVar1;
              if (lVar9 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
              if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0)) goto LAB_025ec22c;
              iVar4 = FUN_027602a4(lVar9,0);
              lVar9 = *unaff_x29;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_011ea084(lVar9);
                lVar9 = *unaff_x29;
              }
              lVar9 = **(long **)(lVar9 + 0xb8);
              if (lVar9 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar9 = *(long *)(lVar9 + lVar17 + -0x1c);
              if (lVar9 == 0) goto LAB_025ec22c;
              iVar5 = FUN_027602a4(lVar9,0);
              if (iVar4 != iVar5) goto LAB_025ebdfc;
              lVar9 = *unaff_x29;
            }
            else {
LAB_025ebdfc:
              lVar9 = *plVar1;
              if (lVar9 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar7 = *unaff_x29;
              lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
              if (*(int *)(lVar7 + 0xe0) == 0) {
                thunk_FUN_011ea084();
                lVar7 = *unaff_x29;
              }
              lVar7 = **(long **)(lVar7 + 0xb8);
              if (lVar7 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_025ec230;
              if (lVar9 == 0) goto LAB_025ec22c;
              FUN_02633a28(lVar9,*(undefined8 *)(lVar7 + lVar17 + -0x1c),0);
              lVar7 = *plVar1;
              if (lVar7 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar9 = *unaff_x29;
              lVar10 = **(long **)(lVar9 + 0xb8);
              if (lVar10 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar7 = lVar7 + uVar16 * 8;
              lVar11 = *(long *)(lVar7 + 0x20);
              if (lVar11 == 0) goto LAB_025ec22c;
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar10 + lVar17 + -0x2c);
              lVar7 = *(long *)(lVar7 + 0x20);
              if (lVar7 == 0) goto LAB_025ec22c;
              *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar10 + lVar17 + -0x24);
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_011ea084();
              lVar9 = *unaff_x29;
            }
            lVar7 = **(long **)(lVar9 + 0xb8);
            if (lVar7 == 0) goto LAB_025ec22c;
            if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_025ec230;
            if (*(char *)(lVar7 + lVar17 + -0x13) != '\0') {
              lVar10 = *plVar1;
              if (lVar10 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar10 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_011ea084();
                lVar7 = **(long **)(*unaff_x29 + 0xb8);
                if (lVar7 == 0) goto LAB_025ec22c;
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_025ec230;
              if (lVar10 == 0) goto LAB_025ec22c;
              FUN_02633a70(lVar10,*(undefined8 *)(lVar7 + lVar17 + -0x1c),0);
              lVar7 = *plVar1;
              if (lVar7 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar9 = *unaff_x29;
              lVar10 = **(long **)(lVar9 + 0xb8);
              if (lVar10 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar7 = *(long *)(lVar7 + uVar16 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_025ec22c;
              *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar10 + lVar17 + -0xc);
            }
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_011ea084();
            lVar9 = *unaff_x29;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
          if (lVar9 == 0) goto LAB_025ec22c;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar7 == 0))
          goto LAB_025ec22c;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_025ec230;
          lVar10 = *(long *)(lVar7 + lVar8 + 0x30);
          iVar4 = *(int *)(lVar9 + lVar17);
          if (lVar10 == 0) {
            if (uVar16 == 0) {
              in_stack_00000108 = 0;
              in_stack_00000100 = 0;
              in_stack_00000118 = 0;
              in_stack_00000110 = 0;
              in_stack_000000e8 = 0;
              in_stack_000000e0 = 0;
              in_stack_000000f8 = 0;
              in_stack_000000f0 = 0;
              in_stack_000000d8 = 0;
              in_stack_000000d0 = 0;
              FUN_0262b2b8(&stack0x000000d0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar4 + 1,0);
              memcpy(&stack0x00000080,&stack0x000000d0,0x50);
              if (*(int *)(lVar7 + 0x18) == 0) goto LAB_025ec230;
              __src = &stack0x00000080;
            }
            else {
              lVar9 = *plVar1;
              if (lVar9 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_025ec22c;
              uVar15 = FUN_02633d6c(lVar9,0);
              in_stack_00000108 = 0;
              in_stack_00000100 = 0;
              in_stack_00000118 = 0;
              in_stack_00000110 = 0;
              in_stack_000000e8 = 0;
              in_stack_000000e0 = 0;
              in_stack_000000f8 = 0;
              in_stack_000000f0 = 0;
              in_stack_000000d8 = 0;
              in_stack_000000d0 = 0;
              FUN_0262b2b8(&stack0x000000d0,uVar15,iVar4 + 1,0);
              memcpy(&stack0x00000030,&stack0x000000d0,0x50);
              if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_025ec230;
              __src = &stack0x00000030;
            }
            memcpy((void *)(lVar7 + lVar8 + 0x20),__src,0x50);
          }
          else {
            iVar5 = *(int *)(lVar10 + 0x18);
            if (iVar5 < iVar4 * 4) {
LAB_025ebff8:
              if (iVar4 < 0x401) {
                iVar4 = FUN_02753edc(iVar4 + 1,0);
              }
              else {
                iVar4 = iVar4 + 0x100;
              }
              FUN_0262bf30(lVar7 + lVar8 + 0x20,iVar4,0);
            }
            else if ((0 < iVar4) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
              iVar2 = iVar5 + 3;
              if (-1 < iVar5) {
                iVar2 = iVar5;
              }
              if (0x100 < (iVar2 >> 2) - iVar4) goto LAB_025ebff8;
            }
          }
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar9 == 0))
          goto LAB_025ec22c;
          lVar7 = *unaff_x29;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_011ea084();
            lVar7 = *unaff_x29;
          }
          lVar7 = **(long **)(lVar7 + 0xb8);
          if (lVar7 == 0) goto LAB_025ec22c;
          if ((*(uint *)(lVar7 + 0x18) <= uVar16) || (*(uint *)(lVar9 + 0x18) <= uVar16))
          goto LAB_025ec230;
          lVar7 = lVar7 + lVar17;
          uVar16 = uVar16 + 1;
          lVar9 = lVar9 + lVar8;
          lVar8 = lVar8 + 0x50;
          lVar17 = lVar17 + 0x38;
          *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(lVar7 + -0x1c);
        } while (param_1 != uVar16);
      }
      lVar8 = *plVar1;
      if (lVar8 != 0) {
        lVar17 = (long)(int)param_1 * 0x50 + 0x20;
        lVar9 = (-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 0x20;
        do {
          uVar12 = (uint)uVar13;
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar12) {
Unity_XR_Oculus_Input_OculusHMD__set_trackingState:
            return *(undefined4 *)(unaff_x19 + 0x490);
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar12) {
LAB_025ec230:
                    /* WARNING: Subroutine does not return */
            FUN_012196e0();
          }
          uVar15 = *(undefined8 *)(lVar8 + lVar9);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          uVar13 = FUN_0275d0a4(uVar15,0,0);
          if ((uVar13 & 1) == 0) goto Unity_XR_Oculus_Input_OculusHMD__set_trackingState;
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar8 == 0)) break;
          if ((int)uVar12 < (int)*(uint *)(lVar8 + 0x18)) {
            if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_025ec230;
            FUN_0262cec8(lVar8 + lVar17,0,1,0);
          }
          lVar8 = *plVar1;
          uVar13 = (ulong)(uVar12 + 1);
          lVar17 = lVar17 + 0x50;
          lVar9 = lVar9 + 8;
        } while (lVar8 != 0);
      }
    }
  }
LAB_025ec22c:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


