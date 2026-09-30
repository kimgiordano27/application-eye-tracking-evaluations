/*
FUNCTION_NAME: UnityEngine.CanvasRenderer$$SplitIndicesStreamsInternal
ENTRY_POINT: 05e6bee4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_16
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_CanvasRenderer__SplitIndicesStreamsInternal(void)

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
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  undefined8 uVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 *unaff_x25;
  long unaff_x27;
  int iVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s10;
  float unaff_s11;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float unaff_s14;
  float fVar34;
  float unaff_s15;
  float fVar35;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  float in_stack_00000040;
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
  
  fVar33 = DAT_010321cc;
  if (unaff_s11 / unaff_s10 <= unaff_s15 / unaff_s14) {
    fVar34 = (unaff_s11 * unaff_s14) / unaff_s10;
    fVar24 = unaff_s11;
  }
  else {
    fVar24 = (unaff_s15 * unaff_s10) / unaff_s14;
    fVar34 = unaff_s15;
  }
  if ((((fVar34 <= DAT_010321cc) || (fVar24 <= DAT_010321cc)) || (unaff_s15 <= DAT_010321cc)) ||
     (unaff_s11 <= DAT_010321cc)) goto LAB_05e6d0c4;
  FUN_05d9d08c((long)unaff_x20 + 0x80,0);
  uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
  if (((uVar15 & 1) == 0) || (*(int *)((long)unaff_x20 + 0x7c) != 2)) {
    FUN_05d9d0a0((long)unaff_x20 + 0x80,0);
    uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
    if (((uVar15 & 1) != 0) && (*(int *)((long)unaff_x20 + 0x78) == 2)) {
      fVar28 = 1.0 / fVar34;
      fVar34 = unaff_s15 * fVar28 + 0.5;
      iVar12 = -0x80000000;
      if (fVar34 != INFINITY) {
        iVar12 = (int)fVar34;
      }
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar12 = FUN_04d7c48c(iVar12,1,0);
      fVar34 = unaff_s15 / (float)iVar12;
      fVar24 = fVar28 * fVar24 * fVar34;
      goto LAB_05e6c240;
    }
  }
  else {
    fVar28 = 1.0 / fVar24;
    fVar24 = unaff_s11 * fVar28 + 0.5;
    iVar12 = -0x80000000;
    if (fVar24 != INFINITY) {
      iVar12 = (int)fVar24;
    }
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar12 = FUN_04d7c48c(iVar12,1,0);
    fVar24 = unaff_s11 / (float)iVar12;
    fVar34 = fVar28 * fVar34 * fVar24;
LAB_05e6c240:
    in_stack_00000040 = 0.0;
    in_stack_00000038._4_4_ = 0.0;
  }
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_85__;
  puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_84__;
  uVar7 = _UNK_01032d88;
  uVar21 = _DAT_01032d80;
  fVar28 = DAT_010328d0;
  uVar15 = 0;
  fStack000000000000006c = unaff_s15;
  bVar11 = true;
  do {
    bVar6 = bVar11;
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
    iVar12 = *(int *)((long)unaff_x20 + lVar17);
    lVar17 = 100;
    if (!bVar6) {
      lVar17 = 0x70;
    }
    iVar3 = *(int *)((long)unaff_x20 + lVar18);
    fVar31 = *(float *)((long)unaff_x20 + lVar17);
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) {
        lVar17 = *unaff_x21;
        fVar29 = fVar34;
        if (!bVar6) {
          fVar29 = fVar24;
        }
        if (lVar17 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
        lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05e6d1e4;
        lVar18 = *(long *)(lVar17 + 0x10);
        lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_05e6d1e4;
        uVar5 = *(uint *)(lVar17 + 0x18);
        if (uVar5 < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + (long)(int)uVar5 * 0x20;
          *(uint *)(lVar17 + 0x18) = uVar5 + 1;
          *(float *)(lVar18 + 0x20) = in_stack_00000038._4_4_;
          *(float *)(lVar18 + 0x24) = in_stack_00000040;
          *(float *)(lVar18 + 0x28) = fVar34;
          *(float *)(lVar18 + 0x2c) = fVar24;
          *(undefined8 *)(lVar18 + 0x38) = uVar7;
          *(undefined8 *)(lVar18 + 0x30) = uVar21;
        }
        else {
          uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
          in_stack_00000430 = (double)CONCAT44(in_stack_00000040,in_stack_00000038._4_4_);
          in_stack_00000438 = CONCAT44(fVar24,fVar34);
          unaff_x25[3] = uVar7;
          unaff_x25[2] = uVar21;
          FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
        }
      }
      else if (uVar2 == 1) {
        fVar25 = fVar34;
        fVar32 = unaff_s15;
        if (!bVar6) {
          fVar25 = fVar24;
          fVar32 = unaff_s11;
        }
        uVar5 = 0x80000000;
        if (fVar32 / fVar25 != INFINITY) {
          uVar5 = (int)(fVar32 / fVar25);
        }
        if (-1 < (int)uVar5) {
          lVar17 = *unaff_x21;
          if (lVar17 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
          lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_05e6d1e4;
          lVar18 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_05e6d1e4;
          uVar13 = *(uint *)(lVar17 + 0x18);
          if (uVar13 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + (long)(int)uVar13 * 0x20;
            *(uint *)(lVar17 + 0x18) = uVar13 + 1;
            *(float *)(lVar18 + 0x20) = in_stack_00000038._4_4_;
            *(float *)(lVar18 + 0x24) = in_stack_00000040;
            *(float *)(lVar18 + 0x28) = fVar34;
            *(float *)(lVar18 + 0x2c) = fVar24;
            *(undefined8 *)(lVar18 + 0x38) = uVar7;
            *(undefined8 *)(lVar18 + 0x30) = uVar21;
          }
          else {
            uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(in_stack_00000040,in_stack_00000038._4_4_);
            in_stack_00000438 = CONCAT44(fVar24,fVar34);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar21;
            FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
          }
          fVar29 = fVar25;
          if (1 < uVar5) {
            lVar17 = *unaff_x21;
            fVar30 = in_stack_00000040;
            fVar35 = unaff_s15 - fVar34;
            if (!bVar6) {
              fVar30 = unaff_s11 - fVar24;
              fVar35 = in_stack_00000038._4_4_;
            }
            if (lVar17 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
            lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_05e6d1e4;
            lVar18 = *(long *)(lVar17 + 0x10);
            lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_05e6d1e4;
            uVar13 = *(uint *)(lVar17 + 0x18);
            if (uVar13 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)uVar13 * 0x20;
              *(uint *)(lVar17 + 0x18) = uVar13 + 1;
              *(float *)(lVar18 + 0x20) = fVar35;
              *(float *)(lVar18 + 0x24) = fVar30;
              *(float *)(lVar18 + 0x28) = fVar34;
              *(float *)(lVar18 + 0x2c) = fVar24;
              *(undefined8 *)(lVar18 + 0x38) = uVar7;
              *(undefined8 *)(lVar18 + 0x30) = uVar21;
            }
            else {
              uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar30,fVar35);
              in_stack_00000438 = CONCAT44(fVar24,fVar34);
              unaff_x25[3] = uVar7;
              unaff_x25[2] = uVar21;
              FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
            }
            unaff_s15 = fStack000000000000006c;
            fVar29 = fVar32;
            if (uVar5 != 2) {
              iVar23 = 0;
              pfVar1 = (float *)&stack0x000004c4;
              if (!bVar6) {
                pfVar1 = (float *)&stack0x000004c0;
              }
              fVar27 = fVar34;
              if (!bVar6) {
                fVar27 = fVar24;
              }
              do {
                iVar23 = iVar23 + 1;
                lVar17 = *unaff_x21;
                *pfVar1 = (fVar27 + (fVar32 - fVar25 * (float)(int)uVar5) / (float)(int)(uVar5 - 1))
                          * (float)iVar23;
                if (lVar17 == 0) goto LAB_05e6d1e4;
                if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
                lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
                if (lVar17 == 0) goto LAB_05e6d1e4;
                lVar18 = *(long *)(lVar17 + 0x10);
                lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_05e6d1e4;
                uVar13 = *(uint *)(lVar17 + 0x18);
                if (uVar13 < *(uint *)(lVar18 + 0x18)) {
                  lVar18 = lVar18 + (long)(int)uVar13 * 0x20;
                  *(uint *)(lVar17 + 0x18) = uVar13 + 1;
                  *(float *)(lVar18 + 0x20) = fVar35;
                  *(float *)(lVar18 + 0x24) = fVar30;
                  *(float *)(lVar18 + 0x28) = fVar34;
                  *(float *)(lVar18 + 0x2c) = fVar24;
                  *(undefined8 *)(lVar18 + 0x38) = uVar7;
                  *(undefined8 *)(lVar18 + 0x30) = uVar21;
                }
                else {
                  uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
                  in_stack_00000430 = (double)CONCAT44(fVar30,fVar35);
                  in_stack_00000438 = CONCAT44(fVar24,fVar34);
                  unaff_x25[3] = uVar7;
                  unaff_x25[2] = uVar21;
                  FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
                  unaff_x25 = (undefined8 *)&stack0x00000430;
                }
                unaff_s15 = fStack000000000000006c;
              } while (iVar23 < (int)(uVar5 - 2));
            }
          }
        }
      }
    }
    else if (uVar2 == 2) {
      fVar32 = unaff_s15;
      fVar25 = fVar34;
      if (!bVar6) {
        fVar32 = unaff_s11;
        fVar25 = fVar24;
      }
      fVar25 = (fVar32 + fVar25 * 0.5) / fVar25;
      iVar23 = -0x80000000;
      if (fVar25 != INFINITY) {
        iVar23 = (int)fVar25;
      }
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar13 = FUN_04d7c48c(iVar23,1,0);
      uVar5 = uVar13 | 1;
      if ((uVar13 & 1) != 0) {
        uVar5 = uVar13 + 2;
      }
      if (iVar12 != 0) {
        uVar5 = uVar13 + 1;
      }
      fVar32 = fVar32 / (float)(int)uVar13;
      fVar25 = fVar32;
      if (!bVar6) {
        fVar24 = fVar32;
        fVar25 = fVar34;
      }
      fVar34 = fVar25;
      if (0 < (int)uVar5) {
        fVar29 = 0.0;
        uVar13 = 0;
        fVar30 = in_stack_00000038._4_4_;
        fVar35 = in_stack_00000040;
        do {
          lVar17 = *unaff_x21;
          fVar27 = fVar32 * (float)(int)uVar13;
          if (!bVar6) {
            fVar35 = fVar32 * (float)(int)uVar13;
            fVar27 = fVar30;
          }
          fVar30 = fVar27;
          if (lVar17 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
          lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
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
            *(float *)(lVar18 + 0x24) = fVar35;
            *(float *)(lVar18 + 0x28) = fVar25;
            *(float *)(lVar18 + 0x2c) = fVar24;
            *(undefined8 *)(lVar18 + 0x38) = uVar7;
            *(undefined8 *)(lVar18 + 0x30) = uVar21;
          }
          else {
            uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fVar35,fVar30);
            in_stack_00000438 = CONCAT44(fVar24,fVar25);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar21;
            FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
          }
          fVar29 = fVar32 + fVar29;
          uVar13 = uVar13 + 1;
          unaff_s15 = fStack000000000000006c;
        } while (uVar5 != uVar13);
      }
    }
    else if (uVar2 == 3) {
      fVar25 = fVar34;
      fVar32 = unaff_s15;
      if (!bVar6) {
        fVar25 = fVar24;
        fVar32 = unaff_s11;
      }
      fVar32 = (1.0 / in_stack_00000030._4_4_ + fVar32) / fVar25;
      uVar5 = 0x80000000;
      if (fVar32 != INFINITY) {
        uVar5 = (int)fVar32;
      }
      uVar13 = uVar5 | 1;
      if ((uVar5 & 1) != 0) {
        uVar13 = uVar5 + 2;
      }
      uVar5 = uVar5 + 2;
      if (iVar12 == 0) {
        uVar5 = uVar13;
      }
      if (0 < (int)uVar5) {
        uVar13 = 0;
        fVar30 = in_stack_00000038._4_4_;
        fVar32 = in_stack_00000040;
        do {
          lVar17 = *unaff_x21;
          fVar35 = fVar34 * (float)(int)uVar13;
          if (!bVar6) {
            fVar35 = fVar30;
            fVar32 = fVar24 * (float)(int)uVar13;
          }
          fVar30 = fVar35;
          if (lVar17 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
          lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
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
            *(float *)(lVar18 + 0x24) = fVar32;
            *(float *)(lVar18 + 0x28) = fVar34;
            *(float *)(lVar18 + 0x2c) = fVar24;
            *(undefined8 *)(lVar18 + 0x38) = uVar7;
            *(undefined8 *)(lVar18 + 0x30) = uVar21;
          }
          else {
            uVar20 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fVar32,fVar30);
            in_stack_00000438 = CONCAT44(fVar24,fVar34);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar21;
            FUN_038e04ec(lVar17,&stack0x00000430,uVar20);
          }
          fVar29 = fVar29 + fVar25;
          uVar13 = uVar13 + 1;
          unaff_s15 = fStack000000000000006c;
        } while (uVar5 != uVar13);
      }
    }
    if (iVar12 == 0) {
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
          fVar29 = fVar34;
          if (!bVar6) {
            fVar29 = fVar24;
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
          if (ABS(fVar25 - fVar29) < fVar28) {
            fVar32 = (float)FUN_05d9b054(fVar32,in_stack_00000030._4_4_,DAT_01031fc8,0);
          }
        }
      }
LAB_05e6c96c:
      if ((uVar2 & 0xfffffffe) == 2) {
        fVar29 = fVar34;
        if (!bVar6) {
          fVar29 = fVar24;
        }
        if (fVar33 < fVar29) {
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
          bVar11 = false;
        }
        else {
          if (iVar3 != 1) {
            fVar31 = 0.0;
            goto LAB_05e6c88c;
          }
          fVar25 = fVar34;
          fVar32 = unaff_s15;
          if (!bVar6) {
            fVar25 = fVar24;
            fVar32 = unaff_s11;
          }
          bVar11 = true;
          fVar31 = (fVar31 * (fVar32 - fVar25)) / 100.0;
        }
        if ((iVar12 == 4) || (fVar32 = fVar31, iVar12 == 2)) {
          fVar32 = unaff_s15;
          if (!bVar6) {
            fVar32 = unaff_s11;
          }
          fVar32 = (fVar32 - fVar29) - fVar31;
        }
        if (bVar11) goto LAB_05e6c8bc;
        goto LAB_05e6c96c;
      }
    }
    lVar17 = *unaff_x21;
    if (lVar17 == 0) goto LAB_05e6d1e4;
    iVar12 = 0;
    while( true ) {
      puVar10 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
      if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
      lVar18 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_05e6d1e4;
      if (*(int *)(lVar18 + 0x18) <= iVar12) break;
      FUN_038e01b0(&stack0x00000430,lVar18,iVar12,*(undefined8 *)puVar9);
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
      if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
      lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
      if (lVar17 == 0) goto LAB_05e6d1e4;
      in_stack_00000440 = unaff_x25[0x15];
      in_stack_00000438 = unaff_x25[0x14];
      in_stack_00000430 = (double)CONCAT44(fVar29,fVar25);
      FUN_038e0210(lVar17,iVar12,&stack0x00000430,*(undefined8 *)puVar8);
      lVar17 = *unaff_x21;
      iVar12 = iVar12 + 1;
      if (lVar17 == 0) goto LAB_05e6d1e4;
    }
    uVar15 = 1;
    bVar11 = false;
  } while (bVar6);
  if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) {
LAB_05e6d1fc:
    if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    goto LAB_05e6d348;
  }
  if ((*(long *)(lVar17 + 0x28) == 0) || (*(long *)(lVar17 + 0x20) == 0)) {
LAB_05e6d1e4:
    lVar17 = *(long *)(unaff_x27 + 0x28);
  }
  else {
    if (1 < *(int *)(*(long *)(lVar17 + 0x20) + 0x18) * *(int *)(*(long *)(lVar17 + 0x28) + 0x18)) {
      uVar21 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar15 = FUN_05c8e378(uVar21,0,0);
      if ((uVar15 & 1) != 0) {
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
        uVar14 = FUN_03abe980(*plVar22,*(undefined8 *)puVar10);
        *(undefined4 *)((long)unaff_x20 + 0x58) = uVar14;
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
    iVar12 = 0;
    unaff_x25[0xd] = unaff_x25[1];
    unaff_x25[0xc] = *unaff_x25;
    unaff_x25[0xf] = unaff_x25[3];
    unaff_x25[0xe] = unaff_x25[2];
    unaff_x25[0x11] = unaff_x25[5];
    unaff_x25[0x10] = unaff_x25[4];
    while (uVar15 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar8), (uVar15 & 1) != 0) {
      fVar33 = in_stack_000004a4;
      fVar24 = in_stack_000004ac;
      if (in_stack_000004a4 < in_stack_00000068) {
        fVar33 = in_stack_00000068;
        fVar24 = in_stack_000004ac - (in_stack_00000068 - in_stack_000004a4);
      }
      if (unaff_s11 + in_stack_00000068 < fVar24 + fVar33) {
        fVar24 = fVar24 - ((fVar24 + fVar33) - (unaff_s11 + in_stack_00000068));
      }
      uVar21 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c8e378(uVar21,0,0);
      lVar17 = *unaff_x21;
      if (lVar17 == 0) {
        if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      if (*(int *)(lVar17 + 0x18) == 0) {
        if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_05e6d348;
      }
      if (*(long *)(lVar17 + 0x20) == 0) {
        if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
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
      while (uVar15 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar8), (uVar15 & 1) != 0) {
        fVar34 = in_stack_00000470;
        fVar28 = in_stack_00000478;
        if (in_stack_00000470 < in_stack_00000070._4_4_) {
          fVar34 = in_stack_00000070._4_4_;
          fVar28 = in_stack_00000478 - (in_stack_00000070._4_4_ - in_stack_00000470);
        }
        if (unaff_s15 + in_stack_00000070._4_4_ < fVar28 + fVar34) {
          fVar28 = fVar28 - ((fVar28 + fVar34) - (unaff_s15 + in_stack_00000070._4_4_));
        }
        memcpy(&stack0x000002e8,unaff_x20,0x138);
        FUN_05e6359c(fVar34,fVar33,fVar28,fVar24,in_stack_00000070._4_4_,in_stack_00000068,
                     fStack000000000000006c,unaff_s11);
        iVar12 = iVar12 + 1;
        if ((0x3c < iVar12) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
          if (*(long *)(unaff_x19 + 0x20) == 0) {
            if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_05e6d348;
          }
          uVar14 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar10);
          *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar14;
          memcpy(&stack0x000001b0,unaff_x20,0x138);
          FUN_05e618b0();
          iVar12 = 0;
          *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
        }
      }
      FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    }
    FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    if ((*(long *)((long)unaff_x20 + 0x50) == 0) || (iVar12 < 1)) {
LAB_05e6d0c4:
      if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
        return;
      }
      goto LAB_05e6d348;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar14 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar10);
      *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar14;
      memcpy(&stack0x00000078,unaff_x20,0x138);
      FUN_05e618b0();
      goto LAB_05e6d0c4;
    }
    lVar17 = *(long *)(unaff_x27 + 0x28);
  }
  if (lVar17 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


