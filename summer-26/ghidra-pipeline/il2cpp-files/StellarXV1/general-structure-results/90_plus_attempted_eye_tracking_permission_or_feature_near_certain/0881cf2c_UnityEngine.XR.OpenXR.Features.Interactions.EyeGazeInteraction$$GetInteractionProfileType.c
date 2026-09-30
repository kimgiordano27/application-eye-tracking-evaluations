/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetInteractionProfileType
ENTRY_POINT: 0881cf2c
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


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetInteractionProfileType(void)

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
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  float in_w8;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined1 uVar23;
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
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float unaff_s8;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float unaff_s9;
  float unaff_s10;
  float fVar41;
  float unaff_s14;
  float fStack0000000000000010;
  uint uStack0000000000000014;
  float *in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  long *in_stack_00000030;
  int in_stack_00000040;
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
  
code_r0x0881cf2c:
  fVar32 = *(float *)(unaff_x19 + 0x2fc) / in_w8;
  fVar34 = *(float *)(unaff_x19 + 0x300);
  if ((fVar32 <= fVar34) || (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) {
    if ((*in_stack_00000018 <= *(float *)(unaff_x19 + 0x278)) ||
       (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) {
LAB_0881cf78:
      if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
        fVar34 = *(float *)(unaff_x19 + 0x4dc);
        fVar32 = *(float *)(unaff_x19 + 0x4e4);
        if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        fVar34 = fVar34 - fVar32;
        if (((fStack0000000000000024 < ABS(fVar34)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
           (*(char *)(unaff_x19 + 0x374) == '\0')) {
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar34;
          *(float *)(unaff_x19 + 0x4ec) = fVar34 + *(float *)(unaff_x19 + 0x4ec);
        }
      }
      fVar32 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
      *(undefined4 *)(unaff_x19 + 0x4bc) = 0;
      *(undefined4 *)(unaff_x19 + 0x4a8) = *(undefined4 *)(unaff_x19 + 0x4a4);
      fVar34 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar32 <= *(float *)(unaff_x19 + 0x4d8)) {
        fVar34 = fVar32;
      }
      *(float *)(unaff_x19 + 0x4d8) = fVar34;
      FUN_088229a4();
      lVar22 = *(long *)(unaff_x19 + 0x498);
      *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
      puVar8 = PTR_DAT_09337670;
      if (lVar22 == 0) {
LAB_0881d344:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) {
LAB_0881d348:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      fVar34 = *(float *)(unaff_x19 + 0x2ec);
      bVar10 = fVar34 != DAT_01aeb5f8;
      fVar32 = *(float *)(lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)unaff_w23 + 0x14c)
      ;
      if (bVar10) {
        fVar35 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
      }
      else {
        fVar35 = fVar32 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
                 fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8));
        fVar34 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
      }
      *(bool *)(unaff_x19 + 0x2f0) = bVar10;
      lVar22 = *(long *)puVar8;
      *(float *)(unaff_x19 + 0x4ec) = *(float *)(unaff_x19 + 0x4ec) + fVar34 + fVar35;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar22 = *(long *)puVar8;
      }
      fVar34 = *(float *)(unaff_x19 + 0x444);
      bVar10 = false;
      uVar33 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x1730);
      *(float *)(unaff_x19 + 0x4e4) = fVar32;
      uStack0000000000000044 = 1;
      uVar33 = NEON_rev64(uVar33,4);
      *(undefined8 *)(unaff_x25 + 0x60) = uVar33;
      *(float *)(unaff_x19 + 0x658) = fVar34 + 0.0;
      fVar34 = unaff_s14;
LAB_0881b440:
      uVar14 = in_stack_00000e38;
      lVar22 = *(long *)(unaff_x19 + 0x488);
      unaff_w26 = unaff_w26 + 1;
      if (lVar22 != 0) {
        if ((int)*(uint *)(lVar22 + 0x18) <= (int)unaff_w26) goto LAB_0881d12c;
        if (unaff_w26 < *(uint *)(lVar22 + 0x18)) goto code_r0x0881b1d0;
        goto LAB_0881d348;
      }
      goto LAB_0881d344;
    }
    *(float *)(unaff_x19 + 0x264) = *in_stack_00000018;
    fVar34 = (*in_stack_00000018 - *(float *)(unaff_x19 + 0x268)) * 0.5;
    if (fVar34 <= DAT_01aec3c4) {
      fVar34 = DAT_01aec3c4;
    }
    fVar34 = *in_stack_00000018 - fVar34;
    *in_stack_00000018 = fVar34;
    fVar32 = fVar34 * 20.0 + 0.5;
    fVar34 = DAT_01aec808;
    if (fVar32 != INFINITY) {
      fVar34 = (float)(int)fVar32 / 20.0;
    }
    if (fVar34 <= *(float *)(unaff_x19 + 0x278)) {
      fVar34 = *(float *)(unaff_x19 + 0x278);
    }
    *in_stack_00000018 = fVar34;
  }
  else {
    fVar35 = unaff_s9;
    if (0.0 < fVar34) {
      fVar35 = unaff_s9 / (1.0 - fVar34);
    }
    fVar34 = fVar34 + (unaff_s9 - unaff_s10 * (unaff_s8 + DAT_01aec4cc)) / fVar35;
    if (fVar32 <= fVar34) {
      fVar34 = fVar32;
    }
    *(float *)(unaff_x19 + 0x300) = fVar34;
  }
LAB_0881d200:
  FUN_0882a1d4(0);
  return;
code_r0x0881b1d0:
  uVar12 = *(uint *)(lVar22 + (long)(int)unaff_w26 * 0x10 + 0x24);
  in_stack_00000e38 = uVar14;
  if (uVar12 == 0x1a) goto LAB_0881b440;
  if (uVar12 == 0) {
LAB_0881d12c:
    if (((*(float *)(unaff_x19 + 0x264) - *(float *)(unaff_x19 + 0x268) <= DAT_01aec8ec) ||
        ((_fStack0000000000000010 & 0x100000000) == 0)) ||
       ((fVar34 = *in_stack_00000018, *(float *)(unaff_x19 + 0x27c) <= fVar34 ||
        (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))))) {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
      uVar36 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x378),0,4);
      uVar33 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x380),0,4);
      uVar37 = NEON_fmov(0x3f800000,4);
      fVar34 = (*(float *)(unaff_x19 + 0x41c) + (float)uVar36 + (float)uVar33) * 100.0 +
               (float)uVar37;
      fVar32 = (*(float *)(unaff_x19 + 0x428) + (float)((ulong)uVar36 >> 0x20) +
               (float)((ulong)uVar33 >> 0x20)) * 100.0 + (float)((ulong)uVar37 >> 0x20);
      uVar33 = NEON_scvtf(CONCAT44((int)fVar32,(int)fVar34),4);
      uVar15 = CONCAT44((float)((ulong)uVar33 >> 0x20) / 100.0,(float)uVar33 / 100.0);
      *(undefined1 *)(unaff_x19 + 0x274) = 1;
      uVar15 = uVar15 ^ (uVar15 ^ 0xcba3d70acba3d70a) &
                        CONCAT44(-(uint)(fVar32 == INFINITY),-(uint)(fVar34 == INFINITY));
      *(int *)(unaff_x19 + 0x41c) = (int)uVar15;
      *(float *)(unaff_x19 + 0x428) = (float)(uVar15 >> 0x20);
      return;
    }
    if (*(float *)(unaff_x19 + 0x300) < *(float *)(unaff_x19 + 0x2fc) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x300) = 0;
      fVar34 = *in_stack_00000018;
    }
    *(float *)(unaff_x19 + 0x268) = fVar34;
    fVar34 = (*(float *)(unaff_x19 + 0x264) - *in_stack_00000018) * 0.5;
    if (fVar34 <= DAT_01aec3c4) {
      fVar34 = DAT_01aec3c4;
    }
    fVar34 = *in_stack_00000018 + fVar34;
    *in_stack_00000018 = fVar34;
    fVar32 = fVar34 * 20.0 + 0.5;
    fVar34 = DAT_01aec808;
    if (fVar32 != INFINITY) {
      fVar34 = (float)(int)fVar32 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x27c) <= fVar34) {
      fVar34 = *(float *)(unaff_x19 + 0x27c);
    }
    *in_stack_00000018 = fVar34;
    goto LAB_0881d200;
  }
  uVar23 = (undefined1)unaff_w29;
  if ((uVar12 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x469) = uVar23;
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    uVar15 = FUN_0881d354();
    if (((uVar15 & 1) != 0) && (unaff_w26 = in_stack_0000020c, *(int *)(unaff_x19 + 0x65c) == 0))
    goto LAB_0881b440;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0)) goto LAB_0881d344;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178;
    *(undefined4 *)(unaff_x19 + 0x65c) = *(undefined4 *)(lVar22 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar22 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar22 + 0x40);
    thunk_FUN_040ec700(unaff_x19 + 0x100);
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0)) goto LAB_0881d344;
  uVar2 = *(uint *)(unaff_x25 + 0x28);
  if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_0881d348;
  uVar29 = *(undefined4 *)(unaff_x19 + 0x120);
  cVar3 = *(char *)(lVar22 + (long)(int)uVar2 * 0x178 + 0x54);
  *(undefined1 *)(unaff_x19 + 0x469) = 0;
  uVar13 = uVar2;
  if (uVar14 == uVar2) {
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    if (in_stack_00000e3c == 0x2026) {
      lVar22 = *in_stack_00000088;
      if (lVar22 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_0881d348;
      *(undefined8 *)(lVar22 + (long)(int)uVar2 * 0x178 + 0x30) = *(undefined8 *)(unaff_x19 + 0x668)
      ;
      thunk_FUN_040ec700();
      lVar22 = *(long *)(unaff_x19 + 0x498);
      if (lVar22 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178;
      *(undefined8 *)(lVar22 + 0x40) = *(undefined8 *)(unaff_x19 + 0x670);
      *(undefined4 *)(lVar22 + 0x20) = 0;
      thunk_FUN_040ec700();
      lVar22 = *(long *)(unaff_x19 + 0x498);
      if (lVar22 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      *(undefined8 *)(lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x48) =
           *(undefined8 *)(unaff_x19 + 0x678);
      thunk_FUN_040ec700();
      lVar22 = *(long *)(unaff_x19 + 0x498);
      if (lVar22 == 0) goto LAB_0881d344;
      uVar13 = *(uint *)(unaff_x19 + 0x4a4);
      if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
      uVar12 = 0x2026;
      *(undefined4 *)(lVar22 + (long)(int)uVar13 * 0x178 + 0x50) =
           *(undefined4 *)(unaff_x19 + 0x680);
      *(undefined1 *)(unaff_x19 + 0x328) = uVar23;
      in_stack_00000e3c = 3;
      in_stack_00000e38 = uVar13 + 1;
      goto LAB_0881b3f4;
    }
    uVar12 = in_stack_00000e3c;
    if (in_stack_00000e3c != 3) goto LAB_0881b3f4;
    lVar22 = *in_stack_00000088;
    if (((lVar22 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
       (lVar16 = FUN_087f97a8(*(long *)(unaff_x19 + 0x100),0), lVar16 == 0)) goto LAB_0881d344;
    uVar33 = System_Array_EmptyInternalEnumerator<MeshGenerator_BackgroundRepeatInstance>__MoveNext
                       (lVar16,3,*(undefined8 *)PTR_DAT_09337590);
    if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_0881d348;
    *(undefined8 *)(lVar22 + (long)(int)uVar2 * 0x178 + 0x30) = uVar33;
    thunk_FUN_040ec700();
    uVar12 = 3;
    *(undefined1 *)(unaff_x19 + 0x328) = uVar23;
  }
  else {
LAB_0881b3f4:
    if ((uVar12 != 3) && ((int)uVar13 < *(int *)(unaff_x19 + 0x35c))) {
      lVar22 = *in_stack_00000088;
      if (lVar22 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
      lVar22 = lVar22 + (long)(int)uVar13 * 0x178;
      *(undefined1 *)(lVar22 + 400) = 0;
      *(undefined2 *)(lVar22 + 0x24) = 0x200b;
      *(undefined4 *)(lVar22 + 0x5c) = 0;
      *(uint *)(unaff_x25 + 0x28) = uVar13 + 1;
      goto LAB_0881b440;
    }
  }
  fVar35 = 1.0;
  fVar32 = 1.0;
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    uVar13 = *(uint *)(unaff_x19 + 0x284);
    fVar32 = fVar35;
    if ((uVar13 >> 4 & 1) == 0) {
      if ((uVar13 >> 3 & 1) == 0) {
        if ((uVar13 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar15 = FUN_075da814(uVar12,0);
          if ((uVar15 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar12 = FUN_075daa9c(uVar12,0);
            fVar35 = fStack0000000000000010;
            goto LAB_0881b560;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar15 = FUN_075da774(uVar12,0);
        if ((uVar15 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar12 = FUN_075dac14(uVar12,0);
          goto LAB_0881b560;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar15 = FUN_075da814(uVar12,0);
      if ((uVar15 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_075daa9c(uVar12,0);
LAB_0881b560:
        uVar12 = uVar12 & 0xffff;
        fVar32 = fVar35;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
  memmove(&stack0x00000240,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0)) goto LAB_0881d344;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
    *unaff_x24 = *(long *)(lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x30);
    thunk_FUN_040ec700(unaff_x24);
    if (*unaff_x24 == 0) goto LAB_0881b440;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0)) goto LAB_0881d344;
    uVar1 = *(uint *)(unaff_x25 + 0x28);
    uVar13 = *(uint *)(lVar22 + 0x18);
    if (uVar13 <= uVar1) goto LAB_0881d348;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar22 + 0x20 + (long)(int)uVar1 * 0x178 + 0x30);
    pfVar24 = in_stack_00000048;
    if (uVar14 == uVar2) {
      lVar16 = *(long *)(unaff_x19 + 0x488);
      if (lVar16 == 0) goto LAB_0881d344;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w26) goto LAB_0881d348;
      if ((*(int *)(lVar16 + (long)(int)unaff_w26 * 0x10 + 0x24) == 10) &&
         (uVar1 != *(uint *)(unaff_x19 + 0x4a8))) {
        if (uVar13 <= uVar1 - 1) goto LAB_0881d348;
        pfVar24 = (float *)(lVar22 + 0x20 + (long)(int)(uVar1 - 1) * 0x178 + 0x38);
      }
    }
    fVar28 = *pfVar24;
    fVar35 = (float)FUN_08a73b44(&stack0x00000240,0);
    fVar27 = (float)FUN_08a73b4c(&stack0x00000240,0);
    if (uVar14 == uVar2) {
      fStack0000000000000078 = 0.0;
      fVar38 = 0.0;
      if (uVar12 != 0x2026) goto LAB_0881b724;
    }
    else {
LAB_0881b724:
      fVar38 = (float)FUN_08a73b74(&stack0x00000240,0);
      fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x00000240,0);
    }
    lVar22 = *(long *)(unaff_x19 + 0x660);
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0881d344;
    fVar39 = *(float *)(unaff_x19 + 0x43c);
    fVar30 = *(float *)(lVar22 + 0x2c);
    fVar34 = (float)FUN_08a74044(*(long *)(lVar22 + 0x20),0);
    lVar22 = *in_stack_00000088;
    if (lVar22 == 0) goto LAB_0881d344;
    uVar13 = *(uint *)(unaff_x25 + 0x28);
    if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
    *(undefined4 *)(lVar22 + (long)(int)uVar13 * 0x178 + 0x20) = 0;
    fVar34 = in_stack_00000050._4_4_ * ((fVar32 * fVar28) / fVar35) * fVar27 * fVar39 * fVar30 *
             fVar34;
LAB_0881ba24:
    bVar11 = uVar12 == 0xad;
    unaff_s14 = 0.0;
    if (uVar12 != 3 && !bVar11) {
      unaff_s14 = fVar34;
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x65c) == 1) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0)) goto LAB_0881d344;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_0881d348;
      plVar26 = *(long **)(lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x30);
      if (plVar26 == (long *)0x0) goto LAB_0881b440;
      bVar4 = *(byte *)(*(long *)PTR_DAT_093375d8 + 0x130);
      if ((*(byte *)(*plVar26 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_093375d8)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar26);
      }
      plVar20 = (long *)plVar26[3];
      if (plVar20 == (long *)0x0) {
        plVar20 = (long *)0x0;
        *in_stack_00000030 = 0;
      }
      else {
        lVar22 = *(long *)PTR_DAT_093375d0;
        bVar4 = *(byte *)(lVar22 + 0x130);
        if (*(byte *)(*plVar20 + 0x130) < bVar4) {
          plVar25 = (long *)0x0;
        }
        else {
          plVar25 = plVar20;
          if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar4 * 8 + -8) != lVar22) {
            plVar25 = (long *)0x0;
          }
        }
        *in_stack_00000030 = (long)plVar25;
        if (*(byte *)(*plVar20 + 0x130) < bVar4) {
          plVar20 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar4 * 8 + -8) != lVar22) {
          plVar20 = (long *)0x0;
        }
      }
      thunk_FUN_040ec700(in_stack_00000030,plVar20);
      lVar22 = plVar26[5];
      *(int *)(unaff_x19 + 0x6bc) = (int)lVar22;
      uVar1 = (int)lVar22 + 0xe000;
      if (uVar12 != 0x3c) {
        uVar1 = uVar12;
      }
      if (*(long *)(unaff_x19 + 0x6b0) == 0) goto LAB_0881d344;
      memmove(&stack0x000001a0,(void *)(*(long *)(unaff_x19 + 0x6b0) + 0x28),0x60);
      fVar34 = (float)FUN_08a73b44(&stack0x000001a0,0);
      fVar35 = *in_stack_00000048;
      if (fVar34 <= 0.0) {
        fVar34 = (float)FUN_08a73b44(&stack0x00000240,0);
        fVar27 = (float)FUN_08a73b4c(&stack0x00000240,0);
        fVar28 = (float)FUN_08a73b74(&stack0x00000240,0);
        if (plVar26[4] == 0) goto LAB_0881d344;
        FUN_08a74008(&stack0x00000e40,plVar26[4],0);
        in_stack_00000180 = in_stack_00000e40;
        in_stack_00000188 = in_stack_00000e48;
        in_stack_00000190 = in_stack_00000e50;
        fVar38 = (float)FUN_08a73e38(&stack0x00000180,0);
        if (plVar26[4] == 0) goto LAB_0881d344;
        fVar39 = *(float *)((long)plVar26 + 0x2c);
        fVar27 = in_stack_00000050._4_4_ * (fVar35 / fVar34) * fVar27;
        fVar34 = (float)FUN_08a74044(plVar26[4],0);
        fVar34 = fVar27 * (fVar28 / fVar38) * fVar39 * fVar34;
        fVar35 = 0.0;
        if (fVar34 != 0.0) {
          fVar35 = fVar27 / fVar34;
        }
        fVar38 = (float)FUN_08a73b74(&stack0x00000240,0);
        fVar38 = fVar38 * fVar35;
        fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x00000240,0);
        fStack0000000000000078 = fStack0000000000000078 * fVar35;
      }
      else {
        fVar34 = (float)FUN_08a73b44(&stack0x000001a0,0);
        fVar27 = (float)FUN_08a73b4c(&stack0x000001a0,0);
        if (plVar26[4] == 0) goto LAB_0881d344;
        fVar38 = *(float *)((long)plVar26 + 0x2c);
        fVar28 = (float)FUN_08a74044(plVar26[4],0);
        fVar34 = in_stack_00000050._4_4_ * (fVar35 / fVar34) * fVar27 * fVar38 * fVar28;
        fVar38 = (float)FUN_08a73b74(&stack0x000001a0,0);
        fStack0000000000000078 = (float)FUN_08a73ba4(&stack0x000001a0,0);
      }
      *unaff_x24 = (long)plVar26;
      thunk_FUN_040ec700(unaff_x24,plVar26);
      lVar22 = *in_stack_00000088;
      if (lVar22 == 0) goto LAB_0881d344;
      uVar13 = *(uint *)(unaff_x25 + 0x28);
      if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
      lVar16 = lVar22 + (long)(int)uVar13 * 0x178;
      *(undefined4 *)(lVar16 + 0x20) = unaff_w29;
      *(float *)(lVar16 + 0x15c) = fVar34;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar29;
      uVar12 = uVar1;
      goto LAB_0881ba24;
    }
    bVar11 = uVar12 == 0xad;
    fVar38 = 0.0;
    unaff_s14 = 0.0;
    if (uVar12 != 3 && !bVar11) {
      unaff_s14 = fVar34;
    }
    lVar22 = *in_stack_00000088;
    if (lVar22 == 0) goto LAB_0881d344;
    uVar13 = *(uint *)(unaff_x25 + 0x28);
    fStack0000000000000078 = 0.0;
  }
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
  *(short *)(lVar22 + (long)(int)uVar13 * 0x178 + 0x24) = (short)uVar12;
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0)) goto LAB_0881d344;
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
  lVar22 = *(long *)(lVar22 + (long)(int)uVar13 * 0x178 + 0x38);
  if (lVar22 == 0) {
    if ((*unaff_x24 == 0) || (lVar22 = *(long *)(*unaff_x24 + 0x20), lVar22 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000e40,lVar22,0);
    in_stack_000000d0 = in_stack_00000e40;
    in_stack_000000d8 = in_stack_00000e48;
    in_stack_000000e0 = in_stack_00000e50;
  }
  else {
    FUN_08a74008(&stack0x000000d0,lVar22,0);
  }
  if (uVar12 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uStack0000000000000084 = FUN_075d81a8(uVar12,0);
    uStack0000000000000084 = uStack0000000000000084 & 1;
  }
  else {
    uStack0000000000000084 = 0;
  }
  fVar35 = *(float *)(unaff_x19 + 0x2d0);
  uVar29 = 0;
  if ((*(char *)(unaff_x19 + 0x329) != '\0') && (*(int *)(unaff_x19 + 0x65c) == 0)) {
    if (*unaff_x24 == 0) goto LAB_0881d344;
    iVar19 = *(int *)(unaff_x25 + 0x28);
    uVar13 = *(uint *)(*unaff_x24 + 0x28);
    if (iVar19 < iStack000000000000005c) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0)) goto LAB_0881d344;
      uVar1 = iVar19 + 1;
      if (*(uint *)(lVar22 + 0x18) <= uVar1) goto LAB_0881d348;
      uVar29 = 0;
      if (*(int *)(lVar22 + 0x20 + (long)(int)uVar1 * 0x178) == 0) {
        lVar22 = *(long *)(lVar22 + 0x20 + (long)(int)uVar1 * 0x178 + 0x10);
        if ((((lVar22 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
            (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar16 == 0)) ||
           (lVar16 = *(long *)(lVar16 + 0x40), lVar16 == 0)) goto LAB_0881d344;
        uVar15 = FUN_06fba39c(lVar16,uVar13 | *(int *)(lVar22 + 0x28) << 0x10,&stack0x00000150,
                              *(undefined8 *)PTR_DAT_09337578);
        if ((uVar15 & 1) != 0) {
          FUN_08a786f8(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          uVar29 = UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x00000130,0);
          uVar15 = FUN_08a78734(&stack0x00000150,0);
          if ((uVar15 & 0x100) != 0) {
            fVar35 = 0.0;
          }
        }
      }
      iVar19 = *(int *)(unaff_x25 + 0x28);
    }
    if (0 < iVar19) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0)) goto LAB_0881d344;
      if (*(uint *)(lVar22 + 0x18) <= iVar19 - 1U) goto LAB_0881d348;
      lVar22 = *(long *)(lVar22 + (ulong)(iVar19 - 1U) * 0x178 + 0x30);
      if (lVar22 == 0) goto LAB_0881d344;
      uVar1 = *(uint *)(lVar22 + 0x28);
      lVar22 = FUN_088161d4();
      if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x38), lVar22 == 0)) goto LAB_0881d344;
      uVar6 = *(int *)(unaff_x25 + 0x28) - 1;
      if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_0881d348;
      if (*(int *)(lVar22 + (long)(int)uVar6 * 0x178 + 0x20) == 0) {
        if (((*(long *)(unaff_x19 + 0x100) == 0) ||
            (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar22 == 0)) ||
           (lVar22 = *(long *)(lVar22 + 0x40), lVar22 == 0)) goto LAB_0881d344;
        uVar15 = FUN_06fba39c(lVar22,uVar1 | uVar13 << 0x10,&stack0x00000150,
                              *(undefined8 *)PTR_DAT_09337578);
        if ((uVar15 & 1) != 0) {
          FUN_08a78720(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          UnityEngine_UIElements_UIR_DetachedAllocator___ctor(&stack0x00000130,0);
          FUN_08a783ac(uVar29,0);
          uVar15 = FUN_08a78734(&stack0x00000150,0);
          if ((uVar15 & 0x100) != 0) {
            fVar35 = 0.0;
          }
        }
      }
    }
    lVar22 = *in_stack_00000088;
    if (lVar22 == 0) goto LAB_0881d344;
    uVar13 = *(uint *)(unaff_x25 + 0x28);
    uVar29 = FUN_08a78388(&stack0x00000210,0);
    if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
    *(undefined4 *)(lVar22 + (long)(int)uVar13 * 0x178 + 0x154) = uVar29;
  }
  if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar15 = FUN_08847bd4(uVar12,0);
  uVar13 = *(uint *)(unaff_x25 + 0x28);
  if ((uVar15 & 1) == 0) {
    if (0 < (int)uVar13) {
      uVar1 = *(uint *)(unaff_x19 + 0x32c);
      if ((uVar1 == 0x80000000) || (uVar1 != uVar13 - 1)) {
        lVar22 = (ulong)uVar13 * 0x178 + 0x144;
        uVar17 = (ulong)uVar13;
        do {
          uVar13 = *(uint *)(unaff_x19 + 0x32c);
          uVar7 = uVar17 - 1;
          if (((long)uVar17 < 1) || (uVar1 = (int)uVar17 - 1, uVar1 == uVar13)) {
            if (uVar13 == 0x80000000) goto LAB_0881c0d0;
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0))
            goto LAB_0881d344;
            if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
            lVar22 = *(long *)(lVar22 + (long)(int)uVar13 * 0x178 + 0x30);
            if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x20), lVar22 == 0))
            goto LAB_0881d344;
            uVar13 = FUN_08a73ff8(lVar22,0);
            if ((*unaff_x24 == 0) ||
               (((*(long *)(unaff_x19 + 0x100) == 0 ||
                 (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar22 == 0)) ||
                (lVar22 = *(long *)(lVar22 + 0x48), lVar22 == 0)))) goto LAB_0881d344;
            uVar17 = FUN_06fc3f48(lVar22,uVar13 | *(int *)(*unaff_x24 + 0x28) << 0x10,
                                  &stack0x000000e8,*(undefined8 *)PTR_DAT_09337580);
            if ((uVar17 & 1) == 0) goto LAB_0881c0d0;
            lVar22 = *in_stack_00000088;
            if (lVar22 == 0) goto LAB_0881d344;
            if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_0881d348;
            FUN_08a78370((in_stack_000000e8._4_4_ +
                         (*(float *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x178 +
                                    0x138) - *(float *)(unaff_x19 + 0x658)) / unaff_s14) -
                         fStack00000000000000f8,&stack0x00000210,0);
            fVar35 = in_stack_000000f0;
            fVar27 = fStack00000000000000fc;
            goto LAB_0881c0bc;
          }
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar16 == 0))
          goto LAB_0881d344;
          if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_0881d348;
          lVar16 = *(long *)(lVar16 + lVar22 + -0x28c);
          if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x20), lVar16 == 0)) goto LAB_0881d344;
          uVar13 = FUN_08a73ff8(lVar16,0);
          if ((*unaff_x24 == 0) ||
             (((*(long *)(unaff_x19 + 0x100) == 0 ||
               (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar16 == 0)) ||
              (lVar16 = *(long *)(lVar16 + 0x50), lVar16 == 0)))) goto LAB_0881d344;
          uVar18 = FUN_06fcaab8(lVar16,uVar13 | *(int *)(*unaff_x24 + 0x28) << 0x10,&stack0x00000100
                                ,*(undefined8 *)PTR_DAT_09337588);
          lVar22 = lVar22 + -0x178;
          uVar17 = uVar7;
        } while ((uVar18 & 1) == 0);
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar16 == 0))
        goto LAB_0881d344;
        uVar13 = (uint)uVar7;
        if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_0881d348;
        lVar21 = *(long *)(unaff_x19 + 0x498);
        if (lVar21 == 0) goto LAB_0881d344;
        if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_0881d348;
        fVar35 = *(float *)(unaff_x19 + 0x4ec);
        fVar27 = *(float *)(unaff_x19 + 0x634);
        fVar28 = *(float *)(lVar21 + lVar22);
        FUN_08a78370(((*(float *)(lVar16 + lVar22 + -0xc) - *(float *)(unaff_x19 + 0x658)) /
                      unaff_s14 + in_stack_00000100._4_4_) - fStack0000000000000110,&stack0x00000210
                     ,0);
        fVar35 = (fVar28 - ((0.0 - fVar35) + fVar27)) / unaff_s14 + in_stack_00000108;
        fVar27 = fStack0000000000000114;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0))
        goto LAB_0881d344;
        if (*(uint *)(lVar22 + 0x18) <= uVar1) goto LAB_0881d348;
        lVar22 = *(long *)(lVar22 + (long)(int)uVar1 * 0x178 + 0x30);
        if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x20), lVar22 == 0)) goto LAB_0881d344;
        uVar13 = FUN_08a73ff8(lVar22,0);
        if ((*unaff_x24 == 0) ||
           (((*(long *)(unaff_x19 + 0x100) == 0 ||
             (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar22 == 0)) ||
            (lVar22 = *(long *)(lVar22 + 0x48), lVar22 == 0)))) goto LAB_0881d344;
        uVar17 = FUN_06fc3f48(lVar22,uVar13 | *(int *)(*unaff_x24 + 0x28) << 0x10,&stack0x00000118,
                              *(undefined8 *)PTR_DAT_09337580);
        if ((uVar17 & 1) == 0) goto LAB_0881c0d0;
        lVar22 = *in_stack_00000088;
        if (lVar22 == 0) goto LAB_0881d344;
        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_0881d348;
        FUN_08a78370((in_stack_00000118._4_4_ +
                     (*(float *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x178 + 0x138) -
                     *(float *)(unaff_x19 + 0x658)) / unaff_s14) - fStack0000000000000128,
                     &stack0x00000210,0);
        fVar35 = in_stack_00000120;
        fVar27 = fStack000000000000012c;
      }
LAB_0881c0bc:
      FUN_08a78380(fVar35 - fVar27,&stack0x00000210,0);
      fVar35 = 0.0;
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x32c) = uVar13;
  }
LAB_0881c0d0:
  fVar27 = (float)FUN_08a78378(&stack0x00000210,0);
  fVar28 = (float)FUN_08a78378(&stack0x00000210,0);
  fVar39 = *(float *)(unaff_x19 + 0x2d8);
  fVar30 = 0.0;
  fStack0000000000000068 = 0.0;
  if (fVar39 != 0.0) {
    if ((*unaff_x24 == 0) || (lVar22 = *(long *)(*unaff_x24 + 0x20), lVar22 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000e40,lVar22,0);
    in_stack_00000180 = in_stack_00000e40;
    in_stack_00000188 = in_stack_00000e48;
    in_stack_00000190 = in_stack_00000e50;
    fVar30 = (float)FUN_08a73e30(&stack0x00000180,0);
    if ((*unaff_x24 == 0) || (lVar22 = *(long *)(*unaff_x24 + 0x20), lVar22 == 0))
    goto LAB_0881d344;
    FUN_08a74008(&stack0x00000090,lVar22,0);
    in_stack_00000188 = in_stack_00000098;
    in_stack_00000180 = in_stack_00000090;
    in_stack_00000190 = in_stack_000000a0;
    fVar31 = (float)FUN_08a73e40(&stack0x00000180,0);
    fVar30 = (1.0 - *(float *)(unaff_x19 + 0x300)) *
             (fVar39 * 0.5 - unaff_s14 * (fVar30 * 0.5 + fVar31));
    *(float *)(unaff_x19 + 0x658) = *(float *)(unaff_x19 + 0x658) + fVar30;
  }
  if (((cVar3 == '\0') && (*(int *)(unaff_x19 + 0x65c) == 0)) &&
     ((*(byte *)(unaff_x19 + 0x284) & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    fStack0000000000000068 = *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1ac);
  }
  unaff_w23 = 0x178;
  lVar22 = *in_stack_00000088;
  if (lVar22 == 0) goto LAB_0881d344;
  uVar13 = *(uint *)(unaff_x19 + 0x4a4);
  fVar31 = *(float *)(unaff_x19 + 0x658);
  fVar39 = (float)FUN_08a78368(&stack0x00000210,0);
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
  *(float *)(lVar22 + (long)(int)uVar13 * 0x178 + 0x138) = fVar31 + unaff_s14 * fVar39;
  lVar22 = *in_stack_00000088;
  if (lVar22 == 0) goto LAB_0881d344;
  uVar13 = *(uint *)(unaff_x19 + 0x4a4);
  fVar31 = *(float *)(unaff_x19 + 0x4ec);
  fVar41 = *(float *)(unaff_x19 + 0x634);
  fVar39 = (float)FUN_08a78378(&stack0x00000210,0);
  if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
  *(float *)(lVar22 + (long)(int)uVar13 * 0x178 + 0x144) =
       (0.0 - fVar31) + fVar41 + unaff_s14 * fVar39;
  fVar27 = unaff_s14 * (fVar38 + fVar27);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    fVar27 = fVar27 / fVar32;
    fVar28 = (unaff_s14 * (fStack0000000000000078 + fVar28)) / fVar32;
  }
  else {
    fVar28 = unaff_s14 * (fStack0000000000000078 + fVar28);
  }
  fVar38 = *(float *)(unaff_x19 + 0x634);
  uVar13 = *(uint *)(unaff_x19 + 0x4a4);
  uVar1 = *(uint *)(unaff_x19 + 0x4a8);
  fVar27 = fVar27 + fVar38;
  if ((uStack0000000000000084 == 0) || (uVar13 == uVar1)) {
    fVar28 = fVar28 + fVar38;
    fVar39 = fVar27;
    fVar31 = fVar28;
    if (fVar38 != 0.0) {
      fVar39 = (fVar27 - fVar38) / *(float *)(unaff_x19 + 0x43c);
      fVar31 = (fVar28 - fVar38) / *(float *)(unaff_x19 + 0x43c);
      if (fVar39 <= fVar27) {
        fVar39 = fVar27;
      }
      if (fVar28 <= fVar31) {
        fVar31 = fVar28;
      }
    }
    lVar22 = *(long *)(unaff_x19 + 0x498);
    fVar38 = fVar39;
    if (fVar39 <= *(float *)(unaff_x19 + 0x4dc)) {
      fVar38 = *(float *)(unaff_x19 + 0x4dc);
    }
    fVar41 = fVar31;
    if (*(float *)(unaff_x19 + 0x4e0) <= fVar31) {
      fVar41 = *(float *)(unaff_x19 + 0x4e0);
    }
    *(float *)(unaff_x19 + 0x4dc) = fVar38;
    *(float *)(unaff_x19 + 0x4e0) = fVar41;
    if (lVar22 == 0) goto LAB_0881d344;
    if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
    lVar22 = lVar22 + (long)(int)uVar13 * 0x178;
    *(float *)(lVar22 + 0x14c) = fVar39;
    *(float *)(lVar22 + 0x150) = fVar31;
    fVar39 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(lVar22 + 0x140) = fVar27 - fVar39;
    *(float *)(unaff_x19 + 0x4d4) = fVar27 - fVar39;
    *(float *)(lVar22 + 0x148) = fVar28 - fVar39;
    *(float *)(unaff_x19 + 0x4d8) = fVar28 - fVar39;
    if ((*(int *)(unaff_x19 + 0x4b8) == 0) || (*(char *)(unaff_x19 + 0x374) != '\0')) {
      lVar22 = *(long *)(unaff_x19 + 0x100);
      *(float *)(unaff_x25 + 0x50) = fVar38;
      if (lVar22 == 0) goto LAB_0881d344;
      fVar28 = *(float *)(unaff_x19 + 0x4d0);
      fVar38 = (float)UnityEngine_UIElements_BaseVisualTreeUpdater__UnityEngine_UIElements_IVisualTreeUpdater_get_FrameCount
                                (lVar22 + 0x28,0);
      fVar32 = (unaff_s14 * fVar38) / fVar32;
      if (fVar28 <= fVar32) {
        fVar28 = fVar32;
      }
      fVar39 = *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4d0) = fVar28;
    }
  }
  else {
    lVar22 = *in_stack_00000088;
    if (lVar22 == 0) goto LAB_0881d344;
    if (*(uint *)(lVar22 + 0x18) <= uVar13) goto LAB_0881d348;
    lVar22 = lVar22 + (long)(int)uVar13 * 0x178;
    uVar33 = *(undefined8 *)(unaff_x25 + 0x60);
    *(undefined8 *)(lVar22 + 0x14c) = uVar33;
    fVar39 = *(float *)(unaff_x19 + 0x4ec);
    fVar32 = (float)uVar33 - fVar39;
    fVar28 = (float)((ulong)uVar33 >> 0x20) - fVar39;
    *(float *)(lVar22 + 0x140) = fVar32;
    *(float *)(lVar22 + 0x148) = fVar28;
    *(ulong *)(unaff_x25 + 0x58) = CONCAT44(fVar28,fVar32);
  }
  if ((fVar39 == 0.0) &&
     ((uStack0000000000000084 == 0 || (*(int *)(unaff_x19 + 0x4a4) == *(int *)(unaff_x19 + 0x4a8))))
     ) {
    fVar32 = *(float *)(unaff_x19 + 0x4c8);
    if (*(float *)(unaff_x19 + 0x4c8) <= fVar27) {
      fVar32 = fVar27;
    }
    *(float *)(unaff_x19 + 0x4c8) = fVar32;
  }
  uVar6 = *(uint *)(unaff_x19 + 0x2a0);
  if (uVar12 == 9) {
LAB_0881c48c:
    unaff_s8 = (fStack0000000000000058 - *(float *)(unaff_x19 + 0x388)) -
               *(float *)(unaff_x19 + 0x38c);
    fVar32 = *(float *)(unaff_x19 + 0x398);
    bVar9 = true;
    if ((fVar32 <= unaff_s8) && (bVar9 = false, !NAN(fVar32))) {
      bVar9 = fVar32 == -1.0;
    }
    fVar27 = *(float *)(unaff_x19 + 0x658);
    if (!bVar9) {
      unaff_s8 = fVar32;
    }
    fVar32 = (float)FUN_08a73e50(&stack0x00000220,0);
    if (!bVar11) {
      fVar34 = unaff_s14;
    }
    unaff_s9 = ABS(fVar27) + fVar32 * (1.0 - *(float *)(unaff_x19 + 0x300)) * fVar34;
    if ((uVar15 & 1) != 0) {
      unaff_s10 = 1.0;
      if ((uVar6 & 0x18) != 0) {
        unaff_s10 = DAT_01aed150;
      }
      if (((unaff_s10 * unaff_s8 < unaff_s9) && (in_stack_00000070 != 0)) &&
         ((in_stack_00000070 != 3 && (*(int *)(unaff_x19 + 0x4a4) != *(int *)(unaff_x19 + 0x4a8)))))
      {
        unaff_w26 = FUN_08822600();
        lVar22 = *(long *)(unaff_x19 + 0x498);
        if (lVar22 == 0) goto LAB_0881d344;
        uVar14 = *(uint *)(unaff_x19 + 0x4a4);
        unaff_w29 = 1;
        uVar12 = uVar14 - 1;
        if (*(uint *)(lVar22 + 0x18) <= uVar12) goto LAB_0881d348;
        if ((*(short *)(lVar22 + 0x20 + (long)(int)uVar12 * 0x178 + 4) == 0xad && !bVar10) &&
           (*(int *)(unaff_x19 + 0x310) == 0)) {
          bVar10 = false;
          in_stack_00000e3c = 0x2d;
          *(uint *)(unaff_x25 + 0x28) = uVar12;
          unaff_w26 = unaff_w26 - 1;
          in_stack_00000e38 = uVar12;
          fVar34 = unaff_s14;
          goto LAB_0881b440;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_0881d348;
        if (*(short *)(lVar22 + 0x20 + (long)(int)uVar14 * 0x178 + 4) == 0xad) {
          bVar10 = true;
          fVar34 = unaff_s14;
          goto LAB_0881b440;
        }
        if ((uStack0000000000000044 & uStack0000000000000014) != 0) goto code_r0x0881cf28;
        goto LAB_0881cf78;
      }
    }
    fVar32 = unaff_s9 + *(float *)(unaff_x19 + 0x388) + *(float *)(unaff_x19 + 0x38c);
    fVar27 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fVar34 = *(float *)(unaff_x19 + 0x41c);
    if (*(float *)(unaff_x19 + 0x41c) <= fVar32) {
      fVar34 = fVar32;
    }
    fVar32 = *(float *)(unaff_x19 + 0x428);
    if (*(float *)(unaff_x19 + 0x428) <= fVar27) {
      fVar32 = fVar27;
    }
    *(float *)(unaff_x19 + 0x41c) = fVar34;
    fVar39 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(unaff_x19 + 0x428) = fVar32;
  }
  else {
    if (in_stack_00000040 == 2) {
      if ((uStack0000000000000084 == 0) && (uVar12 != 0x200b)) goto LAB_0881c454;
      goto LAB_0881c48c;
    }
    if (uStack0000000000000084 == 0) {
LAB_0881c454:
      if (((uVar12 != 3) && (uVar12 != 0x200b)) && (uVar12 != 0xad)) goto LAB_0881c48c;
    }
    if ((!(bool)(bVar10 | bVar11 ^ 1U)) || (*(int *)(unaff_x19 + 0x65c) == 1)) goto LAB_0881c48c;
  }
  if (0.0 < fVar39) {
    uVar29 = *(undefined4 *)(unaff_x19 + 0x4dc);
    uVar40 = *(undefined4 *)(unaff_x19 + 0x4e4);
    if (*(int *)(*(long *)PTR_DAT_093375b0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar15 = FUN_087f05f0(uVar29,uVar40,0);
    if ((((uVar15 & 1) == 0) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
       (*(char *)(unaff_x19 + 0x374) == '\0')) {
      fVar34 = *(float *)(unaff_x19 + 0x4dc) - *(float *)(unaff_x19 + 0x4e4);
      *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar34;
      *(float *)(unaff_x19 + 0x4ec) = fVar34 + *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4e4) = *(float *)(unaff_x19 + 0x4e4) + fVar34;
    }
  }
  if (uVar12 == 9) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    memmove(&stack0x000002a0,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
    fVar34 = (float)FUN_08a73bec(&stack0x000002a0,0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
    fVar32 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(unaff_x19 + 0x100) + 0x1b1));
    fVar35 = *(float *)(unaff_x19 + 0x658);
    fVar32 = unaff_s14 * fVar34 * fVar32;
    fVar34 = fVar32 * (float)(int)(fVar35 / fVar32);
    if (fVar34 <= fVar35) {
      fVar34 = fVar35 + fVar32;
    }
LAB_0881c760:
    bVar9 = false;
    *(float *)(unaff_x19 + 0x658) = fVar34;
LAB_0881c768:
    if (*(int *)(unaff_x25 + 0x28) == iStack000000000000005c) goto LAB_0881c810;
  }
  else {
    if (*(float *)(unaff_x19 + 0x2d8) == 0.0) {
      fVar34 = *(float *)(unaff_x19 + 0x658);
      fVar32 = (float)FUN_08a73e50(&stack0x00000220,0);
      fVar28 = *(float *)(unaff_x19 + 0x47c);
      fVar27 = (float)FUN_08a78388(&stack0x00000210,0);
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
      fVar34 = fVar34 + (1.0 - *(float *)(unaff_x19 + 0x300)) *
                        (*(float *)(unaff_x19 + 0x2d4) +
                        unaff_s14 * (fVar32 * fVar28 + fVar27) +
                        in_stack_00000060 *
                        (fStack0000000000000068 +
                        fVar35 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
    }
    else {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_0881d344;
      fVar34 = *(float *)(unaff_x19 + 0x658) +
               (1.0 - *(float *)(unaff_x19 + 0x300)) *
               (*(float *)(unaff_x19 + 0x2d4) +
               (*(float *)(unaff_x19 + 0x2d8) - fVar30) +
               in_stack_00000060 * (fVar35 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
    }
    *(float *)(unaff_x19 + 0x658) = fVar34;
    if ((uStack0000000000000084 != 0) || (uVar12 == 0x200b)) {
      *(float *)(unaff_x19 + 0x658) = fVar34 + in_stack_00000060 * *(float *)(unaff_x19 + 0x2e0);
    }
    if (uVar12 == 0xd) {
      fVar34 = *(float *)(unaff_x19 + 0x444) + 0.0;
      goto LAB_0881c760;
    }
    bVar9 = uVar12 == 10;
    if (((0xb < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0xc08U) == 0)) && (1 < uVar12 - 0x2028))
    goto LAB_0881c768;
LAB_0881c810:
    if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
      fVar34 = *(float *)(unaff_x19 + 0x4dc);
      fVar32 = *(float *)(unaff_x19 + 0x4e4);
      if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      fVar34 = fVar34 - fVar32;
      if (((fStack0000000000000024 < ABS(fVar34)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
         (*(char *)(unaff_x19 + 0x374) == '\0')) {
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar34;
        *(float *)(unaff_x19 + 0x4ec) = fVar34 + *(float *)(unaff_x19 + 0x4ec);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x374) = 0;
    fVar32 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
    fVar34 = *(float *)(unaff_x19 + 0x4d8);
    if (fVar32 <= *(float *)(unaff_x19 + 0x4d8)) {
      fVar34 = fVar32;
    }
    *(float *)(unaff_x19 + 0x4d8) = fVar34;
    if (((uVar14 == uVar2) && (uVar12 == 0x2d)) || ((uVar12 - 10 < 2 || (uVar12 - 0x2028 < 2)))) {
      FUN_088229a4();
      FUN_088229a4();
      uVar14 = *(uint *)(unaff_x19 + 0x4a4);
      lVar22 = *(long *)(unaff_x19 + 0x498);
      iVar19 = uVar14 + 1;
      *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
      *(int *)(unaff_x19 + 0x4a8) = iVar19;
      if (lVar22 == 0) goto LAB_0881d344;
      unaff_w29 = 1;
      if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_0881d348;
      fVar34 = *(float *)(lVar22 + (long)(int)uVar14 * 0x178 + 0x14c);
      if (*(float *)(unaff_x19 + 0x2ec) == DAT_01aeb5f8) {
        fVar32 = 0.0;
        if (uVar12 == 0x2029) {
          bVar9 = true;
        }
        if (bVar9) {
          fVar32 = *(float *)(unaff_x19 + 0x2f8);
        }
        uVar23 = 0;
        fVar32 = fVar34 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
                 fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8)) +
                 in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar32) +
                 *(float *)(unaff_x19 + 0x4ec);
      }
      else {
        fVar32 = 0.0;
        if (uVar12 == 0x2029) {
          bVar9 = true;
        }
        if (bVar9) {
          fVar32 = *(float *)(unaff_x19 + 0x2f8);
        }
        uVar23 = 1;
        fVar32 = *(float *)(unaff_x19 + 0x4ec) +
                 *(float *)(unaff_x19 + 0x2ec) +
                 in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar32);
      }
      *(float *)(unaff_x19 + 0x4ec) = fVar32;
      puVar8 = PTR_DAT_09337670;
      *(undefined1 *)(unaff_x19 + 0x2f0) = uVar23;
      lVar22 = *(long *)puVar8;
      if (*(int *)(lVar22 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar22 = *(long *)puVar8;
        iVar19 = *(int *)(unaff_x25 + 0x28) + 1;
      }
      fVar32 = *(float *)(unaff_x19 + 0x440);
      fVar35 = *(float *)(unaff_x19 + 0x444);
      uVar33 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x1730);
      *(float *)(unaff_x19 + 0x4e4) = fVar34;
      *(int *)(unaff_x19 + 0x4a4) = iVar19;
      uVar33 = NEON_rev64(uVar33,4);
      *(undefined8 *)(unaff_x25 + 0x60) = uVar33;
      *(float *)(unaff_x19 + 0x658) = fVar32 + 0.0 + fVar35;
      fVar34 = unaff_s14;
      goto LAB_0881b440;
    }
    if (uVar12 == 3) {
      if (*(long *)(unaff_x19 + 0x488) == 0) goto LAB_0881d344;
      unaff_w26 = *(uint *)(*(long *)(unaff_x19 + 0x488) + 0x18);
      uVar12 = 3;
    }
  }
  if (((in_stack_00000070 == 3) || (in_stack_00000070 == 0)) &&
     ((*(uint *)(unaff_x19 + 0x310) | 2) != 3)) goto LAB_0881cf00;
  if ((((uStack0000000000000084 == 0) && (uVar12 != 0x2d)) && (uVar12 != 0x200b)) &&
     (uVar12 != 0xad)) {
    if (*(char *)(unaff_x19 + 0x309) == '\0') goto LAB_0881cb10;
LAB_0881c7a8:
    if (uStack0000000000000044 == 0) {
      uStack0000000000000044 = 0;
      goto LAB_0881cf00;
    }
    if ((uVar12 != 0xa0 && uStack0000000000000084 != 0) || (bVar11 && !bVar10)) {
      FUN_088229a4();
      uStack0000000000000044 = 1;
    }
    else {
      uStack0000000000000044 = 1;
    }
  }
  else {
    if (*(char *)(unaff_x19 + 0x309) != '\0') goto LAB_0881c7a8;
    if ((int)uVar12 < 0x2007) {
      if (uVar12 == 0x2d) {
        uVar14 = *(int *)(unaff_x25 + 0x28) - 1;
        if (0 < *(int *)(unaff_x25 + 0x28)) {
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0))
          goto LAB_0881d344;
          if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_0881d348;
          uVar5 = *(undefined2 *)(lVar22 + (ulong)uVar14 * 0x178 + 0x24);
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar15 = FUN_075d81a8(uVar5,0);
          if ((uVar15 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0))
            goto LAB_0881d344;
            uVar14 = *(int *)(unaff_x25 + 0x28) - 1;
            if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_0881d348;
            if (*(int *)(lVar22 + (long)(int)uVar14 * 0x178 + 0x5c) == *(int *)(unaff_x19 + 0x4b8))
            goto LAB_0881cf00;
          }
        }
      }
      else if (uVar12 == 0xa0) goto LAB_0881cb10;
LAB_0881ced8:
      uStack0000000000000044 = 0;
    }
    else {
      if (((0x28 < uVar12 - 0x2007) ||
          ((1L << ((ulong)(uVar12 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar12 != 0x2060))
      goto LAB_0881ced8;
LAB_0881cb10:
      if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar15 = FUN_08847e38(uVar12,0);
      if ((uVar15 & 1) == 0) {
LAB_0881cb5c:
        if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar15 = FUN_08847e94(uVar12,0);
        if ((uVar15 & 1) != 0) goto LAB_0881cb84;
        if ((*(char *)(unaff_x19 + 0x309) != '\0') ||
           (uVar14 = *(int *)(unaff_x25 + 0x28) + 1, iStack0000000000000020 <= (int)uVar14))
        goto LAB_0881c7a8;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0))
        goto LAB_0881d344;
        if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_0881d348;
        uVar5 = *(undefined2 *)(lVar22 + (long)(int)uVar14 * 0x178 + 0x24);
        if (*(int *)(*(long *)PTR_DAT_093375f8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar15 = FUN_08847e94(uVar5,0);
        if ((uVar15 & 1) == 0) goto LAB_0881c7a8;
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar22 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar22 == 0))
        goto LAB_0881d344;
        uVar14 = *(int *)(unaff_x25 + 0x28) + 1;
        if (*(uint *)(lVar22 + 0x18) <= uVar14) goto LAB_0881d348;
        uVar5 = *(undefined2 *)(lVar22 + (long)(int)uVar14 * 0x178 + 0x24);
        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar22 = FUN_0883e090(0);
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_0881d344;
        uVar14 = FUN_057cfb98(*(long *)(lVar22 + 0x10),uVar12,*(undefined8 *)PTR_DAT_09337598);
        lVar22 = FUN_0883e090(0);
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x18) == 0)) goto LAB_0881d344;
        uVar12 = FUN_057cfb98(*(long *)(lVar22 + 0x18),uVar5,*(undefined8 *)PTR_DAT_09337598);
        if (((uVar14 | uVar12) & 1) != 0) goto LAB_0881cf00;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar15 = FUN_0883e2a4(0);
        if ((uVar15 & 1) != 0) goto LAB_0881cb5c;
LAB_0881cb84:
        if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        lVar22 = FUN_0883e090(0);
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_0881d344;
        uVar15 = FUN_057cfb98(*(long *)(lVar22 + 0x10),uVar12,*(undefined8 *)PTR_DAT_09337598);
        if (*(int *)(unaff_x25 + 0x28) < iStack000000000000005c) {
          if (*(int *)(*(long *)PTR_DAT_093375c8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar22 = FUN_0883e090(0);
          if ((lVar22 == 0) || (lVar16 = *in_stack_00000088, lVar16 == 0)) goto LAB_0881d344;
          uVar14 = *(int *)(unaff_x25 + 0x28) + 1;
          if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_0881d348;
          if (*(long *)(lVar22 + 0x18) == 0) goto LAB_0881d344;
          uVar14 = FUN_057cfb98(*(long *)(lVar22 + 0x18),
                                *(undefined2 *)(lVar16 + (long)(int)uVar14 * 0x178 + 0x24),
                                *(undefined8 *)PTR_DAT_09337598);
          if ((uVar15 & 1) == 0) {
            uStack0000000000000044 = uVar14 & uStack0000000000000044;
            uVar12 = uStack0000000000000044 & uStack0000000000000084 != 0;
            if ((uStack0000000000000044 != 0) || (((uVar14 ^ 1) & 1) != 0)) goto LAB_0881ce2c;
            uStack0000000000000044 = 0;
          }
          else {
LAB_0881ce04:
            uVar12 = (uint)(uStack0000000000000084 != 0);
            if ((uStack0000000000000044 & uVar13 == uVar1) == 0) goto LAB_0881cf00;
            uStack0000000000000044 = 1;
LAB_0881ce2c:
            FUN_088229a4();
          }
          if (uVar12 == 0) goto LAB_0881cf00;
        }
        else {
          if ((uVar15 & 1) != 0) goto LAB_0881ce04;
          uStack0000000000000044 = 0;
        }
      }
    }
  }
  FUN_088229a4();
LAB_0881cf00:
  unaff_w29 = 1;
  *(int *)(unaff_x25 + 0x28) = *(int *)(unaff_x25 + 0x28) + 1;
  fVar34 = unaff_s14;
  goto LAB_0881b440;
code_r0x0881cf28:
  in_w8 = 100.0;
  goto code_r0x0881cf2c;
}


