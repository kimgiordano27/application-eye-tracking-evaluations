/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$set_leftEyePosition
ENTRY_POINT: 024887d0
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


/* WARNING: Removing unreachable block (ram,0x02489080) */
/* WARNING: Removing unreachable block (ram,0x02489498) */
/* WARNING: Removing unreachable block (ram,0x024894e0) */
/* WARNING: Removing unreachable block (ram,0x024894fc) */
/* WARNING: Removing unreachable block (ram,0x02488874) */
/* WARNING: Removing unreachable block (ram,0x02488fb0) */
/* WARNING: Removing unreachable block (ram,0x024894d0) */
/* WARNING: Removing unreachable block (ram,0x024894ec) */
/* WARNING: Removing unreachable block (ram,0x0248894c) */
/* WARNING: Removing unreachable block (ram,0x02488e30) */
/* WARNING: Removing unreachable block (ram,0x0248889c) */
/* WARNING: Removing unreachable block (ram,0x0248944c) */
/* WARNING: Removing unreachable block (ram,0x02488e64) */
/* WARNING: Removing unreachable block (ram,0x02489228) */

uint UnityEngine_InputSystem_XR_XRHMD__set_leftEyePosition(void)

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
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  uint extraout_w8;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long unaff_x19;
  undefined8 uVar23;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x27;
  int unaff_w28;
  int unaff_w29;
  float unaff_s8;
  undefined8 in_stack_00000008;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000050;
  long in_stack_00000058;
  char cStack0000000000000068;
  byte bStack000000000000006c;
  
LAB_02488618:
  do {
    plVar11 = unaff_x23;
    lVar18 = unaff_x27;
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
    lVar19 = *unaff_x25;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x22) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02488668;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar12 = (undefined8 *)FUN_01259550(unaff_x25,*unaff_x22,0);
LAB_02488668:
    uVar21 = (*(code *)*puVar12)(unaff_x25,puVar12[1]);
    unaff_x27 = lVar18;
    unaff_x23 = plVar11;
    if ((uVar21 & 1) == 0) {
      plVar13 = (long *)thunk_FUN_01268d44(unaff_x25,*(undefined8 *)PTR_DAT_02ab7b38);
      if (plVar13 != (long *)0x0) {
        lVar19 = *plVar13;
        uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_02ab7b38) {
              puVar12 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_0248885c;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar12 = (undefined8 *)FUN_01259550(plVar13,*(long *)PTR_DAT_02ab7b38,0);
LAB_0248885c:
        (*(code *)*puVar12)(plVar13,puVar12[1]);
      }
      if (cStack0000000000000068 != '\0') {
        thunk_FUN_01211e50(in_stack_00000030,0);
      }
      uVar8 = *(undefined4 *)(unaff_x19 + 0x1c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_02ab7a20 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      iVar7 = FUN_022ae224(uVar2,uVar8,0);
      iVar6 = -0x80000000;
      if (unaff_s8 * (float)unaff_w29 != INFINITY) {
        iVar6 = (int)(unaff_s8 * (float)unaff_w29);
      }
      iVar6 = FUN_022ae224(iVar6,iVar7 + -1,0);
      if (iVar6 < unaff_w29) {
        plVar13 = (long *)in_stack_00000028[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        uVar15 = (**(code **)(*plVar13 + 0x238))(plVar13,*(undefined8 *)(*plVar13 + 0x240));
        cStack0000000000000068 = '\0';
        FUN_0230ba70(uVar15,&stack0x00000068,0);
        uVar23 = *(undefined8 *)PTR_DAT_02adb638;
        if (*(int *)(*(long *)PTR_DAT_02ab7b60 + 0xe0) == 0) {
          thunk_FUN_011ea084();
        }
        uVar23 = FUN_022bb958(uVar23,0);
        plVar13 = (long *)in_stack_00000028[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        uVar8 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
        lVar19 = FUN_022d1aa8(uVar23,uVar8,0);
        uVar23 = FUN_022bb958(*(undefined8 *)PTR_DAT_02acb000,0);
        plVar13 = (long *)in_stack_00000028[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        uVar8 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
        lVar16 = FUN_022d1aa8(uVar23,uVar8,0);
        plVar13 = (long *)in_stack_00000028[2];
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x228))(plVar13,*(undefined8 *)(*plVar13 + 0x230))
        ;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        lVar20 = *plVar13;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_02ac41a0) {
              puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_02488c14;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar12 = (undefined8 *)FUN_01259550(plVar13,*(long *)PTR_DAT_02ac41a0,0);
LAB_02488c14:
        plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        do {
          lVar20 = *plVar13;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *unaff_x22) {
                puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_02488c74;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar12 = (undefined8 *)FUN_01259550(plVar13,*unaff_x22,0);
LAB_02488c74:
          uVar21 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          if ((uVar21 & 1) == 0) goto LAB_02488d94;
          lVar20 = *plVar13;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *unaff_x22) {
                puVar12 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                goto UnityEngine_InputSystem_XR_Haptics_SendHapticImpulseCommand__Create;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar12 = (undefined8 *)FUN_01259550(plVar13,*unaff_x22,1);
UnityEngine_InputSystem_XR_Haptics_SendHapticImpulseCommand__Create:
          plVar14 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          bVar3 = *(byte *)(*(long *)PTR_DAT_02adb608 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_02adb608)) {
                    /* WARNING: Subroutine does not return */
            FUN_01219998(plVar14);
          }
          if ((DAT_02c70271 & 1) == 0) {
            thunk_FUN_011f4b58(PTR_DAT_02ab8770);
            DAT_02c70271 = 1;
          }
          in_stack_00000058 = plVar14[4];
          uVar23 = thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02ab8770,&stack0x00000058);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8(uVar23,uVar23);
          }
          FUN_022ce410(lVar16,uVar23,unaff_w21,0);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          FUN_022ce410(lVar19,plVar14,unaff_w21,0);
          unaff_w21 = unaff_w21 + 1;
        } while( true );
      }
      goto LAB_024883c0;
    }
    lVar19 = *unaff_x25;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x22) {
          puVar12 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_024886c8;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar12 = (undefined8 *)FUN_01259550(unaff_x25,*unaff_x22,1);
LAB_024886c8:
    plVar13 = (long *)(*(code *)*puVar12)(unaff_x25,puVar12[1]);
    if (plVar13 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_02adb608 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_02adb608)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01219998(plVar13);
      }
    }
    unaff_w21 = FUN_0248978c(plVar13,plVar13);
    unaff_w28 = unaff_w21 + unaff_w28;
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) - unaff_w21;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
    plVar14 = (long *)plVar13[3];
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
    iVar6 = (**(code **)(*plVar14 + 0x288))(plVar14,*(undefined8 *)(*plVar14 + 0x290));
    plVar14 = (long *)plVar13[3];
    unaff_w29 = iVar6 + unaff_w29;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
    iVar6 = (**(code **)(*plVar14 + 0x288))(plVar14,*(undefined8 *)(*plVar14 + 0x290));
    if (0 < iVar6) {
      if ((DAT_02c70271 & 1) == 0) {
        thunk_FUN_011f4b58(PTR_DAT_02ab8770);
        DAT_02c70271 = 1;
      }
      unaff_x27 = plVar13[4];
      if (*(int *)(*(long *)PTR_DAT_02ab8770 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      uVar21 = FUN_022943a0(unaff_x27,lVar18,0);
      unaff_x23 = plVar13;
      if ((uVar21 & 1) == 0) {
        unaff_x27 = lVar18;
        unaff_x23 = plVar11;
      }
    }
  } while( true );
LAB_02488d94:
  plVar13 = (long *)thunk_FUN_01268d44(plVar13,*(undefined8 *)PTR_DAT_02ab7b38);
  if (plVar13 != (long *)0x0) {
    lVar20 = *plVar13;
    uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_02ab7b38) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02488e10;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar12 = (undefined8 *)FUN_01259550(plVar13,*(long *)PTR_DAT_02ab7b38,0);
LAB_02488e10:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (cStack0000000000000068 != '\0') {
    thunk_FUN_01211e50(uVar15,0);
  }
  FUN_022d127c(lVar16,lVar19,0);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012196d8();
  }
  iVar7 = 0;
  do {
    iVar9 = FUN_022c48a4(lVar19,0);
    if (iVar9 <= iVar7) break;
    plVar13 = (long *)FUN_022c4904(lVar19,iVar7,0);
    if (plVar13 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_02adb608 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_02adb608)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01219998(plVar13);
      }
    }
    cStack0000000000000068 = '\0';
    FUN_0230ba70(plVar13,&stack0x00000068,0);
    if (unaff_w29 - iVar6 != 0 && iVar6 <= unaff_w29) {
      iVar1 = (unaff_w29 - iVar6) + unaff_w28;
      iVar9 = unaff_w28;
      iVar4 = unaff_w29;
      do {
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        plVar14 = (long *)plVar13[3];
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        iVar10 = (**(code **)(*plVar14 + 0x288))(plVar14,*(undefined8 *)(*plVar14 + 0x290));
        unaff_w29 = iVar4;
        unaff_w28 = iVar9;
        if (iVar10 < 1) break;
        plVar14 = (long *)plVar13[3];
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        (**(code **)(*plVar14 + 0x3b8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x3c0));
        iVar4 = iVar4 + -1;
        iVar9 = iVar9 + 1;
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + -1;
        unaff_w29 = iVar6;
        unaff_w28 = iVar1;
      } while (iVar6 < iVar4);
    }
    if (cStack0000000000000068 != '\0') {
      thunk_FUN_01211e50(plVar13,0);
    }
    iVar7 = iVar7 + 1;
  } while (iVar6 < unaff_w29);
  if ((iVar6 < unaff_w29) && (in_stack_00000038 != 0)) {
    cStack0000000000000068 = '\0';
    iVar6 = 0x16;
  }
  else {
    unaff_w21 = 0;
LAB_024883c0:
    if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
    lVar19 = *in_stack_00000050;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *unaff_x22) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_02488414;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar12 = (undefined8 *)FUN_01259550(in_stack_00000050,*unaff_x22,0);
LAB_02488414:
    uVar21 = (*(code *)*puVar12)(in_stack_00000050,puVar12[1]);
    if ((uVar21 & 1) != 0) {
      lVar18 = *in_stack_00000050;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *unaff_x22) {
            puVar12 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto LAB_02488478;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
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
      lVar18 = thunk_FUN_01268f94();
      if (in_stack_00000038 == 0) {
        in_stack_00000028 = *(long **)(lVar18 + 8);
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
          lVar18 = *plVar11;
          uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_02ac41a0) {
                puVar12 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_024885f8;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar12 = (undefined8 *)FUN_01259550(plVar11,*(long *)PTR_DAT_02ac41a0,0);
LAB_024885f8:
          unaff_x25 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
          unaff_w29 = 0;
          goto LAB_02488618;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012196d8();
    }
    iVar6 = 0x17;
  }
  plVar13 = (long *)thunk_FUN_01268d44(in_stack_00000050,*(undefined8 *)PTR_DAT_02ab7b38);
  if (plVar13 == (long *)0x0) goto LAB_024892ac;
  lVar19 = *plVar13;
  uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar21 == 0) goto LAB_02489284;
  piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
  goto LAB_0248926c;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_0248926c:
    if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_02ab7b38) {
      puVar12 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_024892a0;
    }
  }
LAB_02489284:
  puVar12 = (undefined8 *)FUN_01259550(plVar13,*(long *)PTR_DAT_02ab7b38,0);
LAB_024892a0:
  (*(code *)*puVar12)(plVar13,puVar12[1]);
LAB_024892ac:
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  uVar17 = (uint)bStack000000000000006c;
  if (bStack000000000000006c != 0) {
    thunk_FUN_01211e50(in_stack_00000008,0);
    uVar17 = extraout_w8;
  }
  puVar5 = PTR_DAT_02ab8770;
  if (iVar6 != 0x17) {
    if (iVar6 == 0x16) {
      uVar17 = (uint)(cStack0000000000000068 != '\0');
      goto LAB_024891f4;
    }
    if (iVar6 != 0) goto LAB_024891f4;
  }
  uVar17 = 1;
  if ((in_stack_00000038 == 0) && (unaff_w28 == 0)) {
    lVar19 = *(long *)PTR_DAT_02ab8770;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_011ea084();
      lVar19 = *(long *)puVar5;
    }
    uVar21 = FUN_02294380(lVar18,*(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x18),0);
    if ((uVar21 & 1) == 0) {
      bStack000000000000006c = '\0';
      FUN_0230ba70(plVar11,(long)&stack0x00000068 + 4,0);
      if (*(int *)(unaff_x19 + 0x1c) <= *(int *)(unaff_x19 + 0x24)) {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012196d8();
        }
        do {
          plVar13 = (long *)plVar11[3];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          iVar6 = (**(code **)(*plVar13 + 0x288))(plVar13,*(undefined8 *)(*plVar13 + 0x290));
          if (iVar6 < 1) break;
          plVar13 = (long *)plVar11[3];
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012196d8();
          }
          (**(code **)(*plVar13 + 0x3b8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x3c0));
          iVar6 = *(int *)(unaff_x19 + 0x24) + -1;
          *(int *)(unaff_x19 + 0x24) = iVar6;
        } while (*(int *)(unaff_x19 + 0x1c) <= iVar6);
      }
      if (bStack000000000000006c != '\0') {
        thunk_FUN_01211e50(plVar11,0);
      }
      uVar17 = 1;
    }
    else {
      uVar17 = 0;
    }
  }
LAB_024891f4:
  return uVar17 & 1;
}


