/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 05d09e28
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 99
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus
               (long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined1 uVar20;
  uint in_w9;
  float *pfVar21;
  long *plVar22;
  long unaff_x19;
  uint uVar23;
  long *unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  undefined4 unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  uint unaff_w28;
  long *plVar24;
  undefined4 unaff_w29;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float unaff_s15;
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
  uint in_stack_00000080;
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
  uint uVar39;
  uint uVar40;
  undefined8 in_stack_00000e40;
  undefined8 in_stack_00000e48;
  undefined4 in_stack_00000e50;
  
code_r0x05d09e28:
  if (in_w9 <= unaff_w21) {
LAB_05d0be28:
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  *(undefined8 *)(param_1 + (long)(int)unaff_w22 * (long)(int)unaff_w24 + 0x30) =
       *(undefined8 *)(unaff_x19 + 0x668);
  thunk_FUN_02dc1ef0();
  lVar17 = *(long *)(unaff_x19 + 0x498);
  if (lVar17 != 0) {
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
    lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24;
                    /* try { // try from 05d09e60 to 05e09e6b has its CatchHandler @ 05d0ac94 */
    *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)(unaff_x19 + 0x670);
    *(undefined4 *)(lVar17 + 0x20) = 0;
    thunk_FUN_02dc1ef0();
    lVar17 = *(long *)(unaff_x19 + 0x498);
    if (lVar17 != 0) {
                    /* try { // try from 05d09e78 to 05e09e7f has its CatchHandler @ 05d0ac90 */
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
      *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24 + 0x48)
           = *(undefined8 *)(unaff_x19 + 0x678);
                    /* try { // try from 05d09e90 to 05e09e9b has its CatchHandler @ 05d0ac8c */
      thunk_FUN_02dc1ef0();
      lVar17 = *(long *)(unaff_x19 + 0x498);
      if (lVar17 != 0) {
                    /* try { // try from 05d09e9c to 05e09eab has its CatchHandler @ 05d0ac88 */
        uVar10 = *(uint *)(unaff_x19 + 0x4a4);
        if (uVar10 < *(uint *)(lVar17 + 0x18)) {
          *(undefined4 *)(lVar17 + (long)(int)uVar10 * (long)(int)unaff_w24 + 0x50) =
               *(undefined4 *)(unaff_x19 + 0x680);
          *(char *)(unaff_x19 + 0x328) = (char)unaff_w29;
          uVar40 = 3;
          uVar9 = 0x2026;
          uVar23 = uVar10 + 1;
LAB_05d09ed4:
                    /* try { // try from 05d09ed4 to 05e09edb has its CatchHandler @ 05d0ace0 */
          if (uVar9 == 3) goto LAB_05d09f34;
                    /* try { // try from 05d09ee4 to 05e09eef has its CatchHandler @ 05d0acd4 */
          if (*(int *)(unaff_x19 + 0x35c) <= (int)uVar10) goto LAB_05d09f34;
          lVar17 = *in_stack_00000088;
          if (lVar17 != 0) {
            if (uVar10 < *(uint *)(lVar17 + 0x18)) {
              lVar17 = lVar17 + (long)(int)uVar10 * (long)(int)unaff_w24;
                    /* try { // try from 05d09f04 to 05e09f07 has its CatchHandler @ 05d0acb8 */
              *(undefined1 *)(lVar17 + 400) = 0;
              *(undefined2 *)(lVar17 + 0x24) = 0x200b;
              *(undefined4 *)(lVar17 + 0x5c) = 0;
              *(uint *)(unaff_x25 + 0x28) = uVar10 + 1;
LAB_05d09f20:
              unaff_w28 = uVar23;
              lVar17 = *(long *)(unaff_x19 + 0x488);
              unaff_w26 = unaff_w26 + 1;
              if (lVar17 != 0) {
                if ((int)*(uint *)(lVar17 + 0x18) <= (int)unaff_w26) goto LAB_05d0bc0c;
                if (unaff_w26 < *(uint *)(lVar17 + 0x18)) goto code_r0x05d09cb0;
                goto LAB_05d0be28;
              }
              goto LAB_05d0be24;
            }
            goto LAB_05d0be28;
          }
          goto LAB_05d0be24;
        }
        goto LAB_05d0be28;
      }
    }
  }
LAB_05d0be24:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
code_r0x05d09cb0:
  uVar9 = *(uint *)(lVar17 + (long)(int)unaff_w26 * 0x10 + 0x24);
  uVar23 = unaff_w28;
  if (uVar9 == 0x1a) goto LAB_05d09f20;
  if (uVar9 == 0) {
LAB_05d0bc0c:
    if ((((*(float *)(unaff_x19 + 0x264) - *(float *)(unaff_x19 + 0x268) <= DAT_01275268) ||
         ((_fStack0000000000000010 & 0x100000000) == 0)) ||
        (fVar31 = *in_stack_00000018, *(float *)(unaff_x19 + 0x27c) <= fVar31)) ||
       (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
      uVar32 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x378),0,4);
      uVar13 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x380),0,4);
      uVar33 = NEON_fmov(0x3f800000,4);
      fVar31 = (*(float *)(unaff_x19 + 0x41c) + (float)uVar32 + (float)uVar13) * 100.0 +
               (float)uVar33;
      fVar25 = (*(float *)(unaff_x19 + 0x428) + (float)((ulong)uVar32 >> 0x20) +
               (float)((ulong)uVar13 >> 0x20)) * 100.0 + (float)((ulong)uVar33 >> 0x20);
      uVar13 = NEON_scvtf(CONCAT44((int)fVar25,(int)fVar31),4);
      uVar11 = CONCAT44((float)((ulong)uVar13 >> 0x20) / 100.0,(float)uVar13 / 100.0);
      *(undefined1 *)(unaff_x19 + 0x274) = 1;
      uVar11 = uVar11 ^ (uVar11 ^ 0xcba3d70acba3d70a) &
                        CONCAT44(-(uint)(fVar25 == INFINITY),-(uint)(fVar31 == INFINITY));
      *(int *)(unaff_x19 + 0x41c) = (int)uVar11;
      *(float *)(unaff_x19 + 0x428) = (float)(uVar11 >> 0x20);
      return;
    }
    if (*(float *)(unaff_x19 + 0x300) < *(float *)(unaff_x19 + 0x2fc) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x300) = 0;
      fVar31 = *in_stack_00000018;
    }
    *(float *)(unaff_x19 + 0x268) = fVar31;
    fVar31 = (*(float *)(unaff_x19 + 0x264) - *in_stack_00000018) * 0.5;
    if (fVar31 <= DAT_012751b0) {
      fVar31 = DAT_012751b0;
    }
    fVar31 = *in_stack_00000018 + fVar31;
    *in_stack_00000018 = fVar31;
    fVar25 = fVar31 * 20.0 + 0.5;
    fVar31 = DAT_01275250;
    if (fVar25 != INFINITY) {
      fVar31 = (float)(int)fVar25 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x27c) <= fVar31) {
      fVar31 = *(float *)(unaff_x19 + 0x27c);
    }
    *in_stack_00000018 = fVar31;
    goto LAB_05d0bce0;
  }
  if ((uVar9 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
    *(char *)(unaff_x19 + 0x469) = (char)unaff_w29;
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    uVar11 = FUN_05d0be34();
    if (((uVar11 & 1) != 0) && (unaff_w26 = in_stack_0000020c, *(int *)(unaff_x19 + 0x65c) == 0))
    goto LAB_05d09f20;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0)) goto LAB_05d0be24;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
    lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24;
    *(undefined4 *)(unaff_x19 + 0x65c) = *(undefined4 *)(lVar17 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar17 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar17 + 0x40);
    thunk_FUN_02dc1ef0(unaff_x19 + 0x100);
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0)) goto LAB_05d0be24;
  unaff_w21 = *(uint *)(unaff_x25 + 0x28);
  if (*(uint *)(lVar17 + 0x18) <= unaff_w21) goto LAB_05d0be28;
  unaff_w23 = *(undefined4 *)(unaff_x19 + 0x120);
  bVar2 = *(byte *)(lVar17 + (long)(int)unaff_w21 * (long)(int)unaff_w24 + 0x54);
  *(undefined1 *)(unaff_x19 + 0x469) = 0;
  in_stack_00000080 = (uint)bVar2;
  uVar10 = unaff_w21;
  if (unaff_w28 != unaff_w21) goto LAB_05d09ed4;
  *(undefined4 *)(unaff_x19 + 0x65c) = 0;
  if (uVar40 == 0x2026) {
    param_1 = *in_stack_00000088;
    if (param_1 == 0) goto LAB_05d0be24;
    in_w9 = *(uint *)(param_1 + 0x18);
    unaff_w22 = unaff_w21;
    goto code_r0x05d09e28;
  }
  uVar9 = uVar40;
  if (uVar40 != 3) goto LAB_05d09ed4;
  lVar17 = *in_stack_00000088;
  if (((lVar17 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
     (lVar12 = FUN_05ce825c(*(long *)(unaff_x19 + 0x100),0), lVar12 == 0)) goto LAB_05d0be24;
  uVar13 = FUN_048bdb30(lVar12,3,*(undefined8 *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListAssetSummaries__)
  ;
  if (*(uint *)(lVar17 + 0x18) <= unaff_w21) goto LAB_05d0be28;
  unaff_w24 = 0x178;
  *(undefined8 *)(lVar17 + (long)(int)unaff_w21 * 0x178 + 0x30) = uVar13;
  thunk_FUN_02dc1ef0();
  uVar9 = 3;
  *(char *)(unaff_x19 + 0x328) = (char)unaff_w29;
LAB_05d09f34:
  fVar25 = 1.0;
  fVar31 = 1.0;
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    uVar10 = *(uint *)(unaff_x19 + 0x284);
    fVar31 = fVar25;
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_04f749ec(uVar9,0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar9 = FUN_04f74c74(uVar9,0);
            fVar25 = fStack0000000000000010;
            goto LAB_05d0a040;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar11 = FUN_04f7494c(uVar9,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar9 = FUN_04f74dec(uVar9,0);
          goto LAB_05d0a040;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar11 = FUN_04f749ec(uVar9,0);
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar9 = FUN_04f74c74(uVar9,0);
LAB_05d0a040:
        uVar9 = uVar9 & 0xffff;
        fVar31 = fVar25;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
  memmove(&stack0x00000240,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0)) goto LAB_05d0be24;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
    *unaff_x20 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24 +
                          0x30);
    thunk_FUN_02dc1ef0(unaff_x20);
    if (*unaff_x20 == 0) goto LAB_05d09f20;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0)) goto LAB_05d0be24;
    uVar1 = *(uint *)(unaff_x25 + 0x28);
    uVar10 = *(uint *)(lVar17 + 0x18);
    if (uVar10 <= uVar1) goto LAB_05d0be28;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar17 + 0x20 + (long)(int)uVar1 * (long)(int)unaff_w24 + 0x30);
    pfVar21 = in_stack_00000048;
    if (unaff_w28 == unaff_w21) {
      lVar12 = *(long *)(unaff_x19 + 0x488);
      if (lVar12 == 0) goto LAB_05d0be24;
      if (*(uint *)(lVar12 + 0x18) <= unaff_w26) goto LAB_05d0be28;
      if ((*(int *)(lVar12 + (long)(int)unaff_w26 * 0x10 + 0x24) == 10) &&
         (uVar1 != *(uint *)(unaff_x19 + 0x4a8))) {
        if (uVar10 <= uVar1 - 1) goto LAB_05d0be28;
        pfVar21 = (float *)(lVar17 + 0x20 + (long)(int)(uVar1 - 1) * (long)(int)unaff_w24 + 0x38);
      }
    }
    fVar26 = *pfVar21;
    fVar25 = (float)FUN_05f84b24(&stack0x00000240,0);
    fVar37 = (float)FUN_05f84b2c(&stack0x00000240,0);
    if (unaff_w28 == unaff_w21) {
      fStack0000000000000078 = 0.0;
      fVar27 = 0.0;
      if (uVar9 != 0x2026) goto LAB_05d0a204;
    }
    else {
LAB_05d0a204:
      fVar27 = (float)FUN_05f84b54(&stack0x00000240,0);
      fStack0000000000000078 = (float)FUN_05f84b84(&stack0x00000240,0);
    }
    lVar17 = *(long *)(unaff_x19 + 0x660);
    if ((lVar17 == 0) || (*(long *)(lVar17 + 0x20) == 0)) goto LAB_05d0be24;
    fVar35 = *(float *)(unaff_x19 + 0x43c);
    fVar29 = *(float *)(lVar17 + 0x2c);
    fVar34 = (float)FUN_05f85024(*(long *)(lVar17 + 0x20),0);
    lVar17 = *in_stack_00000088;
    if (lVar17 == 0) goto LAB_05d0be24;
    uVar10 = *(uint *)(unaff_x25 + 0x28);
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
    *(undefined4 *)(lVar17 + (long)(int)uVar10 * (long)(int)unaff_w24 + 0x20) = 0;
    unaff_s15 = in_stack_00000050._4_4_ * ((fVar31 * fVar26) / fVar25) * fVar37 * fVar35 * fVar29 *
                fVar34;
LAB_05d0a504:
    bVar8 = uVar9 == 0xad;
    fVar25 = 0.0;
    if (uVar9 != 3 && !bVar8) {
      fVar25 = unaff_s15;
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x65c) == 1) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0)) goto LAB_05d0be24;
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
      plVar24 = *(long **)(lVar17 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24 +
                          0x30);
      if (plVar24 == (long *)0x0) goto LAB_05d09f20;
      bVar2 = *(byte *)(*(long *)
                         Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__
                       + 0x130);
      if ((*(byte *)(*plVar24 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar24);
      }
      plVar18 = (long *)plVar24[3];
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        *in_stack_00000030 = 0;
      }
      else {
        lVar17 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__;
        bVar2 = *(byte *)(lVar17 + 0x130);
        if (*(byte *)(*plVar18 + 0x130) < bVar2) {
          plVar22 = (long *)0x0;
        }
        else {
          plVar22 = plVar18;
          if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
            plVar22 = (long *)0x0;
          }
        }
        *in_stack_00000030 = (long)plVar22;
        if (*(byte *)(*plVar18 + 0x130) < bVar2) {
          plVar18 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
          plVar18 = (long *)0x0;
        }
      }
      thunk_FUN_02dc1ef0(in_stack_00000030,plVar18);
      lVar17 = plVar24[5];
      *(int *)(unaff_x19 + 0x6bc) = (int)lVar17;
      uVar1 = (int)lVar17 + 0xe000;
      if (uVar9 != 0x3c) {
        uVar1 = uVar9;
      }
      if (*(long *)(unaff_x19 + 0x6b0) == 0) goto LAB_05d0be24;
      memmove(&stack0x000001a0,(void *)(*(long *)(unaff_x19 + 0x6b0) + 0x28),0x60);
      fVar25 = (float)FUN_05f84b24(&stack0x000001a0,0);
      fVar37 = *in_stack_00000048;
      if (fVar25 <= 0.0) {
        fVar25 = (float)FUN_05f84b24(&stack0x00000240,0);
        fVar26 = (float)FUN_05f84b2c(&stack0x00000240,0);
        fVar27 = (float)FUN_05f84b54(&stack0x00000240,0);
        if (plVar24[4] == 0) goto LAB_05d0be24;
        FUN_05f84fe8(&stack0x00000e40,plVar24[4],0);
        in_stack_00000180 = in_stack_00000e40;
        in_stack_00000188 = in_stack_00000e48;
        in_stack_00000190 = in_stack_00000e50;
        fVar34 = (float)FUN_05f84e18(&stack0x00000180,0);
        if (plVar24[4] == 0) goto LAB_05d0be24;
        fVar35 = *(float *)((long)plVar24 + 0x2c);
        fVar37 = in_stack_00000050._4_4_ * (fVar37 / fVar25) * fVar26;
        fVar25 = (float)FUN_05f85024(plVar24[4],0);
        unaff_s15 = fVar37 * (fVar27 / fVar34) * fVar35 * fVar25;
        fVar25 = 0.0;
        if (unaff_s15 != 0.0) {
          fVar25 = fVar37 / unaff_s15;
        }
        fVar27 = (float)FUN_05f84b54(&stack0x00000240,0);
        fVar27 = fVar27 * fVar25;
        fStack0000000000000078 = (float)FUN_05f84b84(&stack0x00000240,0);
        fStack0000000000000078 = fStack0000000000000078 * fVar25;
      }
      else {
        fVar25 = (float)FUN_05f84b24(&stack0x000001a0,0);
        fVar26 = (float)FUN_05f84b2c(&stack0x000001a0,0);
        if (plVar24[4] == 0) goto LAB_05d0be24;
        fVar34 = *(float *)((long)plVar24 + 0x2c);
        fVar27 = (float)FUN_05f85024(plVar24[4],0);
        unaff_s15 = in_stack_00000050._4_4_ * (fVar37 / fVar25) * fVar26 * fVar34 * fVar27;
        fVar27 = (float)FUN_05f84b54(&stack0x000001a0,0);
        fStack0000000000000078 = (float)FUN_05f84b84(&stack0x000001a0,0);
      }
      *unaff_x20 = (long)plVar24;
      thunk_FUN_02dc1ef0(unaff_x20,plVar24);
      lVar17 = *in_stack_00000088;
      if (lVar17 == 0) goto LAB_05d0be24;
      uVar10 = *(uint *)(unaff_x25 + 0x28);
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
      lVar12 = lVar17 + (long)(int)uVar10 * (long)(int)unaff_w24;
      *(undefined4 *)(lVar12 + 0x20) = unaff_w29;
      *(float *)(lVar12 + 0x15c) = unaff_s15;
      *(undefined4 *)(unaff_x19 + 0x120) = unaff_w23;
      uVar9 = uVar1;
      goto LAB_05d0a504;
    }
    bVar8 = uVar9 == 0xad;
    fVar27 = 0.0;
    fVar25 = 0.0;
    if (uVar9 != 3 && !bVar8) {
      fVar25 = unaff_s15;
    }
    lVar17 = *in_stack_00000088;
    if (lVar17 == 0) goto LAB_05d0be24;
    uVar10 = *(uint *)(unaff_x25 + 0x28);
    fStack0000000000000078 = 0.0;
  }
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
  *(short *)(lVar17 + (long)(int)uVar10 * (long)(int)unaff_w24 + 0x24) = (short)uVar9;
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0)) goto LAB_05d0be24;
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
  lVar17 = *(long *)(lVar17 + (long)(int)uVar10 * (long)(int)unaff_w24 + 0x38);
  if (lVar17 == 0) {
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x20), lVar17 == 0))
    goto LAB_05d0be24;
    FUN_05f84fe8(&stack0x00000e40,lVar17,0);
    in_stack_000000d0 = in_stack_00000e40;
    in_stack_000000d8 = in_stack_00000e48;
    in_stack_000000e0 = in_stack_00000e50;
  }
  else {
    FUN_05f84fe8(&stack0x000000d0,lVar17,0);
  }
  if (uVar9 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uStack0000000000000084 = FUN_04f72380(uVar9,0);
    uStack0000000000000084 = uStack0000000000000084 & 1;
  }
  else {
    uStack0000000000000084 = 0;
  }
  fVar37 = *(float *)(unaff_x19 + 0x2d0);
  uVar28 = 0;
  if ((*(char *)(unaff_x19 + 0x329) != '\0') && (*(int *)(unaff_x19 + 0x65c) == 0)) {
    if (*unaff_x20 == 0) goto LAB_05d0be24;
    iVar16 = *(int *)(unaff_x25 + 0x28);
    uVar10 = *(uint *)(*unaff_x20 + 0x28);
    if (iVar16 < iStack000000000000005c) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0)) goto LAB_05d0be24;
      uVar1 = iVar16 + 1;
      if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_05d0be28;
      uVar28 = 0;
      if (*(int *)(lVar17 + 0x20 + (long)(int)uVar1 * (long)(int)unaff_w24) == 0) {
        lVar17 = *(long *)(lVar17 + 0x20 + (long)(int)uVar1 * (long)(int)unaff_w24 + 0x10);
        if ((((lVar17 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
            (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar12 == 0)) ||
           (lVar12 = *(long *)(lVar12 + 0x40), lVar12 == 0)) goto LAB_05d0be24;
        uVar11 = FUN_048a9f18(lVar12,uVar10 | *(int *)(lVar17 + 0x28) << 0x10,&stack0x00000150,
                              *(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
        if ((uVar11 & 1) != 0) {
          FUN_05f896d8(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          uVar28 = FUN_05f8952c(&stack0x00000130,0);
          uVar11 = FUN_05f89714(&stack0x00000150,0);
          if ((uVar11 & 0x100) != 0) {
            fVar37 = 0.0;
          }
        }
      }
      iVar16 = *(int *)(unaff_x25 + 0x28);
    }
    if (0 < iVar16) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0)) goto LAB_05d0be24;
      if (*(uint *)(lVar17 + 0x18) <= iVar16 - 1U) goto LAB_05d0be28;
      lVar17 = *(long *)(lVar17 + (ulong)(iVar16 - 1U) * (ulong)unaff_w24 + 0x30);
      if (lVar17 == 0) goto LAB_05d0be24;
      uVar1 = *(uint *)(lVar17 + 0x28);
      lVar17 = FUN_05d04cb4();
      if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x38), lVar17 == 0)) goto LAB_05d0be24;
      uVar4 = *(int *)(unaff_x25 + 0x28) - 1;
      if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_05d0be28;
      if (*(int *)(lVar17 + (long)(int)uVar4 * (long)(int)unaff_w24 + 0x20) == 0) {
        if (((*(long *)(unaff_x19 + 0x100) == 0) ||
            (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar17 == 0)) ||
           (lVar17 = *(long *)(lVar17 + 0x40), lVar17 == 0)) goto LAB_05d0be24;
        uVar11 = FUN_048a9f18(lVar17,uVar1 | uVar10 << 0x10,&stack0x00000150,
                              *(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
        if ((uVar11 & 1) != 0) {
          FUN_05f89700(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          FUN_05f8952c(&stack0x00000130,0);
          FUN_05f8938c(uVar28,0);
          uVar11 = FUN_05f89714(&stack0x00000150,0);
          if ((uVar11 & 0x100) != 0) {
            fVar37 = 0.0;
          }
        }
      }
    }
    lVar17 = *in_stack_00000088;
    if (lVar17 == 0) goto LAB_05d0be24;
    uVar10 = *(uint *)(unaff_x25 + 0x28);
    uVar28 = FUN_05f89368(&stack0x00000210,0);
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
    *(undefined4 *)(lVar17 + (long)(int)uVar10 * (long)(int)unaff_w24 + 0x154) = uVar28;
  }
  if (*(int *)(*(long *)
                Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__ +
              0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar11 = FUN_05d36848(uVar9,0);
  uVar10 = *(uint *)(unaff_x25 + 0x28);
  if ((uVar11 & 1) == 0) {
    if (0 < (int)uVar10) {
      uVar1 = *(uint *)(unaff_x19 + 0x32c);
      if ((uVar1 == 0x80000000) || (uVar1 != uVar10 - 1)) {
        lVar17 = (ulong)uVar10 * (ulong)unaff_w24 + 0x144;
        uVar14 = (ulong)uVar10;
        do {
          uVar10 = *(uint *)(unaff_x19 + 0x32c);
          uVar5 = uVar14 - 1;
          if (((long)uVar14 < 1) || (uVar1 = (int)uVar14 - 1, uVar1 == uVar10)) {
            if (uVar10 == 0x80000000) goto LAB_05d0abb0;
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0))
            goto LAB_05d0be24;
            if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
            lVar17 = *(long *)(lVar17 + (long)(int)uVar10 * (long)(int)unaff_w24 + 0x30);
            if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x20), lVar17 == 0))
            goto LAB_05d0be24;
            uVar10 = FUN_05f84fd8(lVar17,0);
            if ((*unaff_x20 == 0) ||
               (((*(long *)(unaff_x19 + 0x100) == 0 ||
                 (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar17 == 0)) ||
                (lVar17 = *(long *)(lVar17 + 0x48), lVar17 == 0)))) goto LAB_05d0be24;
            uVar14 = FUN_048b1190(lVar17,uVar10 | *(int *)(*unaff_x20 + 0x28) << 0x10,
                                  &stack0x000000e8,
                                  *(undefined8 *)
                                   Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__
                                 );
            if ((uVar14 & 1) == 0) goto LAB_05d0abb0;
            lVar17 = *in_stack_00000088;
            if (lVar17 == 0) goto LAB_05d0be24;
            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_05d0be28;
            FUN_05f89350((in_stack_000000e8._4_4_ +
                         (*(float *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x32c) *
                                              (long)(int)unaff_w24 + 0x138) -
                         *(float *)(unaff_x19 + 0x658)) / fVar25) - fStack00000000000000f8,
                         &stack0x00000210,0);
            fVar37 = in_stack_000000f0;
            fVar26 = fStack00000000000000fc;
            goto LAB_05d0ab9c;
          }
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0))
          goto LAB_05d0be24;
          if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_05d0be28;
          lVar12 = *(long *)(lVar12 + lVar17 + -0x28c);
          if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) goto LAB_05d0be24;
          uVar10 = FUN_05f84fd8(lVar12,0);
          if ((*unaff_x20 == 0) ||
             (((*(long *)(unaff_x19 + 0x100) == 0 ||
               (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar12 == 0)) ||
              (lVar12 = *(long *)(lVar12 + 0x50), lVar12 == 0)))) goto LAB_05d0be24;
          uVar15 = FUN_048b84e0(lVar12,uVar10 | *(int *)(*unaff_x20 + 0x28) << 0x10,&stack0x00000100
                                ,*(undefined8 *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListArchivedMultiplayerServers__
                               );
          lVar17 = lVar17 + -0x178;
          uVar14 = uVar5;
        } while ((uVar15 & 1) == 0);
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar12 == 0))
        goto LAB_05d0be24;
        uVar10 = (uint)uVar5;
        if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_05d0be28;
        lVar19 = *(long *)(unaff_x19 + 0x498);
        if (lVar19 == 0) goto LAB_05d0be24;
        if (*(uint *)(lVar19 + 0x18) <= uVar10) goto LAB_05d0be28;
        fVar37 = *(float *)(unaff_x19 + 0x4ec);
        fVar26 = *(float *)(unaff_x19 + 0x634);
        fVar34 = *(float *)(lVar19 + lVar17);
        FUN_05f89350(((*(float *)(lVar12 + lVar17 + -0xc) - *(float *)(unaff_x19 + 0x658)) / fVar25
                     + in_stack_00000100._4_4_) - fStack0000000000000110,&stack0x00000210,0);
        fVar37 = (fVar34 - ((0.0 - fVar37) + fVar26)) / fVar25 + in_stack_00000108;
        fVar26 = fStack0000000000000114;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0))
        goto LAB_05d0be24;
        if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_05d0be28;
        lVar17 = *(long *)(lVar17 + (long)(int)uVar1 * (long)(int)unaff_w24 + 0x30);
        if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x20), lVar17 == 0)) goto LAB_05d0be24;
        uVar10 = FUN_05f84fd8(lVar17,0);
        if ((*unaff_x20 == 0) ||
           (((*(long *)(unaff_x19 + 0x100) == 0 ||
             (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar17 == 0)) ||
            (lVar17 = *(long *)(lVar17 + 0x48), lVar17 == 0)))) goto LAB_05d0be24;
        uVar14 = FUN_048b1190(lVar17,uVar10 | *(int *)(*unaff_x20 + 0x28) << 0x10,&stack0x00000118,
                              *(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__);
        if ((uVar14 & 1) == 0) goto LAB_05d0abb0;
        lVar17 = *in_stack_00000088;
        if (lVar17 == 0) goto LAB_05d0be24;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_05d0be28;
        FUN_05f89350((in_stack_00000118._4_4_ +
                     (*(float *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x32c) *
                                          (long)(int)unaff_w24 + 0x138) -
                     *(float *)(unaff_x19 + 0x658)) / fVar25) - fStack0000000000000128,
                     &stack0x00000210,0);
        fVar37 = in_stack_00000120;
        fVar26 = fStack000000000000012c;
      }
LAB_05d0ab9c:
      FUN_05f89360(fVar37 - fVar26,&stack0x00000210,0);
      fVar37 = 0.0;
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x32c) = uVar10;
  }
LAB_05d0abb0:
  fVar26 = (float)FUN_05f89358(&stack0x00000210,0);
  fVar34 = (float)FUN_05f89358(&stack0x00000210,0);
  fVar35 = *(float *)(unaff_x19 + 0x2d8);
  fVar29 = 0.0;
  fStack0000000000000068 = 0.0;
  if (fVar35 != 0.0) {
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x20), lVar17 == 0))
    goto LAB_05d0be24;
    FUN_05f84fe8(&stack0x00000e40,lVar17,0);
    in_stack_00000180 = in_stack_00000e40;
    in_stack_00000188 = in_stack_00000e48;
    in_stack_00000190 = in_stack_00000e50;
    fVar29 = (float)FUN_05f84e10(&stack0x00000180,0);
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x20), lVar17 == 0))
    goto LAB_05d0be24;
    FUN_05f84fe8(&stack0x00000090,lVar17,0);
    in_stack_00000188 = in_stack_00000098;
    in_stack_00000180 = in_stack_00000090;
    in_stack_00000190 = in_stack_000000a0;
    fVar30 = (float)FUN_05f84e20(&stack0x00000180,0);
    fVar29 = (1.0 - *(float *)(unaff_x19 + 0x300)) *
             (fVar35 * 0.5 - fVar25 * (fVar29 * 0.5 + fVar30));
    *(float *)(unaff_x19 + 0x658) = *(float *)(unaff_x19 + 0x658) + fVar29;
  }
  if (((in_stack_00000080 == 0) && (*(int *)(unaff_x19 + 0x65c) == 0)) &&
     ((*(byte *)(unaff_x19 + 0x284) & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
    fStack0000000000000068 = *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1ac);
  }
  lVar17 = *in_stack_00000088;
  if (lVar17 == 0) goto LAB_05d0be24;
  uVar10 = *(uint *)(unaff_x19 + 0x4a4);
  fVar30 = *(float *)(unaff_x19 + 0x658);
  fVar35 = (float)FUN_05f89348(&stack0x00000210,0);
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
  *(float *)(lVar17 + (long)(int)uVar10 * 0x178 + 0x138) = fVar30 + fVar25 * fVar35;
  lVar17 = *in_stack_00000088;
  if (lVar17 == 0) goto LAB_05d0be24;
  uVar10 = *(uint *)(unaff_x19 + 0x4a4);
  fVar30 = *(float *)(unaff_x19 + 0x4ec);
  fVar38 = *(float *)(unaff_x19 + 0x634);
  fVar35 = (float)FUN_05f89358(&stack0x00000210,0);
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
  *(float *)(lVar17 + (long)(int)uVar10 * 0x178 + 0x144) = (0.0 - fVar30) + fVar38 + fVar25 * fVar35
  ;
  fVar26 = fVar25 * (fVar27 + fVar26);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    fVar26 = fVar26 / fVar31;
    fVar27 = (fVar25 * (fStack0000000000000078 + fVar34)) / fVar31;
  }
  else {
    fVar27 = fVar25 * (fStack0000000000000078 + fVar34);
  }
  fVar34 = *(float *)(unaff_x19 + 0x634);
  uVar10 = *(uint *)(unaff_x19 + 0x4a4);
  uVar1 = *(uint *)(unaff_x19 + 0x4a8);
  fVar26 = fVar26 + fVar34;
  if ((uStack0000000000000084 == 0) || (uVar10 == uVar1)) {
    fVar27 = fVar27 + fVar34;
    fVar35 = fVar26;
    fVar30 = fVar27;
    if (fVar34 != 0.0) {
      fVar35 = (fVar26 - fVar34) / *(float *)(unaff_x19 + 0x43c);
      fVar30 = (fVar27 - fVar34) / *(float *)(unaff_x19 + 0x43c);
      if (fVar35 <= fVar26) {
        fVar35 = fVar26;
      }
      if (fVar27 <= fVar30) {
        fVar30 = fVar27;
      }
    }
    lVar17 = *(long *)(unaff_x19 + 0x498);
    fVar34 = fVar35;
    if (fVar35 <= *(float *)(unaff_x19 + 0x4dc)) {
      fVar34 = *(float *)(unaff_x19 + 0x4dc);
    }
    fVar38 = fVar30;
    if (*(float *)(unaff_x19 + 0x4e0) <= fVar30) {
      fVar38 = *(float *)(unaff_x19 + 0x4e0);
    }
    *(float *)(unaff_x19 + 0x4dc) = fVar34;
    *(float *)(unaff_x19 + 0x4e0) = fVar38;
    if (lVar17 == 0) goto LAB_05d0be24;
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
    lVar17 = lVar17 + (long)(int)uVar10 * 0x178;
    *(float *)(lVar17 + 0x14c) = fVar35;
    *(float *)(lVar17 + 0x150) = fVar30;
    fVar35 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(lVar17 + 0x140) = fVar26 - fVar35;
    *(float *)(unaff_x19 + 0x4d4) = fVar26 - fVar35;
    *(float *)(lVar17 + 0x148) = fVar27 - fVar35;
    *(float *)(unaff_x19 + 0x4d8) = fVar27 - fVar35;
    if ((*(int *)(unaff_x19 + 0x4b8) == 0) || (*(char *)(unaff_x19 + 0x374) != '\0')) {
      lVar17 = *(long *)(unaff_x19 + 0x100);
      *(float *)(unaff_x25 + 0x50) = fVar34;
      if (lVar17 == 0) goto LAB_05d0be24;
      fVar27 = *(float *)(unaff_x19 + 0x4d0);
      fVar34 = (float)FUN_05f84b5c(lVar17 + 0x28,0);
      fVar31 = (fVar25 * fVar34) / fVar31;
      if (fVar27 <= fVar31) {
        fVar27 = fVar31;
      }
      fVar35 = *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4d0) = fVar27;
    }
  }
  else {
    lVar17 = *in_stack_00000088;
    if (lVar17 == 0) goto LAB_05d0be24;
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
    lVar17 = lVar17 + (long)(int)uVar10 * 0x178;
    uVar13 = *(undefined8 *)(unaff_x25 + 0x60);
    *(undefined8 *)(lVar17 + 0x14c) = uVar13;
    fVar35 = *(float *)(unaff_x19 + 0x4ec);
    fVar31 = (float)uVar13 - fVar35;
    fVar27 = (float)((ulong)uVar13 >> 0x20) - fVar35;
    *(float *)(lVar17 + 0x140) = fVar31;
    *(float *)(lVar17 + 0x148) = fVar27;
    *(ulong *)(unaff_x25 + 0x58) = CONCAT44(fVar27,fVar31);
  }
  if ((fVar35 == 0.0) &&
     ((uStack0000000000000084 == 0 || (*(int *)(unaff_x19 + 0x4a4) == *(int *)(unaff_x19 + 0x4a8))))
     ) {
    fVar31 = *(float *)(unaff_x19 + 0x4c8);
    if (*(float *)(unaff_x19 + 0x4c8) <= fVar26) {
      fVar31 = fVar26;
    }
    *(float *)(unaff_x19 + 0x4c8) = fVar31;
  }
  uVar4 = *(uint *)(unaff_x19 + 0x2a0);
  uVar39 = uVar23;
  if (uVar9 == 9) {
LAB_05d0af6c:
    fVar31 = (fStack0000000000000058 - *(float *)(unaff_x19 + 0x388)) -
             *(float *)(unaff_x19 + 0x38c);
    fVar26 = *(float *)(unaff_x19 + 0x398);
    bVar7 = true;
    if ((fVar26 <= fVar31) && (bVar7 = false, !NAN(fVar26))) {
      bVar7 = fVar26 == -1.0;
    }
    fVar27 = *(float *)(unaff_x19 + 0x658);
    if (!bVar7) {
      fVar31 = fVar26;
    }
    fVar26 = (float)FUN_05f84e30(&stack0x00000220,0);
    if (bVar8 == false) {
      unaff_s15 = fVar25;
    }
    fVar26 = ABS(fVar27) + fVar26 * (1.0 - *(float *)(unaff_x19 + 0x300)) * unaff_s15;
    if ((uVar11 & 1) != 0) {
      fVar27 = 1.0;
      if ((uVar4 & 0x18) != 0) {
        fVar27 = DAT_01275388;
      }
      if (((fVar27 * fVar31 < fVar26) && (in_stack_00000070 != 0)) &&
         ((in_stack_00000070 != 3 && (*(int *)(unaff_x19 + 0x4a4) != *(int *)(unaff_x19 + 0x4a8)))))
      {
        unaff_w26 = FUN_05d11230();
        lVar17 = *(long *)(unaff_x19 + 0x498);
        if (lVar17 == 0) goto LAB_05d0be24;
        uVar10 = *(uint *)(unaff_x19 + 0x4a4);
        uVar39 = uVar10 - 1;
        if (*(uint *)(lVar17 + 0x18) <= uVar39) goto LAB_05d0be28;
        if ((*(short *)(lVar17 + 0x20 + (long)(int)uVar39 * 0x178 + 4) == 0xad &&
             (in_stack_00000038._4_1_ & 1) == 0) && (*(int *)(unaff_x19 + 0x310) == 0)) {
          in_stack_00000038._4_1_ = 0;
          unaff_w26 = unaff_w26 - 1;
          uVar40 = 0x2d;
          *(uint *)(unaff_x25 + 0x28) = uVar39;
        }
        else {
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
          if (*(short *)(lVar17 + 0x20 + (long)(int)uVar10 * 0x178 + 4) == 0xad) {
            in_stack_00000038._4_1_ = 1;
            uVar39 = uVar23;
          }
          else {
            if ((uStack0000000000000044 & uStack0000000000000014 & 1) != 0) {
              fVar34 = *(float *)(unaff_x19 + 0x2fc) / 100.0;
              fVar37 = *(float *)(unaff_x19 + 0x300);
              if ((fVar37 < fVar34) && (*(int *)(unaff_x19 + 0x26c) < *(int *)(unaff_x19 + 0x270)))
              {
                fVar25 = fVar26;
                if (0.0 < fVar37) {
                  fVar25 = fVar26 / (1.0 - fVar37);
                }
                fVar37 = fVar37 + (fVar26 - fVar27 * (fVar31 + DAT_012751f8)) / fVar25;
                if (fVar34 <= fVar37) {
                  fVar37 = fVar34;
                }
                *(float *)(unaff_x19 + 0x300) = fVar37;
LAB_05d0bce0:
                FUN_05d18e04(0);
                return;
              }
              if ((*(float *)(unaff_x19 + 0x278) < *in_stack_00000018) &&
                 (*(int *)(unaff_x19 + 0x26c) < *(int *)(unaff_x19 + 0x270))) {
                *(float *)(unaff_x19 + 0x264) = *in_stack_00000018;
                fVar31 = (*in_stack_00000018 - *(float *)(unaff_x19 + 0x268)) * 0.5;
                if (fVar31 <= DAT_012751b0) {
                  fVar31 = DAT_012751b0;
                }
                fVar31 = *in_stack_00000018 - fVar31;
                *in_stack_00000018 = fVar31;
                fVar25 = fVar31 * 20.0 + 0.5;
                fVar31 = DAT_01275250;
                if (fVar25 != INFINITY) {
                  fVar31 = (float)(int)fVar25 / 20.0;
                }
                if (fVar31 <= *(float *)(unaff_x19 + 0x278)) {
                  fVar31 = *(float *)(unaff_x19 + 0x278);
                }
                *in_stack_00000018 = fVar31;
                goto LAB_05d0bce0;
              }
            }
            if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
              fVar31 = *(float *)(unaff_x19 + 0x4dc);
              fVar37 = *(float *)(unaff_x19 + 0x4e4);
              if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              fVar31 = fVar31 - fVar37;
              if (((fStack0000000000000024 < ABS(fVar31)) && (*(char *)(unaff_x19 + 0x2f0) == '\0'))
                 && (*(char *)(unaff_x19 + 0x374) == '\0')) {
                *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar31;
                *(float *)(unaff_x19 + 0x4ec) = fVar31 + *(float *)(unaff_x19 + 0x4ec);
              }
            }
            fVar37 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
            *(undefined4 *)(unaff_x19 + 0x4bc) = 0;
            *(undefined4 *)(unaff_x19 + 0x4a8) = *(undefined4 *)(unaff_x19 + 0x4a4);
            fVar31 = *(float *)(unaff_x19 + 0x4d8);
            if (fVar37 <= *(float *)(unaff_x19 + 0x4d8)) {
              fVar31 = fVar37;
            }
            *(float *)(unaff_x19 + 0x4d8) = fVar31;
            FUN_05d115d4();
            lVar17 = *(long *)(unaff_x19 + 0x498);
            *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
            puVar6 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
            if (lVar17 == 0) goto LAB_05d0be24;
            if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
            fVar31 = *(float *)(unaff_x19 + 0x2ec);
            bVar8 = fVar31 != DAT_01274f94;
            fVar37 = *(float *)(lVar17 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x14c);
            if (bVar8) {
              fVar26 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
            }
            else {
              fVar26 = fVar37 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
                       fStack000000000000002c *
                       (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8));
              fVar31 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
            }
            *(bool *)(unaff_x19 + 0x2f0) = bVar8;
            lVar17 = *(long *)puVar6;
            *(float *)(unaff_x19 + 0x4ec) = *(float *)(unaff_x19 + 0x4ec) + fVar31 + fVar26;
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar17 = *(long *)puVar6;
            }
            fVar31 = *(float *)(unaff_x19 + 0x444);
            in_stack_00000038._4_1_ = 0;
            uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x1730);
            *(float *)(unaff_x19 + 0x4e4) = fVar37;
            uStack0000000000000044 = 1;
            uVar13 = NEON_rev64(uVar13,4);
            *(undefined8 *)(unaff_x25 + 0x60) = uVar13;
            *(float *)(unaff_x19 + 0x658) = fVar31 + 0.0;
            uVar39 = uVar23;
          }
        }
        goto LAB_05d0b9f0;
      }
    }
    fVar26 = fVar26 + *(float *)(unaff_x19 + 0x388) + *(float *)(unaff_x19 + 0x38c);
    fVar27 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fVar31 = *(float *)(unaff_x19 + 0x41c);
    if (*(float *)(unaff_x19 + 0x41c) <= fVar26) {
      fVar31 = fVar26;
    }
    fVar26 = *(float *)(unaff_x19 + 0x428);
    if (*(float *)(unaff_x19 + 0x428) <= fVar27) {
      fVar26 = fVar27;
    }
    *(float *)(unaff_x19 + 0x41c) = fVar31;
    fVar35 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(unaff_x19 + 0x428) = fVar26;
  }
  else {
    if (iStack0000000000000040 == 2) {
      if ((uStack0000000000000084 == 0) && (uVar9 != 0x200b)) goto LAB_05d0af34;
      goto LAB_05d0af6c;
    }
    if (uStack0000000000000084 == 0) {
LAB_05d0af34:
      if (((uVar9 != 3) && (uVar9 != 0x200b)) && (uVar9 != 0xad)) goto LAB_05d0af6c;
    }
    if ((((in_stack_00000038._4_1_ | bVar8 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x65c) == 1)
       ) goto LAB_05d0af6c;
  }
  if (0.0 < fVar35) {
    uVar28 = *(undefined4 *)(unaff_x19 + 0x4dc);
    uVar36 = *(undefined4 *)(unaff_x19 + 0x4e4);
    if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListCertificateSummaries__ +
                0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar11 = FUN_05cdf0a4(uVar28,uVar36,0);
    if ((((uVar11 & 1) == 0) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
       (*(char *)(unaff_x19 + 0x374) == '\0')) {
      fVar31 = *(float *)(unaff_x19 + 0x4dc) - *(float *)(unaff_x19 + 0x4e4);
      *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar31;
      *(float *)(unaff_x19 + 0x4ec) = fVar31 + *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4e4) = *(float *)(unaff_x19 + 0x4e4) + fVar31;
    }
  }
  if (uVar9 == 9) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
    memmove(&stack0x000002a0,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
    fVar31 = (float)FUN_05f84bcc(&stack0x000002a0,0);
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
    fVar37 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(unaff_x19 + 0x100) + 0x1b1));
    fVar26 = *(float *)(unaff_x19 + 0x658);
    fVar37 = fVar25 * fVar31 * fVar37;
    fVar31 = fVar37 * (float)(int)(fVar26 / fVar37);
    if (fVar31 <= fVar26) {
      fVar31 = fVar26 + fVar37;
    }
LAB_05d0b240:
    bVar7 = false;
    *(float *)(unaff_x19 + 0x658) = fVar31;
LAB_05d0b248:
    if (*(int *)(unaff_x25 + 0x28) == iStack000000000000005c) goto LAB_05d0b2f0;
  }
  else {
    if (*(float *)(unaff_x19 + 0x2d8) == 0.0) {
      fVar31 = *(float *)(unaff_x19 + 0x658);
      fVar26 = (float)FUN_05f84e30(&stack0x00000220,0);
      fVar34 = *(float *)(unaff_x19 + 0x47c);
      fVar27 = (float)FUN_05f89368(&stack0x00000210,0);
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
      fVar31 = fVar31 + (1.0 - *(float *)(unaff_x19 + 0x300)) *
                        (*(float *)(unaff_x19 + 0x2d4) +
                        fVar25 * (fVar26 * fVar34 + fVar27) +
                        in_stack_00000060 *
                        (fStack0000000000000068 +
                        fVar37 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
    }
    else {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
      fVar31 = *(float *)(unaff_x19 + 0x658) +
               (1.0 - *(float *)(unaff_x19 + 0x300)) *
               (*(float *)(unaff_x19 + 0x2d4) +
               (*(float *)(unaff_x19 + 0x2d8) - fVar29) +
               in_stack_00000060 * (fVar37 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
    }
    *(float *)(unaff_x19 + 0x658) = fVar31;
    if ((uStack0000000000000084 != 0) || (uVar9 == 0x200b)) {
      *(float *)(unaff_x19 + 0x658) = fVar31 + in_stack_00000060 * *(float *)(unaff_x19 + 0x2e0);
    }
    if (uVar9 == 0xd) {
      fVar31 = *(float *)(unaff_x19 + 0x444) + 0.0;
      goto LAB_05d0b240;
    }
    bVar7 = uVar9 == 10;
    if (((0xb < uVar9) || ((1 << (ulong)(uVar9 & 0x1f) & 0xc08U) == 0)) && (1 < uVar9 - 0x2028))
    goto LAB_05d0b248;
LAB_05d0b2f0:
    if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
      fVar31 = *(float *)(unaff_x19 + 0x4dc);
      fVar37 = *(float *)(unaff_x19 + 0x4e4);
      if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      fVar31 = fVar31 - fVar37;
      if (((fStack0000000000000024 < ABS(fVar31)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
         (*(char *)(unaff_x19 + 0x374) == '\0')) {
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar31;
        *(float *)(unaff_x19 + 0x4ec) = fVar31 + *(float *)(unaff_x19 + 0x4ec);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x374) = 0;
    fVar37 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
    fVar31 = *(float *)(unaff_x19 + 0x4d8);
    if (fVar37 <= *(float *)(unaff_x19 + 0x4d8)) {
      fVar31 = fVar37;
    }
    *(float *)(unaff_x19 + 0x4d8) = fVar31;
    if (((unaff_w28 == unaff_w21) && (uVar9 == 0x2d)) || ((uVar9 - 10 < 2 || (uVar9 - 0x2028 < 2))))
    {
      FUN_05d115d4();
      FUN_05d115d4();
      uVar10 = *(uint *)(unaff_x19 + 0x4a4);
      lVar17 = *(long *)(unaff_x19 + 0x498);
      iVar16 = uVar10 + 1;
      *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
      *(int *)(unaff_x19 + 0x4a8) = iVar16;
      if (lVar17 == 0) goto LAB_05d0be24;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
      fVar31 = *(float *)(lVar17 + (long)(int)uVar10 * 0x178 + 0x14c);
      if (*(float *)(unaff_x19 + 0x2ec) == DAT_01274f94) {
        fVar37 = 0.0;
        if (uVar9 == 0x2029) {
          bVar7 = true;
        }
        if (bVar7) {
          fVar37 = *(float *)(unaff_x19 + 0x2f8);
        }
        uVar20 = 0;
        fVar37 = fVar31 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
                 fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8)) +
                 in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar37) +
                 *(float *)(unaff_x19 + 0x4ec);
      }
      else {
        fVar37 = 0.0;
        if (uVar9 == 0x2029) {
          bVar7 = true;
        }
        if (bVar7) {
          fVar37 = *(float *)(unaff_x19 + 0x2f8);
        }
        uVar20 = 1;
        fVar37 = *(float *)(unaff_x19 + 0x4ec) +
                 *(float *)(unaff_x19 + 0x2ec) +
                 in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar37);
      }
      *(float *)(unaff_x19 + 0x4ec) = fVar37;
      puVar6 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
      *(undefined1 *)(unaff_x19 + 0x2f0) = uVar20;
      lVar17 = *(long *)puVar6;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar17 = *(long *)puVar6;
        iVar16 = *(int *)(unaff_x25 + 0x28) + 1;
      }
      fVar37 = *(float *)(unaff_x19 + 0x440);
      fVar26 = *(float *)(unaff_x19 + 0x444);
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x1730);
      *(float *)(unaff_x19 + 0x4e4) = fVar31;
      *(int *)(unaff_x19 + 0x4a4) = iVar16;
      uVar13 = NEON_rev64(uVar13,4);
      *(undefined8 *)(unaff_x25 + 0x60) = uVar13;
      *(float *)(unaff_x19 + 0x658) = fVar37 + 0.0 + fVar26;
      goto LAB_05d0b9f0;
    }
    if (uVar9 == 3) {
      if (*(long *)(unaff_x19 + 0x488) == 0) goto LAB_05d0be24;
      unaff_w26 = *(uint *)(*(long *)(unaff_x19 + 0x488) + 0x18);
      uVar9 = 3;
    }
  }
  if (((in_stack_00000070 != 3) && (in_stack_00000070 != 0)) ||
     ((*(uint *)(unaff_x19 + 0x310) | 2) == 3)) {
    if (((uStack0000000000000084 == 0) && (uVar9 != 0x2d)) && ((uVar9 != 0x200b && (uVar9 != 0xad)))
       ) {
      if (*(char *)(unaff_x19 + 0x309) == '\0') goto LAB_05d0b5f0;
LAB_05d0b288:
      if ((uStack0000000000000044 & 1) == 0) {
        uStack0000000000000044 = 0;
        goto LAB_05d0b9e0;
      }
      if ((uVar9 == 0xa0 || uStack0000000000000084 == 0) &&
         (bVar8 != true || (in_stack_00000038._4_1_ & 1) != 0)) {
        uStack0000000000000044 = 1;
      }
      else {
        FUN_05d115d4();
        uStack0000000000000044 = 1;
      }
    }
    else {
      if (*(char *)(unaff_x19 + 0x309) != '\0') goto LAB_05d0b288;
      if ((int)uVar9 < 0x2007) {
        if (uVar9 == 0x2d) {
          uVar10 = *(int *)(unaff_x25 + 0x28) - 1;
          if (0 < *(int *)(unaff_x25 + 0x28)) {
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0))
            goto LAB_05d0be24;
            if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
            uVar3 = *(undefined2 *)(lVar17 + (ulong)uVar10 * 0x178 + 0x24);
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar11 = FUN_04f72380(uVar3,0);
            if ((uVar11 & 1) != 0) {
              if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
                 (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0))
              goto LAB_05d0be24;
              uVar10 = *(int *)(unaff_x25 + 0x28) - 1;
              if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
              if (*(int *)(lVar17 + (long)(int)uVar10 * 0x178 + 0x5c) == *(int *)(unaff_x19 + 0x4b8)
                 ) goto LAB_05d0b9e0;
            }
          }
        }
        else if (uVar9 == 0xa0) goto LAB_05d0b5f0;
LAB_05d0b9b8:
        uStack0000000000000044 = 0;
      }
      else {
        if (((0x28 < uVar9 - 0x2007) ||
            ((1L << ((ulong)(uVar9 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar9 != 0x2060))
        goto LAB_05d0b9b8;
LAB_05d0b5f0:
        if (*(int *)(*(long *)
                      Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                    + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar11 = FUN_05d36aac(uVar9,0);
        if ((uVar11 & 1) == 0) {
LAB_05d0b63c:
          if (*(int *)(*(long *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                      + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_05d36b08(uVar9,0);
          if ((uVar11 & 1) != 0) goto LAB_05d0b664;
          if ((*(char *)(unaff_x19 + 0x309) != '\0') ||
             (uVar10 = *(int *)(unaff_x25 + 0x28) + 1, iStack0000000000000020 <= (int)uVar10))
          goto LAB_05d0b288;
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0))
          goto LAB_05d0be24;
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
          uVar3 = *(undefined2 *)(lVar17 + (long)(int)uVar10 * 0x178 + 0x24);
          if (*(int *)(*(long *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                      + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_05d36b08(uVar3,0);
          if ((uVar11 & 1) == 0) goto LAB_05d0b288;
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar17 == 0))
          goto LAB_05d0be24;
          uVar10 = *(int *)(unaff_x25 + 0x28) + 1;
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_05d0be28;
          uVar3 = *(undefined2 *)(lVar17 + (long)(int)uVar10 * 0x178 + 0x24);
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar17 = FUN_05d2cd04(0);
          if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) goto LAB_05d0be24;
          uVar10 = FUN_04cb59e0(*(long *)(lVar17 + 0x10),uVar9,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
          lVar17 = FUN_05d2cd04(0);
          if ((lVar17 == 0) || (*(long *)(lVar17 + 0x18) == 0)) goto LAB_05d0be24;
          uVar9 = FUN_04cb59e0(*(long *)(lVar17 + 0x18),uVar3,
                               *(undefined8 *)
                                Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
          if (((uVar10 | uVar9) & 1) != 0) goto LAB_05d0b9e0;
        }
        else {
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar11 = FUN_05d2cf18(0);
          if ((uVar11 & 1) != 0) goto LAB_05d0b63c;
LAB_05d0b664:
          if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                      0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar17 = FUN_05d2cd04(0);
          if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) goto LAB_05d0be24;
          uVar11 = FUN_04cb59e0(*(long *)(lVar17 + 0x10),uVar9,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
          if (*(int *)(unaff_x25 + 0x28) < iStack000000000000005c) {
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar17 = FUN_05d2cd04(0);
            if ((lVar17 == 0) || (lVar12 = *in_stack_00000088, lVar12 == 0)) goto LAB_05d0be24;
            uVar9 = *(int *)(unaff_x25 + 0x28) + 1;
            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_05d0be28;
            if (*(long *)(lVar17 + 0x18) == 0) goto LAB_05d0be24;
            uVar9 = FUN_04cb59e0(*(long *)(lVar17 + 0x18),
                                 *(undefined2 *)(lVar12 + (long)(int)uVar9 * 0x178 + 0x24),
                                 *(undefined8 *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
            if ((uVar11 & 1) == 0) {
              uStack0000000000000044 = uVar9 & uStack0000000000000044;
              uVar23 = uStack0000000000000044 & uStack0000000000000084 != 0;
              if (((uStack0000000000000044 & 1) != 0) || (((uVar9 ^ 1) & 1) != 0))
              goto LAB_05d0b90c;
              uStack0000000000000044 = 0;
            }
            else {
LAB_05d0b8e4:
              uVar23 = (uint)(uStack0000000000000084 != 0);
              if ((uStack0000000000000044 & uVar10 == uVar1) == 0) goto LAB_05d0b9e0;
              uStack0000000000000044 = 1;
LAB_05d0b90c:
              FUN_05d115d4();
            }
            if (uVar23 == 0) goto LAB_05d0b9e0;
          }
          else {
            if ((uVar11 & 1) != 0) goto LAB_05d0b8e4;
            uStack0000000000000044 = 0;
          }
        }
      }
    }
    FUN_05d115d4();
  }
LAB_05d0b9e0:
  *(int *)(unaff_x25 + 0x28) = *(int *)(unaff_x25 + 0x28) + 1;
LAB_05d0b9f0:
  unaff_w29 = 1;
  unaff_w24 = 0x178;
  uVar23 = uVar39;
  unaff_s15 = fVar25;
  goto LAB_05d09f20;
}


