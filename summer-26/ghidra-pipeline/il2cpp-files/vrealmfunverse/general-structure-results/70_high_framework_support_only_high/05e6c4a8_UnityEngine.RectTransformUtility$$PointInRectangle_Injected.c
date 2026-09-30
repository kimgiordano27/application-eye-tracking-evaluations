/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$PointInRectangle_Injected
ENTRY_POINT: 05e6c4a8
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

void UnityEngine_RectTransformUtility__PointInRectangle_Injected
               (undefined1 param_1 [16],long param_2,undefined1 *param_3,undefined8 param_4)

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
  long lVar13;
  undefined8 uVar14;
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
  uint unaff_w29;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
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
  float fStack000000000000003c;
  float fStack0000000000000040;
  uint uStack0000000000000044;
  int iStack0000000000000048;
  int iStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000430;
  double dVar23;
  float in_stack_00000470;
  float in_stack_00000478;
  float in_stack_000004a4;
  float in_stack_000004ac;
  long in_stack_000004e8;
  
  uVar11 = param_1._8_8_;
  uVar14 = param_1._0_8_;
code_r0x05e6c4a8:
  dVar23 = (double)CONCAT44(unaff_s15,in_stack_00000430);
  unaff_x25[3] = uVar11;
  unaff_x25[2] = uVar14;
  FUN_038e04ec(param_2,param_3,param_4);
  do {
    unaff_s10 = unaff_s10 + unaff_s9;
    unaff_w29 = unaff_w29 + 1;
    fVar21 = unaff_s12;
    if (unaff_w22 == unaff_w29) {
LAB_05e6c82c:
      do {
        if (iStack000000000000004c == 0) {
          fVar21 = fStack000000000000006c;
          if ((unaff_x26 & 1) == 0) {
            fVar21 = fStack0000000000000070;
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
                fVar22 = (float)dVar23;
                if (((long)dVar23 & 1U) != 0) {
                  fVar22 = (float)dVar23 + fVar17;
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
          if ((uStack0000000000000044 & 0xfffffffe) == 2) {
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
          if (uStack0000000000000044 != 1) {
            if (iStack0000000000000048 == 0) {
LAB_05e6c88c:
              bVar6 = false;
            }
            else {
              if (iStack0000000000000048 != 1) {
                unaff_s13 = 0.0;
                goto LAB_05e6c88c;
              }
              fVar20 = unaff_s14;
              fVar21 = fStack000000000000006c;
              if ((unaff_x26 & 1) == 0) {
                fVar20 = unaff_s8;
                fVar21 = fStack0000000000000070;
              }
              bVar6 = true;
              unaff_s13 = (unaff_s13 * (fVar21 - fVar20)) / 100.0;
            }
            if ((iStack000000000000004c == 4) || (fVar21 = unaff_s13, iStack000000000000004c == 2))
            {
              fVar21 = fStack000000000000006c;
              if ((unaff_x26 & 1) == 0) {
                fVar21 = fStack0000000000000070;
              }
              fVar21 = (fVar21 - unaff_s10) - unaff_s13;
            }
            if (bVar6) goto LAB_05e6c8bc;
            goto LAB_05e6c96c;
          }
        }
        lVar13 = *unaff_x21;
        if (lVar13 == 0) goto LAB_05e6d1e4;
        iVar15 = 0;
        while( true ) {
          puVar5 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
          if (*(uint *)(lVar13 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
          lVar9 = *(long *)(lVar13 + unaff_x27 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_05e6d1e4;
          if (*(int *)(lVar9 + 0x18) <= iVar15) break;
          FUN_038e01b0(&stack0x00000430,lVar9,iVar15,*unaff_x24);
          fVar20 = (float)((ulong)dVar23 >> 0x20);
          bVar6 = (unaff_x26 & 1) == 0;
          uVar11 = *(undefined8 *)(unaff_x28 + 8);
          uVar14 = *(undefined8 *)(unaff_x28 + 0x18);
          lVar13 = *unaff_x21;
          fVar17 = SUB84(dVar23,0);
          if (bVar6) {
            fVar17 = fVar20;
          }
          unaff_x25[0x15] = *(undefined8 *)(unaff_x28 + 0x10);
          unaff_x25[0x14] = uVar11;
          fVar22 = fVar21 + fVar17;
          if (bVar6) {
            fVar20 = fVar21 + fVar17;
            fVar22 = SUB84(dVar23,0);
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
          dVar23 = (double)CONCAT44(fVar20,fVar22);
          FUN_038e0210(lVar13,iVar15,&stack0x00000430,uVar11);
          lVar13 = *unaff_x21;
          iVar15 = iVar15 + 1;
          if (lVar13 == 0) goto LAB_05e6d1e4;
        }
        unaff_x27 = 1;
        if ((unaff_x26 & 1) == 0) {
          if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
          if ((*(long *)(lVar13 + 0x28) == 0) || (*(long *)(lVar13 + 0x20) == 0)) goto LAB_05e6d1e4;
          if (1 < *(int *)(*(long *)(lVar13 + 0x20) + 0x18) *
                  *(int *)(*(long *)(lVar13 + 0x28) + 0x18)) {
            uVar14 = *(undefined8 *)((long)unaff_x20 + 0xa8);
            if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar10 = FUN_05c8e378(uVar14,0,0);
            if ((uVar10 & 1) != 0) {
              plVar16 = (long *)(unaff_x19 + 0x20);
              lVar13 = *plVar16;
              if (lVar13 == 0) {
                lVar13 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__)
                ;
                FUN_03abe564(lVar13,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
                *plVar16 = lVar13;
                thunk_FUN_02bb0e9c(plVar16,lVar13);
                lVar13 = *plVar16;
              }
              *(long *)((long)unaff_x20 + 0x50) = lVar13;
              thunk_FUN_02bb0e9c();
              if (*plVar16 == 0) goto LAB_05e6d1e4;
              uVar8 = FUN_03abe980(*plVar16,*(undefined8 *)puVar5);
              *(undefined4 *)((long)unaff_x20 + 0x58) = uVar8;
            }
          }
          puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
          lVar13 = *unaff_x21;
          if (lVar13 == 0) goto LAB_05e6d1e4;
          if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
          if (*(long *)(lVar13 + 0x28) == 0) goto LAB_05e6d1e4;
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
        uStack0000000000000044 = *(uint *)((long)unaff_x20 + 0x7c);
        iStack000000000000004c = *(int *)((long)unaff_x20 + 0x6c);
        iStack0000000000000048 = *(int *)((long)unaff_x20 + 0x74);
        unaff_s13 = *(float *)((long)unaff_x20 + 0x70);
        if ((int)uStack0000000000000044 < 2) {
          if (uStack0000000000000044 == 0) {
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
              *(float *)(lVar9 + 0x20) = fStack000000000000003c;
              *(float *)(lVar9 + 0x24) = fStack0000000000000040;
              *(float *)(lVar9 + 0x28) = unaff_s14;
              *(float *)(lVar9 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
              unaff_s10 = unaff_s8;
            }
            else {
              uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
              dVar23 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
              unaff_s10 = unaff_s8;
            }
          }
          else if (uStack0000000000000044 == 1) {
            uVar1 = 0x80000000;
            if (fStack0000000000000070 / unaff_s8 != INFINITY) {
              uVar1 = (int)(fStack0000000000000070 / unaff_s8);
            }
            if (-1 < (int)uVar1) {
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
                *(float *)(lVar9 + 0x20) = fStack000000000000003c;
                *(float *)(lVar9 + 0x24) = fStack0000000000000040;
                *(float *)(lVar9 + 0x28) = unaff_s14;
                *(float *)(lVar9 + 0x2c) = unaff_s8;
                *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
                *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
              }
              else {
                uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                dVar23 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
                unaff_x25[3] = in_stack_00000058;
                unaff_x25[2] = in_stack_00000050;
                FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
              }
              unaff_s10 = unaff_s8;
              if (1 < uVar1) {
                fVar21 = fStack0000000000000070 - unaff_s8;
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
                  *(float *)(lVar9 + 0x20) = fStack000000000000003c;
                  *(float *)(lVar9 + 0x24) = fVar21;
                  *(float *)(lVar9 + 0x28) = unaff_s14;
                  *(float *)(lVar9 + 0x2c) = unaff_s8;
                  *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
                  *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
                }
                else {
                  uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                  dVar23 = (double)CONCAT44(fVar21,fStack000000000000003c);
                  unaff_x25[3] = in_stack_00000058;
                  unaff_x25[2] = in_stack_00000050;
                  FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
                }
                unaff_s10 = fStack0000000000000070;
                if (uVar1 != 2) {
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
                      *(float *)(lVar9 + 0x20) = fStack000000000000003c;
                      *(float *)(lVar9 + 0x24) = fVar21;
                      *(float *)(lVar9 + 0x28) = unaff_s14;
                      *(float *)(lVar9 + 0x2c) = unaff_s8;
                      *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
                      *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
                    }
                    else {
                      uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                      dVar23 = (double)CONCAT44(fVar21,fStack000000000000003c);
                      unaff_x25[3] = in_stack_00000058;
                      unaff_x25[2] = in_stack_00000050;
                      FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
                      unaff_x25 = (undefined8 *)&stack0x00000430;
                    }
                  } while (iVar15 < (int)(uVar1 - 2));
                }
              }
            }
          }
          goto LAB_05e6c82c;
        }
        if (uStack0000000000000044 == 2) {
          fVar21 = (fStack0000000000000070 + unaff_s8 * 0.5) / unaff_s8;
          iVar15 = -0x80000000;
          if (fVar21 != INFINITY) {
            iVar15 = (int)fVar21;
          }
          if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar7 = FUN_04d7c48c(iVar15,1,0);
          uVar1 = uVar7 | 1;
          if ((uVar7 & 1) != 0) {
            uVar1 = uVar7 + 2;
          }
          if (iStack000000000000004c != 0) {
            uVar1 = uVar7 + 1;
          }
          unaff_s8 = fStack0000000000000070 / (float)(int)uVar7;
          if (0 < (int)uVar1) {
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
              uVar2 = *(uint *)(lVar13 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                lVar9 = lVar9 + (long)(int)uVar2 * 0x20;
                *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                *(float *)(lVar9 + 0x20) = fStack000000000000003c;
                *(float *)(lVar9 + 0x24) = unaff_s8 * (float)(int)uVar7;
                *(float *)(lVar9 + 0x28) = unaff_s14;
                *(float *)(lVar9 + 0x2c) = unaff_s8;
                *(undefined8 *)(lVar9 + 0x38) = in_stack_00000058;
                *(undefined8 *)(lVar9 + 0x30) = in_stack_00000050;
              }
              else {
                uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                dVar23 = (double)CONCAT44(unaff_s8 * (float)(int)uVar7,fStack000000000000003c);
                unaff_x25[3] = in_stack_00000058;
                unaff_x25[2] = in_stack_00000050;
                FUN_038e04ec(lVar13,&stack0x00000430,uVar14);
              }
              unaff_s10 = unaff_s8 + unaff_s10;
              uVar7 = uVar7 + 1;
            } while (uVar1 != uVar7);
          }
          goto LAB_05e6c82c;
        }
        if (uStack0000000000000044 != 3) goto LAB_05e6c82c;
        fVar21 = (fStack0000000000000030 + fStack0000000000000070) / unaff_s8;
        uVar1 = 0x80000000;
        if (fVar21 != INFINITY) {
          uVar1 = (int)fVar21;
        }
        uVar7 = uVar1 | 1;
        if ((uVar1 & 1) != 0) {
          uVar7 = uVar1 + 2;
        }
        unaff_w22 = uVar1 + 2;
        if (iStack000000000000004c == 0) {
          unaff_w22 = uVar7;
        }
      } while ((int)unaff_w22 < 1);
      unaff_w29 = 0;
      fVar21 = fStack000000000000003c;
      unaff_s15 = fStack0000000000000040;
      unaff_s9 = unaff_s8;
    }
    lVar13 = *unaff_x21;
    unaff_s12 = unaff_s14 * (float)(int)unaff_w29;
    if ((unaff_x26 & 1) == 0) {
      unaff_s12 = fVar21;
      unaff_s15 = unaff_s8 * (float)(int)unaff_w29;
    }
    if (lVar13 == 0) goto LAB_05e6d1e4;
    if (*(uint *)(lVar13 + 0x18) <= unaff_x27) {
LAB_05e6d1fc:
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_05e6d348;
    }
    param_2 = *(long *)(lVar13 + unaff_x27 * 8 + 0x20);
    if (param_2 == 0) {
LAB_05e6d1e4:
      lVar13 = *(long *)(in_stack_00000020 + 0x28);
      goto LAB_05e6d1ec;
    }
    lVar13 = *(long *)(param_2 + 0x10);
    lVar9 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_05e6d1e4;
    uVar1 = *(uint *)(param_2 + 0x18);
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_05e6c490;
    lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
    *(float *)(lVar13 + 0x20) = unaff_s12;
    *(float *)(lVar13 + 0x24) = unaff_s15;
    *(float *)(lVar13 + 0x28) = unaff_s14;
    *(float *)(lVar13 + 0x2c) = unaff_s8;
    *(undefined8 *)(lVar13 + 0x38) = in_stack_00000058;
    *(undefined8 *)(lVar13 + 0x30) = in_stack_00000050;
  } while( true );
LAB_05e6cdac:
  uVar10 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar3);
  if ((uVar10 & 1) == 0) goto LAB_05e6d058;
  fVar21 = in_stack_000004a4;
  fVar20 = in_stack_000004ac;
  if (in_stack_000004a4 < fStack0000000000000068) {
    fVar21 = fStack0000000000000068;
    fVar20 = in_stack_000004ac - (fStack0000000000000068 - in_stack_000004a4);
  }
  if (fStack0000000000000070 + fStack0000000000000068 < fVar20 + fVar21) {
    fVar20 = fVar20 - ((fVar20 + fVar21) - (fStack0000000000000070 + fStack0000000000000068));
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
    if (fStack000000000000006c + fStack0000000000000074 < fVar22 + fVar17) {
      fVar22 = fVar22 - ((fVar22 + fVar17) - (fStack000000000000006c + fStack0000000000000074));
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
LAB_05e6c490:
  param_3 = &stack0x00000430;
  param_4 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
  uVar14 = in_stack_00000050;
  uVar11 = in_stack_00000058;
  in_stack_00000430 = unaff_s12;
  goto code_r0x05e6c4a8;
LAB_05e6d058:
  FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  if ((*(long *)((long)unaff_x20 + 0x50) != 0) && (0 < iVar15)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      lVar13 = *(long *)(in_stack_00000020 + 0x28);
LAB_05e6d1ec:
      if (lVar13 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e6d348;
    }
    uVar8 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar5);
    *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar8;
    memcpy(&stack0x00000078,unaff_x20,0x138);
    FUN_05e618b0();
  }
  if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
    return;
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


