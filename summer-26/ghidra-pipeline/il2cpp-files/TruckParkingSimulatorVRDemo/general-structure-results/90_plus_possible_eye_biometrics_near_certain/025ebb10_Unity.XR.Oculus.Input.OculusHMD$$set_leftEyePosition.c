/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition
ENTRY_POINT: 025ebb10
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


undefined4 Unity_XR_Oculus_Input_OculusHMD__set_leftEyePosition(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *__src;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
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
  
  if (*(long *)(unaff_x19 + 0x368) != 0) {
    plVar13 = (long *)(*(long *)(unaff_x19 + 0x368) + 0x60);
    lVar7 = *plVar13;
    if (lVar7 != 0) {
      uVar12 = (ulong)param_1;
      if (*(int *)(lVar7 + 0x18) < (int)param_1) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_011ea084();
        }
        FUN_017dbf78(plVar13,uVar12,0,*(undefined8 *)PTR_DAT_02ae46e8);
      }
      if (*(long *)(unaff_x19 + 0x708) != 0) {
        plVar13 = (long *)(unaff_x19 + 0x708);
        if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)param_1) {
          uVar2 = FUN_02753edc(param_1 + 1,0);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_011ea084(*unaff_x24);
          }
          FUN_017dbcc4(plVar13,uVar2,*(undefined8 *)PTR_DAT_02ae46f0);
        }
        if (*(char *)(unaff_x19 + 0x321) != '\0') {
          if (*(long *)(unaff_x19 + 0x368) == 0) goto LAB_025ec22c;
          plVar14 = (long *)(*(long *)(unaff_x19 + 0x368) + 0x38);
          lVar7 = *plVar14;
          if (lVar7 == 0) goto LAB_025ec22c;
          iVar3 = *(int *)(unaff_x19 + 0x490);
          if (0x100 < *(int *)(lVar7 + 0x18) - iVar3) {
            iVar4 = 0x100;
            if (0x100 < iVar3 + 1) {
              iVar4 = iVar3 + 1;
            }
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            FUN_017dbed8(plVar14,iVar4,1,*(undefined8 *)PTR_DAT_02ae46e0);
          }
        }
        if (0 < (int)param_1) {
          lVar7 = 0;
          uVar16 = 0;
          lVar17 = 0x54;
          do {
            if (uVar16 == 0) {
              lVar8 = *unaff_x29;
            }
            else {
              lVar8 = *plVar13;
              if (lVar8 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
              uVar15 = *(undefined8 *)(lVar8 + uVar16 * 8 + 0x20);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              uVar5 = FUN_027604e8(uVar15,0,0);
              if ((uVar5 & 1) != 0) {
                lVar8 = *unaff_x29;
                plVar14 = (long *)*plVar13;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_011ea084();
                  lVar8 = *unaff_x29;
                }
                lVar8 = **(long **)(lVar8 + 0xb8);
                if (lVar8 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar8 = lVar8 + lVar17;
                in_stack_00000150 = *(undefined8 *)(lVar8 + -4);
                in_stack_00000148 = *(undefined8 *)(lVar8 + -0xc);
                in_stack_00000140 = *(undefined8 *)(lVar8 + -0x14);
                in_stack_00000138 = *(undefined8 *)(lVar8 + -0x1c);
                in_stack_00000130 = *(undefined8 *)(lVar8 + -0x24);
                in_stack_00000128 = *(undefined8 *)(lVar8 + -0x2c);
                in_stack_00000120 = *(undefined8 *)(lVar8 + -0x34);
                lVar8 = FUN_02633eb8();
                if (plVar14 == (long *)0x0) goto LAB_025ec22c;
                if ((lVar8 != 0) &&
                   (lVar6 = thunk_FUN_01268d44(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar6 == 0))
                {
                  uVar15 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
                  FUN_012195a4(uVar15,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar16) goto LAB_025ec230;
                plVar14[uVar16 + 4] = lVar8;
                if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                   (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar8 == 0))
                goto LAB_025ec22c;
                if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
                *(undefined8 *)(lVar8 + lVar7 + 0x30) = 0;
              }
              lVar8 = *plVar13;
              if (lVar8 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
              lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_025ec22c;
              uVar15 = *(undefined8 *)(lVar8 + 0x38);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              uVar5 = FUN_027604e8(uVar15,0,0);
              if ((uVar5 & 1) == 0) {
                lVar8 = *plVar13;
                if (lVar8 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
                if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x38), lVar8 == 0))
                goto LAB_025ec22c;
                iVar3 = FUN_027602a4(lVar8,0);
                lVar8 = *unaff_x29;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_011ea084(lVar8);
                  lVar8 = *unaff_x29;
                }
                lVar8 = **(long **)(lVar8 + 0xb8);
                if (lVar8 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar8 = *(long *)(lVar8 + lVar17 + -0x1c);
                if (lVar8 == 0) goto LAB_025ec22c;
                iVar4 = FUN_027602a4(lVar8,0);
                if (iVar3 != iVar4) goto LAB_025ebdfc;
                lVar8 = *unaff_x29;
              }
              else {
LAB_025ebdfc:
                lVar8 = *plVar13;
                if (lVar8 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar6 = *unaff_x29;
                lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_011ea084();
                  lVar6 = *unaff_x29;
                }
                lVar6 = **(long **)(lVar6 + 0xb8);
                if (lVar6 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_025ec230;
                if (lVar8 == 0) goto LAB_025ec22c;
                FUN_02633a28(lVar8,*(undefined8 *)(lVar6 + lVar17 + -0x1c),0);
                lVar6 = *plVar13;
                if (lVar6 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar8 = *unaff_x29;
                lVar9 = **(long **)(lVar8 + 0xb8);
                if (lVar9 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar6 = lVar6 + uVar16 * 8;
                lVar10 = *(long *)(lVar6 + 0x20);
                if (lVar10 == 0) goto LAB_025ec22c;
                *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar9 + lVar17 + -0x2c);
                lVar6 = *(long *)(lVar6 + 0x20);
                if (lVar6 == 0) goto LAB_025ec22c;
                *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar9 + lVar17 + -0x24);
              }
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_011ea084();
                lVar8 = *unaff_x29;
              }
              lVar6 = **(long **)(lVar8 + 0xb8);
              if (lVar6 == 0) goto LAB_025ec22c;
              if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_025ec230;
              if (*(char *)(lVar6 + lVar17 + -0x13) != '\0') {
                lVar9 = *plVar13;
                if (lVar9 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_011ea084();
                  lVar6 = **(long **)(*unaff_x29 + 0xb8);
                  if (lVar6 == 0) goto LAB_025ec22c;
                }
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_025ec230;
                if (lVar9 == 0) goto LAB_025ec22c;
                FUN_02633a70(lVar9,*(undefined8 *)(lVar6 + lVar17 + -0x1c),0);
                lVar6 = *plVar13;
                if (lVar6 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar8 = *unaff_x29;
                lVar9 = **(long **)(lVar8 + 0xb8);
                if (lVar9 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar6 = *(long *)(lVar6 + uVar16 * 8 + 0x20);
                if (lVar6 == 0) goto LAB_025ec22c;
                *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(lVar9 + lVar17 + -0xc);
              }
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_011ea084();
              lVar8 = *unaff_x29;
            }
            lVar8 = **(long **)(lVar8 + 0xb8);
            if (lVar8 == 0) goto LAB_025ec22c;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar6 == 0))
            goto LAB_025ec22c;
            if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_025ec230;
            lVar9 = *(long *)(lVar6 + lVar7 + 0x30);
            iVar3 = *(int *)(lVar8 + lVar17);
            if (lVar9 == 0) {
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
                FUN_0262b2b8(&stack0x000000d0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar3 + 1,0);
                memcpy(&stack0x00000080,&stack0x000000d0,0x50);
                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_025ec230;
                __src = &stack0x00000080;
              }
              else {
                lVar8 = *plVar13;
                if (lVar8 == 0) goto LAB_025ec22c;
                if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_025ec230;
                lVar8 = *(long *)(lVar8 + uVar16 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_025ec22c;
                uVar15 = FUN_02633d6c(lVar8,0);
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
                FUN_0262b2b8(&stack0x000000d0,uVar15,iVar3 + 1,0);
                memcpy(&stack0x00000030,&stack0x000000d0,0x50);
                if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_025ec230;
                __src = &stack0x00000030;
              }
              memcpy((void *)(lVar6 + lVar7 + 0x20),__src,0x50);
            }
            else {
              iVar4 = *(int *)(lVar9 + 0x18);
              if (iVar4 < iVar3 * 4) {
LAB_025ebff8:
                if (iVar3 < 0x401) {
                  iVar3 = FUN_02753edc(iVar3 + 1,0);
                }
                else {
                  iVar3 = iVar3 + 0x100;
                }
                FUN_0262bf30(lVar6 + lVar7 + 0x20,iVar3,0);
              }
              else if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                iVar1 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar1 = iVar4;
                }
                if (0x100 < (iVar1 >> 2) - iVar3) goto LAB_025ebff8;
              }
            }
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar8 == 0))
            goto LAB_025ec22c;
            lVar6 = *unaff_x29;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_011ea084();
              lVar6 = *unaff_x29;
            }
            lVar6 = **(long **)(lVar6 + 0xb8);
            if (lVar6 == 0) goto LAB_025ec22c;
            if ((*(uint *)(lVar6 + 0x18) <= uVar16) || (*(uint *)(lVar8 + 0x18) <= uVar16))
            goto LAB_025ec230;
            lVar6 = lVar6 + lVar17;
            uVar16 = uVar16 + 1;
            lVar8 = lVar8 + lVar7;
            lVar7 = lVar7 + 0x50;
            lVar17 = lVar17 + 0x38;
            *(undefined8 *)(lVar8 + 0x68) = *(undefined8 *)(lVar6 + -0x1c);
          } while (param_1 != uVar16);
        }
        lVar7 = *plVar13;
        if (lVar7 != 0) {
          lVar17 = (long)(int)param_1 * 0x50 + 0x20;
          lVar8 = (-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) + 0x20;
          do {
            uVar11 = (uint)uVar12;
            if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar11) {
Unity_XR_Oculus_Input_OculusHMD__set_trackingState:
              return *(undefined4 *)(unaff_x19 + 0x490);
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar11) {
LAB_025ec230:
                    /* WARNING: Subroutine does not return */
              FUN_012196e0();
            }
            uVar15 = *(undefined8 *)(lVar7 + lVar8);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            uVar12 = FUN_0275d0a4(uVar15,0,0);
            if ((uVar12 & 1) == 0) goto Unity_XR_Oculus_Input_OculusHMD__set_trackingState;
            if ((*(long *)(unaff_x19 + 0x368) == 0) ||
               (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x60), lVar7 == 0)) break;
            if ((int)uVar11 < (int)*(uint *)(lVar7 + 0x18)) {
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_025ec230;
              FUN_0262cec8(lVar7 + lVar17,0,1,0);
            }
            lVar7 = *plVar13;
            uVar12 = (ulong)(uVar11 + 1);
            lVar17 = lVar17 + 0x50;
            lVar8 = lVar8 + 8;
          } while (lVar7 != 0);
        }
      }
    }
  }
LAB_025ec22c:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


