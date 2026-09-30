/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$UnregisterDeviceLayout
ENTRY_POINT: 0881cec4
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


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__UnregisterDeviceLayout
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  undefined1 uVar23;
  uint in_w9;
  float *pfVar24;
  long *plVar25;
  long unaff_x19;
  int unaff_w23;
  long *unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  long *plVar26;
  undefined4 unaff_w29;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
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
  
code_r0x0881cec4:
  if (*(int *)(param_1 + (long)(int)in_w9 * (long)unaff_w23 + 0x5c) == *(int *)(unaff_x19 + 0x4b8))
  goto LAB_0881cf00;
LAB_0881ced8:
  uStack0000000000000044 = 0;
LAB_0881cef0:
  FUN_088229a4();
LAB_0881cf00:
  *(int *)(unaff_x25 + 0x28) = *(int *)(unaff_x25 + 0x28) + 1;
  fVar27 = unaff_s14;
LAB_0881b440:
  uVar13 = in_stack_00000e38;
  lVar19 = *(long *)(unaff_x19 + 0x488);
  unaff_w26 = unaff_w26 + 1;
  if (lVar19 != 0) {
    if ((int)*(uint *)(lVar19 + 0x18) <= (int)unaff_w26) goto LAB_0881d12c;
    if (unaff_w26 < *(uint *)(lVar19 + 0x18)) goto code_r0x0881b1d0;
    goto LAB_0881d348;
  }
  goto LAB_0881d344;
code_r0x0881b1d0:
  uVar11 = *(uint *)(lVar19 + (long)(int)unaff_w26 * 0x10 + 0x24);
  in_stack_00000e38 = uVar13;
  if (uVar11 == 0x1a) goto LAB_0881b440;
  if (uVar11 == 0) {
LAB_0881d12c:
    if ((((*(float *)(unaff_x19 + 0x264) - *(float *)(unaff_x19 + 0x268) <= DAT_01aec8ec) ||
         ((_fStack0000000000000010 & 0x100000000) == 0)) ||
        (fVar27 = *in_stack_00000018, *(float *)(unaff_x19 + 0x27c) <= fVar27)) ||
       (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
      uVar34 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x378),0,4);
      uVar16 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x380),0,4);
      uVar35 = NEON_fmov(0x3f800000,4);
      fVar27 = (*(float *)(unaff_x19 + 0x41c) + (float)uVar34 + (float)uVar16) * 100.0 +
               (float)uVar35;
      fVar33 = (*(float *)(unaff_x19 + 0x428) + (float)((ulong)uVar34 >> 0x20) +
               (float)((ulong)uVar16 >> 0x20)) * 100.0 + (float)((ulong)uVar35 >> 0x20);
      uVar16 = NEON_scvtf(CONCAT44((int)fVar33,(int)fVar27),4);
      uVar14 = CONCAT44((float)((ulong)uVar16 >> 0x20) / 100.0,(float)uVar16 / 100.0);
      *(undefined1 *)(unaff_x19 + 0x274) = 1;
      uVar14 = uVar14 ^ (uVar14 ^ 0xcba3d70acba3d70a) &
                        CONCAT44(-(uint)(fVar33 == INFINITY),-(uint)(fVar27 == INFINITY));
      *(int *)(unaff_x19 + 0x41c) = (int)uVar14;
      *(float *)(unaff_x19 + 0x428) = (float)(uVar14 >> 0x20);
      return;
    }
    if (*(float *)(unaff_x19 + 0x300) < *(float *)(unaff_x19 + 0x2fc) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x300) = 0;
      fVar27 = *in_stack_00000018;
    }
    *(float *)(unaff_x19 + 0x268) = fVar27;
    fVar27 = (*(float *)(unaff_x19 + 0x264) - *in_stack_00000018) * 0.5;
    if (fVar27 <= DAT_01aec3c4) {
      fVar27 = DAT_01aec3c4;
    }
    fVar27 = *in_stack_00000018 + fVar27;
    *in_stack_00000018 = fVar27;
    fVar33 = fVar27 * 20.0 + 0.5;
    fVar27 = DAT_01aec808;
    if (fVar33 != INFINITY) {
      fVar27 = (float)(int)fVar33 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x27c) <= fVar27) {
      fVar27 = *(float *)(unaff_x19 + 0x27c);
    }
    *in_stack_00000018 = fVar27;
    goto LAB_0881d200;
  }
  uVar23 = (undefined1)unaff_w29;
  if ((uVar11 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x469) = uVar23;
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    uVar14 = FUN_0881d354();
    if (((uVar14 & 1) != 0) && (unaff_w26 = in_stack_0000020c, *(int *)(unaff_x19 + 0x65c) == 0))
    goto LAB_0881b440;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) goto LAB_0881d344;
    if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
    lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178;
    *(undefined4 *)(unaff_x19 + 0x65c) = *(undefined4 *)(lVar19 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar19 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar19 + 0x40);
    thunk_FUN_040ec700(unaff_x19 + 0x100);
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) goto LAB_0881d344;
  uVar2 = *(uint *)(unaff_x25 + 0x28);
  if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_0881d348;
  uVar30 = *(undefined4 *)(unaff_x19 + 0x120);
  cVar3 = *(char *)(lVar19 + (long)(int)uVar2 * 0x178 + 0x54);
  *(undefined1 *)(unaff_x19 + 0x469) = 0;
  uVar12 = uVar2;
  if (uVar13 == uVar2) {
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    if (in_stack_00000e3c == 0x2026) {
      lVar19 = *in_stack_00000088;
      if (lVar19 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_0881d348;
      *(undefined8 *)(lVar19 + (long)(int)uVar2 * 0x178 + 0x30) = *(undefined8 *)(unaff_x19 + 0x668)
      ;
      thunk_FUN_040ec700();
      lVar19 = *(long *)(unaff_x19 + 0x498);
      if (lVar19 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178;
      *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x670);
      *(undefined4 *)(lVar19 + 0x20) = 0;
      thunk_FUN_040ec700();
      lVar19 = *(long *)(unaff_x19 + 0x498);
      if (lVar19 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      *(undefined8 *)(lVar19 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x48) =
           *(undefined8 *)(unaff_x19 + 0x678);
      thunk_FUN_040ec700();
      lVar19 = *(long *)(unaff_x19 + 0x498);
      if (lVar19 == 0) goto LAB_0881d344;
      uVar12 = *(uint *)(unaff_x19 + 0x4a4);
      if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
      uVar11 = 0x2026;
      *(undefined4 *)(lVar19 + (long)(int)uVar12 * 0x178 + 0x50) =
           *(undefined4 *)(unaff_x19 + 0x680);
      *(undefined1 *)(unaff_x19 + 0x328) = uVar23;
      in_stack_00000e3c = 3;
      in_stack_00000e38 = uVar12 + 1;
      goto LAB_0881b3f4;
    }
    uVar11 = in_stack_00000e3c;
    if (in_stack_00000e3c != 3) goto LAB_0881b3f4;
    lVar19 = *in_stack_00000088;
    if (((lVar19 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
       (lVar15 = FUN_087f97a8(*(long *)(unaff_x19 + 0x100),0), lVar15 == 0)) goto LAB_0881d344;
    uVar16 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                       (lVar15,3,*(undefined8 *)PTR_DAT_09337590);
    if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_0881d348;
    *(undefined8 *)(lVar19 + (long)(int)uVar2 * 0x178 + 0x30) = uVar16;
    thunk_FUN_040ec700();
    uVar11 = 3;
    *(undefined1 *)(unaff_x19 + 0x328) = uVar23;
  }
  else {
LAB_0881b3f4:
    if ((uVar11 != 3) && ((int)uVar12 < *(int *)(unaff_x19 + 0x35c))) {
      lVar19 = *in_stack_00000088;
      if (lVar19 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
      lVar19 = lVar19 + (long)(int)uVar12 * 0x178;
      *(undefined1 *)(lVar19 + 400) = 0;
      *(undefined2 *)(lVar19 + 0x24) = 0x200b;
      *(undefined4 *)(lVar19 + 0x5c) = 0;
      *(uint *)(unaff_x25 + 0x28) = uVar12 + 1;
      goto LAB_0881b440;
    }
  }
  fVar39 = 1.0;
  fVar33 = 1.0;
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    uVar12 = *(uint *)(unaff_x19 + 0x284);
    fVar33 = fVar39;
    if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 >> 3 & 1) == 0) {
        if ((uVar12 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar14 = FUN_075da814(uVar11,0);
          if ((uVar14 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar11 = FUN_075daa9c(uVar11,0);
            fVar39 = fStack0000000000000010;
            goto LAB_0881b560;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar14 = FUN_075da774(uVar11,0);
        if ((uVar14 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar11 = FUN_075dac14(uVar11,0);
          goto LAB_0881b560;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar14 = FUN_075da814(uVar11,0);
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar11 = FUN_075daa9c(uVar11,0);
LAB_0881b560:
        uVar11 = uVar11 & 0xffff;
        fVar33 = fVar39;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
  memmove(&stack0x00000240,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) goto LAB_0881d344;
    if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
    *unaff_x24 = *(long *)(lVar19 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x30);
    thunk_FUN_040ec700(unaff_x24);
    if (*unaff_x24 == 0) goto LAB_0881b440;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) goto LAB_0881d344;
    uVar1 = *(uint *)(unaff_x25 + 0x28);
    uVar12 = *(uint *)(lVar19 + 0x18);
    if (uVar12 <= uVar1) goto LAB_0881d348;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar19 + 0x20 + (long)(int)uVar1 * 0x178 + 0x30);
    pfVar24 = in_stack_00000048;
    if (uVar13 == uVar2) {
      lVar15 = *(long *)(unaff_x19 + 0x488);
      if (lVar15 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w26) goto LAB_0881d348;
      if ((*(int *)(lVar15 + (long)(int)unaff_w26 * 0x10 + 0x24) == 10) &&
         (uVar1 != *(uint *)(unaff_x19 + 0x4a8))) {
        if (uVar12 <= uVar1 - 1) goto LAB_0881d348;
        pfVar24 = (float *)(lVar19 + 0x20 + (long)(int)(uVar1 - 1) * 0x178 + 0x38);
      }
    }
    fVar29 = *pfVar24;
    fVar39 = (float)FUN_08a73b44(&stack0x00000240,0);
    fVar28 = (float)FUN_08a73b4c(&stack0x00000240,0);
    if (uVar13 == uVar2) {
      fStack0000000000000078 = 0.0;
      fVar36 = 0.0;
      if (uVar11 != 0x2026) goto LAB_0881b724;
    }
    else {
LAB_0881b724:
      fVar36 = (float)FUN_08a73b74(&stack0x00000240,0);
      fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x00000240,0);
    }
    lVar19 = *(long *)(unaff_x19 + 0x660);
    if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_0881d344;
    fVar37 = *(float *)(unaff_x19 + 0x43c);
    fVar31 = *(float *)(lVar19 + 0x2c);
    fVar27 = (float)FUN_08a74044(*(long *)(lVar19 + 0x20),0);
    lVar19 = *in_stack_00000088;
    if (lVar19 == 0) goto LAB_0881d344;
    uVar12 = *(uint *)(unaff_x25 + 0x28);
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
    *(undefined4 *)(lVar19 + (long)(int)uVar12 * 0x178 + 0x20) = 0;
    fVar27 = in_stack_00000050._4_4_ * ((fVar33 * fVar29) / fVar39) * fVar28 * fVar37 * fVar31 *
             fVar27;
LAB_0881ba24:
    bVar10 = uVar11 == 0xad;
    unaff_s14 = 0.0;
    if (uVar11 != 3 && !bVar10) {
      unaff_s14 = fVar27;
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x65c) == 1) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) goto LAB_0881d344;
      if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      plVar26 = *(long **)(lVar19 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x30);
      if (plVar26 == (long *)0x0) goto LAB_0881b440;
      bVar4 = *(byte *)(*(long *)PTR_DAT_093375d8 + 0x130);
      if ((*(byte *)(*plVar26 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_093375d8)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar26);
      }
      plVar21 = (long *)plVar26[3];
      if (plVar21 == (long *)0x0) {
        plVar21 = (long *)0x0;
        *in_stack_00000030 = 0;
      }
      else {
        lVar19 = *(long *)PTR_DAT_093375d0;
        bVar4 = *(byte *)(lVar19 + 0x130);
        if (*(byte *)(*plVar21 + 0x130) < bVar4) {
          plVar25 = (long *)0x0;
        }
        else {
          plVar25 = plVar21;
          if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar4 * 8 + -8) != lVar19) {
            plVar25 = (long *)0x0;
          }
        }
        *in_stack_00000030 = (long)plVar25;
        if (*(byte *)(*plVar21 + 0x130) < bVar4) {
          plVar21 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar4 * 8 + -8) != lVar19) {
          plVar21 = (long *)0x0;
        }
      }
      thunk_FUN_040ec700(in_stack_00000030,plVar21);
      lVar19 = plVar26[5];
      *(int *)(unaff_x19 + 0x6bc) = (int)lVar19;
      uVar1 = (int)lVar19 + 0xe000;
      if (uVar11 != 0x3c) {
        uVar1 = uVar11;
      }
      if (*(long *)(unaff_x19 + 0x6b0) == 0) goto LAB_0881d344;
      memmove(&stack0x000001a0,(void *)(*(long *)(unaff_x19 + 0x6b0) + 0x28),0x60);
      fVar27 = (float)FUN_08a73b44(&stack0x000001a0,0);
      fVar39 = *in_stack_00000048;
      if (fVar27 <= 0.0) {
        fVar27 = (float)FUN_08a73b44(&stack0x00000240,0);
        fVar28 = (float)FUN_08a73b4c(&stack0x00000240,0);
        fVar29 = (float)FUN_08a73b74(&stack0x00000240,0);
        if (plVar26[4] == 0) goto LAB_0881d344;
        FUN_08a74008(&stack0x00000e40,plVar26[4],0);
        in_stack_00000180 = in_stack_00000e40;
        in_stack_00000188 = in_stack_00000e48;
        in_stack_00000190 = in_stack_00000e50;
        fVar36 = (float)FUN_08a73e38(&stack0x00000180,0);
        if (plVar26[4] == 0) goto LAB_0881d344;
        fVar37 = *(float *)((long)plVar26 + 0x2c);
        fVar28 = in_stack_00000050._4_4_ * (fVar39 / fVar27) * fVar28;
        fVar27 = (float)FUN_08a74044(plVar26[4],0);
        fVar27 = fVar28 * (fVar29 / fVar36) * fVar37 * fVar27;
        fVar39 = 0.0;
        if (fVar27 != 0.0) {
          fVar39 = fVar28 / fVar27;
        }
        fVar36 = (float)FUN_08a73b74(&stack0x00000240,0);
        fVar36 = fVar36 * fVar39;
        fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x00000240,0);
        fStack0000000000000078 = fStack0000000000000078 * fVar39;
      }
      else {
        fVar27 = (float)FUN_08a73b44(&stack0x000001a0,0);
        fVar28 = (float)FUN_08a73b4c(&stack0x000001a0,0);
        if (plVar26[4] == 0) goto LAB_0881d344;
        fVar36 = *(float *)((long)plVar26 + 0x2c);
        fVar29 = (float)FUN_08a74044(plVar26[4],0);
        fVar27 = in_stack_00000050._4_4_ * (fVar39 / fVar27) * fVar28 * fVar36 * fVar29;
        fVar36 = (float)FUN_08a73b74(&stack0x000001a0,0);
        fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x000001a0,0);
      }
      *unaff_x24 = (long)plVar26;
      thunk_FUN_040ec700(unaff_x24,plVar26);
      lVar19 = *in_stack_00000088;
      if (lVar19 == 0) goto LAB_0881d344;
      uVar12 = *(uint *)(unaff_x25 + 0x28);
      if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
      lVar15 = lVar19 + (long)(int)uVar12 * 0x178;
      *(undefined4 *)(lVar15 + 0x20) = unaff_w29;
      *(float *)(lVar15 + 0x15c) = fVar27;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar30;
      uVar11 = uVar1;
      goto LAB_0881ba24;
    }
    bVar10 = uVar11 == 0xad;
    fVar36 = 0.0;
    unaff_s14 = 0.0;
    if (uVar11 != 3 && !bVar10) {
      unaff_s14 = fVar27;
    }
    lVar19 = *in_stack_00000088;
    if (lVar19 == 0) goto LAB_0881d344;
    uVar12 = *(uint *)(unaff_x25 + 0x28);
    fStack0000000000000078 = 0.0;
  }
  if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
  *(short *)(lVar19 + (long)(int)uVar12 * 0x178 + 0x24) = (short)uVar11;
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) goto LAB_0881d344;
  if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
  lVar19 = *(long *)(lVar19 + (long)(int)uVar12 * 0x178 + 0x38);
  if (lVar19 == 0) {
    if ((*unaff_x24 == 0) || (lVar19 = *(long *)(*unaff_x24 + 0x20), lVar19 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000e40,lVar19,0);
    in_stack_000000d0 = in_stack_00000e40;
    in_stack_000000d8 = in_stack_00000e48;
    in_stack_000000e0 = in_stack_00000e50;
  }
  else {
    FUN_08a74008(&stack0x000000d0,lVar19,0);
  }
  if (uVar11 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uStack0000000000000084 = FUN_075d81a8(uVar11,0);
    uStack0000000000000084 = uStack0000000000000084 & 1;
  }
  else {
    uStack0000000000000084 = 0;
  }
  fVar39 = *(float *)(unaff_x19 + 0x2d0);
  uVar30 = 0;
  if ((*(char *)(unaff_x19 + 0x329) != '\0') && (*(int *)(unaff_x19 + 0x65c) == 0)) {
    if (*unaff_x24 == 0) goto LAB_0881d344;
    iVar20 = *(int *)(unaff_x25 + 0x28);
    uVar12 = *(uint *)(*unaff_x24 + 0x28);
    if (iVar20 < iStack000000000000005c) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) goto LAB_0881d344;
      uVar1 = iVar20 + 1;
      if (*(uint *)(lVar19 + 0x18) <= uVar1) goto LAB_0881d348;
      uVar30 = 0;
      if (*(int *)(lVar19 + 0x20 + (long)(int)uVar1 * 0x178) == 0) {
        lVar19 = *(long *)(lVar19 + 0x20 + (long)(int)uVar1 * 0x178 + 0x10);
        if ((((lVar19 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
            (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar15 == 0)) ||
           (lVar15 = *(long *)(lVar15 + 0x40), lVar15 == 0)) goto LAB_0881d344;
        uVar14 = FUN_06fba39c(lVar15,uVar12 | *(int *)(lVar19 + 0x28) << 0x10,&stack0x00000150,
                              *(undefined8 *)PTR_DAT_09337578);
        if ((uVar14 & 1) != 0) {
          FUN_08a786f8(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          uVar30 = UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x00000130,0);
          uVar14 = FUN_08a78734(&stack0x00000150,0);
          if ((uVar14 & 0x100) != 0) {
            fVar39 = 0.0;
          }
        }
      }
      iVar20 = *(int *)(unaff_x25 + 0x28);
    }
    if (0 < iVar20) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) goto LAB_0881d344;
      if (*(uint *)(lVar19 + 0x18) <= iVar20 - 1U) goto LAB_0881d348;
      lVar19 = *(long *)(lVar19 + (ulong)(iVar20 - 1U) * 0x178 + 0x30);
      if (lVar19 == 0) goto LAB_0881d344;
      uVar1 = *(uint *)(lVar19 + 0x28);
      lVar19 = FUN_088161d4();
      if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0)) goto LAB_0881d344;
      uVar6 = *(int *)(unaff_x25 + 0x28) - 1;
      if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_0881d348;
      if (*(int *)(lVar19 + (long)(int)uVar6 * 0x178 + 0x20) == 0) {
        if (((*(long *)(unaff_x19 + 0x100) == 0) ||
            (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar19 == 0)) ||
           (lVar19 = *(long *)(lVar19 + 0x40), lVar19 == 0)) goto LAB_0881d344;
        uVar14 = FUN_06fba39c(lVar19,uVar1 | uVar12 << 0x10,&stack0x00000150,
                              *(undefined8 *)PTR_DAT_09337578);
        if ((uVar14 & 1) != 0) {
          FUN_08a78720(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x00000130,0);
          FUN_08a783ac(uVar30,0);
          uVar14 = FUN_08a78734(&stack0x00000150,0);
          if ((uVar14 & 0x100) != 0) {
            fVar39 = 0.0;
          }
        }
      }
    }
    lVar19 = *in_stack_00000088;
    if (lVar19 == 0) goto LAB_0881d344;
    uVar12 = *(uint *)(unaff_x25 + 0x28);
    uVar30 = FUN_08a78388(&stack0x00000210,0);
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
    *(undefined4 *)(lVar19 + (long)(int)uVar12 * 0x178 + 0x154) = uVar30;
  }
  if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar14 = FUN_08847bd4(uVar11,0);
  uVar12 = *(uint *)(unaff_x25 + 0x28);
  if ((uVar14 & 1) == 0) {
    if (0 < (int)uVar12) {
      uVar1 = *(uint *)(unaff_x19 + 0x32c);
      if ((uVar1 == 0x80000000) || (uVar1 != uVar12 - 1)) {
        lVar19 = (ulong)uVar12 * 0x178 + 0x144;
        uVar17 = (ulong)uVar12;
        do {
          uVar12 = *(uint *)(unaff_x19 + 0x32c);
          uVar7 = uVar17 - 1;
          if (((long)uVar17 < 1) || (uVar1 = (int)uVar17 - 1, uVar1 == uVar12)) {
            if (uVar12 == 0x80000000) goto LAB_0881c0d0;
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0))
            goto LAB_0881d344;
            if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
            lVar19 = *(long *)(lVar19 + (long)(int)uVar12 * 0x178 + 0x30);
            if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x20), lVar19 == 0))
            goto LAB_0881d344;
            uVar12 = FUN_08a73ff8(lVar19,0);
            if ((*unaff_x24 == 0) ||
               (((*(long *)(unaff_x19 + 0x100) == 0 ||
                 (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar19 == 0)) ||
                (lVar19 = *(long *)(lVar19 + 0x48), lVar19 == 0)))) goto LAB_0881d344;
            uVar17 = FUN_06fc3f48(lVar19,uVar12 | *(int *)(*unaff_x24 + 0x28) << 0x10,
                                  &stack0x000000e8,*(undefined8 *)PTR_DAT_09337580);
            if ((uVar17 & 1) == 0) goto LAB_0881c0d0;
            lVar19 = *in_stack_00000088;
            if (lVar19 == 0) goto LAB_0881d344;
            if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_0881d348;
            FUN_08a78370((in_stack_000000e8._4_4_ +
                         (*(float *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x178 +
                                    0x138) - *(float *)(unaff_x19 + 0x658)) / unaff_s14) -
                         fStack00000000000000f8,&stack0x00000210,0);
            fVar39 = in_stack_000000f0;
            fVar28 = fStack00000000000000fc;
            goto LAB_0881c0bc;
          }
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0))
          goto LAB_0881d344;
          if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0881d348;
          lVar15 = *(long *)(lVar15 + lVar19 + -0x28c);
          if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x20), lVar15 == 0)) goto LAB_0881d344;
          uVar12 = FUN_08a73ff8(lVar15,0);
          if ((*unaff_x24 == 0) ||
             (((*(long *)(unaff_x19 + 0x100) == 0 ||
               (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar15 == 0)) ||
              (lVar15 = *(long *)(lVar15 + 0x50), lVar15 == 0)))) goto LAB_0881d344;
          uVar18 = FUN_06fcaab8(lVar15,uVar12 | *(int *)(*unaff_x24 + 0x28) << 0x10,&stack0x00000100
                                ,*(undefined8 *)PTR_DAT_09337588);
          lVar19 = lVar19 + -0x178;
          uVar17 = uVar7;
        } while ((uVar18 & 1) == 0);
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar15 == 0))
        goto LAB_0881d344;
        uVar12 = (uint)uVar7;
        if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_0881d348;
        lVar22 = *(long *)(unaff_x19 + 0x498);
        if (lVar22 == 0) goto LAB_0881d344;
        if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_0881d348;
        fVar39 = *(float *)(unaff_x19 + 0x4ec);
        fVar28 = *(float *)(unaff_x19 + 0x634);
        fVar29 = *(float *)(lVar22 + lVar19);
        FUN_08a78370(((*(float *)(lVar15 + lVar19 + -0xc) - *(float *)(unaff_x19 + 0x658)) /
                      unaff_s14 + in_stack_00000100._4_4_) - fStack0000000000000110,&stack0x00000210
                     ,0);
        fVar39 = (fVar29 - ((0.0 - fVar39) + fVar28)) / unaff_s14 + in_stack_00000108;
        fVar28 = fStack0000000000000114;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0))
        goto LAB_0881d344;
        if (*(uint *)(lVar19 + 0x18) <= uVar1) goto LAB_0881d348;
        lVar19 = *(long *)(lVar19 + (long)(int)uVar1 * 0x178 + 0x30);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x20), lVar19 == 0)) goto LAB_0881d344;
        uVar12 = FUN_08a73ff8(lVar19,0);
        if ((*unaff_x24 == 0) ||
           (((*(long *)(unaff_x19 + 0x100) == 0 ||
             (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar19 == 0)) ||
            (lVar19 = *(long *)(lVar19 + 0x48), lVar19 == 0)))) goto LAB_0881d344;
        uVar17 = FUN_06fc3f48(lVar19,uVar12 | *(int *)(*unaff_x24 + 0x28) << 0x10,&stack0x00000118,
                              *(undefined8 *)PTR_DAT_09337580);
        if ((uVar17 & 1) == 0) goto LAB_0881c0d0;
        lVar19 = *in_stack_00000088;
        if (lVar19 == 0) goto LAB_0881d344;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_0881d348;
        FUN_08a78370((in_stack_00000118._4_4_ +
                     (*(float *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x178 + 0x138) -
                     *(float *)(unaff_x19 + 0x658)) / unaff_s14) - fStack0000000000000128,
                     &stack0x00000210,0);
        fVar39 = in_stack_00000120;
        fVar28 = fStack000000000000012c;
      }
LAB_0881c0bc:
      FUN_08a78380(fVar39 - fVar28,&stack0x00000210,0);
      fVar39 = 0.0;
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x32c) = uVar12;
  }
LAB_0881c0d0:
  fVar28 = (float)FUN_08a78378(&stack0x00000210,0);
  fVar29 = (float)FUN_08a78378(&stack0x00000210,0);
  fVar37 = *(float *)(unaff_x19 + 0x2d8);
  fVar31 = 0.0;
  fStack0000000000000068 = 0.0;
  if (fVar37 != 0.0) {
    if ((*unaff_x24 == 0) || (lVar19 = *(long *)(*unaff_x24 + 0x20), lVar19 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000e40,lVar19,0);
    in_stack_00000180 = in_stack_00000e40;
    in_stack_00000188 = in_stack_00000e48;
    in_stack_00000190 = in_stack_00000e50;
    fVar31 = (float)FUN_08a73e30(&stack0x00000180,0);
    if ((*unaff_x24 == 0) || (lVar19 = *(long *)(*unaff_x24 + 0x20), lVar19 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000090,lVar19,0);
    in_stack_00000188 = in_stack_00000098;
    in_stack_00000180 = in_stack_00000090;
    in_stack_00000190 = in_stack_000000a0;
    fVar32 = (float)FUN_08a73e40(&stack0x00000180,0);
    fVar31 = (1.0 - *(float *)(unaff_x19 + 0x300)) *
             (fVar37 * 0.5 - unaff_s14 * (fVar31 * 0.5 + fVar32));
    *(float *)(unaff_x19 + 0x658) = *(float *)(unaff_x19 + 0x658) + fVar31;
  }
  if (((cVar3 == '\0') && (*(int *)(unaff_x19 + 0x65c) == 0)) &&
     ((*(byte *)(unaff_x19 + 0x284) & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    fStack0000000000000068 = *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1ac);
  }
  unaff_w23 = 0x178;
  lVar19 = *in_stack_00000088;
  if (lVar19 == 0) goto LAB_0881d344;
  uVar12 = *(uint *)(unaff_x19 + 0x4a4);
  fVar32 = *(float *)(unaff_x19 + 0x658);
  fVar37 = (float)FUN_08a78368(&stack0x00000210,0);
  if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
  *(float *)(lVar19 + (long)(int)uVar12 * 0x178 + 0x138) = fVar32 + unaff_s14 * fVar37;
  lVar19 = *in_stack_00000088;
  if (lVar19 == 0) goto LAB_0881d344;
  uVar12 = *(uint *)(unaff_x19 + 0x4a4);
  fVar32 = *(float *)(unaff_x19 + 0x4ec);
  fVar40 = *(float *)(unaff_x19 + 0x634);
  fVar37 = (float)FUN_08a78378(&stack0x00000210,0);
  if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
  *(float *)(lVar19 + (long)(int)uVar12 * 0x178 + 0x144) =
       (0.0 - fVar32) + fVar40 + unaff_s14 * fVar37;
  fVar28 = unaff_s14 * (fVar36 + fVar28);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    fVar28 = fVar28 / fVar33;
    fVar29 = (unaff_s14 * (fStack0000000000000078 + fVar29)) / fVar33;
  }
  else {
    fVar29 = unaff_s14 * (fStack0000000000000078 + fVar29);
  }
  fVar36 = *(float *)(unaff_x19 + 0x634);
  uVar12 = *(uint *)(unaff_x19 + 0x4a4);
  uVar1 = *(uint *)(unaff_x19 + 0x4a8);
  fVar28 = fVar28 + fVar36;
  if ((uStack0000000000000084 == 0) || (uVar12 == uVar1)) {
    fVar29 = fVar29 + fVar36;
    fVar37 = fVar28;
    fVar32 = fVar29;
    if (fVar36 != 0.0) {
      fVar37 = (fVar28 - fVar36) / *(float *)(unaff_x19 + 0x43c);
      fVar32 = (fVar29 - fVar36) / *(float *)(unaff_x19 + 0x43c);
      if (fVar37 <= fVar28) {
        fVar37 = fVar28;
      }
      if (fVar29 <= fVar32) {
        fVar32 = fVar29;
      }
    }
    lVar19 = *(long *)(unaff_x19 + 0x498);
    fVar36 = fVar37;
    if (fVar37 <= *(float *)(unaff_x19 + 0x4dc)) {
      fVar36 = *(float *)(unaff_x19 + 0x4dc);
    }
    fVar40 = fVar32;
    if (*(float *)(unaff_x19 + 0x4e0) <= fVar32) {
      fVar40 = *(float *)(unaff_x19 + 0x4e0);
    }
    *(float *)(unaff_x19 + 0x4dc) = fVar36;
    *(float *)(unaff_x19 + 0x4e0) = fVar40;
    if (lVar19 == 0) goto LAB_0881d344;
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
    lVar19 = lVar19 + (long)(int)uVar12 * 0x178;
    *(float *)(lVar19 + 0x14c) = fVar37;
    *(float *)(lVar19 + 0x150) = fVar32;
    fVar37 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(lVar19 + 0x140) = fVar28 - fVar37;
    *(float *)(unaff_x19 + 0x4d4) = fVar28 - fVar37;
    *(float *)(lVar19 + 0x148) = fVar29 - fVar37;
    *(float *)(unaff_x19 + 0x4d8) = fVar29 - fVar37;
    if ((*(int *)(unaff_x19 + 0x4b8) == 0) || (*(char *)(unaff_x19 + 0x374) != '\0')) {
      lVar19 = *(long *)(unaff_x19 + 0x100);
      *(float *)(unaff_x25 + 0x50) = fVar36;
      if (lVar19 == 0) goto LAB_0881d344;
      fVar29 = *(float *)(unaff_x19 + 0x4d0);
      fVar36 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                                (lVar19 + 0x28,0);
      fVar33 = (unaff_s14 * fVar36) / fVar33;
      if (fVar29 <= fVar33) {
        fVar29 = fVar33;
      }
      fVar37 = *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4d0) = fVar29;
    }
  }
  else {
    lVar19 = *in_stack_00000088;
    if (lVar19 == 0) goto LAB_0881d344;
    if (*(uint *)(lVar19 + 0x18) <= uVar12) goto LAB_0881d348;
    lVar19 = lVar19 + (long)(int)uVar12 * 0x178;
    uVar16 = *(undefined8 *)(unaff_x25 + 0x60);
    *(undefined8 *)(lVar19 + 0x14c) = uVar16;
    fVar37 = *(float *)(unaff_x19 + 0x4ec);
    fVar33 = (float)uVar16 - fVar37;
    fVar29 = (float)((ulong)uVar16 >> 0x20) - fVar37;
    *(float *)(lVar19 + 0x140) = fVar33;
    *(float *)(lVar19 + 0x148) = fVar29;
    *(ulong *)(unaff_x25 + 0x58) = CONCAT44(fVar29,fVar33);
  }
  if ((fVar37 == 0.0) &&
     ((uStack0000000000000084 == 0 || (*(int *)(unaff_x19 + 0x4a4) == *(int *)(unaff_x19 + 0x4a8))))
     ) {
    fVar33 = *(float *)(unaff_x19 + 0x4c8);
    if (*(float *)(unaff_x19 + 0x4c8) <= fVar28) {
      fVar33 = fVar28;
    }
    *(float *)(unaff_x19 + 0x4c8) = fVar33;
  }
  uVar6 = *(uint *)(unaff_x19 + 0x2a0);
  if (uVar11 == 9) {
LAB_0881c48c:
    fVar33 = (fStack0000000000000058 - *(float *)(unaff_x19 + 0x388)) -
             *(float *)(unaff_x19 + 0x38c);
    fVar28 = *(float *)(unaff_x19 + 0x398);
    bVar9 = true;
    if ((fVar28 <= fVar33) && (bVar9 = false, !NAN(fVar28))) {
      bVar9 = fVar28 == -1.0;
    }
    fVar29 = *(float *)(unaff_x19 + 0x658);
    if (!bVar9) {
      fVar33 = fVar28;
    }
    fVar28 = (float)FUN_08a73e50(&stack0x00000220,0);
    if (bVar10 == false) {
      fVar27 = unaff_s14;
    }
    fVar27 = ABS(fVar29) + fVar28 * (1.0 - *(float *)(unaff_x19 + 0x300)) * fVar27;
    if ((uVar14 & 1) != 0) {
      fVar28 = 1.0;
      if ((uVar6 & 0x18) != 0) {
        fVar28 = DAT_01aed150;
      }
      if (((fVar28 * fVar33 < fVar27) && (in_stack_00000070 != 0)) &&
         ((in_stack_00000070 != 3 && (*(int *)(unaff_x19 + 0x4a4) != *(int *)(unaff_x19 + 0x4a8)))))
      {
        unaff_w26 = FUN_08822600();
        lVar19 = *(long *)(unaff_x19 + 0x498);
        if (lVar19 == 0) goto LAB_0881d344;
        uVar13 = *(uint *)(unaff_x19 + 0x4a4);
        unaff_w29 = 1;
        uVar11 = uVar13 - 1;
        if (*(uint *)(lVar19 + 0x18) <= uVar11) goto LAB_0881d348;
        if ((*(short *)(lVar19 + 0x20 + (long)(int)uVar11 * 0x178 + 4) == 0xad &&
             (in_stack_00000038._4_1_ & 1) == 0) && (*(int *)(unaff_x19 + 0x310) == 0)) {
          in_stack_00000038._4_1_ = 0;
          in_stack_00000e3c = 0x2d;
          *(uint *)(unaff_x25 + 0x28) = uVar11;
          unaff_w26 = unaff_w26 - 1;
          in_stack_00000e38 = uVar11;
          fVar27 = unaff_s14;
          goto LAB_0881b440;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_0881d348;
        if (*(short *)(lVar19 + 0x20 + (long)(int)uVar13 * 0x178 + 4) == 0xad) {
          in_stack_00000038._4_1_ = 1;
          fVar27 = unaff_s14;
          goto LAB_0881b440;
        }
        if ((uStack0000000000000044 & uStack0000000000000014 & 1) != 0) {
          fVar29 = *(float *)(unaff_x19 + 0x2fc) / 100.0;
          fVar39 = *(float *)(unaff_x19 + 0x300);
          if ((fVar29 <= fVar39) || (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) {
            if ((*in_stack_00000018 <= *(float *)(unaff_x19 + 0x278)) ||
               (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) goto LAB_0881cf78;
            *(float *)(unaff_x19 + 0x264) = *in_stack_00000018;
            fVar27 = (*in_stack_00000018 - *(float *)(unaff_x19 + 0x268)) * 0.5;
            if (fVar27 <= DAT_01aec3c4) {
              fVar27 = DAT_01aec3c4;
            }
            fVar27 = *in_stack_00000018 - fVar27;
            *in_stack_00000018 = fVar27;
            fVar33 = fVar27 * 20.0 + 0.5;
            fVar27 = DAT_01aec808;
            if (fVar33 != INFINITY) {
              fVar27 = (float)(int)fVar33 / 20.0;
            }
            if (fVar27 <= *(float *)(unaff_x19 + 0x278)) {
              fVar27 = *(float *)(unaff_x19 + 0x278);
            }
            *in_stack_00000018 = fVar27;
          }
          else {
            fVar36 = fVar27;
            if (0.0 < fVar39) {
              fVar36 = fVar27 / (1.0 - fVar39);
            }
            fVar39 = fVar39 + (fVar27 - fVar28 * (fVar33 + DAT_01aec4cc)) / fVar36;
            if (fVar29 <= fVar39) {
              fVar39 = fVar29;
            }
            *(float *)(unaff_x19 + 0x300) = fVar39;
          }
LAB_0881d200:
          FUN_0882a1d4(0);
          return;
        }
LAB_0881cf78:
        if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
          fVar27 = *(float *)(unaff_x19 + 0x4dc);
          fVar33 = *(float *)(unaff_x19 + 0x4e4);
          if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          fVar27 = fVar27 - fVar33;
          if (((fStack0000000000000024 < ABS(fVar27)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
             (*(char *)(unaff_x19 + 0x374) == '\0')) {
            *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar27;
            *(float *)(unaff_x19 + 0x4ec) = fVar27 + *(float *)(unaff_x19 + 0x4ec);
          }
        }
        fVar33 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
        *(undefined4 *)(unaff_x19 + 0x4bc) = 0;
        *(undefined4 *)(unaff_x19 + 0x4a8) = *(undefined4 *)(unaff_x19 + 0x4a4);
        fVar27 = *(float *)(unaff_x19 + 0x4d8);
        if (fVar33 <= *(float *)(unaff_x19 + 0x4d8)) {
          fVar27 = fVar33;
        }
        *(float *)(unaff_x19 + 0x4d8) = fVar27;
        FUN_088229a4();
        lVar19 = *(long *)(unaff_x19 + 0x498);
        *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
        puVar8 = PTR_DAT_09337670;
        if (lVar19 == 0) goto LAB_0881d344;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
        fVar27 = *(float *)(unaff_x19 + 0x2ec);
        bVar10 = fVar27 != DAT_01aeb5f8;
        fVar33 = *(float *)(lVar19 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x14c);
        if (bVar10) {
          fVar39 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
        }
        else {
          fVar39 = fVar33 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
                   fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8))
          ;
          fVar27 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
        }
        *(bool *)(unaff_x19 + 0x2f0) = bVar10;
        lVar19 = *(long *)puVar8;
        *(float *)(unaff_x19 + 0x4ec) = *(float *)(unaff_x19 + 0x4ec) + fVar27 + fVar39;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar19 = *(long *)puVar8;
        }
        fVar27 = *(float *)(unaff_x19 + 0x444);
        in_stack_00000038._4_1_ = 0;
        uVar16 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x1730);
        *(float *)(unaff_x19 + 0x4e4) = fVar33;
        uStack0000000000000044 = 1;
        uVar16 = NEON_rev64(uVar16,4);
        *(undefined8 *)(unaff_x25 + 0x60) = uVar16;
        *(float *)(unaff_x19 + 0x658) = fVar27 + 0.0;
        fVar27 = unaff_s14;
        goto LAB_0881b440;
      }
    }
    fVar33 = fVar27 + *(float *)(unaff_x19 + 0x388) + *(float *)(unaff_x19 + 0x38c);
    fVar28 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fVar27 = *(float *)(unaff_x19 + 0x41c);
    if (*(float *)(unaff_x19 + 0x41c) <= fVar33) {
      fVar27 = fVar33;
    }
    fVar33 = *(float *)(unaff_x19 + 0x428);
    if (*(float *)(unaff_x19 + 0x428) <= fVar28) {
      fVar33 = fVar28;
    }
    *(float *)(unaff_x19 + 0x41c) = fVar27;
    fVar37 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(unaff_x19 + 0x428) = fVar33;
  }
  else {
    if (iStack0000000000000040 == 2) {
      if ((uStack0000000000000084 == 0) && (uVar11 != 0x200b)) goto LAB_0881c454;
      goto LAB_0881c48c;
    }
    if (uStack0000000000000084 == 0) {
LAB_0881c454:
      if (((uVar11 != 3) && (uVar11 != 0x200b)) && (uVar11 != 0xad)) goto LAB_0881c48c;
    }
    if ((((in_stack_00000038._4_1_ | bVar10 ^ 0xffU) & 1) == 0) ||
       (*(int *)(unaff_x19 + 0x65c) == 1)) goto LAB_0881c48c;
  }
  if (0.0 < fVar37) {
    uVar30 = *(undefined4 *)(unaff_x19 + 0x4dc);
    uVar38 = *(undefined4 *)(unaff_x19 + 0x4e4);
    if (*(int *)(*(long *)PTR_DAT_093375b0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar14 = FUN_087f05f0(uVar30,uVar38,0);
    if ((((uVar14 & 1) == 0) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
       (*(char *)(unaff_x19 + 0x374) == '\0')) {
      fVar27 = *(float *)(unaff_x19 + 0x4dc) - *(float *)(unaff_x19 + 0x4e4);
      *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar27;
      *(float *)(unaff_x19 + 0x4ec) = fVar27 + *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4e4) = *(float *)(unaff_x19 + 0x4e4) + fVar27;
    }
  }
  if (uVar11 == 9) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    memmove(&stack0x000002a0,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
    fVar27 = (float)FUN_08a73bec(&stack0x000002a0,0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    fVar33 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(unaff_x19 + 0x100) + 0x1b1));
    fVar39 = *(float *)(unaff_x19 + 0x658);
    fVar33 = unaff_s14 * fVar27 * fVar33;
    fVar27 = fVar33 * (float)(int)(fVar39 / fVar33);
    if (fVar27 <= fVar39) {
      fVar27 = fVar39 + fVar33;
    }
LAB_0881c760:
    bVar9 = false;
    *(float *)(unaff_x19 + 0x658) = fVar27;
LAB_0881c768:
    if (*(int *)(unaff_x25 + 0x28) != iStack000000000000005c) goto LAB_0881c778;
  }
  else {
    if (*(float *)(unaff_x19 + 0x2d8) == 0.0) {
      fVar27 = *(float *)(unaff_x19 + 0x658);
      fVar33 = (float)FUN_08a73e50(&stack0x00000220,0);
      fVar29 = *(float *)(unaff_x19 + 0x47c);
      fVar28 = (float)FUN_08a78388(&stack0x00000210,0);
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
      fVar27 = fVar27 + (1.0 - *(float *)(unaff_x19 + 0x300)) *
                        (*(float *)(unaff_x19 + 0x2d4) +
                        unaff_s14 * (fVar33 * fVar29 + fVar28) +
                        in_stack_00000060 *
                        (fStack0000000000000068 +
                        fVar39 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
    }
    else {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
      fVar27 = *(float *)(unaff_x19 + 0x658) +
               (1.0 - *(float *)(unaff_x19 + 0x300)) *
               (*(float *)(unaff_x19 + 0x2d4) +
               (*(float *)(unaff_x19 + 0x2d8) - fVar31) +
               in_stack_00000060 * (fVar39 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
    }
    *(float *)(unaff_x19 + 0x658) = fVar27;
    if ((uStack0000000000000084 != 0) || (uVar11 == 0x200b)) {
      *(float *)(unaff_x19 + 0x658) = fVar27 + in_stack_00000060 * *(float *)(unaff_x19 + 0x2e0);
    }
    if (uVar11 == 0xd) {
      fVar27 = *(float *)(unaff_x19 + 0x444) + 0.0;
      goto LAB_0881c760;
    }
    bVar9 = uVar11 == 10;
    if (((0xb < uVar11) || ((1 << (ulong)(uVar11 & 0x1f) & 0xc08U) == 0)) && (1 < uVar11 - 0x2028))
    goto LAB_0881c768;
  }
  if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
    fVar27 = *(float *)(unaff_x19 + 0x4dc);
    fVar33 = *(float *)(unaff_x19 + 0x4e4);
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar27 = fVar27 - fVar33;
    if (((fStack0000000000000024 < ABS(fVar27)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
       (*(char *)(unaff_x19 + 0x374) == '\0')) {
      *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar27;
      *(float *)(unaff_x19 + 0x4ec) = fVar27 + *(float *)(unaff_x19 + 0x4ec);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x374) = 0;
  fVar33 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
  fVar27 = *(float *)(unaff_x19 + 0x4d8);
  if (fVar33 <= *(float *)(unaff_x19 + 0x4d8)) {
    fVar27 = fVar33;
  }
  *(float *)(unaff_x19 + 0x4d8) = fVar27;
  if (((uVar13 == uVar2) && (uVar11 == 0x2d)) || ((uVar11 - 10 < 2 || (uVar11 - 0x2028 < 2)))) {
    FUN_088229a4();
    FUN_088229a4();
    uVar13 = *(uint *)(unaff_x19 + 0x4a4);
    lVar19 = *(long *)(unaff_x19 + 0x498);
    iVar20 = uVar13 + 1;
    *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
    *(int *)(unaff_x19 + 0x4a8) = iVar20;
    if (lVar19 == 0) goto LAB_0881d344;
    unaff_w29 = 1;
    if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_0881d348;
    fVar27 = *(float *)(lVar19 + (long)(int)uVar13 * 0x178 + 0x14c);
    if (*(float *)(unaff_x19 + 0x2ec) == DAT_01aeb5f8) {
      fVar33 = 0.0;
      if (uVar11 == 0x2029) {
        bVar9 = true;
      }
      if (bVar9) {
        fVar33 = *(float *)(unaff_x19 + 0x2f8);
      }
      uVar23 = 0;
      fVar33 = fVar27 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
               fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8)) +
               in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar33) +
               *(float *)(unaff_x19 + 0x4ec);
    }
    else {
      fVar33 = 0.0;
      if (uVar11 == 0x2029) {
        bVar9 = true;
      }
      if (bVar9) {
        fVar33 = *(float *)(unaff_x19 + 0x2f8);
      }
      uVar23 = 1;
      fVar33 = *(float *)(unaff_x19 + 0x4ec) +
               *(float *)(unaff_x19 + 0x2ec) +
               in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar33);
    }
    *(float *)(unaff_x19 + 0x4ec) = fVar33;
    puVar8 = PTR_DAT_09337670;
    *(undefined1 *)(unaff_x19 + 0x2f0) = uVar23;
    lVar19 = *(long *)puVar8;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar19 = *(long *)puVar8;
      iVar20 = *(int *)(unaff_x25 + 0x28) + 1;
    }
    fVar33 = *(float *)(unaff_x19 + 0x440);
    fVar39 = *(float *)(unaff_x19 + 0x444);
    uVar16 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x1730);
    *(float *)(unaff_x19 + 0x4e4) = fVar27;
    *(int *)(unaff_x19 + 0x4a4) = iVar20;
    uVar16 = NEON_rev64(uVar16,4);
    *(undefined8 *)(unaff_x25 + 0x60) = uVar16;
    *(float *)(unaff_x19 + 0x658) = fVar33 + 0.0 + fVar39;
    fVar27 = unaff_s14;
    goto LAB_0881b440;
  }
  if (uVar11 == 3) {
    if (*(long *)(unaff_x19 + 0x488) == 0) goto LAB_0881d344;
    unaff_w26 = *(uint *)(*(long *)(unaff_x19 + 0x488) + 0x18);
    uVar11 = 3;
  }
LAB_0881c778:
  if (((in_stack_00000070 == 3) || (in_stack_00000070 == 0)) &&
     ((*(uint *)(unaff_x19 + 0x310) | 2) != 3)) {
    unaff_w29 = 1;
    goto LAB_0881cf00;
  }
  if (((uStack0000000000000084 == 0) && (uVar11 != 0x2d)) &&
     ((uVar11 != 0x200b && (uVar11 != 0xad)))) {
    if (*(char *)(unaff_x19 + 0x309) == '\0') {
LAB_0881cb10:
      unaff_w29 = 1;
      if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar14 = FUN_08847e38(uVar11,0);
      if ((uVar14 & 1) == 0) {
LAB_0881cb5c:
        if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar14 = FUN_08847e94(uVar11,0);
        if ((uVar14 & 1) == 0) {
          if ((*(char *)(unaff_x19 + 0x309) == '\0') &&
             (uVar13 = *(int *)(unaff_x25 + 0x28) + 1, (int)uVar13 < iStack0000000000000020)) {
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0))
            goto LAB_0881d344;
            if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_0881d348;
            uVar5 = *(undefined2 *)(lVar19 + (long)(int)uVar13 * 0x178 + 0x24);
            if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar14 = FUN_08847e94(uVar5,0);
            if ((uVar14 & 1) != 0) goto code_r0x0881ccdc;
          }
          goto LAB_0881c7a8;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar14 = FUN_0883e2a4(0);
        if ((uVar14 & 1) != 0) goto LAB_0881cb5c;
      }
      if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar19 = FUN_0883e090(0);
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) goto LAB_0881d344;
      uVar14 = FUN_057cfb98(*(long *)(lVar19 + 0x10),uVar11,*(undefined8 *)PTR_DAT_09337598);
      if (*(int *)(unaff_x25 + 0x28) < iStack000000000000005c) {
        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar19 = FUN_0883e090(0);
        if ((lVar19 == 0) || (lVar15 = *in_stack_00000088, lVar15 == 0)) goto LAB_0881d344;
        uVar13 = *(int *)(unaff_x25 + 0x28) + 1;
        if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_0881d348;
        if (*(long *)(lVar19 + 0x18) == 0) goto LAB_0881d344;
        uVar13 = FUN_057cfb98(*(long *)(lVar19 + 0x18),
                              *(undefined2 *)(lVar15 + (long)(int)uVar13 * 0x178 + 0x24),
                              *(undefined8 *)PTR_DAT_09337598);
        if ((uVar14 & 1) != 0) goto LAB_0881ce04;
        uStack0000000000000044 = uVar13 & uStack0000000000000044;
        uVar11 = uStack0000000000000044 & uStack0000000000000084 != 0;
        if (((uStack0000000000000044 & 1) != 0) || (((uVar13 ^ 1) & 1) != 0)) goto LAB_0881ce2c;
        uStack0000000000000044 = 0;
      }
      else {
        if ((uVar14 & 1) == 0) {
          uStack0000000000000044 = 0;
          goto LAB_0881cef0;
        }
LAB_0881ce04:
        uVar11 = (uint)(uStack0000000000000084 != 0);
        if ((uStack0000000000000044 & uVar12 == uVar1) == 0) goto LAB_0881cf00;
        uStack0000000000000044 = 1;
LAB_0881ce2c:
        FUN_088229a4();
      }
      if (uVar11 == 0) goto LAB_0881cf00;
      goto LAB_0881caf8;
    }
  }
  else {
    unaff_w29 = 1;
    if (*(char *)(unaff_x19 + 0x309) == '\0') {
      if ((int)uVar11 < 0x2007) {
        if (uVar11 == 0x2d) {
          uVar13 = *(int *)(unaff_x25 + 0x28) - 1;
          if (*(int *)(unaff_x25 + 0x28) < 1) goto LAB_0881ced8;
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0))
          goto LAB_0881d344;
          if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_0881d348;
          uVar5 = *(undefined2 *)(lVar19 + (ulong)uVar13 * 0x178 + 0x24);
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar14 = FUN_075d81a8(uVar5,0);
          if ((uVar14 & 1) == 0) goto LAB_0881ced8;
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (param_1 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), param_1 == 0))
          goto LAB_0881d344;
          in_w9 = *(int *)(unaff_x25 + 0x28) - 1;
          if (in_w9 < *(uint *)(param_1 + 0x18)) goto code_r0x0881cec4;
LAB_0881d348:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if (uVar11 != 0xa0) goto LAB_0881ced8;
      }
      else if (((0x28 < uVar11 - 0x2007) ||
               ((1L << ((ulong)(uVar11 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
              (uVar11 != 0x2060)) goto LAB_0881ced8;
      goto LAB_0881cb10;
    }
  }
LAB_0881c7a8:
  unaff_w29 = 1;
  if ((uStack0000000000000044 & 1) == 0) {
    uStack0000000000000044 = 0;
    goto LAB_0881cf00;
  }
  if ((uVar11 == 0xa0 || uStack0000000000000084 == 0) &&
     (bVar10 != true || (in_stack_00000038._4_1_ & 1) != 0)) {
    uStack0000000000000044 = 1;
    goto LAB_0881cef0;
  }
  FUN_088229a4();
  uStack0000000000000044 = 1;
LAB_0881caf8:
  unaff_w29 = 1;
  goto LAB_0881cef0;
code_r0x0881ccdc:
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar19 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar19 == 0)) {
LAB_0881d344:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar13 = *(int *)(unaff_x25 + 0x28) + 1;
  if (uVar13 < *(uint *)(lVar19 + 0x18)) {
    uVar5 = *(undefined2 *)(lVar19 + (long)(int)uVar13 * 0x178 + 0x24);
    if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar19 = FUN_0883e090(0);
    if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
      uVar13 = FUN_057cfb98(*(long *)(lVar19 + 0x10),uVar11,*(undefined8 *)PTR_DAT_09337598);
      lVar19 = FUN_0883e090(0);
      if ((lVar19 != 0) && (*(long *)(lVar19 + 0x18) != 0)) {
        uVar11 = FUN_057cfb98(*(long *)(lVar19 + 0x18),uVar5,*(undefined8 *)PTR_DAT_09337598);
        if (((uVar13 | uVar11) & 1) == 0) goto LAB_0881cef0;
        goto LAB_0881cf00;
      }
    }
    goto LAB_0881d344;
  }
  goto LAB_0881d348;
}


