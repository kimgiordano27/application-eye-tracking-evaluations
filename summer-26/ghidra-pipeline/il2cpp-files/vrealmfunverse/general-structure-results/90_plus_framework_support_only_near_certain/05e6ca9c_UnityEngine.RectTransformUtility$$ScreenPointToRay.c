/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$ScreenPointToRay
ENTRY_POINT: 05e6ca9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */

void UnityEngine_RectTransformUtility__ScreenPointToRay
               (undefined8 param_1,float param_2,float param_3,undefined1 param_4 [16],long param_5,
               undefined8 param_6,undefined1 *param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int iVar17;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  int iVar18;
  double dVar19;
  undefined8 uVar20;
  float unaff_s8;
  float fVar21;
  float unaff_s9;
  float unaff_s11;
  float fVar22;
  float fVar23;
  undefined4 unaff_s14;
  float fVar24;
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
  double dVar25;
  float in_stack_00000470;
  float in_stack_00000478;
  float in_stack_000004a4;
  float in_stack_000004ac;
  long in_stack_000004e8;
  
  uVar20 = param_4._8_8_;
  uVar15 = param_4._0_8_;
  while( true ) {
    *(undefined8 *)(unaff_x28 + 0x10) = uVar20;
    *(undefined8 *)(unaff_x28 + 8) = uVar15;
    *(undefined8 *)(unaff_x28 + 0x18) = param_1;
    dVar25 = (double)CONCAT44(param_3,param_2);
    FUN_038e0210(param_5,unaff_w22,param_7,param_8);
    lVar14 = *unaff_x21;
    unaff_w22 = unaff_w22 + 1;
    if (lVar14 == 0) break;
    while( true ) {
      puVar7 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
      if (*(uint *)(lVar14 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
      lVar11 = *(long *)(lVar14 + unaff_x27 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_05e6d1e4;
      if (unaff_w22 < *(int *)(lVar11 + 0x18)) break;
      unaff_x27 = 1;
      if ((unaff_x26 & 1) == 0) {
        if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
        if ((*(long *)(lVar14 + 0x28) == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_05e6d1e4;
        if (1 < *(int *)(*(long *)(lVar14 + 0x20) + 0x18) *
                *(int *)(*(long *)(lVar14 + 0x28) + 0x18)) {
          uVar15 = *(undefined8 *)((long)unaff_x20 + 0xa8);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar12 = FUN_05c8e378(uVar15,0,0);
          if ((uVar12 & 1) != 0) {
            plVar16 = (long *)(unaff_x19 + 0x20);
            lVar14 = *plVar16;
            if (lVar14 == 0) {
              lVar14 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
              FUN_03abe564(lVar14,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
              *plVar16 = lVar14;
              thunk_FUN_02bb0e9c(plVar16,lVar14);
              lVar14 = *plVar16;
            }
            *(long *)((long)unaff_x20 + 0x50) = lVar14;
            thunk_FUN_02bb0e9c();
            if (*plVar16 == 0) goto LAB_05e6d1e4;
            uVar10 = FUN_03abe980(*plVar16,*(undefined8 *)puVar7);
            *(undefined4 *)((long)unaff_x20 + 0x58) = uVar10;
          }
        }
        puVar6 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
        lVar14 = *unaff_x21;
        if (lVar14 == 0) goto LAB_05e6d1e4;
        if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
        if (*(long *)(lVar14 + 0x28) == 0) goto LAB_05e6d1e4;
        FUN_038e10a8(&stack0x00000430,*(long *)(lVar14 + 0x28),
                     *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
        puVar5 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
        iVar17 = 0;
        unaff_x25[0xd] = unaff_x25[1];
        unaff_x25[0xc] = *unaff_x25;
        unaff_x25[0xf] = unaff_x25[3];
        unaff_x25[0xe] = unaff_x25[2];
        unaff_x25[0x11] = unaff_x25[5];
        unaff_x25[0x10] = unaff_x25[4];
        goto LAB_05e6cdac;
      }
      unaff_x26 = 0;
      fVar22 = 0.0;
      uVar1 = *(uint *)((long)unaff_x20 + 0x7c);
      iVar17 = *(int *)((long)unaff_x20 + 0x6c);
      iVar2 = *(int *)((long)unaff_x20 + 0x74);
      fVar23 = *(float *)((long)unaff_x20 + 0x70);
      fVar21 = unaff_s11;
      if ((int)uVar1 < 2) {
        if (uVar1 == 0) {
          lVar14 = *unaff_x21;
          if (lVar14 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_05e6d1fc;
          lVar14 = *(long *)(lVar14 + 0x28);
          if (lVar14 == 0) goto LAB_05e6d1e4;
          lVar11 = *(long *)(lVar14 + 0x10);
          lVar13 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_05e6d1e4;
          uVar4 = *(uint *)(lVar14 + 0x18);
          if (uVar4 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar4 * 0x20;
            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
            *(undefined4 *)(lVar11 + 0x20) = uStack000000000000003c;
            *(undefined4 *)(lVar11 + 0x24) = in_stack_00000040;
            *(undefined4 *)(lVar11 + 0x28) = unaff_s14;
            *(float *)(lVar11 + 0x2c) = unaff_s8;
            *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
            *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
            fVar22 = unaff_s8;
          }
          else {
            uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            dVar25 = (double)CONCAT44(in_stack_00000040,uStack000000000000003c);
            unaff_x25[3] = in_stack_00000058;
            unaff_x25[2] = in_stack_00000050;
            FUN_038e04ec(lVar14,&stack0x00000430,uVar15);
            fVar22 = unaff_s8;
          }
        }
        else if (uVar1 == 1) {
          uVar4 = 0x80000000;
          if (unaff_s11 / unaff_s8 != INFINITY) {
            uVar4 = (int)(unaff_s11 / unaff_s8);
          }
          if (-1 < (int)uVar4) {
            lVar14 = *unaff_x21;
            if (lVar14 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_05e6d1fc;
            lVar14 = *(long *)(lVar14 + 0x28);
            if (lVar14 == 0) goto LAB_05e6d1e4;
            lVar11 = *(long *)(lVar14 + 0x10);
            lVar13 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_05e6d1e4;
            uVar9 = *(uint *)(lVar14 + 0x18);
            if (uVar9 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar9 * 0x20;
              *(uint *)(lVar14 + 0x18) = uVar9 + 1;
              *(undefined4 *)(lVar11 + 0x20) = uStack000000000000003c;
              *(undefined4 *)(lVar11 + 0x24) = in_stack_00000040;
              *(undefined4 *)(lVar11 + 0x28) = unaff_s14;
              *(float *)(lVar11 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
            }
            else {
              uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
              dVar25 = (double)CONCAT44(in_stack_00000040,uStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar14,&stack0x00000430,uVar15);
            }
            fVar22 = unaff_s8;
            if (1 < uVar4) {
              fVar24 = unaff_s11 - unaff_s8;
              lVar14 = *unaff_x21;
              if (lVar14 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_05e6d1fc;
              lVar14 = *(long *)(lVar14 + 0x28);
              if (lVar14 == 0) goto LAB_05e6d1e4;
              lVar11 = *(long *)(lVar14 + 0x10);
              lVar13 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_05e6d1e4;
              uVar9 = *(uint *)(lVar14 + 0x18);
              if (uVar9 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = lVar11 + (long)(int)uVar9 * 0x20;
                *(uint *)(lVar14 + 0x18) = uVar9 + 1;
                *(undefined4 *)(lVar11 + 0x20) = uStack000000000000003c;
                *(float *)(lVar11 + 0x24) = fVar24;
                *(undefined4 *)(lVar11 + 0x28) = unaff_s14;
                *(float *)(lVar11 + 0x2c) = unaff_s8;
                *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
                *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
              }
              else {
                uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
                dVar25 = (double)CONCAT44(fVar24,uStack000000000000003c);
                unaff_x25[3] = in_stack_00000058;
                unaff_x25[2] = in_stack_00000050;
                FUN_038e04ec(lVar14,&stack0x00000430,uVar15);
              }
              unaff_s15 = fStack000000000000006c;
              fVar21 = fStack0000000000000070;
              fVar22 = unaff_s11;
              if (uVar4 != 2) {
                iVar18 = 0;
                do {
                  iVar18 = iVar18 + 1;
                  lVar14 = *unaff_x21;
                  if (lVar14 == 0) goto LAB_05e6d1e4;
                  if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_05e6d1fc;
                  lVar14 = *(long *)(lVar14 + 0x28);
                  if (lVar14 == 0) goto LAB_05e6d1e4;
                  lVar11 = *(long *)(lVar14 + 0x10);
                  lVar13 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_05e6d1e4;
                  uVar9 = *(uint *)(lVar14 + 0x18);
                  if (uVar9 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)uVar9 * 0x20;
                    *(uint *)(lVar14 + 0x18) = uVar9 + 1;
                    *(undefined4 *)(lVar11 + 0x20) = uStack000000000000003c;
                    *(float *)(lVar11 + 0x24) = fVar24;
                    *(undefined4 *)(lVar11 + 0x28) = unaff_s14;
                    *(float *)(lVar11 + 0x2c) = unaff_s8;
                    *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
                    *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
                  }
                  else {
                    uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
                    dVar25 = (double)CONCAT44(fVar24,uStack000000000000003c);
                    unaff_x25[3] = in_stack_00000058;
                    unaff_x25[2] = in_stack_00000050;
                    FUN_038e04ec(lVar14,&stack0x00000430,uVar15);
                    unaff_x25 = (undefined8 *)&stack0x00000430;
                  }
                } while (iVar18 < (int)(uVar4 - 2));
              }
            }
          }
        }
      }
      else if (uVar1 == 2) {
        fVar24 = (unaff_s11 + unaff_s8 * 0.5) / unaff_s8;
        iVar18 = -0x80000000;
        if (fVar24 != INFINITY) {
          iVar18 = (int)fVar24;
        }
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_04d7c48c(iVar18,1,0);
        uVar4 = uVar9 | 1;
        if ((uVar9 & 1) != 0) {
          uVar4 = uVar9 + 2;
        }
        if (iVar17 != 0) {
          uVar4 = uVar9 + 1;
        }
        unaff_s8 = unaff_s11 / (float)(int)uVar9;
        if (0 < (int)uVar4) {
          fVar22 = 0.0;
          uVar9 = 0;
          do {
            lVar14 = *unaff_x21;
            if (lVar14 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_05e6d1fc;
            lVar14 = *(long *)(lVar14 + 0x28);
            if (lVar14 == 0) goto LAB_05e6d1e4;
            lVar11 = *(long *)(lVar14 + 0x10);
            lVar13 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_05e6d1e4;
            uVar3 = *(uint *)(lVar14 + 0x18);
            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar3 * 0x20;
              *(uint *)(lVar14 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar11 + 0x20) = uStack000000000000003c;
              *(float *)(lVar11 + 0x24) = unaff_s8 * (float)(int)uVar9;
              *(undefined4 *)(lVar11 + 0x28) = unaff_s14;
              *(float *)(lVar11 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
            }
            else {
              uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
              dVar25 = (double)CONCAT44(unaff_s8 * (float)(int)uVar9,uStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar14,&stack0x00000430,uVar15);
            }
            fVar22 = unaff_s8 + fVar22;
            uVar9 = uVar9 + 1;
            unaff_s15 = fStack000000000000006c;
            fVar21 = fStack0000000000000070;
          } while (uVar4 != uVar9);
        }
      }
      else if (uVar1 == 3) {
        fVar24 = (fStack0000000000000030 + unaff_s11) / unaff_s8;
        uVar4 = 0x80000000;
        if (fVar24 != INFINITY) {
          uVar4 = (int)fVar24;
        }
        uVar9 = uVar4 | 1;
        if ((uVar4 & 1) != 0) {
          uVar9 = uVar4 + 2;
        }
        uVar4 = uVar4 + 2;
        if (iVar17 == 0) {
          uVar4 = uVar9;
        }
        if (0 < (int)uVar4) {
          uVar9 = 0;
          do {
            lVar14 = *unaff_x21;
            if (lVar14 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_05e6d1fc;
            lVar14 = *(long *)(lVar14 + 0x28);
            if (lVar14 == 0) goto LAB_05e6d1e4;
            lVar11 = *(long *)(lVar14 + 0x10);
            lVar13 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_05e6d1e4;
            uVar3 = *(uint *)(lVar14 + 0x18);
            if (uVar3 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar3 * 0x20;
              *(uint *)(lVar14 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar11 + 0x20) = uStack000000000000003c;
              *(float *)(lVar11 + 0x24) = unaff_s8 * (float)(int)uVar9;
              *(undefined4 *)(lVar11 + 0x28) = unaff_s14;
              *(float *)(lVar11 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
            }
            else {
              uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
              dVar25 = (double)CONCAT44(unaff_s8 * (float)(int)uVar9,uStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar14,&stack0x00000430,uVar15);
            }
            fVar22 = fVar22 + unaff_s8;
            uVar9 = uVar9 + 1;
            unaff_s15 = fStack000000000000006c;
            fVar21 = fStack0000000000000070;
          } while (uVar4 != uVar9);
        }
      }
      unaff_s11 = fVar21;
      if (iVar17 == 0) {
        unaff_s9 = (unaff_s11 - fVar22) * 0.5;
LAB_05e6c8bc:
        uVar15 = *(undefined8 *)((long)unaff_x20 + 0xa0);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar12 = FUN_05c8e378(uVar15,0,0);
        if ((uVar12 & 1) != 0) {
          uVar15 = *(undefined8 *)((long)unaff_x20 + 0xa8);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar12 = FUN_05c8e378(uVar15,0,0);
          if ((uVar12 & 1) != 0) {
            fVar21 = unaff_s8 * fStack0000000000000034;
            dVar19 = modf((double)fVar21,(double *)&stack0x00000430);
            if (0.0 <= fVar21) {
              if (dVar19 == 0.5) {
                fVar22 = 1.0;
                goto LAB_05e6caf0;
              }
              fVar23 = (float)(int)(fVar21 + 0.5);
            }
            else if (dVar19 == -0.5) {
              fVar22 = -1.0;
LAB_05e6caf0:
              fVar23 = (float)dVar25;
              if (((long)dVar25 & 1U) != 0) {
                fVar23 = (float)dVar25 + fVar22;
              }
            }
            else {
              fVar23 = (float)(int)(fVar21 + -0.5);
            }
            if (ABS(fVar23 - fVar21) < in_stack_00000028._4_4_) {
              unaff_s9 = (float)FUN_05d9b054(unaff_s9,fStack0000000000000034,DAT_01031fc8,0);
            }
          }
        }
LAB_05e6c96c:
        if (((uVar1 & 0xfffffffe) == 2) && (fStack0000000000000038 < unaff_s8)) {
          if (unaff_s9 < -unaff_s8) {
            fVar21 = -2.1474836e+09;
            if (-unaff_s9 / unaff_s8 != INFINITY) {
              fVar21 = (float)(int)(-unaff_s9 / unaff_s8);
            }
            unaff_s9 = unaff_s9 + unaff_s8 * fVar21;
          }
          if (0.0 < unaff_s9) {
            fVar21 = -2.1474836e+09;
            if (unaff_s9 / unaff_s8 != INFINITY) {
              fVar21 = (float)((int)(unaff_s9 / unaff_s8) + 1);
            }
            unaff_s9 = unaff_s9 - unaff_s8 * fVar21;
          }
        }
      }
      else {
        unaff_s9 = 0.0;
        if (uVar1 != 1) {
          if (iVar2 == 0) {
LAB_05e6c88c:
            bVar8 = false;
          }
          else {
            if (iVar2 != 1) {
              fVar23 = 0.0;
              goto LAB_05e6c88c;
            }
            bVar8 = true;
            fVar23 = (fVar23 * (unaff_s11 - unaff_s8)) / 100.0;
          }
          if ((iVar17 == 4) || (unaff_s9 = fVar23, iVar17 == 2)) {
            unaff_s9 = (unaff_s11 - fVar22) - fVar23;
          }
          if (bVar8) goto LAB_05e6c8bc;
          goto LAB_05e6c96c;
        }
      }
      lVar14 = *unaff_x21;
      if (lVar14 == 0) goto LAB_05e6d1e4;
      unaff_w22 = 0;
    }
    FUN_038e01b0(&stack0x00000430,lVar11,unaff_w22,*unaff_x24);
    param_3 = (float)((ulong)dVar25 >> 0x20);
    bVar8 = (unaff_x26 & 1) == 0;
    uVar15 = *(undefined8 *)(unaff_x28 + 8);
    param_1 = *(undefined8 *)(unaff_x28 + 0x18);
    lVar14 = *unaff_x21;
    fVar21 = SUB84(dVar25,0);
    if (bVar8) {
      fVar21 = param_3;
    }
    unaff_x25[0x15] = *(undefined8 *)(unaff_x28 + 0x10);
    unaff_x25[0x14] = uVar15;
    param_2 = unaff_s9 + fVar21;
    if (bVar8) {
      param_3 = unaff_s9 + fVar21;
      param_2 = SUB84(dVar25,0);
    }
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= unaff_x27) {
LAB_05e6d1fc:
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_05e6d348;
    }
    param_5 = *(long *)(lVar14 + unaff_x27 * 8 + 0x20);
    if (param_5 == 0) break;
    uVar20 = unaff_x25[0x15];
    uVar15 = unaff_x25[0x14];
    param_7 = &stack0x00000430;
    param_8 = *unaff_x23;
  }
LAB_05e6d1e4:
  lVar14 = *(long *)(in_stack_00000020 + 0x28);
LAB_05e6d1ec:
  if (lVar14 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_05e6cdac:
  uVar12 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar5);
  if ((uVar12 & 1) == 0) goto LAB_05e6d058;
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
  lVar14 = *unaff_x21;
  if (lVar14 == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05e6d348;
  }
  if (*(int *)(lVar14 + 0x18) == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    goto LAB_05e6d348;
  }
  if (*(long *)(lVar14 + 0x20) == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05e6d348;
  }
  FUN_038e10a8(&stack0x00000430,*(long *)(lVar14 + 0x20),*(undefined8 *)puVar6);
  unaff_x25[7] = unaff_x25[1];
  unaff_x25[6] = *unaff_x25;
  unaff_x25[9] = unaff_x25[3];
  unaff_x25[8] = unaff_x25[2];
  unaff_x25[0xb] = unaff_x25[5];
  unaff_x25[10] = unaff_x25[4];
  while (uVar12 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
    fVar23 = in_stack_00000470;
    fVar24 = in_stack_00000478;
    if (in_stack_00000470 < fStack0000000000000074) {
      fVar23 = fStack0000000000000074;
      fVar24 = in_stack_00000478 - (fStack0000000000000074 - in_stack_00000470);
    }
    if (unaff_s15 + fStack0000000000000074 < fVar24 + fVar23) {
      fVar24 = fVar24 - ((fVar24 + fVar23) - (unaff_s15 + fStack0000000000000074));
    }
    memcpy(&stack0x000002e8,unaff_x20,0x138);
    FUN_05e6359c(fVar23,fVar21,fVar24,fVar22,fStack0000000000000074,fStack0000000000000068,
                 fStack000000000000006c,fStack0000000000000070);
    iVar17 = iVar17 + 1;
    if ((0x3c < iVar17) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
      if (*(long *)(unaff_x19 + 0x20) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      uVar10 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar7);
      *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar10;
      memcpy(&stack0x000001b0,unaff_x20,0x138);
      FUN_05e618b0();
      iVar17 = 0;
      *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
    }
  }
  FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  goto LAB_05e6cdac;
LAB_05e6d058:
  FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  if ((*(long *)((long)unaff_x20 + 0x50) != 0) && (0 < iVar17)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      lVar14 = *(long *)(in_stack_00000020 + 0x28);
      goto LAB_05e6d1ec;
    }
    uVar10 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar7);
    *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar10;
    memcpy(&stack0x00000078,unaff_x20,0x138);
    FUN_05e618b0();
  }
  if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
    return;
  }
  goto LAB_05e6d348;
}


