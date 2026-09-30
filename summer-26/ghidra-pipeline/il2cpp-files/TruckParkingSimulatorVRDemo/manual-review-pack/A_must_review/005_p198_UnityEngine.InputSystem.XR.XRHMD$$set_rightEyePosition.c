/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_rightEyePosition
ENTRY_POINT: 024887f0
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 152
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x024894e0) */
/* WARNING: Removing unreachable block (ram,0x024894fc) */
/* WARNING: Removing unreachable block (ram,0x02488fb0) */
/* WARNING: Removing unreachable block (ram,0x024894d0) */
/* WARNING: Removing unreachable block (ram,0x024894ec) */
/* WARNING: Removing unreachable block (ram,0x02489498) */
/* WARNING: Removing unreachable block (ram,0x02489080) */
/* WARNING: Removing unreachable block (ram,0x02488e30) */
/* WARNING: Removing unreachable block (ram,0x02488e64) */
/* WARNING: Removing unreachable block (ram,0x0248944c) */

uint UnityEngine_InputSystem_XR_XRHMD__set_rightEyePosition(undefined **param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  uint extraout_w8;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  undefined8 uVar21;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long *unaff_x25;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  char cStack0000000000000068;
  byte bStack000000000000006c;
  
code_r0x024887f0:
  plVar11 = (long *)thunk_FUN_01268d44(unaff_x25,*(undefined8 *)param_1[0x167]);
  if (plVar11 != (long *)0x0) {
    lVar17 = *plVar11;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02ab7b38) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0248885c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_01259550(plVar11,*(long *)PTR_DAT_02ab7b38,0);
LAB_0248885c:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012196d0(unaff_x21);
  }
  if ((unaff_w24 & 1) != 0) {
    unaff_w27 = 0;
  }
  if (cStack0000000000000068 != '\0') {
    thunk_FUN_01211e50(in_stack_00000030,0);
  }
  if ((unaff_w27 == 0xb) || (unaff_w27 == 0)) {
    uVar8 = *(undefined4 *)(unaff_x19 + 0x1c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_02ab7a20 + 0xe0) == 0) {
      thunk_FUN_011ea084();
    }
    iVar6 = FUN_022ae224(uVar2,uVar8,0);
    iVar7 = -0x80000000;
    if (unaff_s8 * (float)unaff_w29 != INFINITY) {
      iVar7 = (int)(unaff_s8 * (float)unaff_w29);
    }
    iVar7 = FUN_022ae224(iVar7,iVar6 + -1,0);
    if (iVar7 < unaff_w29) {
      plVar11 = (long *)in_stack_00000028[2];
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012196d8();
      }
      uVar13 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
      cStack0000000000000068 = '\0';
      FUN_0230ba70(uVar13,&stack0x00000068,0);
      uVar21 = *(undefined8 *)PTR_DAT_02adb638;
      if (*(int *)(*(long *)PTR_DAT_02ab7b60 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      uVar21 = FUN_022bb958(uVar21,0);
      plVar11 = (long *)in_stack_00000028[2];
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012196d8();
      }
      uVar8 = (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220));
      lVar17 = FUN_022d1aa8(uVar21,uVar8,0);
      uVar21 = FUN_022bb958(*(undefined8 *)PTR_DAT_02acb000,0);
      plVar11 = (long *)in_stack_00000028[2];
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012196d8();
      }
      uVar8 = (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220));
      lVar14 = FUN_022d1aa8(uVar21,uVar8,0);
      plVar11 = (long *)in_stack_00000028[2];
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012196d8();
      }
      plVar11 = (long *)(**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012196d8();
      }
      lVar18 = *plVar11;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02ac41a0) {
            puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_02488c14;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01259550(plVar11,*(long *)PTR_DAT_02ac41a0,0);
LAB_02488c14:
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012196d8();
      }
      do {
        lVar18 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x22) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_02488c74;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01259550(plVar11,*unaff_x22,0);
LAB_02488c74:
        uVar19 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar19 & 1) == 0) goto LAB_02488d94;
        lVar18 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *unaff_x22) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto UnityEngine_InputSystem_XR_Haptics_SendHapticImpulseCommand__Create;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01259550(plVar11,*unaff_x22,1);
UnityEngine_InputSystem_XR_Haptics_SendHapticImpulseCommand__Create:
        plVar15 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        bVar3 = *(byte *)(*(long *)PTR_DAT_02adb608 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_02adb608)) {
                    /* WARNING: Subroutine does not return */
          FUN_01219998(plVar15);
        }
        if ((DAT_02c70271 & 1) == 0) {
          thunk_FUN_011f4b58(PTR_DAT_02ab8770);
          DAT_02c70271 = 1;
        }
        in_stack_00000058 = plVar15[4];
        uVar21 = thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02ab8770,&stack0x00000058);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8(uVar21,uVar21);
        }
        FUN_022ce410(lVar14,uVar21,unaff_w23,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        FUN_022ce410(lVar17,plVar15,unaff_w23,0);
        unaff_w23 = unaff_w23 + 1;
      } while( true );
    }
    goto LAB_024883c0;
  }
  goto LAB_0248922c;
LAB_02488d94:
  plVar11 = (long *)thunk_FUN_01268d44(plVar11,*(undefined8 *)PTR_DAT_02ab7b38);
  if (plVar11 != (long *)0x0) {
    lVar18 = *plVar11;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02ab7b38) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_02488e10;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_01259550(plVar11,*(long *)PTR_DAT_02ab7b38,0);
LAB_02488e10:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  if (cStack0000000000000068 != '\0') {
    thunk_FUN_01211e50(uVar13,0);
  }
  FUN_022d127c(lVar14,lVar17,0);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012196d8();
  }
  iVar6 = 0;
  do {
    iVar9 = FUN_022c48a4(lVar17,0);
    if (iVar9 <= iVar6) break;
    plVar11 = (long *)FUN_022c4904(lVar17,iVar6,0);
    if (plVar11 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_02adb608 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_02adb608)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01219998(plVar11);
      }
    }
    cStack0000000000000068 = '\0';
    FUN_0230ba70(plVar11,&stack0x00000068,0);
    if (unaff_w29 - iVar7 != 0 && iVar7 <= unaff_w29) {
      iVar1 = (unaff_w29 - iVar7) + unaff_w28;
      iVar9 = unaff_w28;
      iVar4 = unaff_w29;
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        plVar15 = (long *)plVar11[3];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        iVar10 = (**(code **)(*plVar15 + 0x288))(plVar15,*(undefined8 *)(*plVar15 + 0x290));
        unaff_w29 = iVar4;
        unaff_w28 = iVar9;
        if (iVar10 < 1) break;
        plVar15 = (long *)plVar11[3];
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        (**(code **)(*plVar15 + 0x3b8))(plVar15,0,*(undefined8 *)(*plVar15 + 0x3c0));
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w29 = iVar7;
        unaff_w28 = iVar1;
      } while (iVar7 < iVar4);
    }
    if (cStack0000000000000068 != '\0') {
      thunk_FUN_01211e50(plVar11,0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar7 < unaff_w29);
  if ((iVar7 < unaff_w29) && (in_stack_00000038 != 0)) {
    cStack0000000000000068 = '\0';
    unaff_w27 = 0x16;
  }
  else {
    unaff_w23 = 0;
LAB_024883c0:
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
    lVar17 = *in_stack_00000050;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *unaff_x22) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_02488414;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_01259550(in_stack_00000050,*unaff_x22,0);
LAB_02488414:
    uVar19 = (*(code *)*puVar12)(in_stack_00000050,puVar12[1]);
    if ((uVar19 & 1) != 0) {
      lVar17 = *in_stack_00000050;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *unaff_x22) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_02488478;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_01259550(in_stack_00000050,*unaff_x22,1);
LAB_02488478:
      plVar11 = (long *)(*(code *)*puVar12)(in_stack_00000050,puVar12[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012196d8();
      }
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)PTR_DAT_02ac4610 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01219998();
      }
      lVar17 = thunk_FUN_01268f94();
      if (in_stack_00000038 == 0) {
        in_stack_00000028 = *(long **)(lVar17 + 8);
        if (in_stack_00000028 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_02adb610 + 0x130);
          if ((*(byte *)(*in_stack_00000028 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*in_stack_00000028 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_02adb610)) {
                    /* WARNING: Subroutine does not return */
            FUN_01219998(in_stack_00000028);
          }
          goto LAB_0248854c;
        }
      }
      else {
        plVar11 = *(long **)(unaff_x19 + 0x10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        in_stack_00000028 =
             (long *)(**(code **)(*plVar11 + 0x288))
                               (plVar11,in_stack_00000038,*(undefined8 *)(*plVar11 + 0x290));
        if (in_stack_00000028 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_02adb610 + 0x130);
          if ((*(byte *)(*in_stack_00000028 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*in_stack_00000028 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_02adb610)) {
                    /* WARNING: Subroutine does not return */
            FUN_01219998(in_stack_00000028);
          }
LAB_0248854c:
          plVar11 = (long *)in_stack_00000028[2];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          in_stack_00000030 =
               (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
          cStack0000000000000068 = '\0';
          FUN_0230ba70(in_stack_00000030,&stack0x00000068,0);
          plVar11 = (long *)in_stack_00000028[2];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          plVar11 = (long *)(**(code **)(*plVar11 + 0x228))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x230));
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          lVar17 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02ac41a0) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_024885f8;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_01259550(plVar11,*(long *)PTR_DAT_02ac41a0,0);
LAB_024885f8:
          unaff_x25 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          unaff_w29 = 0;
          plVar11 = in_stack_00000048;
          lVar17 = in_stack_00000040;
LAB_02488618:
          in_stack_00000040 = lVar17;
          in_stack_00000048 = plVar11;
          if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          lVar17 = *unaff_x25;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *unaff_x22) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_02488668;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_01259550(unaff_x25,*unaff_x22,0);
LAB_02488668:
          uVar19 = (*(code *)*puVar12)(unaff_x25,puVar12[1]);
          if ((uVar19 & 1) != 0) {
            lVar17 = *unaff_x25;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *unaff_x22) {
                  puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_024886c8;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_01259550(unaff_x25,*unaff_x22,1);
LAB_024886c8:
            plVar15 = (long *)(*(code *)*puVar12)(unaff_x25,puVar12[1]);
            if (plVar15 != (long *)0x0) {
              bVar3 = *(byte *)(*(long *)PTR_DAT_02adb608 + 0x130);
              if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
                  *(long *)PTR_DAT_02adb608)) {
                    /* WARNING: Subroutine does not return */
                FUN_01219998(plVar15);
              }
            }
            unaff_w23 = FUN_0248978c(plVar15,plVar15);
            unaff_w28 = unaff_w23 + unaff_w28;
            *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - unaff_w23;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012196d8();
            }
            plVar11 = (long *)plVar15[3];
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012196d8();
            }
            iVar7 = (**(code **)(*plVar11 + 0x288))(plVar11,*(undefined8 *)(*plVar11 + 0x290));
            plVar11 = (long *)plVar15[3];
            unaff_w29 = iVar7 + unaff_w29;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_012196d8();
            }
            iVar7 = (**(code **)(*plVar11 + 0x288))(plVar11,*(undefined8 *)(*plVar11 + 0x290));
            plVar11 = in_stack_00000048;
            lVar17 = in_stack_00000040;
            if (0 < iVar7) {
              if ((DAT_02c70271 & 1) == 0) {
                thunk_FUN_011f4b58(PTR_DAT_02ab8770);
                DAT_02c70271 = 1;
              }
              lVar17 = plVar15[4];
              if (*(int *)(*(long *)PTR_DAT_02ab8770 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              uVar19 = FUN_022943a0(lVar17,in_stack_00000040,0);
              plVar11 = plVar15;
              if ((uVar19 & 1) == 0) {
                plVar11 = in_stack_00000048;
                lVar17 = in_stack_00000040;
              }
            }
            goto LAB_02488618;
          }
          unaff_x21 = 0;
          unaff_w24 = 0;
          unaff_w27 = 0xb;
          param_1 = &PTR_typeinfo_02ab7000;
          goto code_r0x024887f0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
    unaff_w27 = 0x17;
  }
LAB_0248922c:
  plVar11 = (long *)thunk_FUN_01268d44(in_stack_00000050,*(undefined8 *)PTR_DAT_02ab7b38);
  if (plVar11 == (long *)0x0) goto LAB_024892ac;
  lVar17 = *plVar11;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar19 == 0) goto LAB_02489284;
  piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
  goto LAB_0248926c;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_0248926c:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_02ab7b38) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_024892a0;
    }
  }
LAB_02489284:
  puVar12 = (undefined8 *)FUN_01259550(plVar11,*(long *)PTR_DAT_02ab7b38,0);
LAB_024892a0:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_024892ac:
  if (unaff_w27 == 0) {
    unaff_w27 = 0;
  }
  uVar16 = (uint)bStack000000000000006c;
  if (bStack000000000000006c != 0) {
    thunk_FUN_01211e50(in_stack_00000008,0);
    uVar16 = extraout_w8;
  }
  puVar5 = PTR_DAT_02ab8770;
  if (unaff_w27 != 0x17) {
    if (unaff_w27 == 0x16) {
      uVar16 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_024891f4;
    }
    if (unaff_w27 != 0) goto LAB_024891f4;
  }
  uVar16 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar17 = *(long *)PTR_DAT_02ab8770;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_011ea084();
      lVar17 = *(long *)puVar5;
    }
    uVar19 = FUN_02294380(in_stack_00000040,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x18),0);
    if ((uVar19 & 1) == 0) {
      bStack000000000000006c = '\0';
      FUN_0230ba70(in_stack_00000048,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        do {
          plVar11 = (long *)in_stack_00000048[3];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          iVar7 = (**(code **)(*plVar11 + 0x288))(plVar11,*(undefined8 *)(*plVar11 + 0x290));
          if (iVar7 < 1) break;
          plVar11 = (long *)in_stack_00000048[3];
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          (**(code **)(*plVar11 + 0x3b8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x3c0));
          iVar7 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar7;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar7);
      }
      if (bStack000000000000006c != '\0') {
        thunk_FUN_01211e50(in_stack_00000048,0);
      }
      uVar16 = 1;
    }
    else {
      uVar16 = 0;
    }
  }
LAB_024891f4:
  return uVar16 & 1;
}


