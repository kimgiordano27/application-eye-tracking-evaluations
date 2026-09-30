/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$PixelAdjustRect
ENTRY_POINT: 05e6c25c
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

void UnityEngine_RectTransformUtility__PixelAdjustRect(float param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long in_x9;
  long lVar17;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  int iVar18;
  undefined8 uVar19;
  long *plVar20;
  long unaff_x23;
  undefined8 *puVar21;
  long unaff_x24;
  undefined8 *puVar22;
  undefined8 *unaff_x25;
  ulong uVar23;
  int iVar24;
  double dVar25;
  float fVar26;
  float unaff_s8;
  float fVar27;
  float unaff_s11;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_s14;
  float fVar31;
  float unaff_s15;
  long in_stack_00000020;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined8 uStack0000000000000058;
  float in_stack_00000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  double in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  float in_stack_00000470;
  float in_stack_00000478;
  float in_stack_000004a4;
  float in_stack_000004ac;
  long in_stack_000004e8;
  
  uVar23 = 0;
  uStack0000000000000058 = *(undefined8 *)(in_x9 + 0xd88);
  _fStack0000000000000050 = *(undefined8 *)(in_x9 + 0xd80);
  puVar22 = *(undefined8 **)(unaff_x24 + 0xc28);
  fStack000000000000002c = DAT_010328d0;
  puVar21 = *(undefined8 **)(unaff_x23 + 0xc30);
  fStack000000000000006c = unaff_s15;
  bVar11 = true;
  do {
    bVar6 = bVar11;
    fVar27 = 0.0;
    lVar15 = 0x78;
    if (!bVar6) {
      lVar15 = 0x7c;
    }
    uVar2 = *(uint *)((long)unaff_x20 + lVar15);
    lVar15 = 0x60;
    if (!bVar6) {
      lVar15 = 0x6c;
    }
    lVar16 = 0x68;
    if (!bVar6) {
      lVar16 = 0x74;
    }
    iVar18 = *(int *)((long)unaff_x20 + lVar15);
    lVar15 = 100;
    if (!bVar6) {
      lVar15 = 0x70;
    }
    iVar3 = *(int *)((long)unaff_x20 + lVar16);
    fVar29 = *(float *)((long)unaff_x20 + lVar15);
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) {
        lVar15 = *unaff_x21;
        fVar27 = unaff_s14;
        if (!bVar6) {
          fVar27 = unaff_s8;
        }
        if (lVar15 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_05e6d1fc;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_05e6d1e4;
        lVar16 = *(long *)(lVar15 + 0x10);
        lVar17 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_05e6d1e4;
        uVar5 = *(uint *)(lVar15 + 0x18);
        if (uVar5 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = lVar16 + (long)(int)uVar5 * 0x20;
          *(uint *)(lVar15 + 0x18) = uVar5 + 1;
          *(float *)(lVar16 + 0x20) = fStack000000000000003c;
          *(float *)(lVar16 + 0x24) = in_stack_00000040;
          *(float *)(lVar16 + 0x28) = unaff_s14;
          *(float *)(lVar16 + 0x2c) = unaff_s8;
          *(undefined8 *)(lVar16 + 0x38) = uStack0000000000000058;
          *(undefined8 *)(lVar16 + 0x30) = _fStack0000000000000050;
        }
        else {
          uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
          in_stack_00000430 = (double)CONCAT44(in_stack_00000040,fStack000000000000003c);
          in_stack_00000438 = CONCAT44(unaff_s8,unaff_s14);
          unaff_x25[3] = uStack0000000000000058;
          unaff_x25[2] = _fStack0000000000000050;
          FUN_038e04ec(lVar15,&stack0x00000430,uVar19);
        }
      }
      else if (uVar2 == 1) {
        fVar30 = unaff_s14;
        fVar31 = unaff_s15;
        if (!bVar6) {
          fVar30 = unaff_s8;
          fVar31 = unaff_s11;
        }
        uVar5 = 0x80000000;
        if (fVar31 / fVar30 != INFINITY) {
          uVar5 = (int)(fVar31 / fVar30);
        }
        if (-1 < (int)uVar5) {
          lVar15 = *unaff_x21;
          if (lVar15 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_05e6d1fc;
          lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
          if (lVar15 == 0) goto LAB_05e6d1e4;
          lVar16 = *(long *)(lVar15 + 0x10);
          lVar17 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_05e6d1e4;
          uVar12 = *(uint *)(lVar15 + 0x18);
          if (uVar12 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar12 * 0x20;
            *(uint *)(lVar15 + 0x18) = uVar12 + 1;
            *(float *)(lVar16 + 0x20) = fStack000000000000003c;
            *(float *)(lVar16 + 0x24) = in_stack_00000040;
            *(float *)(lVar16 + 0x28) = unaff_s14;
            *(float *)(lVar16 + 0x2c) = unaff_s8;
            *(undefined8 *)(lVar16 + 0x38) = uStack0000000000000058;
            *(undefined8 *)(lVar16 + 0x30) = _fStack0000000000000050;
          }
          else {
            uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(in_stack_00000040,fStack000000000000003c);
            in_stack_00000438 = CONCAT44(unaff_s8,unaff_s14);
            unaff_x25[3] = uStack0000000000000058;
            unaff_x25[2] = _fStack0000000000000050;
            FUN_038e04ec(lVar15,&stack0x00000430,uVar19);
          }
          fVar27 = fVar30;
          if (1 < uVar5) {
            lVar15 = *unaff_x21;
            fVar28 = in_stack_00000040;
            fVar10 = unaff_s15 - unaff_s14;
            if (!bVar6) {
              fVar28 = unaff_s11 - unaff_s8;
              fVar10 = fStack000000000000003c;
            }
            if (lVar15 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_05e6d1fc;
            lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
            if (lVar15 == 0) goto LAB_05e6d1e4;
            lVar16 = *(long *)(lVar15 + 0x10);
            lVar17 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_05e6d1e4;
            uVar12 = *(uint *)(lVar15 + 0x18);
            if (uVar12 < *(uint *)(lVar16 + 0x18)) {
              lVar16 = lVar16 + (long)(int)uVar12 * 0x20;
              *(uint *)(lVar15 + 0x18) = uVar12 + 1;
              *(float *)(lVar16 + 0x20) = fVar10;
              *(float *)(lVar16 + 0x24) = fVar28;
              *(float *)(lVar16 + 0x28) = unaff_s14;
              *(float *)(lVar16 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar16 + 0x38) = uStack0000000000000058;
              *(undefined8 *)(lVar16 + 0x30) = _fStack0000000000000050;
            }
            else {
              uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar28,fVar10);
              in_stack_00000438 = CONCAT44(unaff_s8,unaff_s14);
              unaff_x25[3] = uStack0000000000000058;
              unaff_x25[2] = _fStack0000000000000050;
              FUN_038e04ec(lVar15,&stack0x00000430,uVar19);
            }
            unaff_s15 = fStack000000000000006c;
            fVar27 = fVar31;
            if (uVar5 != 2) {
              iVar24 = 0;
              pfVar1 = (float *)&stack0x000004c4;
              if (!bVar6) {
                pfVar1 = (float *)&stack0x000004c0;
              }
              fVar26 = unaff_s14;
              if (!bVar6) {
                fVar26 = unaff_s8;
              }
              do {
                iVar24 = iVar24 + 1;
                lVar15 = *unaff_x21;
                *pfVar1 = (fVar26 + (fVar31 - fVar30 * (float)(int)uVar5) / (float)(int)(uVar5 - 1))
                          * (float)iVar24;
                if (lVar15 == 0) goto LAB_05e6d1e4;
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_05e6d1fc;
                lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
                if (lVar15 == 0) goto LAB_05e6d1e4;
                lVar16 = *(long *)(lVar15 + 0x10);
                lVar17 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_05e6d1e4;
                uVar12 = *(uint *)(lVar15 + 0x18);
                if (uVar12 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar12 * 0x20;
                  *(uint *)(lVar15 + 0x18) = uVar12 + 1;
                  *(float *)(lVar16 + 0x20) = fVar10;
                  *(float *)(lVar16 + 0x24) = fVar28;
                  *(float *)(lVar16 + 0x28) = unaff_s14;
                  *(float *)(lVar16 + 0x2c) = unaff_s8;
                  *(undefined8 *)(lVar16 + 0x38) = uStack0000000000000058;
                  *(undefined8 *)(lVar16 + 0x30) = _fStack0000000000000050;
                }
                else {
                  uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
                  in_stack_00000430 = (double)CONCAT44(fVar28,fVar10);
                  in_stack_00000438 = CONCAT44(unaff_s8,unaff_s14);
                  unaff_x25[3] = uStack0000000000000058;
                  unaff_x25[2] = _fStack0000000000000050;
                  FUN_038e04ec(lVar15,&stack0x00000430,uVar19);
                  unaff_x25 = (undefined8 *)&stack0x00000430;
                }
                unaff_s15 = fStack000000000000006c;
              } while (iVar24 < (int)(uVar5 - 2));
            }
          }
        }
      }
    }
    else if (uVar2 == 2) {
      fVar30 = unaff_s15;
      fVar31 = unaff_s14;
      if (!bVar6) {
        fVar30 = unaff_s11;
        fVar31 = unaff_s8;
      }
      fVar31 = (fVar30 + fVar31 * 0.5) / fVar31;
      iVar24 = -0x80000000;
      if (fVar31 != INFINITY) {
        iVar24 = (int)fVar31;
      }
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar12 = FUN_04d7c48c(iVar24,1,0);
      uVar5 = uVar12 | 1;
      if ((uVar12 & 1) != 0) {
        uVar5 = uVar12 + 2;
      }
      if (iVar18 != 0) {
        uVar5 = uVar12 + 1;
      }
      fVar30 = fVar30 / (float)(int)uVar12;
      fVar31 = fVar30;
      if (!bVar6) {
        unaff_s8 = fVar30;
        fVar31 = unaff_s14;
      }
      unaff_s14 = fVar31;
      if (0 < (int)uVar5) {
        fVar27 = 0.0;
        uVar12 = 0;
        fVar31 = fStack000000000000003c;
        fVar28 = in_stack_00000040;
        do {
          lVar15 = *unaff_x21;
          fVar10 = fVar30 * (float)(int)uVar12;
          if (!bVar6) {
            fVar28 = fVar30 * (float)(int)uVar12;
            fVar10 = fVar31;
          }
          fVar31 = fVar10;
          if (lVar15 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_05e6d1fc;
          lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
          if (lVar15 == 0) goto LAB_05e6d1e4;
          lVar16 = *(long *)(lVar15 + 0x10);
          lVar17 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_05e6d1e4;
          uVar4 = *(uint *)(lVar15 + 0x18);
          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar15 + 0x18) = uVar4 + 1;
            *(float *)(lVar16 + 0x20) = fVar31;
            *(float *)(lVar16 + 0x24) = fVar28;
            *(float *)(lVar16 + 0x28) = unaff_s14;
            *(float *)(lVar16 + 0x2c) = unaff_s8;
            *(undefined8 *)(lVar16 + 0x38) = uStack0000000000000058;
            *(undefined8 *)(lVar16 + 0x30) = _fStack0000000000000050;
          }
          else {
            uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fVar28,fVar31);
            in_stack_00000438 = CONCAT44(unaff_s8,unaff_s14);
            unaff_x25[3] = uStack0000000000000058;
            unaff_x25[2] = _fStack0000000000000050;
            FUN_038e04ec(lVar15,&stack0x00000430,uVar19);
          }
          fVar27 = fVar30 + fVar27;
          uVar12 = uVar12 + 1;
          unaff_s15 = fStack000000000000006c;
        } while (uVar5 != uVar12);
      }
    }
    else if (uVar2 == 3) {
      fVar30 = unaff_s14;
      fVar31 = unaff_s15;
      if (!bVar6) {
        fVar30 = unaff_s8;
        fVar31 = unaff_s11;
      }
      fVar31 = (param_2 / param_1 + fVar31) / fVar30;
      uVar5 = 0x80000000;
      if (fVar31 != INFINITY) {
        uVar5 = (int)fVar31;
      }
      uVar12 = uVar5 | 1;
      if ((uVar5 & 1) != 0) {
        uVar12 = uVar5 + 2;
      }
      uVar5 = uVar5 + 2;
      if (iVar18 == 0) {
        uVar5 = uVar12;
      }
      if (0 < (int)uVar5) {
        uVar12 = 0;
        fVar28 = fStack000000000000003c;
        fVar31 = in_stack_00000040;
        do {
          lVar15 = *unaff_x21;
          fVar10 = unaff_s14 * (float)(int)uVar12;
          if (!bVar6) {
            fVar10 = fVar28;
            fVar31 = unaff_s8 * (float)(int)uVar12;
          }
          fVar28 = fVar10;
          if (lVar15 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_05e6d1fc;
          lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
          if (lVar15 == 0) goto LAB_05e6d1e4;
          lVar16 = *(long *)(lVar15 + 0x10);
          lVar17 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_05e6d1e4;
          uVar4 = *(uint *)(lVar15 + 0x18);
          if (uVar4 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar15 + 0x18) = uVar4 + 1;
            *(float *)(lVar16 + 0x20) = fVar28;
            *(float *)(lVar16 + 0x24) = fVar31;
            *(float *)(lVar16 + 0x28) = unaff_s14;
            *(float *)(lVar16 + 0x2c) = unaff_s8;
            *(undefined8 *)(lVar16 + 0x38) = uStack0000000000000058;
            *(undefined8 *)(lVar16 + 0x30) = _fStack0000000000000050;
          }
          else {
            uVar19 = *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fVar31,fVar28);
            in_stack_00000438 = CONCAT44(unaff_s8,unaff_s14);
            unaff_x25[3] = uStack0000000000000058;
            unaff_x25[2] = _fStack0000000000000050;
            FUN_038e04ec(lVar15,&stack0x00000430,uVar19);
          }
          fVar27 = fVar27 + fVar30;
          uVar12 = uVar12 + 1;
          unaff_s15 = fStack000000000000006c;
        } while (uVar5 != uVar12);
      }
    }
    if (iVar18 == 0) {
      fVar29 = unaff_s15;
      if (!bVar6) {
        fVar29 = unaff_s11;
      }
      fVar30 = (fVar29 - fVar27) * 0.5;
LAB_05e6c8bc:
      uVar19 = *(undefined8 *)((long)unaff_x20 + 0xa0);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar14 = FUN_05c8e378(uVar19,0,0);
      if ((uVar14 & 1) != 0) {
        uVar19 = *(undefined8 *)((long)unaff_x20 + 0xa8);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = FUN_05c8e378(uVar19,0,0);
        if ((uVar14 & 1) != 0) {
          fVar27 = unaff_s14;
          if (!bVar6) {
            fVar27 = unaff_s8;
          }
          fVar27 = fVar27 * in_stack_00000030._4_4_;
          dVar25 = modf((double)fVar27,(double *)&stack0x00000430);
          if (0.0 <= fVar27) {
            if (dVar25 == 0.5) {
              fVar29 = 1.0;
              goto LAB_05e6caf0;
            }
            fVar31 = (float)(int)(fVar27 + 0.5);
          }
          else if (dVar25 == -0.5) {
            fVar29 = -1.0;
LAB_05e6caf0:
            fVar31 = (float)in_stack_00000430;
            if (((long)in_stack_00000430 & 1U) != 0) {
              fVar31 = (float)in_stack_00000430 + fVar29;
            }
          }
          else {
            fVar31 = (float)(int)(fVar27 + -0.5);
          }
          if (ABS(fVar31 - fVar27) < fStack000000000000002c) {
            fVar30 = (float)FUN_05d9b054(fVar30,in_stack_00000030._4_4_,DAT_01031fc8,0);
          }
        }
      }
LAB_05e6c96c:
      if ((uVar2 & 0xfffffffe) == 2) {
        fVar27 = unaff_s14;
        if (!bVar6) {
          fVar27 = unaff_s8;
        }
        if (fStack0000000000000038 < fVar27) {
          if (fVar30 < -fVar27) {
            fVar29 = -2.1474836e+09;
            if (-fVar30 / fVar27 != INFINITY) {
              fVar29 = (float)(int)(-fVar30 / fVar27);
            }
            fVar30 = fVar30 + fVar27 * fVar29;
          }
          if (0.0 < fVar30) {
            fVar29 = -2.1474836e+09;
            if (fVar30 / fVar27 != INFINITY) {
              fVar29 = (float)((int)(fVar30 / fVar27) + 1);
            }
            fVar30 = fVar30 - fVar27 * fVar29;
          }
        }
      }
    }
    else {
      fVar30 = 0.0;
      if (uVar2 != 1) {
        if (iVar3 == 0) {
LAB_05e6c88c:
          bVar11 = false;
        }
        else {
          if (iVar3 != 1) {
            fVar29 = 0.0;
            goto LAB_05e6c88c;
          }
          fVar31 = unaff_s14;
          fVar30 = unaff_s15;
          if (!bVar6) {
            fVar31 = unaff_s8;
            fVar30 = unaff_s11;
          }
          bVar11 = true;
          fVar29 = (fVar29 * (fVar30 - fVar31)) / 100.0;
        }
        if ((iVar18 == 4) || (fVar30 = fVar29, iVar18 == 2)) {
          fVar30 = unaff_s15;
          if (!bVar6) {
            fVar30 = unaff_s11;
          }
          fVar30 = (fVar30 - fVar27) - fVar29;
        }
        if (bVar11) goto LAB_05e6c8bc;
        goto LAB_05e6c96c;
      }
    }
    lVar15 = *unaff_x21;
    if (lVar15 == 0) goto LAB_05e6d1e4;
    iVar18 = 0;
    while( true ) {
      puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_05e6d1fc;
      lVar16 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_05e6d1e4;
      if (*(int *)(lVar16 + 0x18) <= iVar18) break;
      FUN_038e01b0(&stack0x00000430,lVar16,iVar18,*puVar22);
      fVar27 = (float)((ulong)in_stack_00000430 >> 0x20);
      lVar15 = *unaff_x21;
      fVar29 = SUB84(in_stack_00000430,0);
      if (!bVar6) {
        fVar29 = fVar27;
      }
      unaff_x25[0x15] = in_stack_00000440;
      unaff_x25[0x14] = in_stack_00000438;
      fVar31 = fVar30 + fVar29;
      if (!bVar6) {
        fVar27 = fVar30 + fVar29;
        fVar31 = SUB84(in_stack_00000430,0);
      }
      if (lVar15 == 0) goto LAB_05e6d1e4;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_05e6d1fc;
      lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_05e6d1e4;
      in_stack_00000440 = unaff_x25[0x15];
      in_stack_00000438 = unaff_x25[0x14];
      in_stack_00000430 = (double)CONCAT44(fVar27,fVar31);
      FUN_038e0210(lVar15,iVar18,&stack0x00000430,*puVar21);
      lVar15 = *unaff_x21;
      iVar18 = iVar18 + 1;
      if (lVar15 == 0) goto LAB_05e6d1e4;
    }
    uVar23 = 1;
    bVar11 = false;
  } while (bVar6);
  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
LAB_05e6d1fc:
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    goto LAB_05e6d348;
  }
  if ((*(long *)(lVar15 + 0x28) == 0) || (*(long *)(lVar15 + 0x20) == 0)) {
LAB_05e6d1e4:
    lVar15 = *(long *)(in_stack_00000020 + 0x28);
  }
  else {
    if (1 < *(int *)(*(long *)(lVar15 + 0x20) + 0x18) * *(int *)(*(long *)(lVar15 + 0x28) + 0x18)) {
      uVar19 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar23 = FUN_05c8e378(uVar19,0,0);
      if ((uVar23 & 1) != 0) {
        plVar20 = (long *)(unaff_x19 + 0x20);
        lVar15 = *plVar20;
        if (lVar15 == 0) {
          lVar15 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
          FUN_03abe564(lVar15,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
          *plVar20 = lVar15;
          thunk_FUN_02bb0e9c(plVar20,lVar15);
          lVar15 = *plVar20;
        }
        *(long *)((long)unaff_x20 + 0x50) = lVar15;
        thunk_FUN_02bb0e9c();
        if (*plVar20 == 0) goto LAB_05e6d1e4;
        uVar13 = FUN_03abe980(*plVar20,*(undefined8 *)puVar9);
        *(undefined4 *)((long)unaff_x20 + 0x58) = uVar13;
      }
    }
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
    lVar15 = *unaff_x21;
    if (lVar15 == 0) goto LAB_05e6d1e4;
    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
    if (*(long *)(lVar15 + 0x28) == 0) goto LAB_05e6d1e4;
    FUN_038e10a8(&stack0x00000430,*(long *)(lVar15 + 0x28),
                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
    puVar7 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
    iVar18 = 0;
    unaff_x25[0xd] = unaff_x25[1];
    unaff_x25[0xc] = *unaff_x25;
    unaff_x25[0xf] = unaff_x25[3];
    unaff_x25[0xe] = unaff_x25[2];
    unaff_x25[0x11] = unaff_x25[5];
    unaff_x25[0x10] = unaff_x25[4];
    _fStack0000000000000050 = CONCAT44(uStack0000000000000054,unaff_s15 + in_stack_00000070._4_4_);
    while (uVar23 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar7), (uVar23 & 1) != 0) {
      fVar27 = in_stack_000004a4;
      fVar29 = in_stack_000004ac;
      if (in_stack_000004a4 < in_stack_00000068) {
        fVar27 = in_stack_00000068;
        fVar29 = in_stack_000004ac - (in_stack_00000068 - in_stack_000004a4);
      }
      if (unaff_s11 + in_stack_00000068 < fVar29 + fVar27) {
        fVar29 = fVar29 - ((fVar29 + fVar27) - (unaff_s11 + in_stack_00000068));
      }
      uVar19 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c8e378(uVar19,0,0);
      lVar15 = *unaff_x21;
      if (lVar15 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      if (*(int *)(lVar15 + 0x18) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_05e6d348;
      }
      if (*(long *)(lVar15 + 0x20) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      FUN_038e10a8(&stack0x00000430,*(long *)(lVar15 + 0x20),*(undefined8 *)puVar8);
      unaff_x25[7] = unaff_x25[1];
      unaff_x25[6] = *unaff_x25;
      unaff_x25[9] = unaff_x25[3];
      unaff_x25[8] = unaff_x25[2];
      unaff_x25[0xb] = unaff_x25[5];
      unaff_x25[10] = unaff_x25[4];
      while (uVar23 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar7), (uVar23 & 1) != 0) {
        fVar30 = in_stack_00000470;
        fVar31 = in_stack_00000478;
        if (in_stack_00000470 < in_stack_00000070._4_4_) {
          fVar30 = in_stack_00000070._4_4_;
          fVar31 = in_stack_00000478 - (in_stack_00000070._4_4_ - in_stack_00000470);
        }
        if (fStack0000000000000050 < fVar31 + fVar30) {
          fVar31 = fVar31 - ((fVar31 + fVar30) - fStack0000000000000050);
        }
        memcpy(&stack0x000002e8,unaff_x20,0x138);
        FUN_05e6359c(fVar30,fVar27,fVar31,fVar29,in_stack_00000070._4_4_,in_stack_00000068,
                     fStack000000000000006c,unaff_s11);
        iVar18 = iVar18 + 1;
        if ((0x3c < iVar18) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
          if (*(long *)(unaff_x19 + 0x20) == 0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_05e6d348;
          }
          uVar13 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar9);
          *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar13;
          memcpy(&stack0x000001b0,unaff_x20,0x138);
          FUN_05e618b0();
          iVar18 = 0;
          *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
        }
      }
      FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    }
    FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    if ((*(long *)((long)unaff_x20 + 0x50) == 0) || (iVar18 < 1)) {
LAB_05e6d0c4:
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
        return;
      }
      goto LAB_05e6d348;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar13 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar9);
      *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar13;
      memcpy(&stack0x00000078,unaff_x20,0x138);
      FUN_05e618b0();
      goto LAB_05e6d0c4;
    }
    lVar15 = *(long *)(in_stack_00000020 + 0x28);
  }
  if (lVar15 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


