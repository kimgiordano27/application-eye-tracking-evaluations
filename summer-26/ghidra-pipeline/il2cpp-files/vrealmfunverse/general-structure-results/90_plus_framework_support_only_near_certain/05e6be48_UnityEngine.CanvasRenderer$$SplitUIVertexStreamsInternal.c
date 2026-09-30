/*
FUNCTION_NAME: UnityEngine.CanvasRenderer$$SplitUIVertexStreamsInternal
ENTRY_POINT: 05e6be48
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

void UnityEngine_CanvasRenderer__SplitUIVertexStreamsInternal(long param_1)

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
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int iVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s11;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_s15;
  undefined8 in_stack_00000030;
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
  
  if (param_1 == 0) {
LAB_05e6d2a0:
    if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
      uVar22 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar22,0);
    }
    goto LAB_05e6d348;
  }
  if (*(int *)(unaff_x22 + 0x18) == 0) {
LAB_05e6d280:
    lVar15 = *(long *)(unaff_x27 + 0x28);
LAB_05e6d204:
    if (lVar15 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x20) = unaff_x23;
    thunk_FUN_02bb0e9c((undefined8 *)(unaff_x22 + 0x20));
    plVar20 = (long *)*unaff_x21;
    lVar15 = thunk_FUN_02b79644(*unaff_x24);
    FUN_038dfc18(lVar15,*unaff_x26);
    if (plVar20 == (long *)0x0) {
LAB_05e6d278:
      lVar15 = *(long *)(unaff_x27 + 0x28);
    }
    else {
      if ((lVar15 != 0) &&
         (lVar16 = thunk_FUN_02b79548(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
      goto LAB_05e6d2a0;
      if ((*(uint *)(plVar20 + 3) & 0xfffffffe) == 0) goto LAB_05e6d280;
      plVar20[5] = lVar15;
      thunk_FUN_02bb0e9c(plVar20 + 5,lVar15);
      fStack000000000000003c = *unaff_x20;
      fStack0000000000000040 = unaff_x20[1];
      fVar33 = unaff_x20[2];
      fVar29 = unaff_x20[3];
      iVar13 = FUN_05d9d030(unaff_x20 + 0x20,0);
      fVar34 = fVar33;
      fVar24 = fVar29;
      if (iVar13 == 0) {
        FUN_05d9d08c(unaff_x20 + 0x20,0);
        uVar17 = FUN_05e0ab80(&stack0x000004c8,0);
        if ((uVar17 & 1) != 0) {
          FUN_05d9d0a0(unaff_x20 + 0x20,0);
          uVar17 = FUN_05e0ab80(&stack0x000004c8,0);
          if ((uVar17 & 1) != 0) goto LAB_05e6c0dc;
        }
        FUN_05d9d08c(unaff_x20 + 0x20,0);
        uVar17 = FUN_05e0ab80(&stack0x000004c8,0);
        if ((uVar17 & 1) == 0) {
          FUN_05d9d0a0(unaff_x20 + 0x20,0);
          uVar17 = FUN_05e0ab70(&stack0x000004c8,0);
          if ((uVar17 & 1) != 0) {
            uVar17 = FUN_05d9d08c(unaff_x20 + 0x20,0);
            uVar18 = FUN_05d9d08c(unaff_x20 + 0x20,0);
            if (uVar17 >> 0x20 == 1) {
              fVar34 = (unaff_s15 * (float)uVar18) / 100.0;
            }
            else {
              if (uVar18 >> 0x20 != 0) goto LAB_05e6c0dc;
              fVar34 = (float)FUN_05d9d08c(unaff_x20 + 0x20,0);
            }
            fVar24 = (fVar29 * fVar34) / fVar33;
            goto LAB_05e6c0dc;
          }
        }
        FUN_05d9d08c(unaff_x20 + 0x20,0);
        uVar17 = FUN_05e0ab80(&stack0x000004c8,0);
        if ((uVar17 & 1) == 0) {
          FUN_05d9d0a0(unaff_x20 + 0x20,0);
          uVar17 = FUN_05e0ab80(&stack0x000004c8,0);
          if ((uVar17 & 1) == 0) {
            FUN_05d9d08c(unaff_x20 + 0x20,0);
            uVar17 = FUN_05e0ab70(&stack0x000004c8,0);
            if ((uVar17 & 1) == 0) {
              uVar17 = FUN_05d9d08c(unaff_x20 + 0x20,0);
              uVar18 = FUN_05d9d08c(unaff_x20 + 0x20,0);
              if (uVar17 >> 0x20 == 1) {
                fVar34 = (unaff_s15 * (float)uVar18) / 100.0;
              }
              else if (uVar18 >> 0x20 == 0) {
                fVar34 = (float)FUN_05d9d08c(unaff_x20 + 0x20,0);
              }
            }
            FUN_05d9d0a0(unaff_x20 + 0x20,0);
            uVar17 = FUN_05e0ab70(&stack0x000004c8,0);
            if ((uVar17 & 1) == 0) {
              uVar17 = FUN_05d9d0a0(unaff_x20 + 0x20,0);
              uVar18 = FUN_05d9d0a0(unaff_x20 + 0x20,0);
              if (uVar17 >> 0x20 == 1) {
                fVar24 = (unaff_s11 * (float)uVar18) / 100.0;
              }
              else if (uVar18 >> 0x20 == 0) {
                fVar24 = (float)FUN_05d9d0a0(unaff_x20 + 0x20,0);
              }
              FUN_05d9d08c(unaff_x20 + 0x20,0);
              uVar17 = FUN_05e0ab70(&stack0x000004c8,0);
              if ((uVar17 & 1) != 0) goto LAB_05e6bff8;
            }
          }
        }
      }
      else {
        iVar13 = FUN_05d9d030(unaff_x20 + 0x20,0);
        if (iVar13 == 2) {
          fVar24 = unaff_s11;
          if (unaff_s11 / fVar29 <= unaff_s15 / fVar33) {
LAB_05e6bff8:
            fVar34 = (fVar24 * fVar33) / fVar29;
          }
          else {
LAB_05e6bef4:
            fVar34 = unaff_s15;
            fVar24 = (unaff_s15 * fVar29) / fVar33;
          }
        }
        else {
          iVar13 = FUN_05d9d030(unaff_x20 + 0x20,0);
          if (iVar13 == 1) {
            fVar24 = unaff_s11;
            if (unaff_s15 / fVar33 <= unaff_s11 / fVar29) goto LAB_05e6bff8;
            goto LAB_05e6bef4;
          }
        }
      }
LAB_05e6c0dc:
      fVar29 = DAT_010321cc;
      if ((((fVar34 <= DAT_010321cc) || (fVar24 <= DAT_010321cc)) || (unaff_s15 <= DAT_010321cc)) ||
         (unaff_s11 <= DAT_010321cc)) {
LAB_05e6d0c4:
        if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
          return;
        }
        goto LAB_05e6d348;
      }
      FUN_05d9d08c(unaff_x20 + 0x20,0);
      uVar17 = FUN_05e0ab70(&stack0x000004c8,0);
      if (((uVar17 & 1) == 0) || (unaff_x20[0x1f] != 2.8026e-45)) {
        FUN_05d9d0a0(unaff_x20 + 0x20,0);
        uVar17 = FUN_05e0ab70(&stack0x000004c8,0);
        if (((uVar17 & 1) != 0) && (unaff_x20[0x1e] == 2.8026e-45)) {
          fVar33 = 1.0 / fVar34;
          fVar34 = unaff_s15 * fVar33 + 0.5;
          iVar13 = -0x80000000;
          if (fVar34 != INFINITY) {
            iVar13 = (int)fVar34;
          }
          if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar13 = FUN_04d7c48c(iVar13,1,0);
          fVar34 = unaff_s15 / (float)iVar13;
          fVar24 = fVar33 * fVar24 * fVar34;
          goto LAB_05e6c240;
        }
      }
      else {
        fVar33 = 1.0 / fVar24;
        fVar24 = unaff_s11 * fVar33 + 0.5;
        iVar13 = -0x80000000;
        if (fVar24 != INFINITY) {
          iVar13 = (int)fVar24;
        }
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar13 = FUN_04d7c48c(iVar13,1,0);
        fVar24 = unaff_s11 / (float)iVar13;
        fVar34 = fVar33 * fVar34 * fVar24;
LAB_05e6c240:
        fStack0000000000000040 = 0.0;
        fStack000000000000003c = 0.0;
      }
      puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_85__;
      puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_84__;
      uVar7 = _UNK_01032d88;
      uVar22 = _DAT_01032d80;
      fVar33 = DAT_010328d0;
      uVar17 = 0;
      fStack000000000000006c = unaff_s15;
      bVar12 = true;
      do {
        bVar6 = bVar12;
        fVar28 = 0.0;
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
        iVar13 = *(int *)((long)unaff_x20 + lVar15);
        lVar15 = 100;
        if (!bVar6) {
          lVar15 = 0x70;
        }
        iVar3 = *(int *)((long)unaff_x20 + lVar16);
        fVar31 = *(float *)((long)unaff_x20 + lVar15);
        if ((int)uVar2 < 2) {
          if (uVar2 == 0) {
            lVar15 = *unaff_x21;
            fVar28 = fVar34;
            if (!bVar6) {
              fVar28 = fVar24;
            }
            if (lVar15 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_05e6d1fc;
            lVar15 = *(long *)(lVar15 + uVar17 * 8 + 0x20);
            if (lVar15 == 0) goto LAB_05e6d1e4;
            lVar16 = *(long *)(lVar15 + 0x10);
            lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_05e6d1e4;
            uVar5 = *(uint *)(lVar15 + 0x18);
            if (uVar5 < *(uint *)(lVar16 + 0x18)) {
              lVar16 = lVar16 + (long)(int)uVar5 * 0x20;
              *(uint *)(lVar15 + 0x18) = uVar5 + 1;
              *(float *)(lVar16 + 0x20) = fStack000000000000003c;
              *(float *)(lVar16 + 0x24) = fStack0000000000000040;
              *(float *)(lVar16 + 0x28) = fVar34;
              *(float *)(lVar16 + 0x2c) = fVar24;
              *(undefined8 *)(lVar16 + 0x38) = uVar7;
              *(undefined8 *)(lVar16 + 0x30) = uVar22;
            }
            else {
              uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
              in_stack_00000438 = CONCAT44(fVar24,fVar34);
              unaff_x25[3] = uVar7;
              unaff_x25[2] = uVar22;
              FUN_038e04ec(lVar15,&stack0x00000430,uVar21);
            }
          }
          else if (uVar2 == 1) {
            fVar32 = fVar34;
            fVar25 = unaff_s15;
            if (!bVar6) {
              fVar32 = fVar24;
              fVar25 = unaff_s11;
            }
            uVar5 = 0x80000000;
            if (fVar25 / fVar32 != INFINITY) {
              uVar5 = (int)(fVar25 / fVar32);
            }
            if (-1 < (int)uVar5) {
              lVar15 = *unaff_x21;
              if (lVar15 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_05e6d1fc;
              lVar15 = *(long *)(lVar15 + uVar17 * 8 + 0x20);
              if (lVar15 == 0) goto LAB_05e6d1e4;
              lVar16 = *(long *)(lVar15 + 0x10);
              lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_05e6d1e4;
              uVar14 = *(uint *)(lVar15 + 0x18);
              if (uVar14 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)uVar14 * 0x20;
                *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                *(float *)(lVar16 + 0x20) = fStack000000000000003c;
                *(float *)(lVar16 + 0x24) = fStack0000000000000040;
                *(float *)(lVar16 + 0x28) = fVar34;
                *(float *)(lVar16 + 0x2c) = fVar24;
                *(undefined8 *)(lVar16 + 0x38) = uVar7;
                *(undefined8 *)(lVar16 + 0x30) = uVar22;
              }
              else {
                uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
                in_stack_00000430 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
                in_stack_00000438 = CONCAT44(fVar24,fVar34);
                unaff_x25[3] = uVar7;
                unaff_x25[2] = uVar22;
                FUN_038e04ec(lVar15,&stack0x00000430,uVar21);
              }
              fVar28 = fVar32;
              if (1 < uVar5) {
                lVar15 = *unaff_x21;
                fVar30 = fStack0000000000000040;
                fVar11 = unaff_s15 - fVar34;
                if (!bVar6) {
                  fVar30 = unaff_s11 - fVar24;
                  fVar11 = fStack000000000000003c;
                }
                if (lVar15 == 0) goto LAB_05e6d1e4;
                if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_05e6d1fc;
                lVar15 = *(long *)(lVar15 + uVar17 * 8 + 0x20);
                if (lVar15 == 0) goto LAB_05e6d1e4;
                lVar16 = *(long *)(lVar15 + 0x10);
                lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_05e6d1e4;
                uVar14 = *(uint *)(lVar15 + 0x18);
                if (uVar14 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar14 * 0x20;
                  *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                  *(float *)(lVar16 + 0x20) = fVar11;
                  *(float *)(lVar16 + 0x24) = fVar30;
                  *(float *)(lVar16 + 0x28) = fVar34;
                  *(float *)(lVar16 + 0x2c) = fVar24;
                  *(undefined8 *)(lVar16 + 0x38) = uVar7;
                  *(undefined8 *)(lVar16 + 0x30) = uVar22;
                }
                else {
                  uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
                  in_stack_00000430 = (double)CONCAT44(fVar30,fVar11);
                  in_stack_00000438 = CONCAT44(fVar24,fVar34);
                  unaff_x25[3] = uVar7;
                  unaff_x25[2] = uVar22;
                  FUN_038e04ec(lVar15,&stack0x00000430,uVar21);
                }
                unaff_s15 = fStack000000000000006c;
                fVar28 = fVar25;
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
                    lVar15 = *unaff_x21;
                    *pfVar1 = (fVar27 + (fVar25 - fVar32 * (float)(int)uVar5) /
                                        (float)(int)(uVar5 - 1)) * (float)iVar23;
                    if (lVar15 == 0) goto LAB_05e6d1e4;
                    if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_05e6d1fc;
                    lVar15 = *(long *)(lVar15 + uVar17 * 8 + 0x20);
                    if (lVar15 == 0) goto LAB_05e6d1e4;
                    lVar16 = *(long *)(lVar15 + 0x10);
                    lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                    if (lVar16 == 0) goto LAB_05e6d1e4;
                    uVar14 = *(uint *)(lVar15 + 0x18);
                    if (uVar14 < *(uint *)(lVar16 + 0x18)) {
                      lVar16 = lVar16 + (long)(int)uVar14 * 0x20;
                      *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                      *(float *)(lVar16 + 0x20) = fVar11;
                      *(float *)(lVar16 + 0x24) = fVar30;
                      *(float *)(lVar16 + 0x28) = fVar34;
                      *(float *)(lVar16 + 0x2c) = fVar24;
                      *(undefined8 *)(lVar16 + 0x38) = uVar7;
                      *(undefined8 *)(lVar16 + 0x30) = uVar22;
                    }
                    else {
                      uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
                      in_stack_00000430 = (double)CONCAT44(fVar30,fVar11);
                      in_stack_00000438 = CONCAT44(fVar24,fVar34);
                      unaff_x25[3] = uVar7;
                      unaff_x25[2] = uVar22;
                      FUN_038e04ec(lVar15,&stack0x00000430,uVar21);
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
          uVar14 = FUN_04d7c48c(iVar23,1,0);
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
            fVar24 = fVar32;
            fVar25 = fVar34;
          }
          fVar34 = fVar25;
          if (0 < (int)uVar5) {
            fVar28 = 0.0;
            uVar14 = 0;
            fVar25 = fStack000000000000003c;
            fVar30 = fStack0000000000000040;
            do {
              lVar15 = *unaff_x21;
              fVar11 = fVar32 * (float)(int)uVar14;
              if (!bVar6) {
                fVar30 = fVar32 * (float)(int)uVar14;
                fVar11 = fVar25;
              }
              fVar25 = fVar11;
              if (lVar15 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_05e6d1fc;
              lVar15 = *(long *)(lVar15 + uVar17 * 8 + 0x20);
              if (lVar15 == 0) goto LAB_05e6d1e4;
              lVar16 = *(long *)(lVar15 + 0x10);
              lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_05e6d1e4;
              uVar4 = *(uint *)(lVar15 + 0x18);
              if (uVar4 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)uVar4 * 0x20;
                *(uint *)(lVar15 + 0x18) = uVar4 + 1;
                *(float *)(lVar16 + 0x20) = fVar25;
                *(float *)(lVar16 + 0x24) = fVar30;
                *(float *)(lVar16 + 0x28) = fVar34;
                *(float *)(lVar16 + 0x2c) = fVar24;
                *(undefined8 *)(lVar16 + 0x38) = uVar7;
                *(undefined8 *)(lVar16 + 0x30) = uVar22;
              }
              else {
                uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
                in_stack_00000430 = (double)CONCAT44(fVar30,fVar25);
                in_stack_00000438 = CONCAT44(fVar24,fVar34);
                unaff_x25[3] = uVar7;
                unaff_x25[2] = uVar22;
                FUN_038e04ec(lVar15,&stack0x00000430,uVar21);
              }
              fVar28 = fVar32 + fVar28;
              uVar14 = uVar14 + 1;
              unaff_s15 = fStack000000000000006c;
            } while (uVar5 != uVar14);
          }
        }
        else if (uVar2 == 3) {
          fVar32 = fVar34;
          fVar25 = unaff_s15;
          if (!bVar6) {
            fVar32 = fVar24;
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
              lVar15 = *unaff_x21;
              fVar11 = fVar34 * (float)(int)uVar14;
              if (!bVar6) {
                fVar11 = fVar30;
                fVar25 = fVar24 * (float)(int)uVar14;
              }
              fVar30 = fVar11;
              if (lVar15 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_05e6d1fc;
              lVar15 = *(long *)(lVar15 + uVar17 * 8 + 0x20);
              if (lVar15 == 0) goto LAB_05e6d1e4;
              lVar16 = *(long *)(lVar15 + 0x10);
              lVar19 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_05e6d1e4;
              uVar4 = *(uint *)(lVar15 + 0x18);
              if (uVar4 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)uVar4 * 0x20;
                *(uint *)(lVar15 + 0x18) = uVar4 + 1;
                *(float *)(lVar16 + 0x20) = fVar30;
                *(float *)(lVar16 + 0x24) = fVar25;
                *(float *)(lVar16 + 0x28) = fVar34;
                *(float *)(lVar16 + 0x2c) = fVar24;
                *(undefined8 *)(lVar16 + 0x38) = uVar7;
                *(undefined8 *)(lVar16 + 0x30) = uVar22;
              }
              else {
                uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70);
                in_stack_00000430 = (double)CONCAT44(fVar25,fVar30);
                in_stack_00000438 = CONCAT44(fVar24,fVar34);
                unaff_x25[3] = uVar7;
                unaff_x25[2] = uVar22;
                FUN_038e04ec(lVar15,&stack0x00000430,uVar21);
              }
              fVar28 = fVar28 + fVar32;
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
          fVar32 = (fVar31 - fVar28) * 0.5;
LAB_05e6c8bc:
          uVar21 = *(undefined8 *)(unaff_x20 + 0x28);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar18 = FUN_05c8e378(uVar21,0,0);
          if ((uVar18 & 1) != 0) {
            uVar21 = *(undefined8 *)(unaff_x20 + 0x2a);
            if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar18 = FUN_05c8e378(uVar21,0,0);
            if ((uVar18 & 1) != 0) {
              fVar28 = fVar34;
              if (!bVar6) {
                fVar28 = fVar24;
              }
              fVar28 = fVar28 * in_stack_00000030._4_4_;
              dVar26 = modf((double)fVar28,(double *)&stack0x00000430);
              if (0.0 <= fVar28) {
                if (dVar26 == 0.5) {
                  fVar31 = 1.0;
                  goto LAB_05e6caf0;
                }
                fVar25 = (float)(int)(fVar28 + 0.5);
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
                fVar25 = (float)(int)(fVar28 + -0.5);
              }
              if (ABS(fVar25 - fVar28) < fVar33) {
                fVar32 = (float)FUN_05d9b054(fVar32,in_stack_00000030._4_4_,DAT_01031fc8,0);
              }
            }
          }
LAB_05e6c96c:
          if ((uVar2 & 0xfffffffe) == 2) {
            fVar28 = fVar34;
            if (!bVar6) {
              fVar28 = fVar24;
            }
            if (fVar29 < fVar28) {
              if (fVar32 < -fVar28) {
                fVar31 = -2.1474836e+09;
                if (-fVar32 / fVar28 != INFINITY) {
                  fVar31 = (float)(int)(-fVar32 / fVar28);
                }
                fVar32 = fVar32 + fVar28 * fVar31;
              }
              if (0.0 < fVar32) {
                fVar31 = -2.1474836e+09;
                if (fVar32 / fVar28 != INFINITY) {
                  fVar31 = (float)((int)(fVar32 / fVar28) + 1);
                }
                fVar32 = fVar32 - fVar28 * fVar31;
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
              fVar25 = fVar34;
              fVar32 = unaff_s15;
              if (!bVar6) {
                fVar25 = fVar24;
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
              fVar32 = (fVar32 - fVar28) - fVar31;
            }
            if (bVar12) goto LAB_05e6c8bc;
            goto LAB_05e6c96c;
          }
        }
        lVar15 = *unaff_x21;
        if (lVar15 == 0) goto LAB_05e6d1e4;
        iVar13 = 0;
        while( true ) {
          puVar10 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_05e6d1fc;
          lVar16 = *(long *)(lVar15 + uVar17 * 8 + 0x20);
          if (lVar16 == 0) goto LAB_05e6d1e4;
          if (*(int *)(lVar16 + 0x18) <= iVar13) break;
          FUN_038e01b0(&stack0x00000430,lVar16,iVar13,*(undefined8 *)puVar9);
          fVar28 = (float)((ulong)in_stack_00000430 >> 0x20);
          lVar15 = *unaff_x21;
          fVar31 = SUB84(in_stack_00000430,0);
          if (!bVar6) {
            fVar31 = fVar28;
          }
          unaff_x25[0x15] = in_stack_00000440;
          unaff_x25[0x14] = in_stack_00000438;
          fVar25 = fVar32 + fVar31;
          if (!bVar6) {
            fVar28 = fVar32 + fVar31;
            fVar25 = SUB84(in_stack_00000430,0);
          }
          if (lVar15 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_05e6d1fc;
          lVar15 = *(long *)(lVar15 + uVar17 * 8 + 0x20);
          if (lVar15 == 0) goto LAB_05e6d1e4;
          in_stack_00000440 = unaff_x25[0x15];
          in_stack_00000438 = unaff_x25[0x14];
          in_stack_00000430 = (double)CONCAT44(fVar28,fVar25);
          FUN_038e0210(lVar15,iVar13,&stack0x00000430,*(undefined8 *)puVar8);
          lVar15 = *unaff_x21;
          iVar13 = iVar13 + 1;
          if (lVar15 == 0) goto LAB_05e6d1e4;
        }
        uVar17 = 1;
        bVar12 = false;
      } while (bVar6);
      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
LAB_05e6d1fc:
        lVar15 = *(long *)(unaff_x27 + 0x28);
        goto LAB_05e6d204;
      }
      if ((*(long *)(lVar15 + 0x28) != 0) && (*(long *)(lVar15 + 0x20) != 0)) {
        if (1 < *(int *)(*(long *)(lVar15 + 0x20) + 0x18) *
                *(int *)(*(long *)(lVar15 + 0x28) + 0x18)) {
          uVar22 = *(undefined8 *)(unaff_x20 + 0x2a);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar17 = FUN_05c8e378(uVar22,0,0);
          if ((uVar17 & 1) != 0) {
            plVar20 = (long *)(unaff_x19 + 0x20);
            lVar15 = *plVar20;
            if (lVar15 == 0) {
              lVar15 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
              FUN_03abe564(lVar15,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
              *plVar20 = lVar15;
              thunk_FUN_02bb0e9c(plVar20,lVar15);
              lVar15 = *plVar20;
            }
            *(long *)(unaff_x20 + 0x14) = lVar15;
            thunk_FUN_02bb0e9c();
            if (*plVar20 == 0) goto LAB_05e6d1e4;
            fVar24 = (float)FUN_03abe980(*plVar20,*(undefined8 *)puVar10);
            unaff_x20[0x16] = fVar24;
          }
        }
        puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
        lVar15 = *unaff_x21;
        if (lVar15 != 0) {
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
          if (*(long *)(lVar15 + 0x28) != 0) {
            FUN_038e10a8(&stack0x00000430,*(long *)(lVar15 + 0x28),
                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
            puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
            iVar13 = 0;
            unaff_x25[0xd] = unaff_x25[1];
            unaff_x25[0xc] = *unaff_x25;
            unaff_x25[0xf] = unaff_x25[3];
            unaff_x25[0xe] = unaff_x25[2];
            unaff_x25[0x11] = unaff_x25[5];
            unaff_x25[0x10] = unaff_x25[4];
            while (uVar17 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar8), (uVar17 & 1) != 0)
            {
              fVar24 = in_stack_000004a4;
              fVar34 = in_stack_000004ac;
              if (in_stack_000004a4 < in_stack_00000068) {
                fVar24 = in_stack_00000068;
                fVar34 = in_stack_000004ac - (in_stack_00000068 - in_stack_000004a4);
              }
              if (unaff_s11 + in_stack_00000068 < fVar34 + fVar24) {
                fVar34 = fVar34 - ((fVar34 + fVar24) - (unaff_s11 + in_stack_00000068));
              }
              uVar22 = *(undefined8 *)(unaff_x20 + 0x2a);
              if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c8e378(uVar22,0,0);
              lVar15 = *unaff_x21;
              if (lVar15 == 0) {
                if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e6d348;
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                goto LAB_05e6d348;
              }
              if (*(long *)(lVar15 + 0x20) == 0) {
                if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e6d348;
              }
              FUN_038e10a8(&stack0x00000430,*(long *)(lVar15 + 0x20),*(undefined8 *)puVar9);
              unaff_x25[7] = unaff_x25[1];
              unaff_x25[6] = *unaff_x25;
              unaff_x25[9] = unaff_x25[3];
              unaff_x25[8] = unaff_x25[2];
              unaff_x25[0xb] = unaff_x25[5];
              unaff_x25[10] = unaff_x25[4];
              while (uVar17 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar8),
                    (uVar17 & 1) != 0) {
                fVar29 = in_stack_00000470;
                fVar33 = in_stack_00000478;
                if (in_stack_00000470 < in_stack_00000070._4_4_) {
                  fVar29 = in_stack_00000070._4_4_;
                  fVar33 = in_stack_00000478 - (in_stack_00000070._4_4_ - in_stack_00000470);
                }
                if (unaff_s15 + in_stack_00000070._4_4_ < fVar33 + fVar29) {
                  fVar33 = fVar33 - ((fVar33 + fVar29) - (unaff_s15 + in_stack_00000070._4_4_));
                }
                memcpy(&stack0x000002e8,unaff_x20,0x138);
                FUN_05e6359c(fVar29,fVar24,fVar33,fVar34,in_stack_00000070._4_4_,in_stack_00000068,
                             fStack000000000000006c,unaff_s11);
                iVar13 = iVar13 + 1;
                if ((0x3c < iVar13) && (*(long *)(unaff_x20 + 0x14) != 0)) {
                  if (*(long *)(unaff_x19 + 0x20) == 0) {
                    if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e6d348;
                  }
                  fVar29 = (float)FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar10);
                  unaff_x20[0x17] = fVar29;
                  memcpy(&stack0x000001b0,unaff_x20,0x138);
                  FUN_05e618b0();
                  iVar13 = 0;
                  unaff_x20[0x16] = unaff_x20[0x17];
                }
              }
              FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__)
              ;
            }
            FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
            if ((*(long *)(unaff_x20 + 0x14) != 0) && (0 < iVar13)) {
              if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05e6d278;
              fVar24 = (float)FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar10);
              unaff_x20[0x17] = fVar24;
              memcpy(&stack0x00000078,unaff_x20,0x138);
              FUN_05e618b0();
            }
            goto LAB_05e6d0c4;
          }
        }
      }
LAB_05e6d1e4:
      lVar15 = *(long *)(unaff_x27 + 0x28);
    }
    if (lVar15 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


