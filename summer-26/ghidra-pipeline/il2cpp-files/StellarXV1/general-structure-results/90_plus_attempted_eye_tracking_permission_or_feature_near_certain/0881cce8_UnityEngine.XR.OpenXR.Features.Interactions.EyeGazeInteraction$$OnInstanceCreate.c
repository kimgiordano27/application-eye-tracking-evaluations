/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$OnInstanceCreate
ENTRY_POINT: 0881cce8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__OnInstanceCreate(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  undefined1 uVar22;
  float *pfVar23;
  long *plVar24;
  long unaff_x19;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  long *plVar25;
  undefined4 unaff_w29;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float unaff_s14;
  float fStack0000000000000010;
  uint uStack0000000000000014;
  float *in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack0000000000000040;
  uint uStack0000000000000044;
  float *in_stack_00000048;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  int iStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000068;
  int in_stack_00000070;
  float fStack0000000000000078;
  uint uStack0000000000000084;
  long *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float in_stack_000000f0;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  undefined8 in_stack_00000100;
  float in_stack_00000108;
  float fStack0000000000000110;
  float fStack0000000000000114;
  undefined8 in_stack_00000118;
  float in_stack_00000120;
  float fStack0000000000000128;
  float fStack000000000000012c;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  uint in_stack_0000020c;
  uint in_stack_00000e38;
  uint in_stack_00000e3c;
  undefined8 in_stack_00000e40;
  undefined8 in_stack_00000e48;
  undefined4 in_stack_00000e50;
  
code_r0x0881cce8:
  if (param_1 != 0) {
    uVar11 = *(int *)(unaff_x25 + 0x28) + 1;
    if (*(uint *)(param_1 + 0x18) <= uVar11) {
LAB_0881d348:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    uVar4 = *(undefined2 *)(param_1 + (long)(int)uVar11 * (long)unaff_w23 + 0x24);
    if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar18 = FUN_0883e090(0);
    if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
      uVar11 = FUN_057cfb98(*(long *)(lVar18 + 0x10),unaff_w27,*(undefined8 *)PTR_DAT_09337598);
      lVar18 = FUN_0883e090(0);
      if ((lVar18 != 0) && (*(long *)(lVar18 + 0x18) != 0)) {
        uVar12 = FUN_057cfb98(*(long *)(lVar18 + 0x18),uVar4,*(undefined8 *)PTR_DAT_09337598);
        if (((uVar11 | uVar12) & 1) == 0) goto LAB_0881cef0;
LAB_0881cf00:
        *(int *)(unaff_x25 + 0x28) = *(int *)(unaff_x25 + 0x28) + 1;
        fVar26 = unaff_s14;
LAB_0881b440:
        uVar11 = in_stack_00000e38;
        lVar18 = *(long *)(unaff_x19 + 0x488);
        unaff_w26 = unaff_w26 + 1;
        if (lVar18 != 0) {
          if ((int)*(uint *)(lVar18 + 0x18) <= (int)unaff_w26) goto LAB_0881d12c;
          if (unaff_w26 < *(uint *)(lVar18 + 0x18)) goto code_r0x0881b1d0;
          goto LAB_0881d348;
        }
      }
    }
  }
LAB_0881d344:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
code_r0x0881b1d0:
  unaff_w27 = *(uint *)(lVar18 + (long)(int)unaff_w26 * 0x10 + 0x24);
  in_stack_00000e38 = uVar11;
  if (unaff_w27 == 0x1a) goto LAB_0881b440;
  if (unaff_w27 == 0) {
LAB_0881d12c:
    if ((((*(float *)(unaff_x19 + 0x264) - *(float *)(unaff_x19 + 0x268) <= DAT_01aec8ec) ||
         ((_fStack0000000000000010 & 0x100000000) == 0)) ||
        (fVar26 = *in_stack_00000018, *(float *)(unaff_x19 + 0x27c) <= fVar26)) ||
       (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
      uVar33 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x378),0,4);
      uVar15 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x380),0,4);
      uVar34 = NEON_fmov(0x3f800000,4);
      fVar26 = (*(float *)(unaff_x19 + 0x41c) + (float)uVar33 + (float)uVar15) * 100.0 +
               (float)uVar34;
      fVar32 = (*(float *)(unaff_x19 + 0x428) + (float)((ulong)uVar33 >> 0x20) +
               (float)((ulong)uVar15 >> 0x20)) * 100.0 + (float)((ulong)uVar34 >> 0x20);
      uVar15 = NEON_scvtf(CONCAT44((int)fVar32,(int)fVar26),4);
      uVar13 = CONCAT44((float)((ulong)uVar15 >> 0x20) / 100.0,(float)uVar15 / 100.0);
      *(undefined1 *)(unaff_x19 + 0x274) = 1;
      uVar13 = uVar13 ^ (uVar13 ^ 0xcba3d70acba3d70a) &
                        CONCAT44(-(uint)(fVar32 == INFINITY),-(uint)(fVar26 == INFINITY));
      *(int *)(unaff_x19 + 0x41c) = (int)uVar13;
      *(float *)(unaff_x19 + 0x428) = (float)(uVar13 >> 0x20);
      return;
    }
    if (*(float *)(unaff_x19 + 0x300) < *(float *)(unaff_x19 + 0x2fc) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x300) = 0;
      fVar26 = *in_stack_00000018;
    }
    *(float *)(unaff_x19 + 0x268) = fVar26;
    fVar26 = (*(float *)(unaff_x19 + 0x264) - *in_stack_00000018) * 0.5;
    if (fVar26 <= DAT_01aec3c4) {
      fVar26 = DAT_01aec3c4;
    }
    fVar26 = *in_stack_00000018 + fVar26;
    *in_stack_00000018 = fVar26;
    fVar32 = fVar26 * 20.0 + 0.5;
    fVar26 = DAT_01aec808;
    if (fVar32 != INFINITY) {
      fVar26 = (float)(int)fVar32 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x27c) <= fVar26) {
      fVar26 = *(float *)(unaff_x19 + 0x27c);
    }
    *in_stack_00000018 = fVar26;
    goto LAB_0881d200;
  }
  uVar22 = (undefined1)unaff_w29;
  if ((unaff_w27 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x469) = uVar22;
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    uVar13 = FUN_0881d354();
    if (((uVar13 & 1) != 0) && (unaff_w26 = in_stack_0000020c, *(int *)(unaff_x19 + 0x65c) == 0))
    goto LAB_0881b440;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_0881d344;
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
    lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178;
    *(undefined4 *)(unaff_x19 + 0x65c) = *(undefined4 *)(lVar18 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar18 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar18 + 0x40);
    thunk_FUN_040ec700(unaff_x19 + 0x100);
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_0881d344;
  uVar12 = *(uint *)(unaff_x25 + 0x28);
  if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0881d348;
  uVar29 = *(undefined4 *)(unaff_x19 + 0x120);
  cVar2 = *(char *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x54);
  *(undefined1 *)(unaff_x19 + 0x469) = 0;
  uVar10 = uVar12;
  if (uVar11 == uVar12) {
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    if (in_stack_00000e3c == 0x2026) {
      lVar18 = *in_stack_00000088;
      if (lVar18 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0881d348;
      *(undefined8 *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x30) =
           *(undefined8 *)(unaff_x19 + 0x668);
      thunk_FUN_040ec700();
      lVar18 = *(long *)(unaff_x19 + 0x498);
      if (lVar18 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178;
      *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)(unaff_x19 + 0x670);
      *(undefined4 *)(lVar18 + 0x20) = 0;
      thunk_FUN_040ec700();
      lVar18 = *(long *)(unaff_x19 + 0x498);
      if (lVar18 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x48) =
           *(undefined8 *)(unaff_x19 + 0x678);
      thunk_FUN_040ec700();
      lVar18 = *(long *)(unaff_x19 + 0x498);
      if (lVar18 == 0) goto LAB_0881d344;
      uVar10 = *(uint *)(unaff_x19 + 0x4a4);
      if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
      unaff_w27 = 0x2026;
      *(undefined4 *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x50) =
           *(undefined4 *)(unaff_x19 + 0x680);
      *(undefined1 *)(unaff_x19 + 0x328) = uVar22;
      in_stack_00000e3c = 3;
      in_stack_00000e38 = uVar10 + 1;
      goto LAB_0881b3f4;
    }
    unaff_w27 = in_stack_00000e3c;
    if (in_stack_00000e3c != 3) goto LAB_0881b3f4;
    lVar18 = *in_stack_00000088;
    if (((lVar18 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
       (lVar14 = FUN_087f97a8(*(long *)(unaff_x19 + 0x100),0), lVar14 == 0)) goto LAB_0881d344;
    uVar15 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                       (lVar14,3,*(undefined8 *)PTR_DAT_09337590);
    if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0881d348;
    *(undefined8 *)(lVar18 + (long)(int)uVar12 * 0x178 + 0x30) = uVar15;
    thunk_FUN_040ec700();
    unaff_w27 = 3;
    *(undefined1 *)(unaff_x19 + 0x328) = uVar22;
  }
  else {
LAB_0881b3f4:
    if ((unaff_w27 != 3) && ((int)uVar10 < *(int *)(unaff_x19 + 0x35c))) {
      lVar18 = *in_stack_00000088;
      if (lVar18 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
      lVar18 = lVar18 + (long)(int)uVar10 * 0x178;
      *(undefined1 *)(lVar18 + 400) = 0;
      *(undefined2 *)(lVar18 + 0x24) = 0x200b;
      *(undefined4 *)(lVar18 + 0x5c) = 0;
      *(uint *)(unaff_x25 + 0x28) = uVar10 + 1;
      goto LAB_0881b440;
    }
  }
  fVar38 = 1.0;
  fVar32 = 1.0;
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    uVar10 = *(uint *)(unaff_x19 + 0x284);
    fVar32 = fVar38;
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_075da814(unaff_w27,0);
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar10 = FUN_075daa9c(unaff_w27,0);
            fVar38 = fStack0000000000000010;
            goto LAB_0881b560;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar13 = FUN_075da774(unaff_w27,0);
        if ((uVar13 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar10 = FUN_075dac14(unaff_w27,0);
          goto LAB_0881b560;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar13 = FUN_075da814(unaff_w27,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar10 = FUN_075daa9c(unaff_w27,0);
LAB_0881b560:
        unaff_w27 = uVar10 & 0xffff;
        fVar32 = fVar38;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
  memmove(&stack0x00000240,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_0881d344;
    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
    *unaff_x24 = *(long *)(lVar18 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x30);
    thunk_FUN_040ec700(unaff_x24);
    if (*unaff_x24 == 0) goto LAB_0881b440;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_0881d344;
    uVar1 = *(uint *)(unaff_x25 + 0x28);
    uVar10 = *(uint *)(lVar18 + 0x18);
    if (uVar10 <= uVar1) goto LAB_0881d348;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar18 + 0x20 + (long)(int)uVar1 * 0x178 + 0x30);
    pfVar23 = in_stack_00000048;
    if (uVar11 == uVar12) {
      lVar14 = *(long *)(unaff_x19 + 0x488);
      if (lVar14 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w26) goto LAB_0881d348;
      if ((*(int *)(lVar14 + (long)(int)unaff_w26 * 0x10 + 0x24) == 10) &&
         (uVar1 != *(uint *)(unaff_x19 + 0x4a8))) {
        if (uVar10 <= uVar1 - 1) goto LAB_0881d348;
        pfVar23 = (float *)(lVar18 + 0x20 + (long)(int)(uVar1 - 1) * 0x178 + 0x38);
      }
    }
    fVar28 = *pfVar23;
    fVar38 = (float)FUN_08a73b44(&stack0x00000240,0);
    fVar27 = (float)FUN_08a73b4c(&stack0x00000240,0);
    if (uVar11 == uVar12) {
      fStack0000000000000078 = 0.0;
      fVar35 = 0.0;
      if (unaff_w27 != 0x2026) goto LAB_0881b724;
    }
    else {
LAB_0881b724:
      fVar35 = (float)FUN_08a73b74(&stack0x00000240,0);
      fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x00000240,0);
    }
    lVar18 = *(long *)(unaff_x19 + 0x660);
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto LAB_0881d344;
    fVar36 = *(float *)(unaff_x19 + 0x43c);
    fVar30 = *(float *)(lVar18 + 0x2c);
    fVar26 = (float)FUN_08a74044(*(long *)(lVar18 + 0x20),0);
    lVar18 = *in_stack_00000088;
    if (lVar18 == 0) goto LAB_0881d344;
    uVar10 = *(uint *)(unaff_x25 + 0x28);
    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
    *(undefined4 *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x20) = 0;
    fVar26 = in_stack_00000050._4_4_ * ((fVar32 * fVar28) / fVar38) * fVar27 * fVar36 * fVar30 *
             fVar26;
LAB_0881ba24:
    bVar9 = unaff_w27 == 0xad;
    unaff_s14 = 0.0;
    if (unaff_w27 != 3 && !bVar9) {
      unaff_s14 = fVar26;
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x65c) == 1) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_0881d344;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      plVar25 = *(long **)(lVar18 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x30);
      if (plVar25 == (long *)0x0) goto LAB_0881b440;
      bVar3 = *(byte *)(*(long *)PTR_DAT_093375d8 + 0x130);
      if ((*(byte *)(*plVar25 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_093375d8)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar25);
      }
      plVar20 = (long *)plVar25[3];
      if (plVar20 == (long *)0x0) {
        plVar20 = (long *)0x0;
        *in_stack_00000030 = 0;
      }
      else {
        lVar18 = *(long *)PTR_DAT_093375d0;
        bVar3 = *(byte *)(lVar18 + 0x130);
        if (*(byte *)(*plVar20 + 0x130) < bVar3) {
          plVar24 = (long *)0x0;
        }
        else {
          plVar24 = plVar20;
          if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) != lVar18) {
            plVar24 = (long *)0x0;
          }
        }
        *in_stack_00000030 = (long)plVar24;
        if (*(byte *)(*plVar20 + 0x130) < bVar3) {
          plVar20 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar3 * 8 + -8) != lVar18) {
          plVar20 = (long *)0x0;
        }
      }
      thunk_FUN_040ec700(in_stack_00000030,plVar20);
      lVar18 = plVar25[5];
      *(int *)(unaff_x19 + 0x6bc) = (int)lVar18;
      uVar1 = (int)lVar18 + 0xe000;
      if (unaff_w27 != 0x3c) {
        uVar1 = unaff_w27;
      }
      if (*(long *)(unaff_x19 + 0x6b0) == 0) goto LAB_0881d344;
      memmove(&stack0x000001a0,(void *)(*(long *)(unaff_x19 + 0x6b0) + 0x28),0x60);
      fVar26 = (float)FUN_08a73b44(&stack0x000001a0,0);
      fVar38 = *in_stack_00000048;
      if (fVar26 <= 0.0) {
        fVar26 = (float)FUN_08a73b44(&stack0x00000240,0);
        fVar27 = (float)FUN_08a73b4c(&stack0x00000240,0);
        fVar28 = (float)FUN_08a73b74(&stack0x00000240,0);
        if (plVar25[4] == 0) goto LAB_0881d344;
        FUN_08a74008(&stack0x00000e40,plVar25[4],0);
        in_stack_00000180 = in_stack_00000e40;
        in_stack_00000188 = in_stack_00000e48;
        in_stack_00000190 = in_stack_00000e50;
        fVar35 = (float)FUN_08a73e38(&stack0x00000180,0);
        if (plVar25[4] == 0) goto LAB_0881d344;
        fVar36 = *(float *)((long)plVar25 + 0x2c);
        fVar27 = in_stack_00000050._4_4_ * (fVar38 / fVar26) * fVar27;
        fVar26 = (float)FUN_08a74044(plVar25[4],0);
        fVar26 = fVar27 * (fVar28 / fVar35) * fVar36 * fVar26;
        fVar38 = 0.0;
        if (fVar26 != 0.0) {
          fVar38 = fVar27 / fVar26;
        }
        fVar35 = (float)FUN_08a73b74(&stack0x00000240,0);
        fVar35 = fVar35 * fVar38;
        fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x00000240,0);
        fStack0000000000000078 = fStack0000000000000078 * fVar38;
      }
      else {
        fVar26 = (float)FUN_08a73b44(&stack0x000001a0,0);
        fVar27 = (float)FUN_08a73b4c(&stack0x000001a0,0);
        if (plVar25[4] == 0) goto LAB_0881d344;
        fVar35 = *(float *)((long)plVar25 + 0x2c);
        fVar28 = (float)FUN_08a74044(plVar25[4],0);
        fVar26 = in_stack_00000050._4_4_ * (fVar38 / fVar26) * fVar27 * fVar35 * fVar28;
        fVar35 = (float)FUN_08a73b74(&stack0x000001a0,0);
        fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x000001a0,0);
      }
      *unaff_x24 = (long)plVar25;
      thunk_FUN_040ec700(unaff_x24,plVar25);
      lVar18 = *in_stack_00000088;
      if (lVar18 == 0) goto LAB_0881d344;
      uVar10 = *(uint *)(unaff_x25 + 0x28);
      if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
      lVar14 = lVar18 + (long)(int)uVar10 * 0x178;
      *(undefined4 *)(lVar14 + 0x20) = unaff_w29;
      *(float *)(lVar14 + 0x15c) = fVar26;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar29;
      unaff_w27 = uVar1;
      goto LAB_0881ba24;
    }
    bVar9 = unaff_w27 == 0xad;
    fVar35 = 0.0;
    unaff_s14 = 0.0;
    if (unaff_w27 != 3 && !bVar9) {
      unaff_s14 = fVar26;
    }
    lVar18 = *in_stack_00000088;
    if (lVar18 == 0) goto LAB_0881d344;
    uVar10 = *(uint *)(unaff_x25 + 0x28);
    fStack0000000000000078 = 0.0;
  }
  if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
  *(short *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x24) = (short)unaff_w27;
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_0881d344;
  if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
  lVar18 = *(long *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x38);
  if (lVar18 == 0) {
    if ((*unaff_x24 == 0) || (lVar18 = *(long *)(*unaff_x24 + 0x20), lVar18 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000e40,lVar18,0);
    in_stack_000000d0 = in_stack_00000e40;
    in_stack_000000d8 = in_stack_00000e48;
    in_stack_000000e0 = in_stack_00000e50;
  }
  else {
    FUN_08a74008(&stack0x000000d0,lVar18,0);
  }
  if (unaff_w27 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uStack0000000000000084 = FUN_075d81a8(unaff_w27,0);
    uStack0000000000000084 = uStack0000000000000084 & 1;
  }
  else {
    uStack0000000000000084 = 0;
  }
  fVar38 = *(float *)(unaff_x19 + 0x2d0);
  uVar29 = 0;
  if ((*(char *)(unaff_x19 + 0x329) != '\0') && (*(int *)(unaff_x19 + 0x65c) == 0)) {
    if (*unaff_x24 == 0) goto LAB_0881d344;
    iVar19 = *(int *)(unaff_x25 + 0x28);
    uVar10 = *(uint *)(*unaff_x24 + 0x28);
    if (iVar19 < iStack000000000000005c) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_0881d344;
      uVar1 = iVar19 + 1;
      if (*(uint *)(lVar18 + 0x18) <= uVar1) goto LAB_0881d348;
      uVar29 = 0;
      if (*(int *)(lVar18 + 0x20 + (long)(int)uVar1 * 0x178) == 0) {
        lVar18 = *(long *)(lVar18 + 0x20 + (long)(int)uVar1 * 0x178 + 0x10);
        if ((((lVar18 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
            (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar14 == 0)) ||
           (lVar14 = *(long *)(lVar14 + 0x40), lVar14 == 0)) goto LAB_0881d344;
        uVar13 = FUN_06fba39c(lVar14,uVar10 | *(int *)(lVar18 + 0x28) << 0x10,&stack0x00000150,
                              *(undefined8 *)PTR_DAT_09337578);
        if ((uVar13 & 1) != 0) {
          FUN_08a786f8(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          uVar29 = UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x00000130,0);
          uVar13 = FUN_08a78734(&stack0x00000150,0);
          if ((uVar13 & 0x100) != 0) {
            fVar38 = 0.0;
          }
        }
      }
      iVar19 = *(int *)(unaff_x25 + 0x28);
    }
    if (0 < iVar19) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0)) goto LAB_0881d344;
      if (*(uint *)(lVar18 + 0x18) <= iVar19 - 1U) goto LAB_0881d348;
      lVar18 = *(long *)(lVar18 + (ulong)(iVar19 - 1U) * 0x178 + 0x30);
      if (lVar18 == 0) goto LAB_0881d344;
      uVar1 = *(uint *)(lVar18 + 0x28);
      lVar18 = FUN_088161d4();
      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0)) goto LAB_0881d344;
      uVar5 = *(int *)(unaff_x25 + 0x28) - 1;
      if (*(uint *)(lVar18 + 0x18) <= uVar5) goto LAB_0881d348;
      if (*(int *)(lVar18 + (long)(int)uVar5 * 0x178 + 0x20) == 0) {
        if (((*(long *)(unaff_x19 + 0x100) == 0) ||
            (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar18 == 0)) ||
           (lVar18 = *(long *)(lVar18 + 0x40), lVar18 == 0)) goto LAB_0881d344;
        uVar13 = FUN_06fba39c(lVar18,uVar1 | uVar10 << 0x10,&stack0x00000150,
                              *(undefined8 *)PTR_DAT_09337578);
        if ((uVar13 & 1) != 0) {
          FUN_08a78720(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x00000130,0);
          FUN_08a783ac(uVar29,0);
          uVar13 = FUN_08a78734(&stack0x00000150,0);
          if ((uVar13 & 0x100) != 0) {
            fVar38 = 0.0;
          }
        }
      }
    }
    lVar18 = *in_stack_00000088;
    if (lVar18 == 0) goto LAB_0881d344;
    uVar10 = *(uint *)(unaff_x25 + 0x28);
    uVar29 = FUN_08a78388(&stack0x00000210,0);
    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
    *(undefined4 *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x154) = uVar29;
  }
  if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar13 = FUN_08847bd4(unaff_w27,0);
  uVar10 = *(uint *)(unaff_x25 + 0x28);
  if ((uVar13 & 1) == 0) {
    if (0 < (int)uVar10) {
      uVar1 = *(uint *)(unaff_x19 + 0x32c);
      if ((uVar1 == 0x80000000) || (uVar1 != uVar10 - 1)) {
        lVar18 = (ulong)uVar10 * 0x178 + 0x144;
        uVar16 = (ulong)uVar10;
        do {
          uVar10 = *(uint *)(unaff_x19 + 0x32c);
          uVar6 = uVar16 - 1;
          if (((long)uVar16 < 1) || (uVar1 = (int)uVar16 - 1, uVar1 == uVar10)) {
            if (uVar10 == 0x80000000) goto LAB_0881c0d0;
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
            goto LAB_0881d344;
            if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
            lVar18 = *(long *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x30);
            if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x20), lVar18 == 0))
            goto LAB_0881d344;
            uVar10 = FUN_08a73ff8(lVar18,0);
            if ((*unaff_x24 == 0) ||
               (((*(long *)(unaff_x19 + 0x100) == 0 ||
                 (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar18 == 0)) ||
                (lVar18 = *(long *)(lVar18 + 0x48), lVar18 == 0)))) goto LAB_0881d344;
            uVar16 = FUN_06fc3f48(lVar18,uVar10 | *(int *)(*unaff_x24 + 0x28) << 0x10,
                                  &stack0x000000e8,*(undefined8 *)PTR_DAT_09337580);
            if ((uVar16 & 1) == 0) goto LAB_0881c0d0;
            lVar18 = *in_stack_00000088;
            if (lVar18 == 0) goto LAB_0881d344;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_0881d348;
            FUN_08a78370((in_stack_000000e8._4_4_ +
                         (*(float *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x178 +
                                    0x138) - *(float *)(unaff_x19 + 0x658)) / unaff_s14) -
                         fStack00000000000000f8,&stack0x00000210,0);
            fVar38 = in_stack_000000f0;
            fVar27 = fStack00000000000000fc;
            goto LAB_0881c0bc;
          }
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0))
          goto LAB_0881d344;
          if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_0881d348;
          lVar14 = *(long *)(lVar14 + lVar18 + -0x28c);
          if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0)) goto LAB_0881d344;
          uVar10 = FUN_08a73ff8(lVar14,0);
          if ((*unaff_x24 == 0) ||
             (((*(long *)(unaff_x19 + 0x100) == 0 ||
               (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar14 == 0)) ||
              (lVar14 = *(long *)(lVar14 + 0x50), lVar14 == 0)))) goto LAB_0881d344;
          uVar17 = FUN_06fcaab8(lVar14,uVar10 | *(int *)(*unaff_x24 + 0x28) << 0x10,&stack0x00000100
                                ,*(undefined8 *)PTR_DAT_09337588);
          lVar18 = lVar18 + -0x178;
          uVar16 = uVar6;
        } while ((uVar17 & 1) == 0);
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0))
        goto LAB_0881d344;
        uVar10 = (uint)uVar6;
        if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_0881d348;
        lVar21 = *(long *)(unaff_x19 + 0x498);
        if (lVar21 == 0) goto LAB_0881d344;
        if (*(uint *)(lVar21 + 0x18) <= uVar10) goto LAB_0881d348;
        fVar38 = *(float *)(unaff_x19 + 0x4ec);
        fVar27 = *(float *)(unaff_x19 + 0x634);
        fVar28 = *(float *)(lVar21 + lVar18);
        FUN_08a78370(((*(float *)(lVar14 + lVar18 + -0xc) - *(float *)(unaff_x19 + 0x658)) /
                      unaff_s14 + in_stack_00000100._4_4_) - fStack0000000000000110,&stack0x00000210
                     ,0);
        fVar38 = (fVar28 - ((0.0 - fVar38) + fVar27)) / unaff_s14 + in_stack_00000108;
        fVar27 = fStack0000000000000114;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
        goto LAB_0881d344;
        if (*(uint *)(lVar18 + 0x18) <= uVar1) goto LAB_0881d348;
        lVar18 = *(long *)(lVar18 + (long)(int)uVar1 * 0x178 + 0x30);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x20), lVar18 == 0)) goto LAB_0881d344;
        uVar10 = FUN_08a73ff8(lVar18,0);
        if ((*unaff_x24 == 0) ||
           (((*(long *)(unaff_x19 + 0x100) == 0 ||
             (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar18 == 0)) ||
            (lVar18 = *(long *)(lVar18 + 0x48), lVar18 == 0)))) goto LAB_0881d344;
        uVar16 = FUN_06fc3f48(lVar18,uVar10 | *(int *)(*unaff_x24 + 0x28) << 0x10,&stack0x00000118,
                              *(undefined8 *)PTR_DAT_09337580);
        if ((uVar16 & 1) == 0) goto LAB_0881c0d0;
        lVar18 = *in_stack_00000088;
        if (lVar18 == 0) goto LAB_0881d344;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_0881d348;
        FUN_08a78370((in_stack_00000118._4_4_ +
                     (*(float *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x178 + 0x138) -
                     *(float *)(unaff_x19 + 0x658)) / unaff_s14) - fStack0000000000000128,
                     &stack0x00000210,0);
        fVar38 = in_stack_00000120;
        fVar27 = fStack000000000000012c;
      }
LAB_0881c0bc:
      FUN_08a78380(fVar38 - fVar27,&stack0x00000210,0);
      fVar38 = 0.0;
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x32c) = uVar10;
  }
LAB_0881c0d0:
  fVar27 = (float)FUN_08a78378(&stack0x00000210,0);
  fVar28 = (float)FUN_08a78378(&stack0x00000210,0);
  fVar36 = *(float *)(unaff_x19 + 0x2d8);
  fVar30 = 0.0;
  fStack0000000000000068 = 0.0;
  if (fVar36 != 0.0) {
    if ((*unaff_x24 == 0) || (lVar18 = *(long *)(*unaff_x24 + 0x20), lVar18 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000e40,lVar18,0);
    in_stack_00000180 = in_stack_00000e40;
    in_stack_00000188 = in_stack_00000e48;
    in_stack_00000190 = in_stack_00000e50;
    fVar30 = (float)FUN_08a73e30(&stack0x00000180,0);
    if ((*unaff_x24 == 0) || (lVar18 = *(long *)(*unaff_x24 + 0x20), lVar18 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000090,lVar18,0);
    in_stack_00000188 = in_stack_00000098;
    in_stack_00000180 = in_stack_00000090;
    in_stack_00000190 = in_stack_000000a0;
    fVar31 = (float)FUN_08a73e40(&stack0x00000180,0);
    fVar30 = (1.0 - *(float *)(unaff_x19 + 0x300)) *
             (fVar36 * 0.5 - unaff_s14 * (fVar30 * 0.5 + fVar31));
    *(float *)(unaff_x19 + 0x658) = *(float *)(unaff_x19 + 0x658) + fVar30;
  }
  if (((cVar2 == '\0') && (*(int *)(unaff_x19 + 0x65c) == 0)) &&
     ((*(byte *)(unaff_x19 + 0x284) & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    fStack0000000000000068 = *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1ac);
  }
  unaff_w23 = 0x178;
  lVar18 = *in_stack_00000088;
  if (lVar18 == 0) goto LAB_0881d344;
  uVar10 = *(uint *)(unaff_x19 + 0x4a4);
  fVar31 = *(float *)(unaff_x19 + 0x658);
  fVar36 = (float)FUN_08a78368(&stack0x00000210,0);
  if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
  *(float *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x138) = fVar31 + unaff_s14 * fVar36;
  lVar18 = *in_stack_00000088;
  if (lVar18 == 0) goto LAB_0881d344;
  uVar10 = *(uint *)(unaff_x19 + 0x4a4);
  fVar31 = *(float *)(unaff_x19 + 0x4ec);
  fVar39 = *(float *)(unaff_x19 + 0x634);
  fVar36 = (float)FUN_08a78378(&stack0x00000210,0);
  if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
  *(float *)(lVar18 + (long)(int)uVar10 * 0x178 + 0x144) =
       (0.0 - fVar31) + fVar39 + unaff_s14 * fVar36;
  fVar27 = unaff_s14 * (fVar35 + fVar27);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    fVar27 = fVar27 / fVar32;
    fVar28 = (unaff_s14 * (fStack0000000000000078 + fVar28)) / fVar32;
  }
  else {
    fVar28 = unaff_s14 * (fStack0000000000000078 + fVar28);
  }
  fVar35 = *(float *)(unaff_x19 + 0x634);
  uVar10 = *(uint *)(unaff_x19 + 0x4a4);
  uVar1 = *(uint *)(unaff_x19 + 0x4a8);
  fVar27 = fVar27 + fVar35;
  if ((uStack0000000000000084 == 0) || (uVar10 == uVar1)) {
    fVar28 = fVar28 + fVar35;
    fVar36 = fVar27;
    fVar31 = fVar28;
    if (fVar35 != 0.0) {
      fVar36 = (fVar27 - fVar35) / *(float *)(unaff_x19 + 0x43c);
      fVar31 = (fVar28 - fVar35) / *(float *)(unaff_x19 + 0x43c);
      if (fVar36 <= fVar27) {
        fVar36 = fVar27;
      }
      if (fVar28 <= fVar31) {
        fVar31 = fVar28;
      }
    }
    lVar18 = *(long *)(unaff_x19 + 0x498);
    fVar35 = fVar36;
    if (fVar36 <= *(float *)(unaff_x19 + 0x4dc)) {
      fVar35 = *(float *)(unaff_x19 + 0x4dc);
    }
    fVar39 = fVar31;
    if (*(float *)(unaff_x19 + 0x4e0) <= fVar31) {
      fVar39 = *(float *)(unaff_x19 + 0x4e0);
    }
    *(float *)(unaff_x19 + 0x4dc) = fVar35;
    *(float *)(unaff_x19 + 0x4e0) = fVar39;
    if (lVar18 == 0) goto LAB_0881d344;
    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
    lVar18 = lVar18 + (long)(int)uVar10 * 0x178;
    *(float *)(lVar18 + 0x14c) = fVar36;
    *(float *)(lVar18 + 0x150) = fVar31;
    fVar36 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(lVar18 + 0x140) = fVar27 - fVar36;
    *(float *)(unaff_x19 + 0x4d4) = fVar27 - fVar36;
    *(float *)(lVar18 + 0x148) = fVar28 - fVar36;
    *(float *)(unaff_x19 + 0x4d8) = fVar28 - fVar36;
    if ((*(int *)(unaff_x19 + 0x4b8) == 0) || (*(char *)(unaff_x19 + 0x374) != '\0')) {
      lVar18 = *(long *)(unaff_x19 + 0x100);
      *(float *)(unaff_x25 + 0x50) = fVar35;
      if (lVar18 == 0) goto LAB_0881d344;
      fVar28 = *(float *)(unaff_x19 + 0x4d0);
      fVar35 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                                (lVar18 + 0x28,0);
      fVar32 = (unaff_s14 * fVar35) / fVar32;
      if (fVar28 <= fVar32) {
        fVar28 = fVar32;
      }
      fVar36 = *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4d0) = fVar28;
    }
  }
  else {
    lVar18 = *in_stack_00000088;
    if (lVar18 == 0) goto LAB_0881d344;
    if (*(uint *)(lVar18 + 0x18) <= uVar10) goto LAB_0881d348;
    lVar18 = lVar18 + (long)(int)uVar10 * 0x178;
    uVar15 = *(undefined8 *)(unaff_x25 + 0x60);
    *(undefined8 *)(lVar18 + 0x14c) = uVar15;
    fVar36 = *(float *)(unaff_x19 + 0x4ec);
    fVar32 = (float)uVar15 - fVar36;
    fVar28 = (float)((ulong)uVar15 >> 0x20) - fVar36;
    *(float *)(lVar18 + 0x140) = fVar32;
    *(float *)(lVar18 + 0x148) = fVar28;
    *(ulong *)(unaff_x25 + 0x58) = CONCAT44(fVar28,fVar32);
  }
  if ((fVar36 == 0.0) &&
     ((uStack0000000000000084 == 0 || (*(int *)(unaff_x19 + 0x4a4) == *(int *)(unaff_x19 + 0x4a8))))
     ) {
    fVar32 = *(float *)(unaff_x19 + 0x4c8);
    if (*(float *)(unaff_x19 + 0x4c8) <= fVar27) {
      fVar32 = fVar27;
    }
    *(float *)(unaff_x19 + 0x4c8) = fVar32;
  }
  uVar5 = *(uint *)(unaff_x19 + 0x2a0);
  if (unaff_w27 == 9) {
LAB_0881c48c:
    fVar32 = (fStack0000000000000058 - *(float *)(unaff_x19 + 0x388)) -
             *(float *)(unaff_x19 + 0x38c);
    fVar27 = *(float *)(unaff_x19 + 0x398);
    bVar8 = true;
    if ((fVar27 <= fVar32) && (bVar8 = false, !NAN(fVar27))) {
      bVar8 = fVar27 == -1.0;
    }
    fVar28 = *(float *)(unaff_x19 + 0x658);
    if (!bVar8) {
      fVar32 = fVar27;
    }
    fVar27 = (float)FUN_08a73e50(&stack0x00000220,0);
    if (bVar9 == false) {
      fVar26 = unaff_s14;
    }
    fVar26 = ABS(fVar28) + fVar27 * (1.0 - *(float *)(unaff_x19 + 0x300)) * fVar26;
    if ((uVar13 & 1) != 0) {
      fVar27 = 1.0;
      if ((uVar5 & 0x18) != 0) {
        fVar27 = DAT_01aed150;
      }
      if (((fVar27 * fVar32 < fVar26) && (in_stack_00000070 != 0)) &&
         ((in_stack_00000070 != 3 && (*(int *)(unaff_x19 + 0x4a4) != *(int *)(unaff_x19 + 0x4a8)))))
      {
        unaff_w26 = FUN_08822600();
        lVar18 = *(long *)(unaff_x19 + 0x498);
        if (lVar18 == 0) goto LAB_0881d344;
        uVar11 = *(uint *)(unaff_x19 + 0x4a4);
        unaff_w29 = 1;
        uVar12 = uVar11 - 1;
        if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_0881d348;
        if ((*(short *)(lVar18 + 0x20 + (long)(int)uVar12 * 0x178 + 4) == 0xad &&
             (in_stack_00000038._4_1_ & 1) == 0) && (*(int *)(unaff_x19 + 0x310) == 0)) {
          in_stack_00000038._4_1_ = 0;
          in_stack_00000e3c = 0x2d;
          *(uint *)(unaff_x25 + 0x28) = uVar12;
          unaff_w26 = unaff_w26 - 1;
          in_stack_00000e38 = uVar12;
          fVar26 = unaff_s14;
          goto LAB_0881b440;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0881d348;
        if (*(short *)(lVar18 + 0x20 + (long)(int)uVar11 * 0x178 + 4) == 0xad) {
          in_stack_00000038._4_1_ = 1;
          fVar26 = unaff_s14;
          goto LAB_0881b440;
        }
        if ((uStack0000000000000044 & uStack0000000000000014 & 1) != 0) {
          fVar28 = *(float *)(unaff_x19 + 0x2fc) / 100.0;
          fVar38 = *(float *)(unaff_x19 + 0x300);
          if ((fVar28 <= fVar38) || (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) {
            if ((*in_stack_00000018 <= *(float *)(unaff_x19 + 0x278)) ||
               (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) goto LAB_0881cf78;
            *(float *)(unaff_x19 + 0x264) = *in_stack_00000018;
            fVar26 = (*in_stack_00000018 - *(float *)(unaff_x19 + 0x268)) * 0.5;
            if (fVar26 <= DAT_01aec3c4) {
              fVar26 = DAT_01aec3c4;
            }
            fVar26 = *in_stack_00000018 - fVar26;
            *in_stack_00000018 = fVar26;
            fVar32 = fVar26 * 20.0 + 0.5;
            fVar26 = DAT_01aec808;
            if (fVar32 != INFINITY) {
              fVar26 = (float)(int)fVar32 / 20.0;
            }
            if (fVar26 <= *(float *)(unaff_x19 + 0x278)) {
              fVar26 = *(float *)(unaff_x19 + 0x278);
            }
            *in_stack_00000018 = fVar26;
          }
          else {
            fVar35 = fVar26;
            if (0.0 < fVar38) {
              fVar35 = fVar26 / (1.0 - fVar38);
            }
            fVar38 = fVar38 + (fVar26 - fVar27 * (fVar32 + DAT_01aec4cc)) / fVar35;
            if (fVar28 <= fVar38) {
              fVar38 = fVar28;
            }
            *(float *)(unaff_x19 + 0x300) = fVar38;
          }
LAB_0881d200:
          FUN_0882a1d4(0);
          return;
        }
LAB_0881cf78:
        if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
          fVar26 = *(float *)(unaff_x19 + 0x4dc);
          fVar32 = *(float *)(unaff_x19 + 0x4e4);
          if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          fVar26 = fVar26 - fVar32;
          if (((fStack0000000000000024 < ABS(fVar26)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
             (*(char *)(unaff_x19 + 0x374) == '\0')) {
            *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar26;
            *(float *)(unaff_x19 + 0x4ec) = fVar26 + *(float *)(unaff_x19 + 0x4ec);
          }
        }
        fVar32 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
        *(undefined4 *)(unaff_x19 + 0x4bc) = 0;
        *(undefined4 *)(unaff_x19 + 0x4a8) = *(undefined4 *)(unaff_x19 + 0x4a4);
        fVar26 = *(float *)(unaff_x19 + 0x4d8);
        if (fVar32 <= *(float *)(unaff_x19 + 0x4d8)) {
          fVar26 = fVar32;
        }
        *(float *)(unaff_x19 + 0x4d8) = fVar26;
        FUN_088229a4();
        lVar18 = *(long *)(unaff_x19 + 0x498);
        *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
        puVar7 = PTR_DAT_09337670;
        if (lVar18 == 0) goto LAB_0881d344;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
        fVar26 = *(float *)(unaff_x19 + 0x2ec);
        bVar9 = fVar26 != DAT_01aeb5f8;
        fVar32 = *(float *)(lVar18 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x14c);
        if (bVar9) {
          fVar38 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
        }
        else {
          fVar38 = fVar32 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
                   fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8))
          ;
          fVar26 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
        }
        *(bool *)(unaff_x19 + 0x2f0) = bVar9;
        lVar18 = *(long *)puVar7;
        *(float *)(unaff_x19 + 0x4ec) = *(float *)(unaff_x19 + 0x4ec) + fVar26 + fVar38;
        if (*(int *)(lVar18 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar18 = *(long *)puVar7;
        }
        fVar26 = *(float *)(unaff_x19 + 0x444);
        in_stack_00000038._4_1_ = 0;
        uVar15 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x1730);
        *(float *)(unaff_x19 + 0x4e4) = fVar32;
        uStack0000000000000044 = 1;
        uVar15 = NEON_rev64(uVar15,4);
        *(undefined8 *)(unaff_x25 + 0x60) = uVar15;
        *(float *)(unaff_x19 + 0x658) = fVar26 + 0.0;
        fVar26 = unaff_s14;
        goto LAB_0881b440;
      }
    }
    fVar32 = fVar26 + *(float *)(unaff_x19 + 0x388) + *(float *)(unaff_x19 + 0x38c);
    fVar27 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fVar26 = *(float *)(unaff_x19 + 0x41c);
    if (*(float *)(unaff_x19 + 0x41c) <= fVar32) {
      fVar26 = fVar32;
    }
    fVar32 = *(float *)(unaff_x19 + 0x428);
    if (*(float *)(unaff_x19 + 0x428) <= fVar27) {
      fVar32 = fVar27;
    }
    *(float *)(unaff_x19 + 0x41c) = fVar26;
    fVar36 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(unaff_x19 + 0x428) = fVar32;
  }
  else {
    if (iStack0000000000000040 == 2) {
      if ((uStack0000000000000084 == 0) && (unaff_w27 != 0x200b)) goto LAB_0881c454;
      goto LAB_0881c48c;
    }
    if (uStack0000000000000084 == 0) {
LAB_0881c454:
      if (((unaff_w27 != 3) && (unaff_w27 != 0x200b)) && (unaff_w27 != 0xad)) goto LAB_0881c48c;
    }
    if ((((in_stack_00000038._4_1_ | bVar9 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x65c) == 1)
       ) goto LAB_0881c48c;
  }
  if (0.0 < fVar36) {
    uVar29 = *(undefined4 *)(unaff_x19 + 0x4dc);
    uVar37 = *(undefined4 *)(unaff_x19 + 0x4e4);
    if (*(int *)(*(long *)PTR_DAT_093375b0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar13 = FUN_087f05f0(uVar29,uVar37,0);
    if ((((uVar13 & 1) == 0) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
       (*(char *)(unaff_x19 + 0x374) == '\0')) {
      fVar26 = *(float *)(unaff_x19 + 0x4dc) - *(float *)(unaff_x19 + 0x4e4);
      *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar26;
      *(float *)(unaff_x19 + 0x4ec) = fVar26 + *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4e4) = *(float *)(unaff_x19 + 0x4e4) + fVar26;
    }
  }
  if (unaff_w27 == 9) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    memmove(&stack0x000002a0,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
    fVar26 = (float)FUN_08a73bec(&stack0x000002a0,0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    fVar32 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(unaff_x19 + 0x100) + 0x1b1));
    fVar38 = *(float *)(unaff_x19 + 0x658);
    fVar32 = unaff_s14 * fVar26 * fVar32;
    fVar26 = fVar32 * (float)(int)(fVar38 / fVar32);
    if (fVar26 <= fVar38) {
      fVar26 = fVar38 + fVar32;
    }
LAB_0881c760:
    bVar8 = false;
    *(float *)(unaff_x19 + 0x658) = fVar26;
LAB_0881c768:
    if (*(int *)(unaff_x25 + 0x28) != iStack000000000000005c) goto LAB_0881c778;
  }
  else {
    if (*(float *)(unaff_x19 + 0x2d8) == 0.0) {
      fVar26 = *(float *)(unaff_x19 + 0x658);
      fVar32 = (float)FUN_08a73e50(&stack0x00000220,0);
      fVar28 = *(float *)(unaff_x19 + 0x47c);
      fVar27 = (float)FUN_08a78388(&stack0x00000210,0);
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
      fVar26 = fVar26 + (1.0 - *(float *)(unaff_x19 + 0x300)) *
                        (*(float *)(unaff_x19 + 0x2d4) +
                        unaff_s14 * (fVar32 * fVar28 + fVar27) +
                        in_stack_00000060 *
                        (fStack0000000000000068 +
                        fVar38 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
    }
    else {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
      fVar26 = *(float *)(unaff_x19 + 0x658) +
               (1.0 - *(float *)(unaff_x19 + 0x300)) *
               (*(float *)(unaff_x19 + 0x2d4) +
               (*(float *)(unaff_x19 + 0x2d8) - fVar30) +
               in_stack_00000060 * (fVar38 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
    }
    *(float *)(unaff_x19 + 0x658) = fVar26;
    if ((uStack0000000000000084 != 0) || (unaff_w27 == 0x200b)) {
      *(float *)(unaff_x19 + 0x658) = fVar26 + in_stack_00000060 * *(float *)(unaff_x19 + 0x2e0);
    }
    if (unaff_w27 == 0xd) {
      fVar26 = *(float *)(unaff_x19 + 0x444) + 0.0;
      goto LAB_0881c760;
    }
    bVar8 = unaff_w27 == 10;
    if (((0xb < unaff_w27) || ((1 << (ulong)(unaff_w27 & 0x1f) & 0xc08U) == 0)) &&
       (1 < unaff_w27 - 0x2028)) goto LAB_0881c768;
  }
  if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
    fVar26 = *(float *)(unaff_x19 + 0x4dc);
    fVar32 = *(float *)(unaff_x19 + 0x4e4);
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar26 = fVar26 - fVar32;
    if (((fStack0000000000000024 < ABS(fVar26)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
       (*(char *)(unaff_x19 + 0x374) == '\0')) {
      *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar26;
      *(float *)(unaff_x19 + 0x4ec) = fVar26 + *(float *)(unaff_x19 + 0x4ec);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x374) = 0;
  fVar32 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
  fVar26 = *(float *)(unaff_x19 + 0x4d8);
  if (fVar32 <= *(float *)(unaff_x19 + 0x4d8)) {
    fVar26 = fVar32;
  }
  *(float *)(unaff_x19 + 0x4d8) = fVar26;
  if (((uVar11 == uVar12) && (unaff_w27 == 0x2d)) ||
     ((unaff_w27 - 10 < 2 || (unaff_w27 - 0x2028 < 2)))) {
    FUN_088229a4();
    FUN_088229a4();
    uVar11 = *(uint *)(unaff_x19 + 0x4a4);
    lVar18 = *(long *)(unaff_x19 + 0x498);
    iVar19 = uVar11 + 1;
    *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
    *(int *)(unaff_x19 + 0x4a8) = iVar19;
    if (lVar18 == 0) goto LAB_0881d344;
    unaff_w29 = 1;
    if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0881d348;
    fVar26 = *(float *)(lVar18 + (long)(int)uVar11 * 0x178 + 0x14c);
    if (*(float *)(unaff_x19 + 0x2ec) == DAT_01aeb5f8) {
      fVar32 = 0.0;
      if (unaff_w27 == 0x2029) {
        bVar8 = true;
      }
      if (bVar8) {
        fVar32 = *(float *)(unaff_x19 + 0x2f8);
      }
      uVar22 = 0;
      fVar32 = fVar26 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
               fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8)) +
               in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar32) +
               *(float *)(unaff_x19 + 0x4ec);
    }
    else {
      fVar32 = 0.0;
      if (unaff_w27 == 0x2029) {
        bVar8 = true;
      }
      if (bVar8) {
        fVar32 = *(float *)(unaff_x19 + 0x2f8);
      }
      uVar22 = 1;
      fVar32 = *(float *)(unaff_x19 + 0x4ec) +
               *(float *)(unaff_x19 + 0x2ec) +
               in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar32);
    }
    *(float *)(unaff_x19 + 0x4ec) = fVar32;
    puVar7 = PTR_DAT_09337670;
    *(undefined1 *)(unaff_x19 + 0x2f0) = uVar22;
    lVar18 = *(long *)puVar7;
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar18 = *(long *)puVar7;
      iVar19 = *(int *)(unaff_x25 + 0x28) + 1;
    }
    fVar32 = *(float *)(unaff_x19 + 0x440);
    fVar38 = *(float *)(unaff_x19 + 0x444);
    uVar15 = *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 0x1730);
    *(float *)(unaff_x19 + 0x4e4) = fVar26;
    *(int *)(unaff_x19 + 0x4a4) = iVar19;
    uVar15 = NEON_rev64(uVar15,4);
    *(undefined8 *)(unaff_x25 + 0x60) = uVar15;
    *(float *)(unaff_x19 + 0x658) = fVar32 + 0.0 + fVar38;
    fVar26 = unaff_s14;
    goto LAB_0881b440;
  }
  if (unaff_w27 == 3) {
    if (*(long *)(unaff_x19 + 0x488) == 0) goto LAB_0881d344;
    unaff_w26 = *(uint *)(*(long *)(unaff_x19 + 0x488) + 0x18);
    unaff_w27 = 3;
  }
LAB_0881c778:
  if (((in_stack_00000070 == 3) || (in_stack_00000070 == 0)) &&
     ((*(uint *)(unaff_x19 + 0x310) | 2) != 3)) {
    unaff_w29 = 1;
    goto LAB_0881cf00;
  }
  if (((uStack0000000000000084 == 0) && (unaff_w27 != 0x2d)) &&
     ((unaff_w27 != 0x200b && (unaff_w27 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x309) == '\0') goto LAB_0881cb10;
LAB_0881c7a8:
    unaff_w29 = 1;
    if ((uStack0000000000000044 & 1) == 0) {
      uStack0000000000000044 = 0;
      goto LAB_0881cf00;
    }
    if ((unaff_w27 == 0xa0 || uStack0000000000000084 == 0) &&
       (bVar9 != true || (in_stack_00000038._4_1_ & 1) != 0)) {
      uStack0000000000000044 = 1;
      goto LAB_0881cef0;
    }
    FUN_088229a4();
    uStack0000000000000044 = 1;
  }
  else {
    unaff_w29 = 1;
    if (*(char *)(unaff_x19 + 0x309) != '\0') goto LAB_0881c7a8;
    if ((int)unaff_w27 < 0x2007) {
      if (unaff_w27 == 0x2d) {
        uVar11 = *(int *)(unaff_x25 + 0x28) - 1;
        if (0 < *(int *)(unaff_x25 + 0x28)) {
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
          goto LAB_0881d344;
          if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0881d348;
          uVar4 = *(undefined2 *)(lVar18 + (ulong)uVar11 * 0x178 + 0x24);
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_075d81a8(uVar4,0);
          if ((uVar13 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
            goto LAB_0881d344;
            uVar11 = *(int *)(unaff_x25 + 0x28) - 1;
            if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0881d348;
            if (*(int *)(lVar18 + (long)(int)uVar11 * 0x178 + 0x5c) == *(int *)(unaff_x19 + 0x4b8))
            goto LAB_0881cf00;
          }
        }
      }
      else if (unaff_w27 == 0xa0) goto LAB_0881cb10;
LAB_0881ced8:
      uStack0000000000000044 = 0;
      goto LAB_0881cef0;
    }
    if (((0x28 < unaff_w27 - 0x2007) ||
        ((1L << ((ulong)(unaff_w27 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
       (unaff_w27 != 0x2060)) goto LAB_0881ced8;
LAB_0881cb10:
    unaff_w29 = 1;
    if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar13 = FUN_08847e38(unaff_w27,0);
    if ((uVar13 & 1) == 0) {
LAB_0881cb5c:
      if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar13 = FUN_08847e94(unaff_w27,0);
      if ((uVar13 & 1) == 0) {
        if ((*(char *)(unaff_x19 + 0x309) == '\0') &&
           (uVar11 = *(int *)(unaff_x25 + 0x28) + 1, (int)uVar11 < iStack0000000000000020)) {
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
          goto LAB_0881d344;
          if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0881d348;
          uVar4 = *(undefined2 *)(lVar18 + (long)(int)uVar11 * 0x178 + 0x24);
          if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar13 = FUN_08847e94(uVar4,0);
          if ((uVar13 & 1) != 0) goto code_r0x0881ccdc;
        }
        goto LAB_0881c7a8;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar13 = FUN_0883e2a4(0);
      if ((uVar13 & 1) != 0) goto LAB_0881cb5c;
    }
    if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar18 = FUN_0883e090(0);
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) goto LAB_0881d344;
    uVar13 = FUN_057cfb98(*(long *)(lVar18 + 0x10),unaff_w27,*(undefined8 *)PTR_DAT_09337598);
    if (*(int *)(unaff_x25 + 0x28) < iStack000000000000005c) {
      if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar18 = FUN_0883e090(0);
      if ((lVar18 == 0) || (lVar14 = *in_stack_00000088, lVar14 == 0)) goto LAB_0881d344;
      uVar11 = *(int *)(unaff_x25 + 0x28) + 1;
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_0881d348;
      if (*(long *)(lVar18 + 0x18) == 0) goto LAB_0881d344;
      uVar11 = FUN_057cfb98(*(long *)(lVar18 + 0x18),
                            *(undefined2 *)(lVar14 + (long)(int)uVar11 * 0x178 + 0x24),
                            *(undefined8 *)PTR_DAT_09337598);
      if ((uVar13 & 1) != 0) goto LAB_0881ce04;
      uStack0000000000000044 = uVar11 & uStack0000000000000044;
      uVar12 = uStack0000000000000044 & uStack0000000000000084 != 0;
      if (((uStack0000000000000044 & 1) != 0) || (((uVar11 ^ 1) & 1) != 0)) goto LAB_0881ce2c;
      uStack0000000000000044 = 0;
    }
    else {
      if ((uVar13 & 1) == 0) {
        uStack0000000000000044 = 0;
        goto LAB_0881cef0;
      }
LAB_0881ce04:
      uVar12 = (uint)(uStack0000000000000084 != 0);
      if ((uStack0000000000000044 & uVar10 == uVar1) == 0) goto LAB_0881cf00;
      uStack0000000000000044 = 1;
LAB_0881ce2c:
      FUN_088229a4();
    }
    if (uVar12 == 0) goto LAB_0881cf00;
  }
  unaff_w29 = 1;
LAB_0881cef0:
  FUN_088229a4();
  goto LAB_0881cf00;
code_r0x0881ccdc:
  if (*(long *)(unaff_x19 + 0x3a0) == 0) goto LAB_0881d344;
  param_1 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38);
  goto code_r0x0881cce8;
}


