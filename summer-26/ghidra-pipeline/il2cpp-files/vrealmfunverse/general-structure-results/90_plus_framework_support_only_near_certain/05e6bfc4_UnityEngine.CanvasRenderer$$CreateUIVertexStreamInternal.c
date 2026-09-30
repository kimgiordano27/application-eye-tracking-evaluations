/*
FUNCTION_NAME: UnityEngine.CanvasRenderer$$CreateUIVertexStreamInternal
ENTRY_POINT: 05e6bfc4
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

void UnityEngine_CanvasRenderer__CreateUIVertexStreamInternal(float param_1,float param_2)

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
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  undefined8 uVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 *unaff_x25;
  long unaff_x27;
  int iVar24;
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
  
  fVar31 = DAT_010321cc;
  param_1 = param_1 / param_2;
  fVar28 = (unaff_s10 * param_1) / unaff_s14;
  if ((((param_1 <= DAT_010321cc) || (fVar28 <= DAT_010321cc)) || (unaff_s15 <= DAT_010321cc)) ||
     (unaff_s11 <= DAT_010321cc)) goto LAB_05e6d0c4;
  FUN_05d9d08c((long)unaff_x20 + 0x80,0);
  uVar16 = FUN_05e0ab70(&stack0x000004c8,0);
  if (((uVar16 & 1) == 0) || (*(int *)((long)unaff_x20 + 0x7c) != 2)) {
    FUN_05d9d0a0((long)unaff_x20 + 0x80,0);
    uVar16 = FUN_05e0ab70(&stack0x000004c8,0);
    if (((uVar16 & 1) != 0) && (*(int *)((long)unaff_x20 + 0x78) == 2)) {
      fVar34 = 1.0 / param_1;
      fVar29 = unaff_s15 * fVar34 + 0.5;
      iVar13 = -0x80000000;
      if (fVar29 != INFINITY) {
        iVar13 = (int)fVar29;
      }
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar13 = FUN_04d7c48c(iVar13,1,0);
      param_1 = unaff_s15 / (float)iVar13;
      fVar28 = fVar34 * fVar28 * param_1;
      goto LAB_05e6c240;
    }
  }
  else {
    fVar29 = 1.0 / fVar28;
    fVar28 = unaff_s11 * fVar29 + 0.5;
    iVar13 = -0x80000000;
    if (fVar28 != INFINITY) {
      iVar13 = (int)fVar28;
    }
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar13 = FUN_04d7c48c(iVar13,1,0);
    fVar28 = unaff_s11 / (float)iVar13;
    param_1 = fVar29 * param_1 * fVar28;
LAB_05e6c240:
    in_stack_00000040 = 0.0;
    in_stack_00000038._4_4_ = 0.0;
  }
  puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_85__;
  puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_84__;
  uVar7 = _UNK_01032d88;
  uVar22 = _DAT_01032d80;
  fVar29 = DAT_010328d0;
  uVar16 = 0;
  fStack000000000000006c = unaff_s15;
  bVar12 = true;
  do {
    bVar6 = bVar12;
    fVar34 = 0.0;
    lVar18 = 0x78;
    if (!bVar6) {
      lVar18 = 0x7c;
    }
    uVar2 = *(uint *)((long)unaff_x20 + lVar18);
    lVar18 = 0x60;
    if (!bVar6) {
      lVar18 = 0x6c;
    }
    lVar19 = 0x68;
    if (!bVar6) {
      lVar19 = 0x74;
    }
    iVar13 = *(int *)((long)unaff_x20 + lVar18);
    lVar18 = 100;
    if (!bVar6) {
      lVar18 = 0x70;
    }
    iVar3 = *(int *)((long)unaff_x20 + lVar19);
    fVar32 = *(float *)((long)unaff_x20 + lVar18);
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) {
        lVar18 = *unaff_x21;
        fVar34 = param_1;
        if (!bVar6) {
          fVar34 = fVar28;
        }
        if (lVar18 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_05e6d1fc;
        lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_05e6d1e4;
        lVar19 = *(long *)(lVar18 + 0x10);
        lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar19 == 0) goto LAB_05e6d1e4;
        uVar5 = *(uint *)(lVar18 + 0x18);
        if (uVar5 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + (long)(int)uVar5 * 0x20;
          *(uint *)(lVar18 + 0x18) = uVar5 + 1;
          *(float *)(lVar19 + 0x20) = in_stack_00000038._4_4_;
          *(float *)(lVar19 + 0x24) = in_stack_00000040;
          *(float *)(lVar19 + 0x28) = param_1;
          *(float *)(lVar19 + 0x2c) = fVar28;
          *(undefined8 *)(lVar19 + 0x38) = uVar7;
          *(undefined8 *)(lVar19 + 0x30) = uVar22;
        }
        else {
          uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
          in_stack_00000430 = (double)CONCAT44(in_stack_00000040,in_stack_00000038._4_4_);
          in_stack_00000438 = CONCAT44(fVar28,param_1);
          unaff_x25[3] = uVar7;
          unaff_x25[2] = uVar22;
          FUN_038e04ec(lVar18,&stack0x00000430,uVar21);
        }
      }
      else if (uVar2 == 1) {
        fVar33 = param_1;
        fVar25 = unaff_s15;
        if (!bVar6) {
          fVar33 = fVar28;
          fVar25 = unaff_s11;
        }
        uVar5 = 0x80000000;
        if (fVar25 / fVar33 != INFINITY) {
          uVar5 = (int)(fVar25 / fVar33);
        }
        if (-1 < (int)uVar5) {
          lVar18 = *unaff_x21;
          if (lVar18 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_05e6d1fc;
          lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_05e6d1e4;
          lVar19 = *(long *)(lVar18 + 0x10);
          lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05e6d1e4;
          uVar14 = *(uint *)(lVar18 + 0x18);
          if (uVar14 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)uVar14 * 0x20;
            *(uint *)(lVar18 + 0x18) = uVar14 + 1;
            *(float *)(lVar19 + 0x20) = in_stack_00000038._4_4_;
            *(float *)(lVar19 + 0x24) = in_stack_00000040;
            *(float *)(lVar19 + 0x28) = param_1;
            *(float *)(lVar19 + 0x2c) = fVar28;
            *(undefined8 *)(lVar19 + 0x38) = uVar7;
            *(undefined8 *)(lVar19 + 0x30) = uVar22;
          }
          else {
            uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(in_stack_00000040,in_stack_00000038._4_4_);
            in_stack_00000438 = CONCAT44(fVar28,param_1);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar22;
            FUN_038e04ec(lVar18,&stack0x00000430,uVar21);
          }
          fVar34 = fVar33;
          if (1 < uVar5) {
            lVar18 = *unaff_x21;
            fVar30 = in_stack_00000040;
            fVar11 = unaff_s15 - param_1;
            if (!bVar6) {
              fVar30 = unaff_s11 - fVar28;
              fVar11 = in_stack_00000038._4_4_;
            }
            if (lVar18 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_05e6d1fc;
            lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
            if (lVar18 == 0) goto LAB_05e6d1e4;
            lVar19 = *(long *)(lVar18 + 0x10);
            lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05e6d1e4;
            uVar14 = *(uint *)(lVar18 + 0x18);
            if (uVar14 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar14 * 0x20;
              *(uint *)(lVar18 + 0x18) = uVar14 + 1;
              *(float *)(lVar19 + 0x20) = fVar11;
              *(float *)(lVar19 + 0x24) = fVar30;
              *(float *)(lVar19 + 0x28) = param_1;
              *(float *)(lVar19 + 0x2c) = fVar28;
              *(undefined8 *)(lVar19 + 0x38) = uVar7;
              *(undefined8 *)(lVar19 + 0x30) = uVar22;
            }
            else {
              uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar30,fVar11);
              in_stack_00000438 = CONCAT44(fVar28,param_1);
              unaff_x25[3] = uVar7;
              unaff_x25[2] = uVar22;
              FUN_038e04ec(lVar18,&stack0x00000430,uVar21);
            }
            unaff_s15 = fStack000000000000006c;
            fVar34 = fVar25;
            if (uVar5 != 2) {
              iVar24 = 0;
              pfVar1 = (float *)&stack0x000004c4;
              if (!bVar6) {
                pfVar1 = (float *)&stack0x000004c0;
              }
              fVar27 = param_1;
              if (!bVar6) {
                fVar27 = fVar28;
              }
              do {
                iVar24 = iVar24 + 1;
                lVar18 = *unaff_x21;
                *pfVar1 = (fVar27 + (fVar25 - fVar33 * (float)(int)uVar5) / (float)(int)(uVar5 - 1))
                          * (float)iVar24;
                if (lVar18 == 0) goto LAB_05e6d1e4;
                if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_05e6d1fc;
                lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
                if (lVar18 == 0) goto LAB_05e6d1e4;
                lVar19 = *(long *)(lVar18 + 0x10);
                lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_05e6d1e4;
                uVar14 = *(uint *)(lVar18 + 0x18);
                if (uVar14 < *(uint *)(lVar19 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)uVar14 * 0x20;
                  *(uint *)(lVar18 + 0x18) = uVar14 + 1;
                  *(float *)(lVar19 + 0x20) = fVar11;
                  *(float *)(lVar19 + 0x24) = fVar30;
                  *(float *)(lVar19 + 0x28) = param_1;
                  *(float *)(lVar19 + 0x2c) = fVar28;
                  *(undefined8 *)(lVar19 + 0x38) = uVar7;
                  *(undefined8 *)(lVar19 + 0x30) = uVar22;
                }
                else {
                  uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
                  in_stack_00000430 = (double)CONCAT44(fVar30,fVar11);
                  in_stack_00000438 = CONCAT44(fVar28,param_1);
                  unaff_x25[3] = uVar7;
                  unaff_x25[2] = uVar22;
                  FUN_038e04ec(lVar18,&stack0x00000430,uVar21);
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
      fVar33 = unaff_s15;
      fVar25 = param_1;
      if (!bVar6) {
        fVar33 = unaff_s11;
        fVar25 = fVar28;
      }
      fVar25 = (fVar33 + fVar25 * 0.5) / fVar25;
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
      fVar33 = fVar33 / (float)(int)uVar14;
      fVar25 = fVar33;
      if (!bVar6) {
        fVar28 = fVar33;
        fVar25 = param_1;
      }
      param_1 = fVar25;
      if (0 < (int)uVar5) {
        fVar34 = 0.0;
        uVar14 = 0;
        fVar25 = in_stack_00000038._4_4_;
        fVar30 = in_stack_00000040;
        do {
          lVar18 = *unaff_x21;
          fVar11 = fVar33 * (float)(int)uVar14;
          if (!bVar6) {
            fVar30 = fVar33 * (float)(int)uVar14;
            fVar11 = fVar25;
          }
          fVar25 = fVar11;
          if (lVar18 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_05e6d1fc;
          lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_05e6d1e4;
          lVar19 = *(long *)(lVar18 + 0x10);
          lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05e6d1e4;
          uVar4 = *(uint *)(lVar18 + 0x18);
          if (uVar4 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar18 + 0x18) = uVar4 + 1;
            *(float *)(lVar19 + 0x20) = fVar25;
            *(float *)(lVar19 + 0x24) = fVar30;
            *(float *)(lVar19 + 0x28) = param_1;
            *(float *)(lVar19 + 0x2c) = fVar28;
            *(undefined8 *)(lVar19 + 0x38) = uVar7;
            *(undefined8 *)(lVar19 + 0x30) = uVar22;
          }
          else {
            uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fVar30,fVar25);
            in_stack_00000438 = CONCAT44(fVar28,param_1);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar22;
            FUN_038e04ec(lVar18,&stack0x00000430,uVar21);
          }
          fVar34 = fVar33 + fVar34;
          uVar14 = uVar14 + 1;
          unaff_s15 = fStack000000000000006c;
        } while (uVar5 != uVar14);
      }
    }
    else if (uVar2 == 3) {
      fVar33 = param_1;
      fVar25 = unaff_s15;
      if (!bVar6) {
        fVar33 = fVar28;
        fVar25 = unaff_s11;
      }
      fVar25 = (1.0 / in_stack_00000030._4_4_ + fVar25) / fVar33;
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
        fVar30 = in_stack_00000038._4_4_;
        fVar25 = in_stack_00000040;
        do {
          lVar18 = *unaff_x21;
          fVar11 = param_1 * (float)(int)uVar14;
          if (!bVar6) {
            fVar11 = fVar30;
            fVar25 = fVar28 * (float)(int)uVar14;
          }
          fVar30 = fVar11;
          if (lVar18 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_05e6d1fc;
          lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_05e6d1e4;
          lVar19 = *(long *)(lVar18 + 0x10);
          lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05e6d1e4;
          uVar4 = *(uint *)(lVar18 + 0x18);
          if (uVar4 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar18 + 0x18) = uVar4 + 1;
            *(float *)(lVar19 + 0x20) = fVar30;
            *(float *)(lVar19 + 0x24) = fVar25;
            *(float *)(lVar19 + 0x28) = param_1;
            *(float *)(lVar19 + 0x2c) = fVar28;
            *(undefined8 *)(lVar19 + 0x38) = uVar7;
            *(undefined8 *)(lVar19 + 0x30) = uVar22;
          }
          else {
            uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fVar25,fVar30);
            in_stack_00000438 = CONCAT44(fVar28,param_1);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar22;
            FUN_038e04ec(lVar18,&stack0x00000430,uVar21);
          }
          fVar34 = fVar34 + fVar33;
          uVar14 = uVar14 + 1;
          unaff_s15 = fStack000000000000006c;
        } while (uVar5 != uVar14);
      }
    }
    if (iVar13 == 0) {
      fVar32 = unaff_s15;
      if (!bVar6) {
        fVar32 = unaff_s11;
      }
      fVar33 = (fVar32 - fVar34) * 0.5;
LAB_05e6c8bc:
      uVar21 = *(undefined8 *)((long)unaff_x20 + 0xa0);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar17 = FUN_05c8e378(uVar21,0,0);
      if ((uVar17 & 1) != 0) {
        uVar21 = *(undefined8 *)((long)unaff_x20 + 0xa8);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05c8e378(uVar21,0,0);
        if ((uVar17 & 1) != 0) {
          fVar34 = param_1;
          if (!bVar6) {
            fVar34 = fVar28;
          }
          fVar34 = fVar34 * in_stack_00000030._4_4_;
          dVar26 = modf((double)fVar34,(double *)&stack0x00000430);
          if (0.0 <= fVar34) {
            if (dVar26 == 0.5) {
              fVar32 = 1.0;
              goto LAB_05e6caf0;
            }
            fVar25 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar26 == -0.5) {
            fVar32 = -1.0;
LAB_05e6caf0:
            fVar25 = (float)in_stack_00000430;
            if (((long)in_stack_00000430 & 1U) != 0) {
              fVar25 = (float)in_stack_00000430 + fVar32;
            }
          }
          else {
            fVar25 = (float)(int)(fVar34 + -0.5);
          }
          if (ABS(fVar25 - fVar34) < fVar29) {
            fVar33 = (float)FUN_05d9b054(fVar33,in_stack_00000030._4_4_,DAT_01031fc8,0);
          }
        }
      }
LAB_05e6c96c:
      if ((uVar2 & 0xfffffffe) == 2) {
        fVar34 = param_1;
        if (!bVar6) {
          fVar34 = fVar28;
        }
        if (fVar31 < fVar34) {
          if (fVar33 < -fVar34) {
            fVar32 = -2.1474836e+09;
            if (-fVar33 / fVar34 != INFINITY) {
              fVar32 = (float)(int)(-fVar33 / fVar34);
            }
            fVar33 = fVar33 + fVar34 * fVar32;
          }
          if (0.0 < fVar33) {
            fVar32 = -2.1474836e+09;
            if (fVar33 / fVar34 != INFINITY) {
              fVar32 = (float)((int)(fVar33 / fVar34) + 1);
            }
            fVar33 = fVar33 - fVar34 * fVar32;
          }
        }
      }
    }
    else {
      fVar33 = 0.0;
      if (uVar2 != 1) {
        if (iVar3 == 0) {
LAB_05e6c88c:
          bVar12 = false;
        }
        else {
          if (iVar3 != 1) {
            fVar32 = 0.0;
            goto LAB_05e6c88c;
          }
          fVar25 = param_1;
          fVar33 = unaff_s15;
          if (!bVar6) {
            fVar25 = fVar28;
            fVar33 = unaff_s11;
          }
          bVar12 = true;
          fVar32 = (fVar32 * (fVar33 - fVar25)) / 100.0;
        }
        if ((iVar13 == 4) || (fVar33 = fVar32, iVar13 == 2)) {
          fVar33 = unaff_s15;
          if (!bVar6) {
            fVar33 = unaff_s11;
          }
          fVar33 = (fVar33 - fVar34) - fVar32;
        }
        if (bVar12) goto LAB_05e6c8bc;
        goto LAB_05e6c96c;
      }
    }
    lVar18 = *unaff_x21;
    if (lVar18 == 0) goto LAB_05e6d1e4;
    iVar13 = 0;
    while( true ) {
      puVar10 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
      if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_05e6d1fc;
      lVar19 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
      if (lVar19 == 0) goto LAB_05e6d1e4;
      if (*(int *)(lVar19 + 0x18) <= iVar13) break;
      FUN_038e01b0(&stack0x00000430,lVar19,iVar13,*(undefined8 *)puVar9);
      fVar34 = (float)((ulong)in_stack_00000430 >> 0x20);
      lVar18 = *unaff_x21;
      fVar32 = SUB84(in_stack_00000430,0);
      if (!bVar6) {
        fVar32 = fVar34;
      }
      unaff_x25[0x15] = in_stack_00000440;
      unaff_x25[0x14] = in_stack_00000438;
      fVar25 = fVar33 + fVar32;
      if (!bVar6) {
        fVar34 = fVar33 + fVar32;
        fVar25 = SUB84(in_stack_00000430,0);
      }
      if (lVar18 == 0) goto LAB_05e6d1e4;
      if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_05e6d1fc;
      lVar18 = *(long *)(lVar18 + uVar16 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_05e6d1e4;
      in_stack_00000440 = unaff_x25[0x15];
      in_stack_00000438 = unaff_x25[0x14];
      in_stack_00000430 = (double)CONCAT44(fVar34,fVar25);
      FUN_038e0210(lVar18,iVar13,&stack0x00000430,*(undefined8 *)puVar8);
      lVar18 = *unaff_x21;
      iVar13 = iVar13 + 1;
      if (lVar18 == 0) goto LAB_05e6d1e4;
    }
    uVar16 = 1;
    bVar12 = false;
  } while (bVar6);
  if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) == 0) {
LAB_05e6d1fc:
    if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    goto LAB_05e6d348;
  }
  if ((*(long *)(lVar18 + 0x28) == 0) || (*(long *)(lVar18 + 0x20) == 0)) {
LAB_05e6d1e4:
    lVar18 = *(long *)(unaff_x27 + 0x28);
  }
  else {
    if (1 < *(int *)(*(long *)(lVar18 + 0x20) + 0x18) * *(int *)(*(long *)(lVar18 + 0x28) + 0x18)) {
      uVar22 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar16 = FUN_05c8e378(uVar22,0,0);
      if ((uVar16 & 1) != 0) {
        plVar23 = (long *)(unaff_x19 + 0x20);
        lVar18 = *plVar23;
        if (lVar18 == 0) {
          lVar18 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
          FUN_03abe564(lVar18,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
          *plVar23 = lVar18;
          thunk_FUN_02bb0e9c(plVar23,lVar18);
          lVar18 = *plVar23;
        }
        *(long *)((long)unaff_x20 + 0x50) = lVar18;
        thunk_FUN_02bb0e9c();
        if (*plVar23 == 0) goto LAB_05e6d1e4;
        uVar15 = FUN_03abe980(*plVar23,*(undefined8 *)puVar10);
        *(undefined4 *)((long)unaff_x20 + 0x58) = uVar15;
      }
    }
    puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
    lVar18 = *unaff_x21;
    if (lVar18 == 0) goto LAB_05e6d1e4;
    if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
    if (*(long *)(lVar18 + 0x28) == 0) goto LAB_05e6d1e4;
    FUN_038e10a8(&stack0x00000430,*(long *)(lVar18 + 0x28),
                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
    iVar13 = 0;
    unaff_x25[0xd] = unaff_x25[1];
    unaff_x25[0xc] = *unaff_x25;
    unaff_x25[0xf] = unaff_x25[3];
    unaff_x25[0xe] = unaff_x25[2];
    unaff_x25[0x11] = unaff_x25[5];
    unaff_x25[0x10] = unaff_x25[4];
    while (uVar16 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar8), (uVar16 & 1) != 0) {
      fVar28 = in_stack_000004a4;
      fVar31 = in_stack_000004ac;
      if (in_stack_000004a4 < in_stack_00000068) {
        fVar28 = in_stack_00000068;
        fVar31 = in_stack_000004ac - (in_stack_00000068 - in_stack_000004a4);
      }
      if (unaff_s11 + in_stack_00000068 < fVar31 + fVar28) {
        fVar31 = fVar31 - ((fVar31 + fVar28) - (unaff_s11 + in_stack_00000068));
      }
      uVar22 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c8e378(uVar22,0,0);
      lVar18 = *unaff_x21;
      if (lVar18 == 0) {
        if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      if (*(int *)(lVar18 + 0x18) == 0) {
        if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_05e6d348;
      }
      if (*(long *)(lVar18 + 0x20) == 0) {
        if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      FUN_038e10a8(&stack0x00000430,*(long *)(lVar18 + 0x20),*(undefined8 *)puVar9);
      unaff_x25[7] = unaff_x25[1];
      unaff_x25[6] = *unaff_x25;
      unaff_x25[9] = unaff_x25[3];
      unaff_x25[8] = unaff_x25[2];
      unaff_x25[0xb] = unaff_x25[5];
      unaff_x25[10] = unaff_x25[4];
      while (uVar16 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar8), (uVar16 & 1) != 0) {
        fVar29 = in_stack_00000470;
        fVar34 = in_stack_00000478;
        if (in_stack_00000470 < in_stack_00000070._4_4_) {
          fVar29 = in_stack_00000070._4_4_;
          fVar34 = in_stack_00000478 - (in_stack_00000070._4_4_ - in_stack_00000470);
        }
        if (unaff_s15 + in_stack_00000070._4_4_ < fVar34 + fVar29) {
          fVar34 = fVar34 - ((fVar34 + fVar29) - (unaff_s15 + in_stack_00000070._4_4_));
        }
        memcpy(&stack0x000002e8,unaff_x20,0x138);
        FUN_05e6359c(fVar29,fVar28,fVar34,fVar31,in_stack_00000070._4_4_,in_stack_00000068,
                     fStack000000000000006c,unaff_s11);
        iVar13 = iVar13 + 1;
        if ((0x3c < iVar13) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
          if (*(long *)(unaff_x19 + 0x20) == 0) {
            if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
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
      if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
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
    lVar18 = *(long *)(unaff_x27 + 0x28);
  }
  if (lVar18 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


