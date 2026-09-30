/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$RectangleContainsScreenPoint
ENTRY_POINT: 05e6c5d8
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

void UnityEngine_RectTransformUtility__RectangleContainsScreenPoint(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int in_w12;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  int iVar14;
  long *plVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  uint uVar16;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
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
  double in_stack_00000430;
  float in_stack_00000470;
  float in_stack_00000478;
  float in_stack_000004a4;
  float in_stack_000004ac;
  long in_stack_000004e8;
  
  do {
    fVar21 = unaff_s9;
    if ((bool)in_ZR) {
      unaff_s8 = unaff_s9;
      fVar21 = unaff_s14;
    }
    unaff_s14 = fVar21;
    fVar21 = unaff_s11;
    if (0 < (int)unaff_w22) {
      unaff_s10 = 0.0;
      uVar6 = 0;
      fVar20 = fStack000000000000003c;
      fVar17 = fStack0000000000000040;
      do {
        lVar10 = *unaff_x21;
        fVar21 = unaff_s9 * (float)(int)uVar6;
        if ((unaff_x26 & 1) == 0) {
          fVar17 = unaff_s9 * (float)(int)uVar6;
          fVar21 = fVar20;
        }
        fVar20 = fVar21;
        if (lVar10 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
        lVar10 = *(long *)(lVar10 + unaff_x27 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_05e6d1e4;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_05e6d1e4;
        uVar16 = *(uint *)(lVar10 + 0x18);
        if (uVar16 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar16 * 0x20;
          *(uint *)(lVar10 + 0x18) = uVar16 + 1;
          *(float *)(lVar11 + 0x20) = fVar20;
          *(float *)(lVar11 + 0x24) = fVar17;
          *(float *)(lVar11 + 0x28) = unaff_s14;
          *(float *)(lVar11 + 0x2c) = unaff_s8;
          *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
          *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
        }
        else {
          uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
          in_stack_00000430 = (double)CONCAT44(fVar17,fVar20);
          unaff_x25[3] = in_stack_00000058;
          unaff_x25[2] = in_stack_00000050;
          FUN_038e04ec(lVar10,&stack0x00000430,uVar13);
        }
        unaff_s10 = unaff_s9 + unaff_s10;
        uVar6 = uVar6 + 1;
        in_w12 = iStack000000000000004c;
        unaff_s15 = fStack000000000000006c;
        fVar21 = fStack0000000000000070;
      } while (unaff_w22 != uVar6);
    }
LAB_05e6c82c:
    unaff_s11 = fVar21;
    if (in_w12 == 0) {
      fVar21 = unaff_s15;
      if ((unaff_x26 & 1) == 0) {
        fVar21 = unaff_s11;
      }
      fVar21 = (fVar21 - unaff_s10) * 0.5;
LAB_05e6c8bc:
      uVar13 = *(undefined8 *)((long)unaff_x20 + 0xa0);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_05c8e378(uVar13,0,0);
      if ((uVar8 & 1) != 0) {
        uVar13 = *(undefined8 *)((long)unaff_x20 + 0xa8);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar8 = FUN_05c8e378(uVar13,0,0);
        if ((uVar8 & 1) != 0) {
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
            fVar22 = (float)in_stack_00000430;
            if (((long)in_stack_00000430 & 1U) != 0) {
              fVar22 = (float)in_stack_00000430 + fVar17;
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
          bVar5 = false;
        }
        else {
          if (iStack0000000000000048 != 1) {
            unaff_s13 = 0.0;
            goto LAB_05e6c88c;
          }
          fVar20 = unaff_s14;
          fVar21 = unaff_s15;
          if ((unaff_x26 & 1) == 0) {
            fVar20 = unaff_s8;
            fVar21 = unaff_s11;
          }
          bVar5 = true;
          unaff_s13 = (unaff_s13 * (fVar21 - fVar20)) / 100.0;
        }
        if ((in_w12 == 4) || (fVar21 = unaff_s13, in_w12 == 2)) {
          fVar21 = unaff_s15;
          if ((unaff_x26 & 1) == 0) {
            fVar21 = unaff_s11;
          }
          fVar21 = (fVar21 - unaff_s10) - unaff_s13;
        }
        if (bVar5) goto LAB_05e6c8bc;
        goto LAB_05e6c96c;
      }
    }
    lVar10 = *unaff_x21;
    if (lVar10 == 0) goto LAB_05e6d1e4;
    iVar14 = 0;
    while( true ) {
      puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
      lVar11 = *(long *)(lVar10 + unaff_x27 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_05e6d1e4;
      if (*(int *)(lVar11 + 0x18) <= iVar14) break;
      FUN_038e01b0(&stack0x00000430,lVar11,iVar14,*unaff_x24);
      fVar20 = (float)((ulong)in_stack_00000430 >> 0x20);
      bVar5 = (unaff_x26 & 1) == 0;
      uVar9 = *(undefined8 *)(unaff_x28 + 8);
      uVar13 = *(undefined8 *)(unaff_x28 + 0x18);
      lVar10 = *unaff_x21;
      fVar17 = SUB84(in_stack_00000430,0);
      if (bVar5) {
        fVar17 = fVar20;
      }
      unaff_x25[0x15] = *(undefined8 *)(unaff_x28 + 0x10);
      unaff_x25[0x14] = uVar9;
      fVar22 = fVar21 + fVar17;
      if (bVar5) {
        fVar20 = fVar21 + fVar17;
        fVar22 = SUB84(in_stack_00000430,0);
      }
      if (lVar10 == 0) goto LAB_05e6d1e4;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x27) goto LAB_05e6d1fc;
      lVar10 = *(long *)(lVar10 + unaff_x27 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_05e6d1e4;
      uVar19 = unaff_x25[0x14];
      uVar9 = *unaff_x23;
      *(undefined8 *)(unaff_x28 + 0x10) = unaff_x25[0x15];
      *(undefined8 *)(unaff_x28 + 8) = uVar19;
      *(undefined8 *)(unaff_x28 + 0x18) = uVar13;
      in_stack_00000430 = (double)CONCAT44(fVar20,fVar22);
      FUN_038e0210(lVar10,iVar14,&stack0x00000430,uVar9);
      lVar10 = *unaff_x21;
      iVar14 = iVar14 + 1;
      if (lVar10 == 0) goto LAB_05e6d1e4;
    }
    unaff_x27 = 1;
    if ((unaff_x26 & 1) == 0) {
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
      if ((*(long *)(lVar10 + 0x28) == 0) || (*(long *)(lVar10 + 0x20) == 0)) goto LAB_05e6d1e4;
      if (1 < *(int *)(*(long *)(lVar10 + 0x20) + 0x18) * *(int *)(*(long *)(lVar10 + 0x28) + 0x18))
      {
        uVar13 = *(undefined8 *)((long)unaff_x20 + 0xa8);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar8 = FUN_05c8e378(uVar13,0,0);
        if ((uVar8 & 1) != 0) {
          plVar15 = (long *)(unaff_x19 + 0x20);
          lVar10 = *plVar15;
          if (lVar10 == 0) {
            lVar10 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
            FUN_03abe564(lVar10,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
            *plVar15 = lVar10;
            thunk_FUN_02bb0e9c(plVar15,lVar10);
            lVar10 = *plVar15;
          }
          *(long *)((long)unaff_x20 + 0x50) = lVar10;
          thunk_FUN_02bb0e9c();
          if (*plVar15 == 0) goto LAB_05e6d1e4;
          uVar7 = FUN_03abe980(*plVar15,*(undefined8 *)puVar4);
          *(undefined4 *)((long)unaff_x20 + 0x58) = uVar7;
        }
      }
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
      lVar10 = *unaff_x21;
      if (lVar10 == 0) goto LAB_05e6d1e4;
      if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_05e6d1fc;
      if (*(long *)(lVar10 + 0x28) == 0) goto LAB_05e6d1e4;
      FUN_038e10a8(&stack0x00000430,*(long *)(lVar10 + 0x28),
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
      puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
      iVar14 = 0;
      unaff_x25[0xd] = unaff_x25[1];
      unaff_x25[0xc] = *unaff_x25;
      unaff_x25[0xf] = unaff_x25[3];
      unaff_x25[0xe] = unaff_x25[2];
      unaff_x25[0x11] = unaff_x25[5];
      unaff_x25[0x10] = unaff_x25[4];
      break;
    }
    unaff_x26 = 0;
    unaff_s10 = 0.0;
    uStack0000000000000044 = *(uint *)((long)unaff_x20 + 0x7c);
    in_w12 = *(int *)((long)unaff_x20 + 0x6c);
    iStack0000000000000048 = *(int *)((long)unaff_x20 + 0x74);
    unaff_s13 = *(float *)((long)unaff_x20 + 0x70);
    fVar21 = unaff_s11;
    if ((int)uStack0000000000000044 < 2) {
      if (uStack0000000000000044 == 0) {
        lVar10 = *unaff_x21;
        if (lVar10 == 0) goto LAB_05e6d1e4;
        if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05e6d1fc;
        lVar10 = *(long *)(lVar10 + 0x28);
        if (lVar10 == 0) goto LAB_05e6d1e4;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_05e6d1e4;
        uVar6 = *(uint *)(lVar10 + 0x18);
        if (uVar6 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar6 * 0x20;
          *(uint *)(lVar10 + 0x18) = uVar6 + 1;
          *(float *)(lVar11 + 0x20) = fStack000000000000003c;
          *(float *)(lVar11 + 0x24) = fStack0000000000000040;
          *(float *)(lVar11 + 0x28) = unaff_s14;
          *(float *)(lVar11 + 0x2c) = unaff_s8;
          *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
          *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
          unaff_s10 = unaff_s8;
        }
        else {
          uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
          in_stack_00000430 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
          unaff_x25[3] = in_stack_00000058;
          unaff_x25[2] = in_stack_00000050;
          FUN_038e04ec(lVar10,&stack0x00000430,uVar13);
          unaff_s10 = unaff_s8;
        }
      }
      else if (uStack0000000000000044 == 1) {
        uVar6 = 0x80000000;
        if (unaff_s11 / unaff_s8 != INFINITY) {
          uVar6 = (int)(unaff_s11 / unaff_s8);
        }
        if (-1 < (int)uVar6) {
          lVar10 = *unaff_x21;
          if (lVar10 == 0) goto LAB_05e6d1e4;
          if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05e6d1fc;
          lVar10 = *(long *)(lVar10 + 0x28);
          if (lVar10 == 0) goto LAB_05e6d1e4;
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_05e6d1e4;
          uVar16 = *(uint *)(lVar10 + 0x18);
          if (uVar16 < *(uint *)(lVar11 + 0x18)) {
            lVar11 = lVar11 + (long)(int)uVar16 * 0x20;
            *(uint *)(lVar10 + 0x18) = uVar16 + 1;
            *(float *)(lVar11 + 0x20) = fStack000000000000003c;
            *(float *)(lVar11 + 0x24) = fStack0000000000000040;
            *(float *)(lVar11 + 0x28) = unaff_s14;
            *(float *)(lVar11 + 0x2c) = unaff_s8;
            *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
            *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
          }
          else {
            uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
            in_stack_00000430 = (double)CONCAT44(fStack0000000000000040,fStack000000000000003c);
            unaff_x25[3] = in_stack_00000058;
            unaff_x25[2] = in_stack_00000050;
            FUN_038e04ec(lVar10,&stack0x00000430,uVar13);
          }
          unaff_s10 = unaff_s8;
          if (1 < uVar6) {
            fVar20 = unaff_s11 - unaff_s8;
            lVar10 = *unaff_x21;
            if (lVar10 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05e6d1fc;
            lVar10 = *(long *)(lVar10 + 0x28);
            if (lVar10 == 0) goto LAB_05e6d1e4;
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_05e6d1e4;
            uVar16 = *(uint *)(lVar10 + 0x18);
            if (uVar16 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar16 * 0x20;
              *(uint *)(lVar10 + 0x18) = uVar16 + 1;
              *(float *)(lVar11 + 0x20) = fStack000000000000003c;
              *(float *)(lVar11 + 0x24) = fVar20;
              *(float *)(lVar11 + 0x28) = unaff_s14;
              *(float *)(lVar11 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
            }
            else {
              uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 = (double)CONCAT44(fVar20,fStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar10,&stack0x00000430,uVar13);
            }
            unaff_s10 = unaff_s11;
            unaff_s15 = fStack000000000000006c;
            fVar21 = fStack0000000000000070;
            if (uVar6 != 2) {
              iVar14 = 0;
              do {
                iVar14 = iVar14 + 1;
                lVar10 = *unaff_x21;
                if (lVar10 == 0) goto LAB_05e6d1e4;
                if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05e6d1fc;
                lVar10 = *(long *)(lVar10 + 0x28);
                if (lVar10 == 0) goto LAB_05e6d1e4;
                lVar11 = *(long *)(lVar10 + 0x10);
                lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_05e6d1e4;
                uVar16 = *(uint *)(lVar10 + 0x18);
                if (uVar16 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)uVar16 * 0x20;
                  *(uint *)(lVar10 + 0x18) = uVar16 + 1;
                  *(float *)(lVar11 + 0x20) = fStack000000000000003c;
                  *(float *)(lVar11 + 0x24) = fVar20;
                  *(float *)(lVar11 + 0x28) = unaff_s14;
                  *(float *)(lVar11 + 0x2c) = unaff_s8;
                  *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
                  *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
                }
                else {
                  uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
                  in_stack_00000430 = (double)CONCAT44(fVar20,fStack000000000000003c);
                  unaff_x25[3] = in_stack_00000058;
                  unaff_x25[2] = in_stack_00000050;
                  FUN_038e04ec(lVar10,&stack0x00000430,uVar13);
                  unaff_x25 = (undefined8 *)&stack0x00000430;
                }
                fVar21 = fStack0000000000000070;
              } while (iVar14 < (int)(uVar6 - 2));
            }
          }
        }
      }
      goto LAB_05e6c82c;
    }
    if (uStack0000000000000044 != 2) {
      if (uStack0000000000000044 == 3) {
        fVar20 = (fStack0000000000000030 + unaff_s11) / unaff_s8;
        uVar6 = 0x80000000;
        if (fVar20 != INFINITY) {
          uVar6 = (int)fVar20;
        }
        uVar16 = uVar6 | 1;
        if ((uVar6 & 1) != 0) {
          uVar16 = uVar6 + 2;
        }
        uVar6 = uVar6 + 2;
        if (in_w12 == 0) {
          uVar6 = uVar16;
        }
        if (0 < (int)uVar6) {
          uVar16 = 0;
          do {
            lVar10 = *unaff_x21;
            if (lVar10 == 0) goto LAB_05e6d1e4;
            if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05e6d1fc;
            lVar10 = *(long *)(lVar10 + 0x28);
            if (lVar10 == 0) goto LAB_05e6d1e4;
            lVar11 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_8__;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_05e6d1e4;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar1 * 0x20;
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(float *)(lVar11 + 0x20) = fStack000000000000003c;
              *(float *)(lVar11 + 0x24) = unaff_s8 * (float)(int)uVar16;
              *(float *)(lVar11 + 0x28) = unaff_s14;
              *(float *)(lVar11 + 0x2c) = unaff_s8;
              *(undefined8 *)(lVar11 + 0x38) = in_stack_00000058;
              *(undefined8 *)(lVar11 + 0x30) = in_stack_00000050;
            }
            else {
              uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70);
              in_stack_00000430 =
                   (double)CONCAT44(unaff_s8 * (float)(int)uVar16,fStack000000000000003c);
              unaff_x25[3] = in_stack_00000058;
              unaff_x25[2] = in_stack_00000050;
              FUN_038e04ec(lVar10,&stack0x00000430,uVar13);
            }
            unaff_s10 = unaff_s10 + unaff_s8;
            uVar16 = uVar16 + 1;
            unaff_s15 = fStack000000000000006c;
            fVar21 = fStack0000000000000070;
          } while (uVar6 != uVar16);
        }
      }
      goto LAB_05e6c82c;
    }
    fVar21 = (unaff_s11 + unaff_s8 * 0.5) / unaff_s8;
    iVar14 = -0x80000000;
    if (fVar21 != INFINITY) {
      iVar14 = (int)fVar21;
    }
    if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar6 = FUN_04d7c48c(iVar14,1,0);
    unaff_w22 = uVar6 | 1;
    if ((uVar6 & 1) != 0) {
      unaff_w22 = uVar6 + 2;
    }
    if (in_w12 != 0) {
      unaff_w22 = uVar6 + 1;
    }
    in_ZR = true;
    unaff_s9 = unaff_s11 / (float)(int)uVar6;
    iStack000000000000004c = in_w12;
  } while( true );
LAB_05e6cdac:
  uVar8 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar2);
  if ((uVar8 & 1) == 0) goto LAB_05e6d058;
  fVar21 = in_stack_000004a4;
  fVar20 = in_stack_000004ac;
  if (in_stack_000004a4 < fStack0000000000000068) {
    fVar21 = fStack0000000000000068;
    fVar20 = in_stack_000004ac - (fStack0000000000000068 - in_stack_000004a4);
  }
  if (unaff_s11 + fStack0000000000000068 < fVar20 + fVar21) {
    fVar20 = fVar20 - ((fVar20 + fVar21) - (unaff_s11 + fStack0000000000000068));
  }
  uVar13 = *(undefined8 *)((long)unaff_x20 + 0xa8);
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c8e378(uVar13,0,0);
  lVar10 = *unaff_x21;
  if (lVar10 == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05e6d348;
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    goto LAB_05e6d348;
  }
  if (*(long *)(lVar10 + 0x20) == 0) {
    if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    goto LAB_05e6d348;
  }
  FUN_038e10a8(&stack0x00000430,*(long *)(lVar10 + 0x20),*(undefined8 *)puVar3);
  unaff_x25[7] = unaff_x25[1];
  unaff_x25[6] = *unaff_x25;
  unaff_x25[9] = unaff_x25[3];
  unaff_x25[8] = unaff_x25[2];
  unaff_x25[0xb] = unaff_x25[5];
  unaff_x25[10] = unaff_x25[4];
  while (uVar8 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
    fVar17 = in_stack_00000470;
    fVar22 = in_stack_00000478;
    if (in_stack_00000470 < fStack0000000000000074) {
      fVar17 = fStack0000000000000074;
      fVar22 = in_stack_00000478 - (fStack0000000000000074 - in_stack_00000470);
    }
    if (unaff_s15 + fStack0000000000000074 < fVar22 + fVar17) {
      fVar22 = fVar22 - ((fVar22 + fVar17) - (unaff_s15 + fStack0000000000000074));
    }
    memcpy(&stack0x000002e8,unaff_x20,0x138);
    FUN_05e6359c(fVar17,fVar21,fVar22,fVar20,fStack0000000000000074,fStack0000000000000068,
                 fStack000000000000006c,fStack0000000000000070);
    iVar14 = iVar14 + 1;
    if ((0x3c < iVar14) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
      if (*(long *)(unaff_x19 + 0x20) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      uVar7 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar4);
      *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar7;
      memcpy(&stack0x000001b0,unaff_x20,0x138);
      FUN_05e618b0();
      iVar14 = 0;
      *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
    }
  }
  FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  goto LAB_05e6cdac;
LAB_05e6d1fc:
  if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  goto LAB_05e6d348;
LAB_05e6d1e4:
  lVar10 = *(long *)(in_stack_00000020 + 0x28);
LAB_05e6d1ec:
  if (lVar10 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  goto LAB_05e6d348;
LAB_05e6d058:
  FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  if ((*(long *)((long)unaff_x20 + 0x50) != 0) && (0 < iVar14)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      lVar10 = *(long *)(in_stack_00000020 + 0x28);
      goto LAB_05e6d1ec;
    }
    uVar7 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar4);
    *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar7;
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


