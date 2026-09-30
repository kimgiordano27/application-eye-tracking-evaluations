/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$PixelAdjustRect_Injected
ENTRY_POINT: 05e6c354
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */

void UnityEngine_RectTransformUtility__PixelAdjustRect_Injected(long param_1,long param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *in_x9;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int in_w10;
  int in_w12;
  uint in_w13;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  int iVar16;
  long *plVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  float fVar18;
  double dVar19;
  undefined8 uVar20;
  float unaff_s8;
  float unaff_s9;
  float fVar21;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar22;
  float unaff_s14;
  float fVar23;
  float unaff_s15;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  int in_stack_00000048;
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
    lVar13 = *in_x9;
    *(int *)(param_2 + 0x1c) = in_w10;
    if (param_1 == 0) break;
    uVar2 = *(uint *)(param_2 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar2 * 0x20;
      *(uint *)(param_2 + 0x18) = uVar2 + 1;
      *(float *)(param_1 + 0x20) = fStack000000000000003c;
      *(float *)(param_1 + 0x24) = in_stack_00000040;
      *(float *)(param_1 + 0x28) = unaff_s14;
      *(float *)(param_1 + 0x2c) = unaff_s8;
      *(undefined8 *)(param_1 + 0x38) = in_stack_00000058;
      *(undefined8 *)(param_1 + 0x30) = in_stack_00000050;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
      in_stack_00000430 = (double)CONCAT44(in_stack_00000040,fStack000000000000003c);
      unaff_x25[3] = in_stack_00000058;
      unaff_x25[2] = in_stack_00000050;
      FUN_038e04ec(param_2,&stack0x00000430,uVar15);
    }
    fVar21 = unaff_s12;
    if (1 < in_w13) {
      lVar13 = *unaff_x21;
      fVar22 = in_stack_00000040;
      fVar18 = unaff_s15 - unaff_s14;
      if ((unaff_x26 & 1) == 0) {
        fVar22 = unaff_s11 - unaff_s8;
        fVar18 = fStack000000000000003c;
      }
      if (lVar13 != 0) {
        if (*(uint *)(lVar13 + 0x18) <= unaff_x27) {
LAB_05e6d1fc:
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          goto LAB_05e6d348;
        }
        lVar13 = *(long *)(lVar13 + unaff_x27 * 8 + 0x20);
        if (lVar13 != 0) {
          lVar12 = *(long *)(lVar13 + 0x10);
          lVar14 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar2 = *(uint *)(lVar13 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar2 * 0x20;
              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
              *(float *)(lVar12 + 0x20) = fVar18;
              *(float *)(lVar12 + 0x24) = fVar22;
              *(float *)(lVar12 + 0x28) = unaff_s14;
              *(float *)(lVar12 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar12 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar12 + 0x30) = in_stack_00000050;
            }
            else {
              uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar22,fVar18);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar13,&stack0x00000430,uVar15);
            }
            fVar21 = unaff_s9;
            unaff_s15 = fStack000000000000006c;
            unaff_s11 = fStack0000000000000070;
            if (in_w13 != 2) {
              bVar7 = (unaff_x26 & 1) == 0;
              iVar16 = 0;
              pfVar1 = (float *)&stack0x000004c4;
              if (bVar7) {
                pfVar1 = (float *)&stack0x000004c0;
              }
              fVar23 = unaff_s14;
              if (bVar7) {
                fVar23 = unaff_s8;
              }
              do {
                iVar16 = iVar16 + 1;
                lVar13 = *unaff_x21;
                *pfVar1 = (fVar23 + (unaff_s9 - unaff_s12 * (float)(int)in_w13) /
                                    (float)(int)(in_w13 - 1)) * (float)iVar16;
                if (lVar13 == 0) goto LAB_05e6d1e4;
                if (*(uint *)(lVar13 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
                lVar13 = *(long *)(lVar13 + unaff_x27 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_05e6d1e4;
                lVar12 = *(long *)(lVar13 + 0x10);
                lVar14 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_05e6d1e4;
                uVar2 = *(uint *)(lVar13 + 0x18);
                if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)uVar2 * 0x20;
                  *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                  *(float *)(lVar12 + 0x20) = fVar18;
                  *(float *)(lVar12 + 0x24) = fVar22;
                  *(float *)(lVar12 + 0x28) = unaff_s14;
                  *(float *)(lVar12 + 0x2c) = unaff_s8;
                  *(undefined8 *)(lVar12 + 0x38) = in_stack_00000058;
                  *(undefined8 *)(lVar12 + 0x30) = in_stack_00000050;
                }
                else {
                  uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
                  in_stack_00000430 = (double)CONCAT44(fVar22,fVar18);
                  unaff_x25[3] = in_stack_00000058;
                  unaff_x25[2] = in_stack_00000050;
                  FUN_038e04ec(lVar13,&stack0x00000430,uVar15);
                  unaff_x25 = (undefined8 *)&stack0x00000430;
                }
              } while (iVar16 < (int)(in_w13 - 2));
            }
            goto LAB_05e6c82c;
          }
        }
      }
      break;
    }
LAB_05e6c82c:
    do {
      if (in_w12 == 0) {
        fVar22 = unaff_s15;
        if ((unaff_x26 & 1) == 0) {
          fVar22 = unaff_s11;
        }
        fVar22 = (fVar22 - fVar21) * 0.5;
LAB_05e6c8bc:
        uVar15 = *(undefined8 *)((long)unaff_x20 + 0xa0);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05c8e378(uVar15,0,0);
        if ((uVar10 & 1) != 0) {
          uVar15 = *(undefined8 *)((long)unaff_x20 + 0xa8);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar10 = FUN_05c8e378(uVar15,0,0);
          if ((uVar10 & 1) != 0) {
            fVar21 = unaff_s14;
            if ((unaff_x26 & 1) == 0) {
              fVar21 = unaff_s8;
            }
            fVar21 = fVar21 * fStack0000000000000034;
            dVar19 = modf((double)fVar21,(double *)&stack0x00000430);
            if (0.0 <= fVar21) {
              if (dVar19 == 0.5) {
                fVar18 = 1.0;
                goto LAB_05e6caf0;
              }
              fVar23 = (float)(int)(fVar21 + 0.5);
            }
            else if (dVar19 == -0.5) {
              fVar18 = -1.0;
LAB_05e6caf0:
              fVar23 = (float)in_stack_00000430;
              if (((long)in_stack_00000430 & 1U) != 0) {
                fVar23 = (float)in_stack_00000430 + fVar18;
              }
            }
            else {
              fVar23 = (float)(int)(fVar21 + -0.5);
            }
            if (ABS(fVar23 - fVar21) < in_stack_00000028._4_4_) {
              fVar22 = (float)FUN_05d9b054(fVar22,fStack0000000000000034,DAT_01031fc8,0);
            }
          }
        }
LAB_05e6c96c:
        if ((unaff_w22 & 0xfffffffe) == 2) {
          fVar21 = unaff_s14;
          if ((unaff_x26 & 1) == 0) {
            fVar21 = unaff_s8;
          }
          if (fStack0000000000000038 < fVar21) {
            if (fVar22 < -fVar21) {
              fVar18 = -2.1474836e+09;
              if (-fVar22 / fVar21 != INFINITY) {
                fVar18 = (float)(int)(-fVar22 / fVar21);
              }
              fVar22 = fVar22 + fVar21 * fVar18;
            }
            if (0.0 < fVar22) {
              fVar18 = -2.1474836e+09;
              if (fVar22 / fVar21 != INFINITY) {
                fVar18 = (float)((int)(fVar22 / fVar21) + 1);
              }
              fVar22 = fVar22 - fVar21 * fVar18;
            }
          }
        }
      }
      else {
        fVar22 = 0.0;
        if (unaff_w22 != 1) {
          if (in_stack_00000048 == 0) {
LAB_05e6c88c:
            bVar7 = false;
          }
          else {
            if (in_stack_00000048 != 1) {
              unaff_s13 = 0.0;
              goto LAB_05e6c88c;
            }
            fVar18 = unaff_s14;
            fVar22 = unaff_s15;
            if ((unaff_x26 & 1) == 0) {
              fVar18 = unaff_s8;
              fVar22 = unaff_s11;
            }
            bVar7 = true;
            unaff_s13 = (unaff_s13 * (fVar22 - fVar18)) / 100.0;
          }
          if ((in_w12 == 4) || (fVar22 = unaff_s13, in_w12 == 2)) {
            fVar22 = unaff_s15;
            if ((unaff_x26 & 1) == 0) {
              fVar22 = unaff_s11;
            }
            fVar22 = (fVar22 - fVar21) - unaff_s13;
          }
          if (bVar7) goto LAB_05e6c8bc;
          goto LAB_05e6c96c;
        }
      }
      lVar13 = *unaff_x21;
      if (lVar13 == 0) goto LAB_05e6d1e4;
      iVar16 = 0;
      while( true ) {
        puVar6 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
        if (*(uint *)(lVar13 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
        lVar12 = *(long *)(lVar13 + unaff_x27 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_05e6d1e4;
        if (*(int *)(lVar12 + 0x18) <= iVar16) break;
        FUN_038e01b0(&stack0x00000430,lVar12,iVar16,*unaff_x24);
        fVar21 = (float)((ulong)in_stack_00000430 >> 0x20);
        bVar7 = (unaff_x26 & 1) == 0;
        uVar11 = *(undefined8 *)(unaff_x28 + 8);
        uVar15 = *(undefined8 *)(unaff_x28 + 0x18);
        lVar13 = *unaff_x21;
        fVar18 = SUB84(in_stack_00000430,0);
        if (bVar7) {
          fVar18 = fVar21;
        }
        unaff_x25[0x15] = *(undefined8 *)(unaff_x28 + 0x10);
        unaff_x25[0x14] = uVar11;
        fVar23 = fVar22 + fVar18;
        if (bVar7) {
          fVar21 = fVar22 + fVar18;
          fVar23 = SUB84(in_stack_00000430,0);
        }
        if (lVar13 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar13 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
        lVar13 = *(long *)(lVar13 + unaff_x27 * 8 + 0x20);
        if (lVar13 == 0) goto LAB_05e6d1e4;
        uVar20 = unaff_x25[0x14];
        uVar11 = *unaff_x23;
        *(undefined8 *)(unaff_x28 + 0x10) = unaff_x25[0x15];
        *(undefined8 *)(unaff_x28 + 8) = uVar20;
        *(undefined8 *)(unaff_x28 + 0x18) = uVar15;
        in_stack_00000430 = (double)CONCAT44(fVar21,fVar23);
        FUN_038e0210(lVar13,iVar16,&stack0x00000430,uVar11);
        lVar13 = *unaff_x21;
        iVar16 = iVar16 + 1;
        if (lVar13 == 0) goto LAB_05e6d1e4;
      }
      unaff_x27 = 1;
      if ((unaff_x26 & 1) == 0) {
        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
        if ((*(long *)(lVar13 + 0x28) == 0) || (*(long *)(lVar13 + 0x20) == 0)) goto LAB_05e6d1e4;
        if (1 < *(int *)(*(long *)(lVar13 + 0x20) + 0x18) *
                *(int *)(*(long *)(lVar13 + 0x28) + 0x18)) {
          uVar15 = *(undefined8 *)((long)unaff_x20 + 0xa8);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar10 = FUN_05c8e378(uVar15,0,0);
          if ((uVar10 & 1) != 0) {
            plVar17 = (long *)(unaff_x19 + 0x20);
            lVar13 = *plVar17;
            if (lVar13 == 0) {
              lVar13 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
              FUN_03abe564(lVar13,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
              *plVar17 = lVar13;
              thunk_FUN_02bb0e9c(plVar17,lVar13);
              lVar13 = *plVar17;
            }
            *(long *)((long)unaff_x20 + 0x50) = lVar13;
            thunk_FUN_02bb0e9c();
            if (*plVar17 == 0) goto LAB_05e6d1e4;
            uVar9 = FUN_03abe980(*plVar17,*(undefined8 *)puVar6);
            *(undefined4 *)((long)unaff_x20 + 0x58) = uVar9;
          }
        }
        puVar5 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
        lVar13 = *unaff_x21;
        if (lVar13 == 0) goto LAB_05e6d1e4;
        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
        if (*(long *)(lVar13 + 0x28) == 0) goto LAB_05e6d1e4;
        FUN_038e10a8(&stack0x00000430,*(long *)(lVar13 + 0x28),
                     *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
        puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
        iVar16 = 0;
        unaff_x25[0xd] = unaff_x25[1];
        unaff_x25[0xc] = *unaff_x25;
        unaff_x25[0xf] = unaff_x25[3];
        unaff_x25[0xe] = unaff_x25[2];
        unaff_x25[0x11] = unaff_x25[5];
        unaff_x25[0x10] = unaff_x25[4];
        goto LAB_05e6cdac;
      }
      unaff_x26 = 0;
      fVar21 = 0.0;
      unaff_w22 = *(uint *)((long)unaff_x20 + 0x7c);
      in_w12 = *(int *)((long)unaff_x20 + 0x6c);
      in_stack_00000048 = *(int *)((long)unaff_x20 + 0x74);
      unaff_s13 = *(float *)((long)unaff_x20 + 0x70);
      if (1 < (int)unaff_w22) {
        if (unaff_w22 == 2) {
          fVar22 = (unaff_s11 + unaff_s8 * 0.5) / unaff_s8;
          iVar16 = -0x80000000;
          if (fVar22 != INFINITY) {
            iVar16 = (int)fVar22;
          }
          if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar8 = FUN_04d7c48c(iVar16,1,0);
          uVar2 = uVar8 | 1;
          if ((uVar8 & 1) != 0) {
            uVar2 = uVar8 + 2;
          }
          if (in_w12 != 0) {
            uVar2 = uVar8 + 1;
          }
          unaff_s8 = unaff_s11 / (float)(int)uVar8;
          if (0 < (int)uVar2) {
            fVar21 = 0.0;
            uVar8 = 0;
            do {
              lVar13 = *unaff_x21;
              if (lVar13 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
              lVar13 = *(long *)(lVar13 + 0x28);
              if (lVar13 == 0) goto LAB_05e6d1e4;
              lVar12 = *(long *)(lVar13 + 0x10);
              lVar14 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_05e6d1e4;
              uVar3 = *(uint *)(lVar13 + 0x18);
              if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)uVar3 * 0x20;
                *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                *(float *)(lVar12 + 0x20) = fStack000000000000003c;
                *(float *)(lVar12 + 0x24) = unaff_s8 * (float)(int)uVar8;
                *(float *)(lVar12 + 0x28) = unaff_s14;
                *(float *)(lVar12 + 0x2c) = unaff_s8;
                *(undefined8 *)(lVar12 + 0x38) = in_stack_00000058;
                *(undefined8 *)(lVar12 + 0x30) = in_stack_00000050;
              }
              else {
                uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
                in_stack_00000430 =
                     (double)CONCAT44(unaff_s8 * (float)(int)uVar8,fStack000000000000003c);
                unaff_x25[3] = in_stack_00000058;
                unaff_x25[2] = in_stack_00000050;
                FUN_038e04ec(lVar13,&stack0x00000430,uVar15);
              }
              fVar21 = unaff_s8 + fVar21;
              uVar8 = uVar8 + 1;
              unaff_s15 = fStack000000000000006c;
              unaff_s11 = fStack0000000000000070;
            } while (uVar2 != uVar8);
          }
        }
        else if (unaff_w22 == 3) {
          fVar22 = (fStack0000000000000030 + unaff_s11) / unaff_s8;
          uVar2 = 0x80000000;
          if (fVar22 != INFINITY) {
            uVar2 = (int)fVar22;
          }
          uVar8 = uVar2 | 1;
          if ((uVar2 & 1) != 0) {
            uVar8 = uVar2 + 2;
          }
          uVar2 = uVar2 + 2;
          if (in_w12 == 0) {
            uVar2 = uVar8;
          }
          if (0 < (int)uVar2) {
            uVar8 = 0;
            do {
              lVar13 = *unaff_x21;
              if (lVar13 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
              lVar13 = *(long *)(lVar13 + 0x28);
              if (lVar13 == 0) goto LAB_05e6d1e4;
              lVar12 = *(long *)(lVar13 + 0x10);
              lVar14 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_05e6d1e4;
              uVar3 = *(uint *)(lVar13 + 0x18);
              if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                lVar12 = lVar12 + (long)(int)uVar3 * 0x20;
                *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                *(float *)(lVar12 + 0x20) = fStack000000000000003c;
                *(float *)(lVar12 + 0x24) = unaff_s8 * (float)(int)uVar8;
                *(float *)(lVar12 + 0x28) = unaff_s14;
                *(float *)(lVar12 + 0x2c) = unaff_s8;
                *(undefined8 *)(lVar12 + 0x38) = in_stack_00000058;
                *(undefined8 *)(lVar12 + 0x30) = in_stack_00000050;
              }
              else {
                uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
                in_stack_00000430 =
                     (double)CONCAT44(unaff_s8 * (float)(int)uVar8,fStack000000000000003c);
                unaff_x25[3] = in_stack_00000058;
                unaff_x25[2] = in_stack_00000050;
                FUN_038e04ec(lVar13,&stack0x00000430,uVar15);
              }
              fVar21 = fVar21 + unaff_s8;
              uVar8 = uVar8 + 1;
              unaff_s15 = fStack000000000000006c;
              unaff_s11 = fStack0000000000000070;
            } while (uVar2 != uVar8);
          }
        }
        goto LAB_05e6c82c;
      }
      if (unaff_w22 == 0) {
        lVar13 = *unaff_x21;
        if (lVar13 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
        lVar13 = *(long *)(lVar13 + 0x28);
        if (lVar13 == 0) goto LAB_05e6d1e4;
        lVar12 = *(long *)(lVar13 + 0x10);
        lVar14 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_05e6d1e4;
        uVar2 = *(uint *)(lVar13 + 0x18);
        fVar21 = unaff_s8;
        if (uVar2 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)uVar2 * 0x20;
          *(uint *)(lVar13 + 0x18) = uVar2 + 1;
          *(float *)(lVar12 + 0x20) = fStack000000000000003c;
          *(float *)(lVar12 + 0x24) = in_stack_00000040;
          *(float *)(lVar12 + 0x28) = unaff_s14;
          *(float *)(lVar12 + 0x2c) = unaff_s8;
          *(undefined8 *)(lVar12 + 0x38) = in_stack_00000058;
          *(undefined8 *)(lVar12 + 0x30) = in_stack_00000050;
        }
        else {
          uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
          in_stack_00000430 = (double)CONCAT44(in_stack_00000040,fStack000000000000003c);
          unaff_x25[3] = in_stack_00000058;
          unaff_x25[2] = in_stack_00000050;
          FUN_038e04ec(lVar13,&stack0x00000430,uVar15);
        }
        goto LAB_05e6c82c;
      }
      if (unaff_w22 != 1) goto LAB_05e6c82c;
      in_w13 = 0x80000000;
      if (unaff_s11 / unaff_s8 != INFINITY) {
        in_w13 = (int)(unaff_s11 / unaff_s8);
      }
    } while ((int)in_w13 < 0);
    lVar13 = *unaff_x21;
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_05e6d1fc;
    param_2 = *(long *)(lVar13 + 0x28);
    if (param_2 == 0) break;
    param_1 = *(long *)(param_2 + 0x10);
    in_w10 = *(int *)(param_2 + 0x1c) + 1;
    in_x9 = (long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
    unaff_s9 = unaff_s11;
    unaff_s12 = unaff_s8;
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
  uVar10 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar4);
  if ((uVar10 & 1) == 0) goto LAB_05e6d058;
  fVar21 = in_stack_000004a4;
  fVar22 = in_stack_000004ac;
  if (in_stack_000004a4 < fStack0000000000000068) {
    fVar21 = fStack0000000000000068;
    fVar22 = in_stack_000004ac - (fStack0000000000000068 - in_stack_000004a4);
  }
  if (unaff_s11 + fStack0000000000000068 < fVar22 + fVar21) {
    fVar22 = fVar22 - ((fVar22 + fVar21) - (unaff_s11 + fStack0000000000000068));
  }
  uVar15 = *(undefined8 *)((long)unaff_x20 + 0xa8);
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c8e378(uVar15,0,0);
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
  FUN_038e10a8(&stack0x00000430,*(long *)(lVar13 + 0x20),*(undefined8 *)puVar5);
  unaff_x25[7] = unaff_x25[1];
  unaff_x25[6] = *unaff_x25;
  unaff_x25[9] = unaff_x25[3];
  unaff_x25[8] = unaff_x25[2];
  unaff_x25[0xb] = unaff_x25[5];
  unaff_x25[10] = unaff_x25[4];
  while (uVar10 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
    fVar18 = in_stack_00000470;
    fVar23 = in_stack_00000478;
    if (in_stack_00000470 < fStack0000000000000074) {
      fVar18 = fStack0000000000000074;
      fVar23 = in_stack_00000478 - (fStack0000000000000074 - in_stack_00000470);
    }
    if (unaff_s15 + fStack0000000000000074 < fVar23 + fVar18) {
      fVar23 = fVar23 - ((fVar23 + fVar18) - (unaff_s15 + fStack0000000000000074));
    }
    memcpy(&stack0x000002e8,unaff_x20,0x138);
    FUN_05e6359c(fVar18,fVar21,fVar23,fVar22,fStack0000000000000074,fStack0000000000000068,
                 fStack000000000000006c,fStack0000000000000070);
    iVar16 = iVar16 + 1;
    if ((0x3c < iVar16) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
      if (*(long *)(unaff_x19 + 0x20) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      uVar9 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar6);
      *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar9;
      memcpy(&stack0x000001b0,unaff_x20,0x138);
      FUN_05e618b0();
      iVar16 = 0;
      *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
    }
  }
  FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  goto LAB_05e6cdac;
LAB_05e6d058:
  FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  if ((*(long *)((long)unaff_x20 + 0x50) != 0) && (0 < iVar16)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      lVar13 = *(long *)(in_stack_00000020 + 0x28);
      goto LAB_05e6d1ec;
    }
    uVar9 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar6);
    *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar9;
    memcpy(&stack0x00000078,unaff_x20,0x138);
    FUN_05e618b0();
  }
  if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
    return;
  }
  goto LAB_05e6d348;
}


