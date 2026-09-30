/*
FUNCTION_NAME: UnityEngine.CanvasRenderer$$Clear_Injected
ENTRY_POINT: 05e6bc68
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_CanvasRenderer__Clear_Injected
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6,
               float *param_7)

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
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000074;
  double in_stack_00000430;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  
  lVar19 = tpidr_el0;
  lVar17 = *(long *)(lVar19 + 0x28);
  fStack0000000000000034 = param_5;
  fStack0000000000000074 = param_1;
  if (DAT_066dc68b == '\0') {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_77__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_78__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_79__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_8__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_80__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_81__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_82__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_83__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_84__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_85__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_86__);
    FUN_02b3c81c(PTR_DAT_06312c90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_87__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_88__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_89__);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066dc68b = '\x01';
  }
  plVar22 = (long *)(param_6 + 0x18);
  lVar18 = *plVar22;
  if (lVar18 == 0) {
    lVar18 = FUN_02b3c908(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_79__,2);
    *plVar22 = lVar18;
    thunk_FUN_02bb0e9c(plVar22,lVar18);
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_86__;
    plVar25 = (long *)*plVar22;
    lVar18 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_86__);
    puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_82__;
    FUN_038dfc18(lVar18,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_82__);
    if (plVar25 == (long *)0x0) goto LAB_05e6d278;
    if ((lVar18 != 0) &&
       (lVar21 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar25 + 0x40)), lVar21 == 0)) {
LAB_05e6d2a0:
      if (*(long *)(lVar19 + 0x28) == lVar17) {
        uVar24 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar24,0);
      }
      goto LAB_05e6d348;
    }
    if ((int)plVar25[3] != 0) {
      plVar25[4] = lVar18;
      thunk_FUN_02bb0e9c(plVar25 + 4,lVar18);
      plVar25 = (long *)*plVar22;
      lVar18 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
      FUN_038dfc18(lVar18,*(undefined8 *)puVar9);
      if (plVar25 == (long *)0x0) goto LAB_05e6d278;
      if ((lVar18 != 0) &&
         (lVar21 = thunk_FUN_02b79548(lVar18,*(undefined8 *)(*plVar25 + 0x40)), lVar21 == 0))
      goto LAB_05e6d2a0;
      if ((*(uint *)(plVar25 + 3) & 0xfffffffe) != 0) {
        plVar25[5] = lVar18;
        thunk_FUN_02bb0e9c(plVar25 + 5,lVar18);
        goto LAB_05e6beb4;
      }
    }
LAB_05e6d280:
    lVar19 = *(long *)(lVar19 + 0x28);
  }
  else {
    iVar13 = *(int *)(lVar18 + 0x18);
    if (iVar13 == 0) goto LAB_05e6d280;
    lVar21 = *(long *)(lVar18 + 0x20);
    if (lVar21 == 0) {
LAB_05e6d278:
      lVar19 = *(long *)(lVar19 + 0x28);
LAB_05e6d1ec:
      if (lVar19 == lVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e6d348;
    }
    *(undefined4 *)(lVar21 + 0x18) = 0;
    *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
    if (iVar13 == 1) goto LAB_05e6d280;
    lVar18 = *(long *)(lVar18 + 0x28);
    if (lVar18 == 0) goto LAB_05e6d278;
    *(undefined4 *)(lVar18 + 0x18) = 0;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
LAB_05e6beb4:
    fStack000000000000003c = *param_7;
    fStack0000000000000040 = param_7[1];
    fVar37 = param_7[2];
    fVar33 = param_7[3];
    iVar13 = FUN_05d9d030(param_7 + 0x20,0);
    fVar38 = fVar37;
    fVar27 = fVar33;
    if (iVar13 == 0) {
      FUN_05d9d08c(param_7 + 0x20,0);
      uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
      if ((uVar15 & 1) != 0) {
        FUN_05d9d0a0(param_7 + 0x20,0);
        uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
        if ((uVar15 & 1) != 0) goto LAB_05e6c0dc;
      }
      FUN_05d9d08c(param_7 + 0x20,0);
      uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
      if ((uVar15 & 1) == 0) {
        FUN_05d9d0a0(param_7 + 0x20,0);
        uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
        if ((uVar15 & 1) != 0) {
          uVar15 = FUN_05d9d08c(param_7 + 0x20,0);
          uVar16 = FUN_05d9d08c(param_7 + 0x20,0);
          if (uVar15 >> 0x20 == 1) {
            fVar38 = (param_3 * (float)uVar16) / 100.0;
          }
          else {
            if (uVar16 >> 0x20 != 0) goto LAB_05e6c0dc;
            fVar38 = (float)FUN_05d9d08c(param_7 + 0x20,0);
          }
          fVar27 = (fVar33 * fVar38) / fVar37;
          goto LAB_05e6c0dc;
        }
      }
      FUN_05d9d08c(param_7 + 0x20,0);
      uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
      if ((uVar15 & 1) == 0) {
        FUN_05d9d0a0(param_7 + 0x20,0);
        uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
        if ((uVar15 & 1) == 0) {
          FUN_05d9d08c(param_7 + 0x20,0);
          uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_05d9d08c(param_7 + 0x20,0);
            uVar16 = FUN_05d9d08c(param_7 + 0x20,0);
            if (uVar15 >> 0x20 == 1) {
              fVar38 = (param_3 * (float)uVar16) / 100.0;
            }
            else if (uVar16 >> 0x20 == 0) {
              fVar38 = (float)FUN_05d9d08c(param_7 + 0x20,0);
            }
          }
          FUN_05d9d0a0(param_7 + 0x20,0);
          uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_05d9d0a0(param_7 + 0x20,0);
            uVar16 = FUN_05d9d0a0(param_7 + 0x20,0);
            if (uVar15 >> 0x20 == 1) {
              fVar27 = (param_4 * (float)uVar16) / 100.0;
            }
            else if (uVar16 >> 0x20 == 0) {
              fVar27 = (float)FUN_05d9d0a0(param_7 + 0x20,0);
            }
            FUN_05d9d08c(param_7 + 0x20,0);
            uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
            if ((uVar15 & 1) != 0) goto LAB_05e6bff8;
          }
        }
      }
    }
    else {
      iVar13 = FUN_05d9d030(param_7 + 0x20,0);
      if (iVar13 == 2) {
        fVar27 = param_4;
        if (param_4 / fVar33 <= param_3 / fVar37) {
LAB_05e6bff8:
          fVar38 = (fVar27 * fVar37) / fVar33;
        }
        else {
LAB_05e6bef4:
          fVar38 = param_3;
          fVar27 = (param_3 * fVar33) / fVar37;
        }
      }
      else {
        iVar13 = FUN_05d9d030(param_7 + 0x20,0);
        if (iVar13 == 1) {
          fVar27 = param_4;
          if (param_3 / fVar37 <= param_4 / fVar33) goto LAB_05e6bff8;
          goto LAB_05e6bef4;
        }
      }
    }
LAB_05e6c0dc:
    fVar33 = DAT_010321cc;
    if ((((fVar38 <= DAT_010321cc) || (fVar27 <= DAT_010321cc)) || (param_3 <= DAT_010321cc)) ||
       (param_4 <= DAT_010321cc)) {
LAB_05e6d0c4:
      if (*(long *)(lVar19 + 0x28) == lVar17) {
        return;
      }
      goto LAB_05e6d348;
    }
    FUN_05d9d08c(param_7 + 0x20,0);
    uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
    if (((uVar15 & 1) == 0) || (param_7[0x1f] != 2.8026e-45)) {
      FUN_05d9d0a0(param_7 + 0x20,0);
      uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
      if (((uVar15 & 1) != 0) && (param_7[0x1e] == 2.8026e-45)) {
        fVar37 = 1.0 / fVar38;
        fVar38 = param_3 * fVar37 + 0.5;
        iVar13 = -0x80000000;
        if (fVar38 != INFINITY) {
          iVar13 = (int)fVar38;
        }
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar13 = FUN_04d7c48c(iVar13,1,0);
        fVar38 = param_3 / (float)iVar13;
        fVar27 = fVar37 * fVar27 * fVar38;
        goto LAB_05e6c240;
      }
    }
    else {
      fVar37 = 1.0 / fVar27;
      fVar27 = param_4 * fVar37 + 0.5;
      iVar13 = -0x80000000;
      if (fVar27 != INFINITY) {
        iVar13 = (int)fVar27;
      }
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar13 = FUN_04d7c48c(iVar13,1,0);
      fVar27 = param_4 / (float)iVar13;
      fVar38 = fVar37 * fVar38 * fVar27;
LAB_05e6c240:
      fStack0000000000000040 = 0.0;
      fStack000000000000003c = 0.0;
    }
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_85__;
    puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_84__;
    uVar7 = _UNK_01032d88;
    uVar24 = _DAT_01032d80;
    fVar37 = DAT_010328d0;
    uVar15 = 0;
    fVar28 = 1.0 / fStack0000000000000034;
    bVar12 = true;
    do {
      bVar6 = bVar12;
      fVar32 = 0.0;
      lVar18 = 0x78;
      if (!bVar6) {
        lVar18 = 0x7c;
      }
      uVar2 = *(uint *)((long)param_7 + lVar18);
      lVar18 = 0x60;
      if (!bVar6) {
        lVar18 = 0x6c;
      }
      lVar21 = 0x68;
      if (!bVar6) {
        lVar21 = 0x74;
      }
      iVar13 = *(int *)((long)param_7 + lVar18);
      lVar18 = 100;
      if (!bVar6) {
        lVar18 = 0x70;
      }
      iVar3 = *(int *)((long)param_7 + lVar21);
      fVar35 = *(float *)((long)param_7 + lVar18);
      if ((int)uVar2 < 2) {
        if (uVar2 == 0) {
          lVar18 = *plVar22;
          fVar32 = fVar38;
          if (!bVar6) {
            fVar32 = fVar27;
          }
          if (lVar18 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_05e6d1fc;
          lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
          if (lVar18 == 0) goto LAB_05e6d1e4;
          lVar21 = *(long *)(lVar18 + 0x10);
          lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar21 == 0) goto LAB_05e6d1e4;
          uVar5 = *(uint *)(lVar18 + 0x18);
          if (uVar5 < *(uint *)(lVar21 + 0x18)) {
            lVar21 = lVar21 + (long)(int)uVar5 * 0x20;
            *(uint *)(lVar18 + 0x18) = uVar5 + 1;
            *(float *)(lVar21 + 0x20) = fStack000000000000003c;
            *(float *)(lVar21 + 0x24) = fStack0000000000000040;
            *(float *)(lVar21 + 0x28) = fVar38;
            *(float *)(lVar21 + 0x2c) = fVar27;
            *(undefined8 *)(lVar21 + 0x38) = uVar7;
            *(undefined8 *)(lVar21 + 0x30) = uVar24;
          }
          else {
            in_stack_00000430 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
            FUN_038e04ec(lVar18,&stack0x00000430,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            in_stack_00000440 = uVar24;
            in_stack_00000448 = uVar7;
          }
        }
        else if (uVar2 == 1) {
          fVar36 = fVar38;
          fVar29 = param_3;
          if (!bVar6) {
            fVar36 = fVar27;
            fVar29 = param_4;
          }
          uVar5 = 0x80000000;
          if (fVar29 / fVar36 != INFINITY) {
            uVar5 = (int)(fVar29 / fVar36);
          }
          if (-1 < (int)uVar5) {
            lVar18 = *plVar22;
            if (lVar18 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_05e6d1fc;
            lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
            if (lVar18 == 0) goto LAB_05e6d1e4;
            lVar21 = *(long *)(lVar18 + 0x10);
            lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_05e6d1e4;
            uVar14 = *(uint *)(lVar18 + 0x18);
            if (uVar14 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar14 * 0x20;
              *(uint *)(lVar18 + 0x18) = uVar14 + 1;
              *(float *)(lVar21 + 0x20) = fStack000000000000003c;
              *(float *)(lVar21 + 0x24) = fStack0000000000000040;
              *(float *)(lVar21 + 0x28) = fVar38;
              *(float *)(lVar21 + 0x2c) = fVar27;
              *(undefined8 *)(lVar21 + 0x38) = uVar7;
              *(undefined8 *)(lVar21 + 0x30) = uVar24;
            }
            else {
              in_stack_00000430 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
              FUN_038e04ec(lVar18,&stack0x00000430,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              in_stack_00000440 = uVar24;
              in_stack_00000448 = uVar7;
            }
            fVar32 = fVar36;
            if (1 < uVar5) {
              lVar18 = *plVar22;
              fVar34 = fStack0000000000000040;
              fVar11 = param_3 - fVar38;
              if (!bVar6) {
                fVar34 = param_4 - fVar27;
                fVar11 = fStack000000000000003c;
              }
              if (lVar18 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_05e6d1fc;
              lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
              if (lVar18 == 0) goto LAB_05e6d1e4;
              lVar21 = *(long *)(lVar18 + 0x10);
              lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar21 == 0) goto LAB_05e6d1e4;
              uVar14 = *(uint *)(lVar18 + 0x18);
              if (uVar14 < *(uint *)(lVar21 + 0x18)) {
                lVar21 = lVar21 + (long)(int)uVar14 * 0x20;
                *(uint *)(lVar18 + 0x18) = uVar14 + 1;
                *(float *)(lVar21 + 0x20) = fVar11;
                *(float *)(lVar21 + 0x24) = fVar34;
                *(float *)(lVar21 + 0x28) = fVar38;
                *(float *)(lVar21 + 0x2c) = fVar27;
                *(undefined8 *)(lVar21 + 0x38) = uVar7;
                *(undefined8 *)(lVar21 + 0x30) = uVar24;
              }
              else {
                in_stack_00000430 = (double)CONCAT44(fVar34,fVar11);
                FUN_038e04ec(lVar18,&stack0x00000430,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                in_stack_00000440 = uVar24;
                in_stack_00000448 = uVar7;
              }
              fVar32 = fVar29;
              if (uVar5 != 2) {
                iVar26 = 0;
                pfVar1 = (float *)&stack0x000004c4;
                if (!bVar6) {
                  pfVar1 = (float *)&stack0x000004c0;
                }
                fVar31 = fVar38;
                if (!bVar6) {
                  fVar31 = fVar27;
                }
                do {
                  iVar26 = iVar26 + 1;
                  lVar18 = *plVar22;
                  *pfVar1 = (fVar31 + (fVar29 - fVar36 * (float)(int)uVar5) /
                                      (float)(int)(uVar5 - 1)) * (float)iVar26;
                  if (lVar18 == 0) goto LAB_05e6d1e4;
                  if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_05e6d1fc;
                  lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
                  if (lVar18 == 0) goto LAB_05e6d1e4;
                  lVar21 = *(long *)(lVar18 + 0x10);
                  lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                  *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                  if (lVar21 == 0) goto LAB_05e6d1e4;
                  uVar14 = *(uint *)(lVar18 + 0x18);
                  if (uVar14 < *(uint *)(lVar21 + 0x18)) {
                    lVar21 = lVar21 + (long)(int)uVar14 * 0x20;
                    *(uint *)(lVar18 + 0x18) = uVar14 + 1;
                    *(float *)(lVar21 + 0x20) = fVar11;
                    *(float *)(lVar21 + 0x24) = fVar34;
                    *(float *)(lVar21 + 0x28) = fVar38;
                    *(float *)(lVar21 + 0x2c) = fVar27;
                    *(undefined8 *)(lVar21 + 0x38) = uVar7;
                    *(undefined8 *)(lVar21 + 0x30) = uVar24;
                  }
                  else {
                    in_stack_00000430 = (double)CONCAT44(fVar34,fVar11);
                    FUN_038e04ec(lVar18,&stack0x00000430,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                    ;
                    in_stack_00000440 = uVar24;
                    in_stack_00000448 = uVar7;
                  }
                } while (iVar26 < (int)(uVar5 - 2));
              }
            }
          }
        }
      }
      else if (uVar2 == 2) {
        fVar36 = param_3;
        fVar29 = fVar38;
        if (!bVar6) {
          fVar36 = param_4;
          fVar29 = fVar27;
        }
        fVar29 = (fVar36 + fVar29 * 0.5) / fVar29;
        iVar26 = -0x80000000;
        if (fVar29 != INFINITY) {
          iVar26 = (int)fVar29;
        }
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = FUN_04d7c48c(iVar26,1,0);
        uVar5 = uVar14 | 1;
        if ((uVar14 & 1) != 0) {
          uVar5 = uVar14 + 2;
        }
        if (iVar13 != 0) {
          uVar5 = uVar14 + 1;
        }
        fVar36 = fVar36 / (float)(int)uVar14;
        fVar29 = fVar36;
        if (!bVar6) {
          fVar27 = fVar36;
          fVar29 = fVar38;
        }
        fVar38 = fVar29;
        if (0 < (int)uVar5) {
          fVar32 = 0.0;
          uVar14 = 0;
          fVar29 = fStack000000000000003c;
          fVar34 = fStack0000000000000040;
          do {
            lVar18 = *plVar22;
            fVar11 = fVar36 * (float)(int)uVar14;
            if (!bVar6) {
              fVar34 = fVar36 * (float)(int)uVar14;
              fVar11 = fVar29;
            }
            fVar29 = fVar11;
            if (lVar18 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_05e6d1fc;
            lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
            if (lVar18 == 0) goto LAB_05e6d1e4;
            lVar21 = *(long *)(lVar18 + 0x10);
            lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_05e6d1e4;
            uVar4 = *(uint *)(lVar18 + 0x18);
            if (uVar4 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar4 * 0x20;
              *(uint *)(lVar18 + 0x18) = uVar4 + 1;
              *(float *)(lVar21 + 0x20) = fVar29;
              *(float *)(lVar21 + 0x24) = fVar34;
              *(float *)(lVar21 + 0x28) = fVar38;
              *(float *)(lVar21 + 0x2c) = fVar27;
              *(undefined8 *)(lVar21 + 0x38) = uVar7;
              *(undefined8 *)(lVar21 + 0x30) = uVar24;
            }
            else {
              in_stack_00000430 = (double)CONCAT44(fVar34,fVar29);
              FUN_038e04ec(lVar18,&stack0x00000430,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              in_stack_00000440 = uVar24;
              in_stack_00000448 = uVar7;
            }
            fVar32 = fVar36 + fVar32;
            uVar14 = uVar14 + 1;
          } while (uVar5 != uVar14);
        }
      }
      else if (uVar2 == 3) {
        fVar36 = fVar38;
        fVar29 = param_3;
        if (!bVar6) {
          fVar36 = fVar27;
          fVar29 = param_4;
        }
        fVar29 = (fVar28 + fVar29) / fVar36;
        uVar5 = 0x80000000;
        if (fVar29 != INFINITY) {
          uVar5 = (int)fVar29;
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
          fVar34 = fStack000000000000003c;
          fVar29 = fStack0000000000000040;
          do {
            lVar18 = *plVar22;
            fVar11 = fVar38 * (float)(int)uVar14;
            if (!bVar6) {
              fVar11 = fVar34;
              fVar29 = fVar27 * (float)(int)uVar14;
            }
            fVar34 = fVar11;
            if (lVar18 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_05e6d1fc;
            lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
            if (lVar18 == 0) goto LAB_05e6d1e4;
            lVar21 = *(long *)(lVar18 + 0x10);
            lVar20 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_05e6d1e4;
            uVar4 = *(uint *)(lVar18 + 0x18);
            if (uVar4 < *(uint *)(lVar21 + 0x18)) {
              lVar21 = lVar21 + (long)(int)uVar4 * 0x20;
              *(uint *)(lVar18 + 0x18) = uVar4 + 1;
              *(float *)(lVar21 + 0x20) = fVar34;
              *(float *)(lVar21 + 0x24) = fVar29;
              *(float *)(lVar21 + 0x28) = fVar38;
              *(float *)(lVar21 + 0x2c) = fVar27;
              *(undefined8 *)(lVar21 + 0x38) = uVar7;
              *(undefined8 *)(lVar21 + 0x30) = uVar24;
            }
            else {
              in_stack_00000430 = (double)CONCAT44(fVar29,fVar34);
              FUN_038e04ec(lVar18,&stack0x00000430,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              in_stack_00000440 = uVar24;
              in_stack_00000448 = uVar7;
            }
            fVar32 = fVar32 + fVar36;
            uVar14 = uVar14 + 1;
          } while (uVar5 != uVar14);
        }
      }
      if (iVar13 == 0) {
        fVar35 = param_3;
        if (!bVar6) {
          fVar35 = param_4;
        }
        fVar36 = (fVar35 - fVar32) * 0.5;
LAB_05e6c8bc:
        uVar23 = *(undefined8 *)(param_7 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_05c8e378(uVar23,0,0);
        if ((uVar16 & 1) != 0) {
          uVar23 = *(undefined8 *)(param_7 + 0x2a);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar16 = FUN_05c8e378(uVar23,0,0);
          if ((uVar16 & 1) != 0) {
            fVar32 = fVar38;
            if (!bVar6) {
              fVar32 = fVar27;
            }
            fVar32 = fVar32 * fStack0000000000000034;
            dVar30 = modf((double)fVar32,(double *)&stack0x00000430);
            if (0.0 <= fVar32) {
              if (dVar30 == 0.5) {
                fVar35 = 1.0;
                goto LAB_05e6caf0;
              }
              fVar29 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar30 == -0.5) {
              fVar35 = -1.0;
LAB_05e6caf0:
              fVar29 = (float)in_stack_00000430;
              if (((long)in_stack_00000430 & 1U) != 0) {
                fVar29 = (float)in_stack_00000430 + fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar32 + -0.5);
            }
            if (ABS(fVar29 - fVar32) < fVar37) {
              fVar36 = (float)FUN_05d9b054(fVar36,fStack0000000000000034,DAT_01031fc8,0);
            }
          }
        }
LAB_05e6c96c:
        if ((uVar2 & 0xfffffffe) == 2) {
          fVar32 = fVar38;
          if (!bVar6) {
            fVar32 = fVar27;
          }
          if (fVar33 < fVar32) {
            if (fVar36 < -fVar32) {
              fVar35 = -2.1474836e+09;
              if (-fVar36 / fVar32 != INFINITY) {
                fVar35 = (float)(int)(-fVar36 / fVar32);
              }
              fVar36 = fVar36 + fVar32 * fVar35;
            }
            if (0.0 < fVar36) {
              fVar35 = -2.1474836e+09;
              if (fVar36 / fVar32 != INFINITY) {
                fVar35 = (float)((int)(fVar36 / fVar32) + 1);
              }
              fVar36 = fVar36 - fVar32 * fVar35;
            }
          }
        }
      }
      else {
        fVar36 = 0.0;
        if (uVar2 != 1) {
          if (iVar3 == 0) {
LAB_05e6c88c:
            bVar12 = false;
          }
          else {
            if (iVar3 != 1) {
              fVar35 = 0.0;
              goto LAB_05e6c88c;
            }
            fVar29 = fVar38;
            fVar36 = param_3;
            if (!bVar6) {
              fVar29 = fVar27;
              fVar36 = param_4;
            }
            bVar12 = true;
            fVar35 = (fVar35 * (fVar36 - fVar29)) / 100.0;
          }
          if ((iVar13 == 4) || (fVar36 = fVar35, iVar13 == 2)) {
            fVar36 = param_3;
            if (!bVar6) {
              fVar36 = param_4;
            }
            fVar36 = (fVar36 - fVar32) - fVar35;
          }
          if (bVar12) goto LAB_05e6c8bc;
          goto LAB_05e6c96c;
        }
      }
      lVar18 = *plVar22;
      if (lVar18 == 0) goto LAB_05e6d1e4;
      iVar13 = 0;
      while( true ) {
        fVar32 = fStack0000000000000074;
        puVar10 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
        if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_05e6d1fc;
        lVar21 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_05e6d1e4;
        if (*(int *)(lVar21 + 0x18) <= iVar13) break;
        FUN_038e01b0(&stack0x00000430,lVar21,iVar13,*(undefined8 *)puVar9);
        fVar32 = (float)((ulong)in_stack_00000430 >> 0x20);
        lVar18 = *plVar22;
        fVar35 = SUB84(in_stack_00000430,0);
        if (!bVar6) {
          fVar35 = fVar32;
        }
        fVar29 = fVar36 + fVar35;
        if (!bVar6) {
          fVar32 = fVar36 + fVar35;
          fVar29 = SUB84(in_stack_00000430,0);
        }
        if (lVar18 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_05e6d1fc;
        lVar18 = *(long *)(lVar18 + uVar15 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_05e6d1e4;
        in_stack_00000430 = (double)CONCAT44(fVar32,fVar29);
        FUN_038e0210(lVar18,iVar13,&stack0x00000430,*(undefined8 *)puVar8);
        lVar18 = *plVar22;
        iVar13 = iVar13 + 1;
        if (lVar18 == 0) goto LAB_05e6d1e4;
      }
      uVar15 = 1;
      bVar12 = false;
    } while (bVar6);
    if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) != 0) {
      if ((*(long *)(lVar18 + 0x28) != 0) && (*(long *)(lVar18 + 0x20) != 0)) {
        if (1 < *(int *)(*(long *)(lVar18 + 0x20) + 0x18) *
                *(int *)(*(long *)(lVar18 + 0x28) + 0x18)) {
          uVar24 = *(undefined8 *)(param_7 + 0x2a);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar15 = FUN_05c8e378(uVar24,0,0);
          if ((uVar15 & 1) != 0) {
            plVar25 = (long *)(param_6 + 0x20);
            lVar18 = *plVar25;
            if (lVar18 == 0) {
              lVar18 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
              FUN_03abe564(lVar18,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
              *plVar25 = lVar18;
              thunk_FUN_02bb0e9c(plVar25,lVar18);
              lVar18 = *plVar25;
            }
            *(long *)(param_7 + 0x14) = lVar18;
            thunk_FUN_02bb0e9c();
            if (*plVar25 == 0) goto LAB_05e6d1e4;
            fVar27 = (float)FUN_03abe980(*plVar25,*(undefined8 *)puVar10);
            param_7[0x16] = fVar27;
          }
        }
        puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
        lVar18 = *plVar22;
        if (lVar18 != 0) {
          if ((*(uint *)(lVar18 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
          if (*(long *)(lVar18 + 0x28) != 0) {
            FUN_038e10a8(&stack0x00000430,*(long *)(lVar18 + 0x28),
                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
            puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
            iVar13 = 0;
            while (uVar15 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar8), (uVar15 & 1) != 0)
            {
              fVar27 = (float)((ulong)in_stack_00000440 >> 0x20);
              fVar38 = (float)((ulong)in_stack_00000448 >> 0x20);
              if (fVar27 < param_2) {
                fVar38 = fVar38 - (param_2 - fVar27);
                fVar27 = param_2;
              }
              if (param_4 + param_2 < fVar38 + fVar27) {
                fVar38 = fVar38 - ((fVar38 + fVar27) - (param_4 + param_2));
              }
              uVar24 = *(undefined8 *)(param_7 + 0x2a);
              if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c8e378(uVar24,0,0);
              lVar18 = *plVar22;
              if (lVar18 == 0) {
                if (*(long *)(lVar19 + 0x28) == lVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e6d348;
              }
              if (*(int *)(lVar18 + 0x18) == 0) {
                if (*(long *)(lVar19 + 0x28) == lVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                goto LAB_05e6d348;
              }
              if (*(long *)(lVar18 + 0x20) == 0) {
                if (*(long *)(lVar19 + 0x28) == lVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                goto LAB_05e6d348;
              }
              FUN_038e10a8(&stack0x00000430,*(long *)(lVar18 + 0x20),*(undefined8 *)puVar9);
              fVar33 = fStack0000000000000074;
              while (uVar15 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar8),
                    (uVar15 & 1) != 0) {
                fVar37 = (float)in_stack_00000440;
                fVar28 = (float)in_stack_00000448;
                if (fVar37 < fVar33) {
                  fVar28 = fVar28 - (fVar33 - fVar37);
                  fVar37 = fVar33;
                }
                if (param_3 + fVar32 < fVar28 + fVar37) {
                  fVar28 = fVar28 - ((fVar28 + fVar37) - (param_3 + fVar32));
                }
                memcpy(&stack0x000002e8,param_7,0x138);
                fVar33 = fStack0000000000000074;
                FUN_05e6359c(fVar37,fVar27,fVar28,fVar38,fStack0000000000000074,param_2,param_3,
                             param_4,param_6,&stack0x000002e8,param_7 + 0x14);
                iVar13 = iVar13 + 1;
                if ((0x3c < iVar13) && (*(long *)(param_7 + 0x14) != 0)) {
                  if (*(long *)(param_6 + 0x20) == 0) {
                    if (*(long *)(lVar19 + 0x28) == lVar17) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    goto LAB_05e6d348;
                  }
                  fVar37 = (float)FUN_03abe980(*(long *)(param_6 + 0x20),*(undefined8 *)puVar10);
                  param_7[0x17] = fVar37;
                  memcpy(&stack0x000001b0,param_7,0x138);
                  FUN_05e618b0(param_6,&stack0x000001b0);
                  iVar13 = 0;
                  param_7[0x16] = param_7[0x17];
                }
              }
              FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__)
              ;
            }
            FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
            if ((*(long *)(param_7 + 0x14) != 0) && (0 < iVar13)) {
              if (*(long *)(param_6 + 0x20) == 0) goto LAB_05e6d278;
              fVar27 = (float)FUN_03abe980(*(long *)(param_6 + 0x20),*(undefined8 *)puVar10);
              param_7[0x17] = fVar27;
              memcpy(&stack0x00000078,param_7,0x138);
              FUN_05e618b0(param_6,&stack0x00000078);
            }
            goto LAB_05e6d0c4;
          }
        }
      }
LAB_05e6d1e4:
      lVar19 = *(long *)(lVar19 + 0x28);
      goto LAB_05e6d1ec;
    }
LAB_05e6d1fc:
    lVar19 = *(long *)(lVar19 + 0x28);
  }
  if (lVar19 == lVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


