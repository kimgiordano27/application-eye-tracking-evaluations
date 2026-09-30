/*
FUNCTION_NAME: UnityEngine.CanvasRenderer$$SetMaterial
ENTRY_POINT: 05e6bccc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_CanvasRenderer__SetMaterial(void)

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
  long unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 *unaff_x25;
  long unaff_x27;
  int iVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float unaff_s8;
  float fVar29;
  float fVar30;
  float unaff_s11;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_s15;
  undefined8 in_stack_00000030;
  float fStack000000000000003c;
  float fStack0000000000000040;
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
  
  FUN_02b3c81c();
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
  *(undefined1 *)(unaff_x21 + 0x68b) = 1;
  plVar20 = (long *)(unaff_x19 + 0x18);
  lVar17 = *plVar20;
  unaff_x25[7] = 0;
  unaff_x25[6] = 0;
  unaff_x25[9] = 0;
  unaff_x25[8] = 0;
  unaff_x25[0xb] = 0;
  unaff_x25[10] = 0;
  unaff_x25[0xd] = 0;
  unaff_x25[0xc] = 0;
  unaff_x25[0xf] = 0;
  unaff_x25[0xe] = 0;
  unaff_x25[0x11] = 0;
  unaff_x25[0x10] = 0;
  if (lVar17 == 0) {
    lVar17 = FUN_02b3c908(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_79__,2);
    *plVar20 = lVar17;
    thunk_FUN_02bb0e9c(plVar20,lVar17);
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_86__;
    plVar23 = (long *)*plVar20;
    lVar17 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_86__);
    puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_82__;
    FUN_038dfc18(lVar17,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_82__);
    if (plVar23 == (long *)0x0) goto LAB_05e6d278;
    if ((lVar17 != 0) &&
       (lVar19 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar23 + 0x40)), lVar19 == 0)) {
LAB_05e6d2a0:
      if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
        uVar22 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar22,0);
      }
      goto LAB_05e6d348;
    }
    if ((int)plVar23[3] != 0) {
      plVar23[4] = lVar17;
      thunk_FUN_02bb0e9c(plVar23 + 4,lVar17);
      plVar23 = (long *)*plVar20;
      lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
      FUN_038dfc18(lVar17,*(undefined8 *)puVar9);
      if (plVar23 == (long *)0x0) goto LAB_05e6d278;
      if ((lVar17 != 0) &&
         (lVar19 = thunk_FUN_02b79548(lVar17,*(undefined8 *)(*plVar23 + 0x40)), lVar19 == 0))
      goto LAB_05e6d2a0;
      if ((*(uint *)(plVar23 + 3) & 0xfffffffe) != 0) {
        plVar23[5] = lVar17;
        thunk_FUN_02bb0e9c(plVar23 + 5,lVar17);
        goto LAB_05e6beb4;
      }
    }
LAB_05e6d280:
    lVar17 = *(long *)(unaff_x27 + 0x28);
  }
  else {
    iVar13 = *(int *)(lVar17 + 0x18);
    if (iVar13 == 0) goto LAB_05e6d280;
    lVar19 = *(long *)(lVar17 + 0x20);
    if (lVar19 == 0) {
LAB_05e6d278:
      lVar17 = *(long *)(unaff_x27 + 0x28);
LAB_05e6d1ec:
      if (lVar17 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e6d348;
    }
    *(undefined4 *)(lVar19 + 0x18) = 0;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (iVar13 == 1) goto LAB_05e6d280;
    lVar17 = *(long *)(lVar17 + 0x28);
    if (lVar17 == 0) goto LAB_05e6d278;
    *(undefined4 *)(lVar17 + 0x18) = 0;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
LAB_05e6beb4:
    fStack000000000000003c = *unaff_x20;
    fStack0000000000000040 = unaff_x20[1];
    fVar34 = unaff_x20[2];
    fVar30 = unaff_x20[3];
    iVar13 = FUN_05d9d030(unaff_x20 + 0x20,0);
    fVar35 = fVar34;
    fVar25 = fVar30;
    if (iVar13 == 0) {
      FUN_05d9d08c(unaff_x20 + 0x20,0);
      uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
      if ((uVar15 & 1) != 0) {
        FUN_05d9d0a0(unaff_x20 + 0x20,0);
        uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
        if ((uVar15 & 1) != 0) goto LAB_05e6c0dc;
      }
      FUN_05d9d08c(unaff_x20 + 0x20,0);
      uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
      if ((uVar15 & 1) == 0) {
        FUN_05d9d0a0(unaff_x20 + 0x20,0);
        uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
        if ((uVar15 & 1) != 0) {
          uVar15 = FUN_05d9d08c(unaff_x20 + 0x20,0);
          uVar16 = FUN_05d9d08c(unaff_x20 + 0x20,0);
          if (uVar15 >> 0x20 == 1) {
            fVar35 = (unaff_s15 * (float)uVar16) / 100.0;
          }
          else {
            if (uVar16 >> 0x20 != 0) goto LAB_05e6c0dc;
            fVar35 = (float)FUN_05d9d08c(unaff_x20 + 0x20,0);
          }
          fVar25 = (fVar30 * fVar35) / fVar34;
          goto LAB_05e6c0dc;
        }
      }
      FUN_05d9d08c(unaff_x20 + 0x20,0);
      uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
      if ((uVar15 & 1) == 0) {
        FUN_05d9d0a0(unaff_x20 + 0x20,0);
        uVar15 = FUN_05e0ab80(&stack0x000004c8,0);
        if ((uVar15 & 1) == 0) {
          FUN_05d9d08c(unaff_x20 + 0x20,0);
          uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_05d9d08c(unaff_x20 + 0x20,0);
            uVar16 = FUN_05d9d08c(unaff_x20 + 0x20,0);
            if (uVar15 >> 0x20 == 1) {
              fVar35 = (unaff_s15 * (float)uVar16) / 100.0;
            }
            else if (uVar16 >> 0x20 == 0) {
              fVar35 = (float)FUN_05d9d08c(unaff_x20 + 0x20,0);
            }
          }
          FUN_05d9d0a0(unaff_x20 + 0x20,0);
          uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_05d9d0a0(unaff_x20 + 0x20,0);
            uVar16 = FUN_05d9d0a0(unaff_x20 + 0x20,0);
            if (uVar15 >> 0x20 == 1) {
              fVar25 = (unaff_s11 * (float)uVar16) / 100.0;
            }
            else if (uVar16 >> 0x20 == 0) {
              fVar25 = (float)FUN_05d9d0a0(unaff_x20 + 0x20,0);
            }
            FUN_05d9d08c(unaff_x20 + 0x20,0);
            uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
            if ((uVar15 & 1) != 0) goto LAB_05e6bff8;
          }
        }
      }
    }
    else {
      iVar13 = FUN_05d9d030(unaff_x20 + 0x20,0);
      if (iVar13 == 2) {
        fVar25 = unaff_s11;
        if (unaff_s11 / fVar30 <= unaff_s15 / fVar34) {
LAB_05e6bff8:
          fVar35 = (fVar25 * fVar34) / fVar30;
        }
        else {
LAB_05e6bef4:
          fVar35 = unaff_s15;
          fVar25 = (unaff_s15 * fVar30) / fVar34;
        }
      }
      else {
        iVar13 = FUN_05d9d030(unaff_x20 + 0x20,0);
        if (iVar13 == 1) {
          fVar25 = unaff_s11;
          if (unaff_s15 / fVar34 <= unaff_s11 / fVar30) goto LAB_05e6bff8;
          goto LAB_05e6bef4;
        }
      }
    }
LAB_05e6c0dc:
    fVar30 = DAT_010321cc;
    if ((((fVar35 <= DAT_010321cc) || (fVar25 <= DAT_010321cc)) || (unaff_s15 <= DAT_010321cc)) ||
       (unaff_s11 <= DAT_010321cc)) {
LAB_05e6d0c4:
      if (*(long *)(unaff_x27 + 0x28) == in_stack_000004e8) {
        return;
      }
      goto LAB_05e6d348;
    }
    FUN_05d9d08c(unaff_x20 + 0x20,0);
    uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
    if (((uVar15 & 1) == 0) || (unaff_x20[0x1f] != 2.8026e-45)) {
      FUN_05d9d0a0(unaff_x20 + 0x20,0);
      uVar15 = FUN_05e0ab70(&stack0x000004c8,0);
      if (((uVar15 & 1) != 0) && (unaff_x20[0x1e] == 2.8026e-45)) {
        fVar34 = 1.0 / fVar35;
        fVar35 = unaff_s15 * fVar34 + 0.5;
        iVar13 = -0x80000000;
        if (fVar35 != INFINITY) {
          iVar13 = (int)fVar35;
        }
        if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar13 = FUN_04d7c48c(iVar13,1,0);
        fVar35 = unaff_s15 / (float)iVar13;
        fVar25 = fVar34 * fVar25 * fVar35;
        goto LAB_05e6c240;
      }
    }
    else {
      fVar34 = 1.0 / fVar25;
      fVar25 = unaff_s11 * fVar34 + 0.5;
      iVar13 = -0x80000000;
      if (fVar25 != INFINITY) {
        iVar13 = (int)fVar25;
      }
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar13 = FUN_04d7c48c(iVar13,1,0);
      fVar25 = unaff_s11 / (float)iVar13;
      fVar35 = fVar34 * fVar35 * fVar25;
LAB_05e6c240:
      fStack0000000000000040 = 0.0;
      fStack000000000000003c = 0.0;
    }
    puVar8 = Method_OVRPlugin_<>c_<_cctor>b__810_85__;
    puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_84__;
    uVar7 = _UNK_01032d88;
    uVar22 = _DAT_01032d80;
    fVar34 = DAT_010328d0;
    uVar15 = 0;
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
      lVar19 = 0x68;
      if (!bVar6) {
        lVar19 = 0x74;
      }
      iVar13 = *(int *)((long)unaff_x20 + lVar17);
      lVar17 = 100;
      if (!bVar6) {
        lVar17 = 0x70;
      }
      iVar3 = *(int *)((long)unaff_x20 + lVar19);
      fVar32 = *(float *)((long)unaff_x20 + lVar17);
      if ((int)uVar2 < 2) {
        if (uVar2 == 0) {
          lVar17 = *plVar20;
          fVar29 = fVar35;
          if (!bVar6) {
            fVar29 = fVar25;
          }
          if (lVar17 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
          lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_05e6d1e4;
          lVar19 = *(long *)(lVar17 + 0x10);
          lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05e6d1e4;
          uVar5 = *(uint *)(lVar17 + 0x18);
          if (uVar5 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = lVar19 + (long)(int)uVar5 * 0x20;
            *(uint *)(lVar17 + 0x18) = uVar5 + 1;
            *(float *)(lVar19 + 0x20) = fStack000000000000003c;
            *(float *)(lVar19 + 0x24) = fStack0000000000000040;
            *(float *)(lVar19 + 0x28) = fVar35;
            *(float *)(lVar19 + 0x2c) = fVar25;
            *(undefined8 *)(lVar19 + 0x38) = uVar7;
            *(undefined8 *)(lVar19 + 0x30) = uVar22;
          }
          else {
            uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
            in_stack_00000438 = CONCAT44(fVar25,fVar35);
            unaff_x25[3] = uVar7;
            unaff_x25[2] = uVar22;
            FUN_038e04ec(lVar17,&stack0x00000430,uVar21);
          }
        }
        else if (uVar2 == 1) {
          fVar33 = fVar35;
          fVar26 = unaff_s15;
          if (!bVar6) {
            fVar33 = fVar25;
            fVar26 = unaff_s11;
          }
          uVar5 = 0x80000000;
          if (fVar26 / fVar33 != INFINITY) {
            uVar5 = (int)(fVar26 / fVar33);
          }
          if (-1 < (int)uVar5) {
            lVar17 = *plVar20;
            if (lVar17 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
            lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_05e6d1e4;
            lVar19 = *(long *)(lVar17 + 0x10);
            lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05e6d1e4;
            uVar14 = *(uint *)(lVar17 + 0x18);
            if (uVar14 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar14 * 0x20;
              *(uint *)(lVar17 + 0x18) = uVar14 + 1;
              *(float *)(lVar19 + 0x20) = fStack000000000000003c;
              *(float *)(lVar19 + 0x24) = fStack0000000000000040;
              *(float *)(lVar19 + 0x28) = fVar35;
              *(float *)(lVar19 + 0x2c) = fVar25;
              *(undefined8 *)(lVar19 + 0x38) = uVar7;
              *(undefined8 *)(lVar19 + 0x30) = uVar22;
            }
            else {
              uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
              in_stack_00000438 = CONCAT44(fVar25,fVar35);
              unaff_x25[3] = uVar7;
              unaff_x25[2] = uVar22;
              FUN_038e04ec(lVar17,&stack0x00000430,uVar21);
            }
            fVar29 = fVar33;
            if (1 < uVar5) {
              lVar17 = *plVar20;
              fVar31 = fStack0000000000000040;
              fVar11 = unaff_s15 - fVar35;
              if (!bVar6) {
                fVar31 = unaff_s11 - fVar25;
                fVar11 = fStack000000000000003c;
              }
              if (lVar17 == 0) goto LAB_05e6d1e4;
              if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
              lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
              if (lVar17 == 0) goto LAB_05e6d1e4;
              lVar19 = *(long *)(lVar17 + 0x10);
              lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_05e6d1e4;
              uVar14 = *(uint *)(lVar17 + 0x18);
              if (uVar14 < *(uint *)(lVar19 + 0x18)) {
                lVar19 = lVar19 + (long)(int)uVar14 * 0x20;
                *(uint *)(lVar17 + 0x18) = uVar14 + 1;
                *(float *)(lVar19 + 0x20) = fVar11;
                *(float *)(lVar19 + 0x24) = fVar31;
                *(float *)(lVar19 + 0x28) = fVar35;
                *(float *)(lVar19 + 0x2c) = fVar25;
                *(undefined8 *)(lVar19 + 0x38) = uVar7;
                *(undefined8 *)(lVar19 + 0x30) = uVar22;
              }
              else {
                uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
                in_stack_00000430 = (double)CONCAT44(fVar31,fVar11);
                in_stack_00000438 = CONCAT44(fVar25,fVar35);
                unaff_x25[3] = uVar7;
                unaff_x25[2] = uVar22;
                FUN_038e04ec(lVar17,&stack0x00000430,uVar21);
              }
              unaff_s15 = fStack000000000000006c;
              fVar29 = fVar26;
              if (uVar5 != 2) {
                iVar24 = 0;
                pfVar1 = (float *)&stack0x000004c4;
                if (!bVar6) {
                  pfVar1 = (float *)&stack0x000004c0;
                }
                fVar28 = fVar35;
                if (!bVar6) {
                  fVar28 = fVar25;
                }
                do {
                  iVar24 = iVar24 + 1;
                  lVar17 = *plVar20;
                  *pfVar1 = (fVar28 + (fVar26 - fVar33 * (float)(int)uVar5) /
                                      (float)(int)(uVar5 - 1)) * (float)iVar24;
                  if (lVar17 == 0) goto LAB_05e6d1e4;
                  if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
                  lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
                  if (lVar17 == 0) goto LAB_05e6d1e4;
                  lVar19 = *(long *)(lVar17 + 0x10);
                  lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_05e6d1e4;
                  uVar14 = *(uint *)(lVar17 + 0x18);
                  if (uVar14 < *(uint *)(lVar19 + 0x18)) {
                    lVar19 = lVar19 + (long)(int)uVar14 * 0x20;
                    *(uint *)(lVar17 + 0x18) = uVar14 + 1;
                    *(float *)(lVar19 + 0x20) = fVar11;
                    *(float *)(lVar19 + 0x24) = fVar31;
                    *(float *)(lVar19 + 0x28) = fVar35;
                    *(float *)(lVar19 + 0x2c) = fVar25;
                    *(undefined8 *)(lVar19 + 0x38) = uVar7;
                    *(undefined8 *)(lVar19 + 0x30) = uVar22;
                  }
                  else {
                    uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
                    in_stack_00000430 = (double)CONCAT44(fVar31,fVar11);
                    in_stack_00000438 = CONCAT44(fVar25,fVar35);
                    unaff_x25[3] = uVar7;
                    unaff_x25[2] = uVar22;
                    FUN_038e04ec(lVar17,&stack0x00000430,uVar21);
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
        fVar26 = fVar35;
        if (!bVar6) {
          fVar33 = unaff_s11;
          fVar26 = fVar25;
        }
        fVar26 = (fVar33 + fVar26 * 0.5) / fVar26;
        iVar24 = -0x80000000;
        if (fVar26 != INFINITY) {
          iVar24 = (int)fVar26;
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
        fVar26 = fVar33;
        if (!bVar6) {
          fVar25 = fVar33;
          fVar26 = fVar35;
        }
        fVar35 = fVar26;
        if (0 < (int)uVar5) {
          fVar29 = 0.0;
          uVar14 = 0;
          fVar26 = fStack000000000000003c;
          fVar31 = fStack0000000000000040;
          do {
            lVar17 = *plVar20;
            fVar11 = fVar33 * (float)(int)uVar14;
            if (!bVar6) {
              fVar31 = fVar33 * (float)(int)uVar14;
              fVar11 = fVar26;
            }
            fVar26 = fVar11;
            if (lVar17 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
            lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_05e6d1e4;
            lVar19 = *(long *)(lVar17 + 0x10);
            lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05e6d1e4;
            uVar4 = *(uint *)(lVar17 + 0x18);
            if (uVar4 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar4 * 0x20;
              *(uint *)(lVar17 + 0x18) = uVar4 + 1;
              *(float *)(lVar19 + 0x20) = fVar26;
              *(float *)(lVar19 + 0x24) = fVar31;
              *(float *)(lVar19 + 0x28) = fVar35;
              *(float *)(lVar19 + 0x2c) = fVar25;
              *(undefined8 *)(lVar19 + 0x38) = uVar7;
              *(undefined8 *)(lVar19 + 0x30) = uVar22;
            }
            else {
              uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar31,fVar26);
              in_stack_00000438 = CONCAT44(fVar25,fVar35);
              unaff_x25[3] = uVar7;
              unaff_x25[2] = uVar22;
              FUN_038e04ec(lVar17,&stack0x00000430,uVar21);
            }
            fVar29 = fVar33 + fVar29;
            uVar14 = uVar14 + 1;
            unaff_s15 = fStack000000000000006c;
          } while (uVar5 != uVar14);
        }
      }
      else if (uVar2 == 3) {
        fVar33 = fVar35;
        fVar26 = unaff_s15;
        if (!bVar6) {
          fVar33 = fVar25;
          fVar26 = unaff_s11;
        }
        fVar26 = (1.0 / in_stack_00000030._4_4_ + fVar26) / fVar33;
        uVar5 = 0x80000000;
        if (fVar26 != INFINITY) {
          uVar5 = (int)fVar26;
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
          fVar31 = fStack000000000000003c;
          fVar26 = fStack0000000000000040;
          do {
            lVar17 = *plVar20;
            fVar11 = fVar35 * (float)(int)uVar14;
            if (!bVar6) {
              fVar11 = fVar31;
              fVar26 = fVar25 * (float)(int)uVar14;
            }
            fVar31 = fVar11;
            if (lVar17 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
            lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_05e6d1e4;
            lVar19 = *(long *)(lVar17 + 0x10);
            lVar18 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05e6d1e4;
            uVar4 = *(uint *)(lVar17 + 0x18);
            if (uVar4 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + (long)(int)uVar4 * 0x20;
              *(uint *)(lVar17 + 0x18) = uVar4 + 1;
              *(float *)(lVar19 + 0x20) = fVar31;
              *(float *)(lVar19 + 0x24) = fVar26;
              *(float *)(lVar19 + 0x28) = fVar35;
              *(float *)(lVar19 + 0x2c) = fVar25;
              *(undefined8 *)(lVar19 + 0x38) = uVar7;
              *(undefined8 *)(lVar19 + 0x30) = uVar22;
            }
            else {
              uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar26,fVar31);
              in_stack_00000438 = CONCAT44(fVar25,fVar35);
              unaff_x25[3] = uVar7;
              unaff_x25[2] = uVar22;
              FUN_038e04ec(lVar17,&stack0x00000430,uVar21);
            }
            fVar29 = fVar29 + fVar33;
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
        fVar33 = (fVar32 - fVar29) * 0.5;
LAB_05e6c8bc:
        uVar21 = *(undefined8 *)(unaff_x20 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_05c8e378(uVar21,0,0);
        if ((uVar16 & 1) != 0) {
          uVar21 = *(undefined8 *)(unaff_x20 + 0x2a);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar16 = FUN_05c8e378(uVar21,0,0);
          if ((uVar16 & 1) != 0) {
            fVar29 = fVar35;
            if (!bVar6) {
              fVar29 = fVar25;
            }
            fVar29 = fVar29 * in_stack_00000030._4_4_;
            dVar27 = modf((double)fVar29,(double *)&stack0x00000430);
            if (0.0 <= fVar29) {
              if (dVar27 == 0.5) {
                fVar32 = 1.0;
                goto LAB_05e6caf0;
              }
              fVar26 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar27 == -0.5) {
              fVar32 = -1.0;
LAB_05e6caf0:
              fVar26 = (float)in_stack_00000430;
              if (((long)in_stack_00000430 & 1U) != 0) {
                fVar26 = (float)in_stack_00000430 + fVar32;
              }
            }
            else {
              fVar26 = (float)(int)(fVar29 + -0.5);
            }
            if (ABS(fVar26 - fVar29) < fVar34) {
              fVar33 = (float)FUN_05d9b054(fVar33,in_stack_00000030._4_4_,DAT_01031fc8,0);
            }
          }
        }
LAB_05e6c96c:
        if ((uVar2 & 0xfffffffe) == 2) {
          fVar29 = fVar35;
          if (!bVar6) {
            fVar29 = fVar25;
          }
          if (fVar30 < fVar29) {
            if (fVar33 < -fVar29) {
              fVar32 = -2.1474836e+09;
              if (-fVar33 / fVar29 != INFINITY) {
                fVar32 = (float)(int)(-fVar33 / fVar29);
              }
              fVar33 = fVar33 + fVar29 * fVar32;
            }
            if (0.0 < fVar33) {
              fVar32 = -2.1474836e+09;
              if (fVar33 / fVar29 != INFINITY) {
                fVar32 = (float)((int)(fVar33 / fVar29) + 1);
              }
              fVar33 = fVar33 - fVar29 * fVar32;
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
            fVar26 = fVar35;
            fVar33 = unaff_s15;
            if (!bVar6) {
              fVar26 = fVar25;
              fVar33 = unaff_s11;
            }
            bVar12 = true;
            fVar32 = (fVar32 * (fVar33 - fVar26)) / 100.0;
          }
          if ((iVar13 == 4) || (fVar33 = fVar32, iVar13 == 2)) {
            fVar33 = unaff_s15;
            if (!bVar6) {
              fVar33 = unaff_s11;
            }
            fVar33 = (fVar33 - fVar29) - fVar32;
          }
          if (bVar12) goto LAB_05e6c8bc;
          goto LAB_05e6c96c;
        }
      }
      lVar17 = *plVar20;
      if (lVar17 == 0) goto LAB_05e6d1e4;
      iVar13 = 0;
      while( true ) {
        puVar10 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
        lVar19 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_05e6d1e4;
        if (*(int *)(lVar19 + 0x18) <= iVar13) break;
        FUN_038e01b0(&stack0x00000430,lVar19,iVar13,*(undefined8 *)puVar9);
        fVar29 = (float)((ulong)in_stack_00000430 >> 0x20);
        lVar17 = *plVar20;
        fVar32 = SUB84(in_stack_00000430,0);
        if (!bVar6) {
          fVar32 = fVar29;
        }
        unaff_x25[0x15] = in_stack_00000440;
        unaff_x25[0x14] = in_stack_00000438;
        fVar26 = fVar33 + fVar32;
        if (!bVar6) {
          fVar29 = fVar33 + fVar32;
          fVar26 = SUB84(in_stack_00000430,0);
        }
        if (lVar17 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05e6d1fc;
        lVar17 = *(long *)(lVar17 + uVar15 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05e6d1e4;
        in_stack_00000440 = unaff_x25[0x15];
        in_stack_00000438 = unaff_x25[0x14];
        in_stack_00000430 = (double)CONCAT44(fVar29,fVar26);
        FUN_038e0210(lVar17,iVar13,&stack0x00000430,*(undefined8 *)puVar8);
        lVar17 = *plVar20;
        iVar13 = iVar13 + 1;
        if (lVar17 == 0) goto LAB_05e6d1e4;
      }
      uVar15 = 1;
      bVar12 = false;
    } while (bVar6);
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) != 0) {
      if ((*(long *)(lVar17 + 0x28) != 0) && (*(long *)(lVar17 + 0x20) != 0)) {
        if (1 < *(int *)(*(long *)(lVar17 + 0x20) + 0x18) *
                *(int *)(*(long *)(lVar17 + 0x28) + 0x18)) {
          uVar22 = *(undefined8 *)(unaff_x20 + 0x2a);
          if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar15 = FUN_05c8e378(uVar22,0,0);
          if ((uVar15 & 1) != 0) {
            plVar23 = (long *)(unaff_x19 + 0x20);
            lVar17 = *plVar23;
            if (lVar17 == 0) {
              lVar17 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
              FUN_03abe564(lVar17,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
              *plVar23 = lVar17;
              thunk_FUN_02bb0e9c(plVar23,lVar17);
              lVar17 = *plVar23;
            }
            *(long *)(unaff_x20 + 0x14) = lVar17;
            thunk_FUN_02bb0e9c();
            if (*plVar23 == 0) goto LAB_05e6d1e4;
            fVar25 = (float)FUN_03abe980(*plVar23,*(undefined8 *)puVar10);
            unaff_x20[0x16] = fVar25;
          }
        }
        puVar9 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
        lVar17 = *plVar20;
        if (lVar17 != 0) {
          if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
          if (*(long *)(lVar17 + 0x28) != 0) {
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
            while (uVar15 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar8), (uVar15 & 1) != 0)
            {
              fVar25 = in_stack_000004a4;
              fVar35 = in_stack_000004ac;
              if (in_stack_000004a4 < unaff_s8) {
                fVar25 = unaff_s8;
                fVar35 = in_stack_000004ac - (unaff_s8 - in_stack_000004a4);
              }
              if (unaff_s11 + unaff_s8 < fVar35 + fVar25) {
                fVar35 = fVar35 - ((fVar35 + fVar25) - (unaff_s11 + unaff_s8));
              }
              uVar22 = *(undefined8 *)(unaff_x20 + 0x2a);
              if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05c8e378(uVar22,0,0);
              lVar17 = *plVar20;
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
              while (uVar15 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar8),
                    (uVar15 & 1) != 0) {
                fVar30 = in_stack_00000470;
                fVar34 = in_stack_00000478;
                if (in_stack_00000470 < in_stack_00000070._4_4_) {
                  fVar30 = in_stack_00000070._4_4_;
                  fVar34 = in_stack_00000478 - (in_stack_00000070._4_4_ - in_stack_00000470);
                }
                if (unaff_s15 + in_stack_00000070._4_4_ < fVar34 + fVar30) {
                  fVar34 = fVar34 - ((fVar34 + fVar30) - (unaff_s15 + in_stack_00000070._4_4_));
                }
                memcpy(&stack0x000002e8,unaff_x20,0x138);
                FUN_05e6359c(fVar30,fVar25,fVar34,fVar35,in_stack_00000070._4_4_,unaff_s8,
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
                  fVar30 = (float)FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar10);
                  unaff_x20[0x17] = fVar30;
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
              fVar25 = (float)FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar10);
              unaff_x20[0x17] = fVar25;
              memcpy(&stack0x00000078,unaff_x20,0x138);
              FUN_05e618b0();
            }
            goto LAB_05e6d0c4;
          }
        }
      }
LAB_05e6d1e4:
      lVar17 = *(long *)(unaff_x27 + 0x28);
      goto LAB_05e6d1ec;
    }
LAB_05e6d1fc:
    lVar17 = *(long *)(unaff_x27 + 0x28);
  }
  if (lVar17 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


