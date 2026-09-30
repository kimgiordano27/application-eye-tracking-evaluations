/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$RectangleContainsScreenPoint
ENTRY_POINT: 05e6c504
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */

void UnityEngine_RectTransformUtility__RectangleContainsScreenPoint(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **in_x9;
  long lVar13;
  undefined8 uVar14;
  int in_w10;
  int in_w12;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  int iVar15;
  long *plVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float fVar20;
  float unaff_s13;
  float fVar21;
  float unaff_s14;
  float fVar22;
  float unaff_s15;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  double in_stack_00000430;
  float in_stack_00000470;
  float in_stack_00000478;
  float in_stack_000004a4;
  float in_stack_000004ac;
  long in_stack_000004e8;
  
  while( true ) {
    lVar13 = *(long *)in_x9[0x180];
    *(int *)(param_2 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) break;
    uVar2 = *(uint *)(param_2 + 0x18);
    fVar21 = unaff_s11;
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar2 * 0x20;
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      *(undefined4 *)(param_1 + 0x20) = uStack000000000000003c;
      *(undefined4 *)(param_1 + 0x24) = in_stack_00000040;
      *(float *)(param_1 + 0x28) = unaff_s14;
      *(float *)(param_1 + 0x2c) = unaff_s8;
      *(undefined8 *)(param_1 + 0x38) = in_stack_00000058;
      *(undefined8 *)(param_1 + 0x30) = in_stack_00000050;
    }
    else {
      uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
      in_stack_00000430 = (double)CONCAT44(in_stack_00000040,uStack000000000000003c);
      unaff_x25[3] = in_stack_00000058;
      unaff_x25[2] = in_stack_00000050;
      FUN_038e04ec(param_2,&stack0x00000430,uVar14);
    }
LAB_05e6c82c:
    unaff_s11 = fVar21;
    if (in_w12 == 0) {
      fVar21 = unaff_s15;
      if ((unaff_x26 & 1) == 0) {
        fVar21 = unaff_s11;
      }
      fVar21 = (fVar21 - unaff_s10) * 0.5;
LAB_05e6c8bc:
      uVar14 = *(undefined8 *)((long)unaff_x20 + 0xa0);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05c8e378(uVar14,0,0);
      if ((uVar10 & 1) != 0) {
        uVar14 = *(undefined8 *)((long)unaff_x20 + 0xa8);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05c8e378(uVar14,0,0);
        if ((uVar10 & 1) != 0) {
          fVar20 = unaff_s14;
          if ((unaff_x26 & 1) == 0) {
            fVar20 = unaff_s8;
          }
          fVar20 = fVar20 * fStack0000000000000034;
          dVar18 = modf((double)fVar20,(double *)&stack0x00000430);
          if (0.0 <= fVar20) {
            if (dVar18 == 0.5) {
              fVar17 = 1.0;
              goto LAB_05e6caf0;
            }
            fVar22 = (float)(int)(fVar20 + 0.5);
          }
          else if (dVar18 == -0.5) {
            fVar17 = -1.0;
LAB_05e6caf0:
            fVar22 = (float)in_stack_00000430;
            if (((long)in_stack_00000430 & 1U) != 0) {
              fVar22 = (float)in_stack_00000430 + fVar17;
            }
          }
          else {
            fVar22 = (float)(int)(fVar20 + -0.5);
          }
          if (ABS(fVar22 - fVar20) < in_stack_00000028._4_4_) {
            fVar21 = (float)FUN_05d9b054(fVar21,fStack0000000000000034,DAT_01031fc8,0);
          }
        }
      }
LAB_05e6c96c:
      if ((unaff_w22 & 0xfffffffe) == 2) {
        fVar20 = unaff_s14;
        if ((unaff_x26 & 1) == 0) {
          fVar20 = unaff_s8;
        }
        if (fStack0000000000000038 < fVar20) {
          if (fVar21 < -fVar20) {
            fVar17 = -2.1474836e+09;
            if (-fVar21 / fVar20 != INFINITY) {
              fVar17 = (float)(int)(-fVar21 / fVar20);
            }
            fVar21 = fVar21 + fVar20 * fVar17;
          }
          if (0.0 < fVar21) {
            fVar17 = -2.1474836e+09;
            if (fVar21 / fVar20 != INFINITY) {
              fVar17 = (float)((int)(fVar21 / fVar20) + 1);
            }
            fVar21 = fVar21 - fVar20 * fVar17;
          }
        }
      }
    }
    else {
      fVar21 = 0.0;
      if (unaff_w22 != 1) {
        if (unaff_w29 == 0) {
LAB_05e6c88c:
          bVar6 = false;
        }
        else {
          if (unaff_w29 != 1) {
            unaff_s13 = 0.0;
            goto LAB_05e6c88c;
          }
          fVar20 = unaff_s14;
          fVar21 = unaff_s15;
          if ((unaff_x26 & 1) == 0) {
            fVar20 = unaff_s8;
            fVar21 = unaff_s11;
          }
          bVar6 = true;
          unaff_s13 = (unaff_s13 * (fVar21 - fVar20)) / 100.0;
        }
        if ((in_w12 == 4) || (fVar21 = unaff_s13, in_w12 == 2)) {
          fVar21 = unaff_s15;
          if ((unaff_x26 & 1) == 0) {
            fVar21 = unaff_s11;
          }
          fVar21 = (fVar21 - unaff_s10) - unaff_s13;
        }
        if (bVar6) goto LAB_05e6c8bc;
        goto LAB_05e6c96c;
      }
    }
    lVar13 = *unaff_x21;
    if (lVar13 == 0) break;
    iVar15 = 0;
    while( true ) {
      puVar5 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
      if (*(uint *)(lVar13 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
      lVar9 = *(long *)(lVar13 + unaff_x27 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_05e6d1e4;
      if (*(int *)(lVar9 + 0x18) <= iVar15) break;
      FUN_038e01b0(&stack0x00000430,lVar9,iVar15,*unaff_x24);
      fVar20 = (float)((ulong)in_stack_00000430 >> 0x20);
      bVar6 = (unaff_x26 & 1) == 0;
      uVar11 = *(undefined8 *)(unaff_x28 + 8);
      uVar14 = *(undefined8 *)(unaff_x28 + 0x18);
      lVar13 = *unaff_x21;
      fVar17 = SUB84(in_stack_00000430,0);
      if (bVar6) {
        fVar17 = fVar20;
      }
      unaff_x25[0x15] = *(undefined8 *)(unaff_x28 + 0x10);
      unaff_x25[0x14] = uVar11;
      fVar22 = fVar21 + fVar17;
      if (bVar6) {
        fVar20 = fVar21 + fVar17;
        fVar22 = SUB84(in_stack_00000430,0);
      }
      if (lVar13 == 0) goto LAB_05e6d1e4;
      if (*(uint *)(lVar13 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
      lVar13 = *(long *)(lVar13 + unaff_x27 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_05e6d1e4;
      uVar19 = unaff_x25[0x14];
      uVar11 = *unaff_x23;
      *(undefined8 *)(unaff_x28 + 0x10) = unaff_x25[0x15];
      *(undefined8 *)(unaff_x28 + 8) = uVar19;
      *(undefined8 *)(unaff_x28 + 0x18) = uVar14;
      in_stack_00000430 = (double)CONCAT44(fVar20,fVar22);
      FUN_038e0210(lVar13,iVar15,&stack0x00000430,uVar11);
      lVar13 = *unaff_x21;
      iVar15 = iVar15 + 1;
      if (lVar13 == 0) goto LAB_05e6d1e4;
    }
    unaff_x27 = 1;
    if ((unaff_x26 & 1) == 0) {
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
      if ((*(long *)(lVar13 + 0x28) == 0) || (*(long *)(lVar13 + 0x20) == 0)) break;
      if (1 < *(int *)(*(long *)(lVar13 + 0x20) + 0x18) * *(int *)(*(long *)(lVar13 + 0x28) + 0x18))
      {
        uVar14 = *(undefined8 *)((long)unaff_x20 + 0xa8);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05c8e378(uVar14,0,0);
        if ((uVar10 & 1) != 0) {
          plVar16 = (long *)(unaff_x19 + 0x20);
          lVar13 = *plVar16;
          if (lVar13 == 0) {
            lVar13 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
            FUN_03abe564(lVar13,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
            *plVar16 = lVar13;
            thunk_FUN_02bb0e9c(plVar16,lVar13);
            lVar13 = *plVar16;
          }
          *(long *)((long)unaff_x20 + 0x50) = lVar13;
          thunk_FUN_02bb0e9c();
          if (*plVar16 == 0) break;
          uVar8 = FUN_03abe980(*plVar16,*(undefined8 *)puVar5);
          *(undefined4 *)((long)unaff_x20 + 0x58) = uVar8;
        }
      }
      puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
      lVar13 = *unaff_x21;
      if (lVar13 == 0) break;
      if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
      if (*(long *)(lVar13 + 0x28) == 0) break;
      FUN_038e10a8(&stack0x00000430,*(long *)(lVar13 + 0x28),
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
      iVar15 = 0;
      unaff_x25[0xd] = unaff_x25[1];
      unaff_x25[0xc] = *unaff_x25;
      unaff_x25[0xf] = unaff_x25[3];
      unaff_x25[0xe] = unaff_x25[2];
      unaff_x25[0x11] = unaff_x25[5];
      unaff_x25[0x10] = unaff_x25[4];
      goto LAB_05e6cdac;
    }
    unaff_x26 = 0;
    unaff_s10 = 0.0;
    unaff_w22 = *(uint *)((long)unaff_x20 + 0x7c);
    in_w12 = *(int *)((long)unaff_x20 + 0x6c);
    unaff_w29 = *(int *)((long)unaff_x20 + 0x74);
    unaff_s13 = *(float *)((long)unaff_x20 + 0x70);
    fVar21 = unaff_s11;
    if (1 < (int)unaff_w22) {
      if (unaff_w22 == 2) {
        fVar20 = (unaff_s11 + unaff_s8 * 0.5) / unaff_s8;
        iVar15 = -0x80000000;
        if (fVar20 != INFINITY) {
          iVar15 = (int)fVar20;
        }
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar7 = FUN_04d7c48c(iVar15,1,0);
        uVar2 = uVar7 | 1;
        if ((uVar7 & 1) != 0) {
          uVar2 = uVar7 + 2;
        }
        if (in_w12 != 0) {
          uVar2 = uVar7 + 1;
        }
        unaff_s8 = unaff_s11 / (float)(int)uVar7;
        if (0 < (int)uVar2) {
          unaff_s10 = 0.0;
          uVar7 = 0;
          do {
            lVar13 = *unaff_x21;
            if (lVar13 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
            lVar13 = *(long *)(lVar13 + 0x28);
            if (lVar13 == 0) goto LAB_05e6d1e4;
            lVar9 = *(long *)(lVar13 + 0x10);
            lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_05e6d1e4;
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar1 * 0x20;
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar9 + 0x20) = uStack000000000000003c;
              *(float *)(lVar9 + 0x24) = unaff_s8 * (float)(int)uVar7;
              *(float *)(lVar9 + 0x28) = unaff_s14;
              *(float *)(lVar9 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
            }
            else {
              uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 =
                   (double)CONCAT44(unaff_s8 * (float)(int)uVar7,uStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
            }
            unaff_s10 = unaff_s8 + unaff_s10;
            uVar7 = uVar7 + 1;
            unaff_s15 = fStack000000000000006c;
            fVar21 = fStack0000000000000070;
          } while (uVar2 != uVar7);
        }
      }
      else if (unaff_w22 == 3) {
        fVar20 = (fStack0000000000000030 + unaff_s11) / unaff_s8;
        uVar2 = 0x80000000;
        if (fVar20 != INFINITY) {
          uVar2 = (int)fVar20;
        }
        uVar7 = uVar2 | 1;
        if ((uVar2 & 1) != 0) {
          uVar7 = uVar2 + 2;
        }
        uVar2 = uVar2 + 2;
        if (in_w12 == 0) {
          uVar2 = uVar7;
        }
        if (0 < (int)uVar2) {
          uVar7 = 0;
          do {
            lVar13 = *unaff_x21;
            if (lVar13 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
            lVar13 = *(long *)(lVar13 + 0x28);
            if (lVar13 == 0) goto LAB_05e6d1e4;
            lVar9 = *(long *)(lVar13 + 0x10);
            lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_05e6d1e4;
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar1 * 0x20;
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar9 + 0x20) = uStack000000000000003c;
              *(float *)(lVar9 + 0x24) = unaff_s8 * (float)(int)uVar7;
              *(float *)(lVar9 + 0x28) = unaff_s14;
              *(float *)(lVar9 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
            }
            else {
              uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 =
                   (double)CONCAT44(unaff_s8 * (float)(int)uVar7,uStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
            }
            unaff_s10 = unaff_s10 + unaff_s8;
            uVar7 = uVar7 + 1;
            unaff_s15 = fStack000000000000006c;
            fVar21 = fStack0000000000000070;
          } while (uVar2 != uVar7);
        }
      }
      goto LAB_05e6c82c;
    }
    if (unaff_w22 != 0) {
      if (unaff_w22 == 1) {
        uVar2 = 0x80000000;
        if (unaff_s11 / unaff_s8 != INFINITY) {
          uVar2 = (int)(unaff_s11 / unaff_s8);
        }
        if (-1 < (int)uVar2) {
          lVar13 = *unaff_x21;
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
          lVar13 = *(long *)(lVar13 + 0x28);
          if (lVar13 == 0) break;
          lVar9 = *(long *)(lVar13 + 0x10);
          lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar9 == 0) break;
          uVar7 = *(uint *)(lVar13 + 0x18);
          if (uVar7 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar7 * 0x20;
            *(uint *)(lVar13 + 0x18) = uVar7 + 1;
            *(undefined4 *)(lVar9 + 0x20) = uStack000000000000003c;
            *(undefined4 *)(lVar9 + 0x24) = in_stack_00000040;
            *(float *)(lVar9 + 0x28) = unaff_s14;
            *(float *)(lVar9 + 0x2c) = unaff_s8;
            *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
            *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
          }
          else {
            uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(in_stack_00000040,uStack000000000000003c);
            unaff_x25[3] = in_stack_00000058;
            unaff_x25[2] = in_stack_00000050;
            FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
          }
          unaff_s10 = unaff_s8;
          if (1 < uVar2) {
            fVar20 = unaff_s11 - unaff_s8;
            lVar13 = *unaff_x21;
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
            lVar13 = *(long *)(lVar13 + 0x28);
            if (lVar13 == 0) break;
            lVar9 = *(long *)(lVar13 + 0x10);
            lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar9 == 0) break;
            uVar7 = *(uint *)(lVar13 + 0x18);
            if (uVar7 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar7 * 0x20;
              *(uint *)(lVar13 + 0x18) = uVar7 + 1;
              *(undefined4 *)(lVar9 + 0x20) = uStack000000000000003c;
              *(float *)(lVar9 + 0x24) = fVar20;
              *(float *)(lVar9 + 0x28) = unaff_s14;
              *(float *)(lVar9 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
            }
            else {
              uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar20,uStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
            }
            unaff_s15 = fStack000000000000006c;
            fVar21 = fStack0000000000000070;
            unaff_s10 = unaff_s11;
            if (uVar2 != 2) {
              iVar15 = 0;
              do {
                iVar15 = iVar15 + 1;
                lVar13 = *unaff_x21;
                if (lVar13 == 0) goto LAB_05e6d1e4;
                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
                lVar13 = *(long *)(lVar13 + 0x28);
                if (lVar13 == 0) goto LAB_05e6d1e4;
                lVar9 = *(long *)(lVar13 + 0x10);
                lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_05e6d1e4;
                uVar7 = *(uint *)(lVar13 + 0x18);
                if (uVar7 < *(uint *)(lVar9 + 0x18)) {
                  lVar9 = lVar9 + (long)(int)uVar7 * 0x20;
                  *(uint *)(lVar13 + 0x18) = uVar7 + 1;
                  *(undefined4 *)(lVar9 + 0x20) = uStack000000000000003c;
                  *(float *)(lVar9 + 0x24) = fVar20;
                  *(float *)(lVar9 + 0x28) = unaff_s14;
                  *(float *)(lVar9 + 0x2c) = unaff_s8;
                  *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
                  *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
                }
                else {
                  uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                  in_stack_00000430 = (double)CONCAT44(fVar20,uStack000000000000003c);
                  unaff_x25[3] = in_stack_00000058;
                  unaff_x25[2] = in_stack_00000050;
                  FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
                  unaff_x25 = (undefined8 *)&stack0x00000430;
                }
              } while (iVar15 < (int)(uVar2 - 2));
            }
          }
        }
      }
      goto LAB_05e6c82c;
    }
    lVar13 = *unaff_x21;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) < 2) {
LAB_05e6d1fc:
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_05e6d348;
    }
    param_2 = *(long *)(lVar13 + 0x28);
    if (param_2 == 0) break;
    in_x9 = &
            Method_LoginAuthentication_<NotifyDataUpdaterAfterDelay>d__37_System_Collections_IEnumerator_Reset__
    ;
    in_w10 = *(int *)(param_2 + 0x1c);
    param_1 = *(long *)(param_2 + 0x10);
    unaff_s10 = unaff_s8;
  }
LAB_05e6d1e4:
  lVar13 = *(long *)(in_stack_00000020 + 0x28);
LAB_05e6d1ec:
  if (lVar13 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_05e6cdac:
  uVar10 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar3);
  if ((uVar10 & 1) == 0) goto LAB_05e6d058;
  fVar21 = in_stack_000004a4;
  fVar20 = in_stack_000004ac;
  if (in_stack_000004a4 < fStack0000000000000068) {
    fVar21 = fStack0000000000000068;
    fVar20 = in_stack_000004ac - (fStack0000000000000068 - in_stack_000004a4);
  }
  if (unaff_s11 + fStack0000000000000068 < fVar20 + fVar21) {
    fVar20 = fVar20 - ((fVar20 + fVar21) - (unaff_s11 + fStack0000000000000068));
  }
  uVar14 = *(undefined8 *)((long)unaff_x20 + 0xa8);
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c8e378(uVar14,0,0);
  lVar13 = *unaff_x21;
  if (lVar13 == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05e6d348;
  }
  if (*(int *)(lVar13 + 0x18) == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    goto LAB_05e6d348;
  }
  if (*(long *)(lVar13 + 0x20) == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05e6d348;
  }
  FUN_038e10a8(&stack0x00000430,*(long *)(lVar13 + 0x20),*(undefined8 *)puVar4);
  unaff_x25[7] = unaff_x25[1];
  unaff_x25[6] = *unaff_x25;
  unaff_x25[9] = unaff_x25[3];
  unaff_x25[8] = unaff_x25[2];
  unaff_x25[0xb] = unaff_x25[5];
  unaff_x25[10] = unaff_x25[4];
  while (uVar10 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
    fVar17 = in_stack_00000470;
    fVar22 = in_stack_00000478;
    if (in_stack_00000470 < fStack0000000000000074) {
      fVar17 = fStack0000000000000074;
      fVar22 = in_stack_00000478 - (fStack0000000000000074 - in_stack_00000470);
    }
    if (unaff_s15 + fStack0000000000000074 < fVar22 + fVar17) {
      fVar22 = fVar22 - ((fVar22 + fVar17) - (unaff_s15 + fStack0000000000000074));
    }
    memcpy(&stack0x000002e8,unaff_x20,0x138);
    FUN_05e6359c(fVar17,fVar21,fVar22,fVar20,fStack0000000000000074,fStack0000000000000068,
                 fStack000000000000006c,fStack0000000000000070);
    iVar15 = iVar15 + 1;
    if ((0x3c < iVar15) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
      if (*(long *)(unaff_x19 + 0x20) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      uVar8 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar5);
      *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar8;
      memcpy(&stack0x000001b0,unaff_x20,0x138);
      FUN_05e618b0();
      iVar15 = 0;
      *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
    }
  }
  FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  goto LAB_05e6cdac;
LAB_05e6d058:
  FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  if ((*(long *)((long)unaff_x20 + 0x50) != 0) && (0 < iVar15)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      lVar13 = *(long *)(in_stack_00000020 + 0x28);
      goto LAB_05e6d1ec;
    }
    uVar8 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar5);
    *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar8;
    memcpy(&stack0x00000078,unaff_x20,0x138);
    FUN_05e618b0();
  }
  if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
    return;
  }
  goto LAB_05e6d348;
}


