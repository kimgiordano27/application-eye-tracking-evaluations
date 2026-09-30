/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$PixelAdjustPoint_Injected
ENTRY_POINT: 05e6c200
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_16
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_RectTransformUtility__PixelAdjustPoint_Injected
               (float param_1,float param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int in_w10;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 *unaff_x25;
  ulong uVar23;
  int iVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  float unaff_s8;
  float fVar28;
  float unaff_s9;
  float fVar29;
  float unaff_s11;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_s15;
  long in_stack_00000020;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float in_stack_00000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
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
  
  if (param_1 != param_2) {
    in_w10 = (int)param_1;
  }
  if (*(int *)(param_3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar13 = FUN_04d7c48c(in_w10,1,0);
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_85__;
  puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_84__;
  uVar7 = _UNK_01032d88;
  uVar21 = _DAT_01032d80;
  fStack0000000000000040 = 0.0;
  fVar33 = unaff_s15 / (float)iVar13;
  fVar28 = unaff_s9 * unaff_s8 * fVar33;
  fStack000000000000003c = 0.0;
  uVar23 = 0;
  fStack000000000000002c = DAT_010328d0;
  fStack000000000000006c = unaff_s15;
  bVar12 = true;
  do {
    bVar6 = bVar12;
    fVar29 = 0.0;
    lVar17 = 0x78;
    if (!bVar6) {
      lVar17 = 0x7c;
    }
    uVar2 = *(uint *)((long)unaff_x20 + lVar17);
    lVar17 = 0x60;
    if (!bVar6) {
      lVar17 = 0x6c;
    }
    lVar18 = 0x68;
    if (!bVar6) {
      lVar18 = 0x74;
    }
    iVar13 = *(int *)((long)unaff_x20 + lVar17);
    lVar17 = 100;
    if (!bVar6) {
      lVar17 = 0x70;
    }
    iVar3 = *(int *)((long)unaff_x20 + lVar18);
    fVar31 = *(float *)((long)unaff_x20 + lVar17);
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) {
        lVar17 = *unaff_x21;
        fVar29 = fVar33;
        if (!bVar6) {
          fVar29 = fVar28;
        }
        if (lVar17 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05e6d1fc;
        lVar17 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05e6d1e4;
        lVar18 = *(long *)(lVar17 + 0x10);
        lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_05e6d1e4;
        uVar5 = *(uint *)(lVar17 + 0x18);
        if (uVar5 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + (long)(int)uVar5 * 0x20;
          *(uint *)(lVar17 + 0x18) = uVar5 + 1;
          *(float *)(lVar18 + 0x20) = fStack000000000000003c;
          *(undefined4 *)(lVar18 + 0x24) = 0;
          *(float *)(lVar18 + 0x28) = fVar33;
          *(float *)(lVar18 + 0x2c) = fVar28;
          *(undefined8 *)(lVar18 + 0x38) = uVar7;
          *(undefined8 *)(lVar18 + 0x30) = uVar21;
        }
        else {
          uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
          in_stack_00000430 = (double)(ulong)(uint)fStack000000000000003c;
          in_stack_00000438 = CONCAT44(fVar28,fVar33);
          unaff_x25[3] = uVar7;
          unaff_x25[2] = uVar21;
          FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
        }
      }
      else if (uVar2 == 1) {
        fVar32 = fVar33;
        fVar25 = unaff_s15;
        if (!bVar6) {
          fVar32 = fVar28;
          fVar25 = unaff_s11;
        }
        uVar5 = 0x80000000;
        if (fVar25 / fVar32 != INFINITY) {
          uVar5 = (int)(fVar25 / fVar32);
        }
        if (-1 < (int)uVar5) {
          lVar17 = *unaff_x21;
          if (lVar17 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05e6d1fc;
          lVar17 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_05e6d1e4;
          lVar18 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_05e6d1e4;
          uVar14 = *(uint *)(lVar17 + 0x18);
          if (uVar14 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + (long)(int)uVar14 * 0x20;
            *(uint *)(lVar17 + 0x18) = uVar14 + 1;
            *(float *)(lVar18 + 0x20) = fStack000000000000003c;
            *(undefined4 *)(lVar18 + 0x24) = 0;
            *(float *)(lVar18 + 0x28) = fVar33;
            *(float *)(lVar18 + 0x2c) = fVar28;
            *(undefined8 *)(lVar18 + 0x38) = uVar7;
            *(undefined8 *)(lVar18 + 0x30) = uVar21;
          }
          else {
            uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)(ulong)(uint)fStack000000000000003c;
            in_stack_00000438 = CONCAT44(fVar28,fVar33);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar21;
            FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
          }
          fVar29 = fVar32;
          if (1 < uVar5) {
            lVar17 = *unaff_x21;
            fVar30 = fStack0000000000000040;
            fVar11 = unaff_s15 - fVar33;
            if (!bVar6) {
              fVar30 = unaff_s11 - fVar28;
              fVar11 = fStack000000000000003c;
            }
            if (lVar17 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05e6d1fc;
            lVar17 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_05e6d1e4;
            lVar18 = *(long *)(lVar17 + 0x10);
            lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_05e6d1e4;
            uVar14 = *(uint *)(lVar17 + 0x18);
            if (uVar14 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)uVar14 * 0x20;
              *(uint *)(lVar17 + 0x18) = uVar14 + 1;
              *(float *)(lVar18 + 0x20) = fVar11;
              *(float *)(lVar18 + 0x24) = fVar30;
              *(float *)(lVar18 + 0x28) = fVar33;
              *(float *)(lVar18 + 0x2c) = fVar28;
              *(undefined8 *)(lVar18 + 0x38) = uVar7;
              *(undefined8 *)(lVar18 + 0x30) = uVar21;
            }
            else {
              uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar30,fVar11);
              in_stack_00000438 = CONCAT44(fVar28,fVar33);
              unaff_x25[3] = uVar7;
              unaff_x25[2] = uVar21;
              FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
            }
            unaff_s15 = fStack000000000000006c;
            fVar29 = fVar25;
            if (uVar5 != 2) {
              iVar24 = 0;
              pfVar1 = (float *)&stack0x000004c4;
              if (!bVar6) {
                pfVar1 = (float *)&stack0x000004c0;
              }
              fVar27 = fVar33;
              if (!bVar6) {
                fVar27 = fVar28;
              }
              do {
                iVar24 = iVar24 + 1;
                lVar17 = *unaff_x21;
                *pfVar1 = (fVar27 + (fVar25 - fVar32 * (float)(int)uVar5) / (float)(int)(uVar5 - 1))
                          * (float)iVar24;
                if (lVar17 == 0) goto LAB_05e6d1e4;
                if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05e6d1fc;
                lVar17 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
                if (lVar17 == 0) goto LAB_05e6d1e4;
                lVar18 = *(long *)(lVar17 + 0x10);
                lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_05e6d1e4;
                uVar14 = *(uint *)(lVar17 + 0x18);
                if (uVar14 < *(uint *)(lVar18 + 0x18)) {
                  lVar18 = lVar18 + (long)(int)uVar14 * 0x20;
                  *(uint *)(lVar17 + 0x18) = uVar14 + 1;
                  *(float *)(lVar18 + 0x20) = fVar11;
                  *(float *)(lVar18 + 0x24) = fVar30;
                  *(float *)(lVar18 + 0x28) = fVar33;
                  *(float *)(lVar18 + 0x2c) = fVar28;
                  *(undefined8 *)(lVar18 + 0x38) = uVar7;
                  *(undefined8 *)(lVar18 + 0x30) = uVar21;
                }
                else {
                  uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
                  in_stack_00000430 = (double)CONCAT44(fVar30,fVar11);
                  in_stack_00000438 = CONCAT44(fVar28,fVar33);
                  unaff_x25[3] = uVar7;
                  unaff_x25[2] = uVar21;
                  FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
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
      fVar32 = unaff_s15;
      fVar25 = fVar33;
      if (!bVar6) {
        fVar32 = unaff_s11;
        fVar25 = fVar28;
      }
      fVar25 = (fVar32 + fVar25 * 0.5) / fVar25;
      iVar24 = -0x80000000;
      if (fVar25 != INFINITY) {
        iVar24 = (int)fVar25;
      }
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar14 = FUN_04d7c48c(iVar24,1,0);
      uVar5 = uVar14 | 1;
      if ((uVar14 & 1) != 0) {
        uVar5 = uVar14 + 2;
      }
      if (iVar13 != 0) {
        uVar5 = uVar14 + 1;
      }
      fVar32 = fVar32 / (float)(int)uVar14;
      fVar25 = fVar32;
      if (!bVar6) {
        fVar28 = fVar32;
        fVar25 = fVar33;
      }
      fVar33 = fVar25;
      if (0 < (int)uVar5) {
        fVar29 = 0.0;
        uVar14 = 0;
        fVar25 = fStack000000000000003c;
        fVar30 = fStack0000000000000040;
        do {
          lVar17 = *unaff_x21;
          fVar11 = fVar32 * (float)(int)uVar14;
          if (!bVar6) {
            fVar30 = fVar32 * (float)(int)uVar14;
            fVar11 = fVar25;
          }
          fVar25 = fVar11;
          if (lVar17 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05e6d1fc;
          lVar17 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_05e6d1e4;
          lVar18 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_05e6d1e4;
          uVar4 = *(uint *)(lVar17 + 0x18);
          if (uVar4 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar17 + 0x18) = uVar4 + 1;
            *(float *)(lVar18 + 0x20) = fVar25;
            *(float *)(lVar18 + 0x24) = fVar30;
            *(float *)(lVar18 + 0x28) = fVar33;
            *(float *)(lVar18 + 0x2c) = fVar28;
            *(undefined8 *)(lVar18 + 0x38) = uVar7;
            *(undefined8 *)(lVar18 + 0x30) = uVar21;
          }
          else {
            uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fVar30,fVar25);
            in_stack_00000438 = CONCAT44(fVar28,fVar33);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar21;
            FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
          }
          fVar29 = fVar32 + fVar29;
          uVar14 = uVar14 + 1;
          unaff_s15 = fStack000000000000006c;
        } while (uVar5 != uVar14);
      }
    }
    else if (uVar2 == 3) {
      fVar32 = fVar33;
      fVar25 = unaff_s15;
      if (!bVar6) {
        fVar32 = fVar28;
        fVar25 = unaff_s11;
      }
      fVar25 = (1.0 / in_stack_00000030._4_4_ + fVar25) / fVar32;
      uVar5 = 0x80000000;
      if (fVar25 != INFINITY) {
        uVar5 = (int)fVar25;
      }
      uVar14 = uVar5 | 1;
      if ((uVar5 & 1) != 0) {
        uVar14 = uVar5 + 2;
      }
      uVar5 = uVar5 + 2;
      if (iVar13 == 0) {
        uVar5 = uVar14;
      }
      if (0 < (int)uVar5) {
        uVar14 = 0;
        fVar30 = fStack000000000000003c;
        fVar25 = fStack0000000000000040;
        do {
          lVar17 = *unaff_x21;
          fVar11 = fVar33 * (float)(int)uVar14;
          if (!bVar6) {
            fVar11 = fVar30;
            fVar25 = fVar28 * (float)(int)uVar14;
          }
          fVar30 = fVar11;
          if (lVar17 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05e6d1fc;
          lVar17 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_05e6d1e4;
          lVar18 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_05e6d1e4;
          uVar4 = *(uint *)(lVar17 + 0x18);
          if (uVar4 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar17 + 0x18) = uVar4 + 1;
            *(float *)(lVar18 + 0x20) = fVar30;
            *(float *)(lVar18 + 0x24) = fVar25;
            *(float *)(lVar18 + 0x28) = fVar33;
            *(float *)(lVar18 + 0x2c) = fVar28;
            *(undefined8 *)(lVar18 + 0x38) = uVar7;
            *(undefined8 *)(lVar18 + 0x30) = uVar21;
          }
          else {
            uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fVar25,fVar30);
            in_stack_00000438 = CONCAT44(fVar28,fVar33);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar21;
            FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
          }
          fVar29 = fVar29 + fVar32;
          uVar14 = uVar14 + 1;
          unaff_s15 = fStack000000000000006c;
        } while (uVar5 != uVar14);
      }
    }
    if (iVar13 == 0) {
      fVar31 = unaff_s15;
      if (!bVar6) {
        fVar31 = unaff_s11;
      }
      fVar32 = (fVar31 - fVar29) * 0.5;
LAB_05e6c8bc:
      uVar20 = *(undefined8 *)((long)unaff_x20 + 0xa0);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05c8e378(uVar20,0,0);
      if ((uVar16 & 1) != 0) {
        uVar20 = *(undefined8 *)((long)unaff_x20 + 0xa8);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_05c8e378(uVar20,0,0);
        if ((uVar16 & 1) != 0) {
          fVar29 = fVar33;
          if (!bVar6) {
            fVar29 = fVar28;
          }
          fVar29 = fVar29 * in_stack_00000030._4_4_;
          dVar26 = modf((double)fVar29,(double *)&stack0x00000430);
          if (0.0 <= fVar29) {
            if (dVar26 == 0.5) {
              fVar31 = 1.0;
              goto LAB_05e6caf0;
            }
            fVar25 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar26 == -0.5) {
            fVar31 = -1.0;
LAB_05e6caf0:
            fVar25 = (float)in_stack_00000430;
            if (((long)in_stack_00000430 & 1U) != 0) {
              fVar25 = (float)in_stack_00000430 + fVar31;
            }
          }
          else {
            fVar25 = (float)(int)(fVar29 + -0.5);
          }
          if (ABS(fVar25 - fVar29) < fStack000000000000002c) {
            fVar32 = (float)FUN_05d9b054(fVar32,in_stack_00000030._4_4_,DAT_01031fc8,0);
          }
        }
      }
LAB_05e6c96c:
      if ((uVar2 & 0xfffffffe) == 2) {
        fVar29 = fVar33;
        if (!bVar6) {
          fVar29 = fVar28;
        }
        if (in_stack_00000038 < fVar29) {
          if (fVar32 < -fVar29) {
            fVar31 = -2.1474836e+09;
            if (-fVar32 / fVar29 != INFINITY) {
              fVar31 = (float)(int)(-fVar32 / fVar29);
            }
            fVar32 = fVar32 + fVar29 * fVar31;
          }
          if (0.0 < fVar32) {
            fVar31 = -2.1474836e+09;
            if (fVar32 / fVar29 != INFINITY) {
              fVar31 = (float)((int)(fVar32 / fVar29) + 1);
            }
            fVar32 = fVar32 - fVar29 * fVar31;
          }
        }
      }
    }
    else {
      fVar32 = 0.0;
      if (uVar2 != 1) {
        if (iVar3 == 0) {
LAB_05e6c88c:
          bVar12 = false;
        }
        else {
          if (iVar3 != 1) {
            fVar31 = 0.0;
            goto LAB_05e6c88c;
          }
          fVar25 = fVar33;
          fVar32 = unaff_s15;
          if (!bVar6) {
            fVar25 = fVar28;
            fVar32 = unaff_s11;
          }
          bVar12 = true;
          fVar31 = (fVar31 * (fVar32 - fVar25)) / 100.0;
        }
        if ((iVar13 == 4) || (fVar32 = fVar31, iVar13 == 2)) {
          fVar32 = unaff_s15;
          if (!bVar6) {
            fVar32 = unaff_s11;
          }
          fVar32 = (fVar32 - fVar29) - fVar31;
        }
        if (bVar12) goto LAB_05e6c8bc;
        goto LAB_05e6c96c;
      }
    }
    lVar17 = *unaff_x21;
    if (lVar17 == 0) goto LAB_05e6d1e4;
    iVar13 = 0;
    while( true ) {
      puVar10 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
      if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05e6d1fc;
      lVar18 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_05e6d1e4;
      if (*(int *)(lVar18 + 0x18) <= iVar13) break;
      FUN_038e01b0(&stack0x00000430,lVar18,iVar13,*(undefined8 *)puVar9);
      fVar29 = (float)((ulong)in_stack_00000430 >> 0x20);
      lVar17 = *unaff_x21;
      fVar31 = SUB84(in_stack_00000430,0);
      if (!bVar6) {
        fVar31 = fVar29;
      }
      unaff_x25[0x15] = in_stack_00000440;
      unaff_x25[0x14] = in_stack_00000438;
      fVar25 = fVar32 + fVar31;
      if (!bVar6) {
        fVar29 = fVar32 + fVar31;
        fVar25 = SUB84(in_stack_00000430,0);
      }
      if (lVar17 == 0) goto LAB_05e6d1e4;
      if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_05e6d1fc;
      lVar17 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
      if (lVar17 == 0) goto LAB_05e6d1e4;
      in_stack_00000440 = unaff_x25[0x15];
      in_stack_00000438 = unaff_x25[0x14];
      in_stack_00000430 = (double)CONCAT44(fVar29,fVar25);
      FUN_038e0210(lVar17,iVar13,&stack0x00000430,*(undefined8 *)puVar8);
      lVar17 = *unaff_x21;
      iVar13 = iVar13 + 1;
      if (lVar17 == 0) goto LAB_05e6d1e4;
    }
    uVar23 = 1;
    bVar12 = false;
  } while (bVar6);
  if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
LAB_05e6d1fc:
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    goto LAB_05e6d348;
  }
  if ((*(long *)(lVar17 + 0x28) == 0) || (*(long *)(lVar17 + 0x20) == 0)) {
LAB_05e6d1e4:
    lVar17 = *(long *)(in_stack_00000020 + 0x28);
  }
  else {
    if (1 < *(int *)(*(long *)(lVar17 + 0x20) + 0x18) * *(int *)(*(long *)(lVar17 + 0x28) + 0x18)) {
      uVar21 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar23 = FUN_05c8e378(uVar21,0,0);
      if ((uVar23 & 1) != 0) {
        plVar22 = (long *)(unaff_x19 + 0x20);
        lVar17 = *plVar22;
        if (lVar17 == 0) {
          lVar17 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
          FUN_03abe564(lVar17,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
          *plVar22 = lVar17;
          thunk_FUN_02bb0e9c(plVar22,lVar17);
          lVar17 = *plVar22;
        }
        *(long *)((long)unaff_x20 + 0x50) = lVar17;
        thunk_FUN_02bb0e9c();
        if (*plVar22 == 0) goto LAB_05e6d1e4;
        uVar15 = FUN_03abe980(*plVar22,*(undefined8 *)puVar10);
        *(undefined4 *)((long)unaff_x20 + 0x58) = uVar15;
      }
    }
    puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
    lVar17 = *unaff_x21;
    if (lVar17 == 0) goto LAB_05e6d1e4;
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
    if (*(long *)(lVar17 + 0x28) == 0) goto LAB_05e6d1e4;
    FUN_038e10a8(&stack0x00000430,*(long *)(lVar17 + 0x28),
                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
    iVar13 = 0;
    unaff_x25[0xd] = unaff_x25[1];
    unaff_x25[0xc] = *unaff_x25;
    unaff_x25[0xf] = unaff_x25[3];
    unaff_x25[0xe] = unaff_x25[2];
    unaff_x25[0x11] = unaff_x25[5];
    unaff_x25[0x10] = unaff_x25[4];
    while (uVar23 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar8), (uVar23 & 1) != 0) {
      fVar28 = in_stack_000004a4;
      fVar33 = in_stack_000004ac;
      if (in_stack_000004a4 < in_stack_00000068) {
        fVar28 = in_stack_00000068;
        fVar33 = in_stack_000004ac - (in_stack_00000068 - in_stack_000004a4);
      }
      if (unaff_s11 + in_stack_00000068 < fVar33 + fVar28) {
        fVar33 = fVar33 - ((fVar33 + fVar28) - (unaff_s11 + in_stack_00000068));
      }
      uVar21 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c8e378(uVar21,0,0);
      lVar17 = *unaff_x21;
      if (lVar17 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      if (*(int *)(lVar17 + 0x18) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_05e6d348;
      }
      if (*(long *)(lVar17 + 0x20) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      FUN_038e10a8(&stack0x00000430,*(long *)(lVar17 + 0x20),*(undefined8 *)puVar9);
      unaff_x25[7] = unaff_x25[1];
      unaff_x25[6] = *unaff_x25;
      unaff_x25[9] = unaff_x25[3];
      unaff_x25[8] = unaff_x25[2];
      unaff_x25[0xb] = unaff_x25[5];
      unaff_x25[10] = unaff_x25[4];
      while (uVar23 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar8), (uVar23 & 1) != 0) {
        fVar29 = in_stack_00000470;
        fVar31 = in_stack_00000478;
        if (in_stack_00000470 < in_stack_00000070._4_4_) {
          fVar29 = in_stack_00000070._4_4_;
          fVar31 = in_stack_00000478 - (in_stack_00000070._4_4_ - in_stack_00000470);
        }
        if (unaff_s15 + in_stack_00000070._4_4_ < fVar31 + fVar29) {
          fVar31 = fVar31 - ((fVar31 + fVar29) - (unaff_s15 + in_stack_00000070._4_4_));
        }
        memcpy(&stack0x000002e8,unaff_x20,0x138);
        FUN_05e6359c(fVar29,fVar28,fVar31,fVar33,in_stack_00000070._4_4_,in_stack_00000068,
                     fStack000000000000006c,unaff_s11);
        iVar13 = iVar13 + 1;
        if ((0x3c < iVar13) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
          if (*(long *)(unaff_x19 + 0x20) == 0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_05e6d348;
          }
          uVar15 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar10);
          *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar15;
          memcpy(&stack0x000001b0,unaff_x20,0x138);
          FUN_05e618b0();
          iVar13 = 0;
          *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
        }
      }
      FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    }
    FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    if ((*(long *)((long)unaff_x20 + 0x50) == 0) || (iVar13 < 1)) {
LAB_05e6d0c4:
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
        return;
      }
      goto LAB_05e6d348;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar15 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar10);
      *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar15;
      memcpy(&stack0x00000078,unaff_x20,0x138);
      FUN_05e618b0();
      goto LAB_05e6d0c4;
    }
    lVar17 = *(long *)(in_stack_00000020 + 0x28);
  }
  if (lVar17 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


