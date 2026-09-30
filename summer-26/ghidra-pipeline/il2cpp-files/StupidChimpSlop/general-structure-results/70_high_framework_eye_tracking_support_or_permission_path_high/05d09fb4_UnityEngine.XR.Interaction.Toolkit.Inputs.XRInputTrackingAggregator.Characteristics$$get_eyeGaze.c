/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator.Characteristics$$get_eyeGaze
ENTRY_POINT: 05d09fb4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_Characteristics__get_eyeGaze
               (void)

{
  byte bVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int in_w8;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined1 uVar17;
  long lVar18;
  float *pfVar19;
  long *plVar20;
  long unaff_x19;
  uint uVar21;
  long *unaff_x20;
  uint unaff_w21;
  undefined4 unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  long *plVar22;
  undefined4 unaff_w29;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float unaff_s14;
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
  uint in_stack_00000e38;
  uint uVar37;
  uint in_stack_00000e3c;
  undefined8 in_stack_00000e40;
  undefined8 in_stack_00000e48;
  undefined4 in_stack_00000e50;
  
code_r0x05d09fb4:
  if (in_w8 == 0) {
    thunk_FUN_02dabd98();
  }
  uVar10 = FUN_04f749ec(unaff_w27,0);
  if ((uVar10 & 1) == 0) goto LAB_05d0a044;
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar7 = FUN_04f74c74(unaff_w27,0);
  fVar23 = unaff_s14;
LAB_05d0a040:
  unaff_w27 = uVar7 & 0xffff;
  unaff_s14 = fVar23;
LAB_05d0a044:
  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
  memmove(&stack0x00000240,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0)) goto LAB_05d0be24;
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
    *unaff_x20 = *(long *)(lVar14 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24 +
                          0x30);
    thunk_FUN_02dc1ef0(unaff_x20);
    if (*unaff_x20 == 0) goto LAB_05d09f20;
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0)) goto LAB_05d0be24;
    uVar9 = *(uint *)(unaff_x25 + 0x28);
    uVar7 = *(uint *)(lVar14 + 0x18);
    if (uVar7 <= uVar9) goto LAB_05d0be28;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar14 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w24 + 0x30);
    pfVar19 = in_stack_00000048;
    if (unaff_w28 == unaff_w21) {
      lVar18 = *(long *)(unaff_x19 + 0x488);
      if (lVar18 == 0) goto LAB_05d0be24;
      if (*(uint *)(lVar18 + 0x18) <= unaff_w26) goto LAB_05d0be28;
      if ((*(int *)(lVar18 + (long)(int)unaff_w26 * 0x10 + 0x24) == 10) &&
         (uVar9 != *(uint *)(unaff_x19 + 0x4a8))) {
        if (uVar7 <= uVar9 - 1) goto LAB_05d0be28;
        pfVar19 = (float *)(lVar14 + 0x20 + (long)(int)(uVar9 - 1) * (long)(int)unaff_w24 + 0x38);
      }
    }
    fVar24 = *pfVar19;
    fVar23 = (float)FUN_05f84b24(&stack0x00000240,0);
    fVar35 = (float)FUN_05f84b2c(&stack0x00000240,0);
    if (unaff_w28 == unaff_w21) {
      fStack0000000000000078 = 0.0;
      fVar25 = 0.0;
      if (unaff_w27 != 0x2026) goto LAB_05d0a204;
    }
    else {
LAB_05d0a204:
      fVar25 = (float)FUN_05f84b54(&stack0x00000240,0);
      fStack0000000000000078 = (float)FUN_05f84b84(&stack0x00000240,0);
    }
    lVar14 = *(long *)(unaff_x19 + 0x660);
    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_05d0be24;
    fVar33 = *(float *)(unaff_x19 + 0x43c);
    fVar27 = *(float *)(lVar14 + 0x2c);
    fVar32 = (float)FUN_05f85024(*(long *)(lVar14 + 0x20),0);
    lVar14 = *in_stack_00000088;
    if (lVar14 == 0) goto LAB_05d0be24;
    uVar7 = *(uint *)(unaff_x25 + 0x28);
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
    *(undefined4 *)(lVar14 + (long)(int)uVar7 * (long)(int)unaff_w24 + 0x20) = 0;
    unaff_s15 = in_stack_00000050._4_4_ * ((unaff_s14 * fVar24) / fVar23) * fVar35 * fVar33 * fVar27
                * fVar32;
LAB_05d0a504:
    bVar6 = unaff_w27 == 0xad;
    fVar23 = 0.0;
    if (unaff_w27 != 3 && !bVar6) {
      fVar23 = unaff_s15;
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x65c) == 1) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0)) goto LAB_05d0be24;
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
      plVar22 = *(long **)(lVar14 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24 +
                          0x30);
      if (plVar22 == (long *)0x0) goto LAB_05d09f20;
      bVar1 = *(byte *)(*(long *)
                         Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__
                       + 0x130);
      if ((*(byte *)(*plVar22 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingTicketsForPlayer__))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar22);
      }
      plVar15 = (long *)plVar22[3];
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)0x0;
        *in_stack_00000030 = 0;
      }
      else {
        lVar14 = *(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListMatchmakingQueues__;
        bVar1 = *(byte *)(lVar14 + 0x130);
        if (*(byte *)(*plVar15 + 0x130) < bVar1) {
          plVar20 = (long *)0x0;
        }
        else {
          plVar20 = plVar15;
          if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
            plVar20 = (long *)0x0;
          }
        }
        *in_stack_00000030 = (long)plVar20;
        if (*(byte *)(*plVar15 + 0x130) < bVar1) {
          plVar15 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != lVar14) {
          plVar15 = (long *)0x0;
        }
      }
      thunk_FUN_02dc1ef0(in_stack_00000030,plVar15);
      lVar14 = plVar22[5];
      *(int *)(unaff_x19 + 0x6bc) = (int)lVar14;
      uVar9 = (int)lVar14 + 0xe000;
      if (unaff_w27 != 0x3c) {
        uVar9 = unaff_w27;
      }
      if (*(long *)(unaff_x19 + 0x6b0) == 0) goto LAB_05d0be24;
      memmove(&stack0x000001a0,(void *)(*(long *)(unaff_x19 + 0x6b0) + 0x28),0x60);
      fVar23 = (float)FUN_05f84b24(&stack0x000001a0,0);
      fVar35 = *in_stack_00000048;
      if (fVar23 <= 0.0) {
        fVar23 = (float)FUN_05f84b24(&stack0x00000240,0);
        fVar24 = (float)FUN_05f84b2c(&stack0x00000240,0);
        fVar25 = (float)FUN_05f84b54(&stack0x00000240,0);
        if (plVar22[4] == 0) goto LAB_05d0be24;
        FUN_05f84fe8(&stack0x00000e40,plVar22[4],0);
        in_stack_00000180 = in_stack_00000e40;
        in_stack_00000188 = in_stack_00000e48;
        in_stack_00000190 = in_stack_00000e50;
        fVar32 = (float)FUN_05f84e18(&stack0x00000180,0);
        if (plVar22[4] == 0) goto LAB_05d0be24;
        fVar33 = *(float *)((long)plVar22 + 0x2c);
        fVar35 = in_stack_00000050._4_4_ * (fVar35 / fVar23) * fVar24;
        fVar23 = (float)FUN_05f85024(plVar22[4],0);
        unaff_s15 = fVar35 * (fVar25 / fVar32) * fVar33 * fVar23;
        fVar23 = 0.0;
        if (unaff_s15 != 0.0) {
          fVar23 = fVar35 / unaff_s15;
        }
        fVar25 = (float)FUN_05f84b54(&stack0x00000240,0);
        fVar25 = fVar25 * fVar23;
        fStack0000000000000078 = (float)FUN_05f84b84(&stack0x00000240,0);
        fStack0000000000000078 = fStack0000000000000078 * fVar23;
      }
      else {
        fVar23 = (float)FUN_05f84b24(&stack0x000001a0,0);
        fVar24 = (float)FUN_05f84b2c(&stack0x000001a0,0);
        if (plVar22[4] == 0) goto LAB_05d0be24;
        fVar32 = *(float *)((long)plVar22 + 0x2c);
        fVar25 = (float)FUN_05f85024(plVar22[4],0);
        unaff_s15 = in_stack_00000050._4_4_ * (fVar35 / fVar23) * fVar24 * fVar32 * fVar25;
        fVar25 = (float)FUN_05f84b54(&stack0x000001a0,0);
        fStack0000000000000078 = (float)FUN_05f84b84(&stack0x000001a0,0);
      }
      *unaff_x20 = (long)plVar22;
      thunk_FUN_02dc1ef0(unaff_x20,plVar22);
      lVar14 = *in_stack_00000088;
      if (lVar14 == 0) goto LAB_05d0be24;
      uVar7 = *(uint *)(unaff_x25 + 0x28);
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
      lVar18 = lVar14 + (long)(int)uVar7 * (long)(int)unaff_w24;
      *(undefined4 *)(lVar18 + 0x20) = unaff_w29;
      *(float *)(lVar18 + 0x15c) = unaff_s15;
      *(undefined4 *)(unaff_x19 + 0x120) = unaff_w23;
      unaff_w27 = uVar9;
      goto LAB_05d0a504;
    }
    bVar6 = unaff_w27 == 0xad;
    fVar25 = 0.0;
    fVar23 = 0.0;
    if (unaff_w27 != 3 && !bVar6) {
      fVar23 = unaff_s15;
    }
    lVar14 = *in_stack_00000088;
    if (lVar14 == 0) goto LAB_05d0be24;
    uVar7 = *(uint *)(unaff_x25 + 0x28);
    fStack0000000000000078 = 0.0;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
  *(short *)(lVar14 + (long)(int)uVar7 * (long)(int)unaff_w24 + 0x24) = (short)unaff_w27;
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0)) goto LAB_05d0be24;
  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
  lVar14 = *(long *)(lVar14 + (long)(int)uVar7 * (long)(int)unaff_w24 + 0x38);
  if (lVar14 == 0) {
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x20), lVar14 == 0))
    goto LAB_05d0be24;
    FUN_05f84fe8(&stack0x00000e40,lVar14,0);
    in_stack_000000d0 = in_stack_00000e40;
    in_stack_000000d8 = in_stack_00000e48;
    in_stack_000000e0 = in_stack_00000e50;
  }
  else {
    FUN_05f84fe8(&stack0x000000d0,lVar14,0);
  }
  if (unaff_w27 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uStack0000000000000084 = FUN_04f72380(unaff_w27,0);
    uStack0000000000000084 = uStack0000000000000084 & 1;
  }
  else {
    uStack0000000000000084 = 0;
  }
  fVar35 = *(float *)(unaff_x19 + 0x2d0);
  uVar26 = 0;
  if ((*(char *)(unaff_x19 + 0x329) != '\0') && (*(int *)(unaff_x19 + 0x65c) == 0)) {
    if (*unaff_x20 == 0) goto LAB_05d0be24;
    iVar13 = *(int *)(unaff_x25 + 0x28);
    uVar7 = *(uint *)(*unaff_x20 + 0x28);
    if (iVar13 < iStack000000000000005c) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0)) goto LAB_05d0be24;
      uVar9 = iVar13 + 1;
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05d0be28;
      uVar26 = 0;
      if (*(int *)(lVar14 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w24) == 0) {
        lVar14 = *(long *)(lVar14 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w24 + 0x10);
        if ((((lVar14 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
            (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar18 == 0)) ||
           (lVar18 = *(long *)(lVar18 + 0x40), lVar18 == 0)) goto LAB_05d0be24;
        uVar10 = FUN_048a9f18(lVar18,uVar7 | *(int *)(lVar14 + 0x28) << 0x10,&stack0x00000150,
                              *(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
        if ((uVar10 & 1) != 0) {
          FUN_05f896d8(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          uVar26 = FUN_05f8952c(&stack0x00000130,0);
          uVar10 = FUN_05f89714(&stack0x00000150,0);
          if ((uVar10 & 0x100) != 0) {
            fVar35 = 0.0;
          }
        }
      }
      iVar13 = *(int *)(unaff_x25 + 0x28);
    }
    if (0 < iVar13) {
      if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
         (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0)) goto LAB_05d0be24;
      if (*(uint *)(lVar14 + 0x18) <= iVar13 - 1U) goto LAB_05d0be28;
      lVar14 = *(long *)(lVar14 + (ulong)(iVar13 - 1U) * (ulong)unaff_w24 + 0x30);
      if (lVar14 == 0) goto LAB_05d0be24;
      uVar9 = *(uint *)(lVar14 + 0x28);
      lVar14 = FUN_05d04cb4();
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x38), lVar14 == 0)) goto LAB_05d0be24;
      uVar8 = *(int *)(unaff_x25 + 0x28) - 1;
      if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_05d0be28;
      if (*(int *)(lVar14 + (long)(int)uVar8 * (long)(int)unaff_w24 + 0x20) == 0) {
        if (((*(long *)(unaff_x19 + 0x100) == 0) ||
            (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar14 == 0)) ||
           (lVar14 = *(long *)(lVar14 + 0x40), lVar14 == 0)) goto LAB_05d0be24;
        uVar10 = FUN_048a9f18(lVar14,uVar9 | uVar7 << 0x10,&stack0x00000150,
                              *(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobby__);
        if ((uVar10 & 1) != 0) {
          FUN_05f89700(&stack0x00000e40,&stack0x00000150,0);
          in_stack_00000130 = in_stack_00000e40;
          in_stack_00000138 = in_stack_00000e48;
          in_stack_00000140 = in_stack_00000e50;
          FUN_05f8952c(&stack0x00000130,0);
          FUN_05f8938c(uVar26,0);
          uVar10 = FUN_05f89714(&stack0x00000150,0);
          if ((uVar10 & 0x100) != 0) {
            fVar35 = 0.0;
          }
        }
      }
    }
    lVar14 = *in_stack_00000088;
    if (lVar14 == 0) goto LAB_05d0be24;
    uVar7 = *(uint *)(unaff_x25 + 0x28);
    uVar26 = FUN_05f89368(&stack0x00000210,0);
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
    *(undefined4 *)(lVar14 + (long)(int)uVar7 * (long)(int)unaff_w24 + 0x154) = uVar26;
  }
  if (*(int *)(*(long *)
                Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__ +
              0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar10 = FUN_05d36848(unaff_w27,0);
  uVar7 = *(uint *)(unaff_x25 + 0x28);
  if ((uVar10 & 1) == 0) {
    if (0 < (int)uVar7) {
      uVar9 = *(uint *)(unaff_x19 + 0x32c);
      if ((uVar9 == 0x80000000) || (uVar9 != uVar7 - 1)) {
        lVar14 = (ulong)uVar7 * (ulong)unaff_w24 + 0x144;
        uVar11 = (ulong)uVar7;
        do {
          uVar7 = *(uint *)(unaff_x19 + 0x32c);
          uVar3 = uVar11 - 1;
          if (((long)uVar11 < 1) || (uVar9 = (int)uVar11 - 1, uVar9 == uVar7)) {
            if (uVar7 == 0x80000000) goto LAB_05d0abb0;
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0))
            goto LAB_05d0be24;
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
            lVar14 = *(long *)(lVar14 + (long)(int)uVar7 * (long)(int)unaff_w24 + 0x30);
            if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0))
            goto LAB_05d0be24;
            uVar7 = FUN_05f84fd8(lVar14,0);
            if ((*unaff_x20 == 0) ||
               (((*(long *)(unaff_x19 + 0x100) == 0 ||
                 (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar14 == 0)) ||
                (lVar14 = *(long *)(lVar14 + 0x48), lVar14 == 0)))) goto LAB_05d0be24;
            uVar11 = FUN_048b1190(lVar14,uVar7 | *(int *)(*unaff_x20 + 0x28) << 0x10,
                                  &stack0x000000e8,
                                  *(undefined8 *)
                                   Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__
                                 );
            if ((uVar11 & 1) == 0) goto LAB_05d0abb0;
            lVar14 = *in_stack_00000088;
            if (lVar14 == 0) goto LAB_05d0be24;
            if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_05d0be28;
            FUN_05f89350((in_stack_000000e8._4_4_ +
                         (*(float *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x32c) *
                                              (long)(int)unaff_w24 + 0x138) -
                         *(float *)(unaff_x19 + 0x658)) / fVar23) - fStack00000000000000f8,
                         &stack0x00000210,0);
            fVar35 = in_stack_000000f0;
            fVar24 = fStack00000000000000fc;
            goto LAB_05d0ab9c;
          }
          if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
             (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
          goto LAB_05d0be24;
          if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_05d0be28;
          lVar18 = *(long *)(lVar18 + lVar14 + -0x28c);
          if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x20), lVar18 == 0)) goto LAB_05d0be24;
          uVar7 = FUN_05f84fd8(lVar18,0);
          if ((*unaff_x20 == 0) ||
             (((*(long *)(unaff_x19 + 0x100) == 0 ||
               (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar18 == 0)) ||
              (lVar18 = *(long *)(lVar18 + 0x50), lVar18 == 0)))) goto LAB_05d0be24;
          uVar12 = FUN_048b84e0(lVar18,uVar7 | *(int *)(*unaff_x20 + 0x28) << 0x10,&stack0x00000100,
                                *(undefined8 *)
                                 Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListArchivedMultiplayerServers__
                               );
          lVar14 = lVar14 + -0x178;
          uVar11 = uVar3;
        } while ((uVar12 & 1) == 0);
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar18 == 0))
        goto LAB_05d0be24;
        uVar7 = (uint)uVar3;
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_05d0be28;
        lVar16 = *(long *)(unaff_x19 + 0x498);
        if (lVar16 == 0) goto LAB_05d0be24;
        if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_05d0be28;
        fVar35 = *(float *)(unaff_x19 + 0x4ec);
        fVar24 = *(float *)(unaff_x19 + 0x634);
        fVar32 = *(float *)(lVar16 + lVar14);
        FUN_05f89350(((*(float *)(lVar18 + lVar14 + -0xc) - *(float *)(unaff_x19 + 0x658)) / fVar23
                     + in_stack_00000100._4_4_) - fStack0000000000000110,&stack0x00000210,0);
        fVar35 = (fVar32 - ((0.0 - fVar35) + fVar24)) / fVar23 + in_stack_00000108;
        fVar24 = fStack0000000000000114;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
           (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0))
        goto LAB_05d0be24;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05d0be28;
        lVar14 = *(long *)(lVar14 + (long)(int)uVar9 * (long)(int)unaff_w24 + 0x30);
        if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0)) goto LAB_05d0be24;
        uVar7 = FUN_05f84fd8(lVar14,0);
        if ((*unaff_x20 == 0) ||
           (((*(long *)(unaff_x19 + 0x100) == 0 ||
             (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x100) + 0x178), lVar14 == 0)) ||
            (lVar14 = *(long *)(lVar14 + 0x48), lVar14 == 0)))) goto LAB_05d0be24;
        uVar11 = FUN_048b1190(lVar14,uVar7 | *(int *)(*unaff_x20 + 0x28) << 0x10,&stack0x00000118,
                              *(undefined8 *)
                               Method_PlayFab_PlayFabMultiplayerInstanceAPI_LeaveLobbyAsServer__);
        if ((uVar11 & 1) == 0) goto LAB_05d0abb0;
        lVar14 = *in_stack_00000088;
        if (lVar14 == 0) goto LAB_05d0be24;
        if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_05d0be28;
        FUN_05f89350((in_stack_00000118._4_4_ +
                     (*(float *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x32c) *
                                          (long)(int)unaff_w24 + 0x138) -
                     *(float *)(unaff_x19 + 0x658)) / fVar23) - fStack0000000000000128,
                     &stack0x00000210,0);
        fVar35 = in_stack_00000120;
        fVar24 = fStack000000000000012c;
      }
LAB_05d0ab9c:
      FUN_05f89360(fVar35 - fVar24,&stack0x00000210,0);
      fVar35 = 0.0;
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x32c) = uVar7;
  }
LAB_05d0abb0:
  fVar24 = (float)FUN_05f89358(&stack0x00000210,0);
  fVar32 = (float)FUN_05f89358(&stack0x00000210,0);
  fVar33 = *(float *)(unaff_x19 + 0x2d8);
  fVar27 = 0.0;
  fStack0000000000000068 = 0.0;
  if (fVar33 != 0.0) {
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x20), lVar14 == 0))
    goto LAB_05d0be24;
    FUN_05f84fe8(&stack0x00000e40,lVar14,0);
    in_stack_00000180 = in_stack_00000e40;
    in_stack_00000188 = in_stack_00000e48;
    in_stack_00000190 = in_stack_00000e50;
    fVar27 = (float)FUN_05f84e10(&stack0x00000180,0);
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x20), lVar14 == 0))
    goto LAB_05d0be24;
    FUN_05f84fe8(&stack0x00000090,lVar14,0);
    in_stack_00000188 = in_stack_00000098;
    in_stack_00000180 = in_stack_00000090;
    in_stack_00000190 = in_stack_000000a0;
    fVar28 = (float)FUN_05f84e20(&stack0x00000180,0);
    fVar27 = (1.0 - *(float *)(unaff_x19 + 0x300)) *
             (fVar33 * 0.5 - fVar23 * (fVar27 * 0.5 + fVar28));
    *(float *)(unaff_x19 + 0x658) = *(float *)(unaff_x19 + 0x658) + fVar27;
  }
  if (((in_stack_00000080 == 0) && (*(int *)(unaff_x19 + 0x65c) == 0)) &&
     ((*(byte *)(unaff_x19 + 0x284) & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
    fStack0000000000000068 = *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1ac);
  }
  lVar14 = *in_stack_00000088;
  if (lVar14 == 0) goto LAB_05d0be24;
  uVar7 = *(uint *)(unaff_x19 + 0x4a4);
  fVar28 = *(float *)(unaff_x19 + 0x658);
  fVar33 = (float)FUN_05f89348(&stack0x00000210,0);
  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
  *(float *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x138) = fVar28 + fVar23 * fVar33;
  lVar14 = *in_stack_00000088;
  if (lVar14 == 0) goto LAB_05d0be24;
  uVar7 = *(uint *)(unaff_x19 + 0x4a4);
  fVar28 = *(float *)(unaff_x19 + 0x4ec);
  fVar36 = *(float *)(unaff_x19 + 0x634);
  fVar33 = (float)FUN_05f89358(&stack0x00000210,0);
  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
  *(float *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x144) = (0.0 - fVar28) + fVar36 + fVar23 * fVar33;
  fVar24 = fVar23 * (fVar25 + fVar24);
  if (*(int *)(unaff_x19 + 0x65c) == 0) {
    fVar24 = fVar24 / unaff_s14;
    fVar25 = (fVar23 * (fStack0000000000000078 + fVar32)) / unaff_s14;
  }
  else {
    fVar25 = fVar23 * (fStack0000000000000078 + fVar32);
  }
  fVar32 = *(float *)(unaff_x19 + 0x634);
  uVar7 = *(uint *)(unaff_x19 + 0x4a4);
  uVar9 = *(uint *)(unaff_x19 + 0x4a8);
  fVar24 = fVar24 + fVar32;
  if ((uStack0000000000000084 == 0) || (uVar7 == uVar9)) {
    fVar25 = fVar25 + fVar32;
    fVar33 = fVar24;
    fVar28 = fVar25;
    if (fVar32 != 0.0) {
      fVar33 = (fVar24 - fVar32) / *(float *)(unaff_x19 + 0x43c);
      fVar28 = (fVar25 - fVar32) / *(float *)(unaff_x19 + 0x43c);
      if (fVar33 <= fVar24) {
        fVar33 = fVar24;
      }
      if (fVar25 <= fVar28) {
        fVar28 = fVar25;
      }
    }
    lVar14 = *(long *)(unaff_x19 + 0x498);
    fVar32 = fVar33;
    if (fVar33 <= *(float *)(unaff_x19 + 0x4dc)) {
      fVar32 = *(float *)(unaff_x19 + 0x4dc);
    }
    fVar36 = fVar28;
    if (*(float *)(unaff_x19 + 0x4e0) <= fVar28) {
      fVar36 = *(float *)(unaff_x19 + 0x4e0);
    }
    *(float *)(unaff_x19 + 0x4dc) = fVar32;
    *(float *)(unaff_x19 + 0x4e0) = fVar36;
    if (lVar14 == 0) goto LAB_05d0be24;
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
    lVar14 = lVar14 + (long)(int)uVar7 * 0x178;
    *(float *)(lVar14 + 0x14c) = fVar33;
    *(float *)(lVar14 + 0x150) = fVar28;
    fVar33 = *(float *)(unaff_x19 + 0x4ec);
    *(float *)(lVar14 + 0x140) = fVar24 - fVar33;
    *(float *)(unaff_x19 + 0x4d4) = fVar24 - fVar33;
    *(float *)(lVar14 + 0x148) = fVar25 - fVar33;
    *(float *)(unaff_x19 + 0x4d8) = fVar25 - fVar33;
    if ((*(int *)(unaff_x19 + 0x4b8) == 0) || (*(char *)(unaff_x19 + 0x374) != '\0')) {
      lVar14 = *(long *)(unaff_x19 + 0x100);
      *(float *)(unaff_x25 + 0x50) = fVar32;
      if (lVar14 == 0) goto LAB_05d0be24;
      fVar25 = *(float *)(unaff_x19 + 0x4d0);
      fVar32 = (float)FUN_05f84b5c(lVar14 + 0x28,0);
      fVar32 = (fVar23 * fVar32) / unaff_s14;
      if (fVar25 <= fVar32) {
        fVar25 = fVar32;
      }
      fVar33 = *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x4d0) = fVar25;
    }
  }
  else {
    lVar14 = *in_stack_00000088;
    if (lVar14 == 0) goto LAB_05d0be24;
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
    lVar14 = lVar14 + (long)(int)uVar7 * 0x178;
    uVar29 = *(undefined8 *)(unaff_x25 + 0x60);
    *(undefined8 *)(lVar14 + 0x14c) = uVar29;
    fVar33 = *(float *)(unaff_x19 + 0x4ec);
    fVar25 = (float)uVar29 - fVar33;
    fVar32 = (float)((ulong)uVar29 >> 0x20) - fVar33;
    *(float *)(lVar14 + 0x140) = fVar25;
    *(float *)(lVar14 + 0x148) = fVar32;
    *(ulong *)(unaff_x25 + 0x58) = CONCAT44(fVar32,fVar25);
  }
  if ((fVar33 == 0.0) &&
     ((uStack0000000000000084 == 0 || (*(int *)(unaff_x19 + 0x4a4) == *(int *)(unaff_x19 + 0x4a8))))
     ) {
    fVar25 = *(float *)(unaff_x19 + 0x4c8);
    if (*(float *)(unaff_x19 + 0x4c8) <= fVar24) {
      fVar25 = fVar24;
    }
    *(float *)(unaff_x19 + 0x4c8) = fVar25;
  }
  uVar8 = *(uint *)(unaff_x19 + 0x2a0);
  uVar37 = in_stack_00000e38;
  if (unaff_w27 == 9) {
LAB_05d0af6c:
    fVar24 = (fStack0000000000000058 - *(float *)(unaff_x19 + 0x388)) -
             *(float *)(unaff_x19 + 0x38c);
    fVar25 = *(float *)(unaff_x19 + 0x398);
    bVar5 = true;
    if ((fVar25 <= fVar24) && (bVar5 = false, !NAN(fVar25))) {
      bVar5 = fVar25 == -1.0;
    }
    fVar32 = *(float *)(unaff_x19 + 0x658);
    if (!bVar5) {
      fVar24 = fVar25;
    }
    fVar25 = (float)FUN_05f84e30(&stack0x00000220,0);
    if (bVar6 == false) {
      unaff_s15 = fVar23;
    }
    fVar25 = ABS(fVar32) + fVar25 * (1.0 - *(float *)(unaff_x19 + 0x300)) * unaff_s15;
    if ((uVar10 & 1) == 0) {
LAB_05d0b014:
      fVar25 = fVar25 + *(float *)(unaff_x19 + 0x388) + *(float *)(unaff_x19 + 0x38c);
      fVar32 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
      fVar24 = *(float *)(unaff_x19 + 0x41c);
      if (*(float *)(unaff_x19 + 0x41c) <= fVar25) {
        fVar24 = fVar25;
      }
      fVar25 = *(float *)(unaff_x19 + 0x428);
      if (*(float *)(unaff_x19 + 0x428) <= fVar32) {
        fVar25 = fVar32;
      }
      *(float *)(unaff_x19 + 0x41c) = fVar24;
      fVar33 = *(float *)(unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x428) = fVar25;
      goto LAB_05d0b054;
    }
    fVar32 = 1.0;
    if ((uVar8 & 0x18) != 0) {
      fVar32 = DAT_01275388;
    }
    if (((fVar25 <= fVar32 * fVar24) || (in_stack_00000070 == 0)) ||
       ((in_stack_00000070 == 3 || (*(int *)(unaff_x19 + 0x4a4) == *(int *)(unaff_x19 + 0x4a8)))))
    goto LAB_05d0b014;
    unaff_w26 = FUN_05d11230();
    lVar14 = *(long *)(unaff_x19 + 0x498);
    if (lVar14 == 0) goto LAB_05d0be24;
    uVar7 = *(uint *)(unaff_x19 + 0x4a4);
    uVar37 = uVar7 - 1;
    if (*(uint *)(lVar14 + 0x18) <= uVar37) goto LAB_05d0be28;
    if ((*(short *)(lVar14 + 0x20 + (long)(int)uVar37 * 0x178 + 4) == 0xad &&
         (in_stack_00000038._4_1_ & 1) == 0) && (*(int *)(unaff_x19 + 0x310) == 0)) {
      in_stack_00000038._4_1_ = 0;
      unaff_w26 = unaff_w26 - 1;
      in_stack_00000e3c = 0x2d;
      *(uint *)(unaff_x25 + 0x28) = uVar37;
    }
    else {
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
      if (*(short *)(lVar14 + 0x20 + (long)(int)uVar7 * 0x178 + 4) == 0xad) {
        in_stack_00000038._4_1_ = 1;
        uVar37 = in_stack_00000e38;
      }
      else {
        if ((uStack0000000000000044 & uStack0000000000000014 & 1) != 0) {
          fVar33 = *(float *)(unaff_x19 + 0x2fc) / 100.0;
          fVar35 = *(float *)(unaff_x19 + 0x300);
          if ((fVar35 < fVar33) && (*(int *)(unaff_x19 + 0x26c) < *(int *)(unaff_x19 + 0x270))) {
            fVar23 = fVar25;
            if (0.0 < fVar35) {
              fVar23 = fVar25 / (1.0 - fVar35);
            }
            fVar35 = fVar35 + (fVar25 - fVar32 * (fVar24 + DAT_012751f8)) / fVar23;
            if (fVar33 <= fVar35) {
              fVar35 = fVar33;
            }
            *(float *)(unaff_x19 + 0x300) = fVar35;
LAB_05d0bce0:
            FUN_05d18e04(0);
            return;
          }
          if ((*(float *)(unaff_x19 + 0x278) < *in_stack_00000018) &&
             (*(int *)(unaff_x19 + 0x26c) < *(int *)(unaff_x19 + 0x270))) {
            *(float *)(unaff_x19 + 0x264) = *in_stack_00000018;
            fVar23 = (*in_stack_00000018 - *(float *)(unaff_x19 + 0x268)) * 0.5;
            if (fVar23 <= DAT_012751b0) {
              fVar23 = DAT_012751b0;
            }
            fVar23 = *in_stack_00000018 - fVar23;
            *in_stack_00000018 = fVar23;
            fVar35 = fVar23 * 20.0 + 0.5;
            fVar23 = DAT_01275250;
            if (fVar35 != INFINITY) {
              fVar23 = (float)(int)fVar35 / 20.0;
            }
            if (fVar23 <= *(float *)(unaff_x19 + 0x278)) {
              fVar23 = *(float *)(unaff_x19 + 0x278);
            }
            *in_stack_00000018 = fVar23;
            goto LAB_05d0bce0;
          }
        }
        if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
          fVar35 = *(float *)(unaff_x19 + 0x4dc);
          fVar24 = *(float *)(unaff_x19 + 0x4e4);
          if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          fVar35 = fVar35 - fVar24;
          if (((fStack0000000000000024 < ABS(fVar35)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
             (*(char *)(unaff_x19 + 0x374) == '\0')) {
            *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar35;
            *(float *)(unaff_x19 + 0x4ec) = fVar35 + *(float *)(unaff_x19 + 0x4ec);
          }
        }
        fVar24 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
        *(undefined4 *)(unaff_x19 + 0x4bc) = 0;
        *(undefined4 *)(unaff_x19 + 0x4a8) = *(undefined4 *)(unaff_x19 + 0x4a4);
        fVar35 = *(float *)(unaff_x19 + 0x4d8);
        if (fVar24 <= *(float *)(unaff_x19 + 0x4d8)) {
          fVar35 = fVar24;
        }
        *(float *)(unaff_x19 + 0x4d8) = fVar35;
        FUN_05d115d4();
        lVar14 = *(long *)(unaff_x19 + 0x498);
        *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
        puVar4 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        if (lVar14 == 0) goto LAB_05d0be24;
        if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
        fVar35 = *(float *)(unaff_x19 + 0x2ec);
        bVar6 = fVar35 != DAT_01274f94;
        fVar24 = *(float *)(lVar14 + (long)(int)*(uint *)(unaff_x25 + 0x28) * 0x178 + 0x14c);
        if (bVar6) {
          fVar25 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
        }
        else {
          fVar25 = fVar24 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
                   fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8))
          ;
          fVar35 = in_stack_00000060 * *(float *)(unaff_x19 + 0x2e4);
        }
        *(bool *)(unaff_x19 + 0x2f0) = bVar6;
        lVar14 = *(long *)puVar4;
        *(float *)(unaff_x19 + 0x4ec) = *(float *)(unaff_x19 + 0x4ec) + fVar35 + fVar25;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar14 = *(long *)puVar4;
        }
        fVar35 = *(float *)(unaff_x19 + 0x444);
        in_stack_00000038._4_1_ = 0;
        uVar29 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1730);
        *(float *)(unaff_x19 + 0x4e4) = fVar24;
        uStack0000000000000044 = 1;
        uVar29 = NEON_rev64(uVar29,4);
        *(undefined8 *)(unaff_x25 + 0x60) = uVar29;
        *(float *)(unaff_x19 + 0x658) = fVar35 + 0.0;
        uVar37 = in_stack_00000e38;
      }
    }
  }
  else {
    if (iStack0000000000000040 == 2) {
      if ((uStack0000000000000084 == 0) && (unaff_w27 != 0x200b)) goto LAB_05d0af34;
      goto LAB_05d0af6c;
    }
    if (uStack0000000000000084 == 0) {
LAB_05d0af34:
      if (((unaff_w27 != 3) && (unaff_w27 != 0x200b)) && (unaff_w27 != 0xad)) goto LAB_05d0af6c;
    }
    if ((((in_stack_00000038._4_1_ | bVar6 ^ 0xffU) & 1) == 0) || (*(int *)(unaff_x19 + 0x65c) == 1)
       ) goto LAB_05d0af6c;
LAB_05d0b054:
    if (0.0 < fVar33) {
      uVar26 = *(undefined4 *)(unaff_x19 + 0x4dc);
      uVar34 = *(undefined4 *)(unaff_x19 + 0x4e4);
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListCertificateSummaries__
                  + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar10 = FUN_05cdf0a4(uVar26,uVar34,0);
      if ((((uVar10 & 1) == 0) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
         (*(char *)(unaff_x19 + 0x374) == '\0')) {
        fVar24 = *(float *)(unaff_x19 + 0x4dc) - *(float *)(unaff_x19 + 0x4e4);
        *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar24;
        *(float *)(unaff_x19 + 0x4ec) = fVar24 + *(float *)(unaff_x19 + 0x4ec);
        *(float *)(unaff_x19 + 0x4e4) = *(float *)(unaff_x19 + 0x4e4) + fVar24;
      }
    }
    if (unaff_w27 == 9) {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
      memmove(&stack0x000002a0,(void *)(*(long *)(unaff_x19 + 0x100) + 0x28),0x60);
      fVar35 = (float)FUN_05f84bcc(&stack0x000002a0,0);
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
      fVar24 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(unaff_x19 + 0x100) + 0x1b1));
      fVar25 = *(float *)(unaff_x19 + 0x658);
      fVar24 = fVar23 * fVar35 * fVar24;
      fVar35 = fVar24 * (float)(int)(fVar25 / fVar24);
      if (fVar35 <= fVar25) {
        fVar35 = fVar25 + fVar24;
      }
LAB_05d0b240:
      bVar5 = false;
      *(float *)(unaff_x19 + 0x658) = fVar35;
LAB_05d0b248:
      if (*(int *)(unaff_x25 + 0x28) == iStack000000000000005c) goto LAB_05d0b2f0;
    }
    else {
      if (*(float *)(unaff_x19 + 0x2d8) == 0.0) {
        fVar24 = *(float *)(unaff_x19 + 0x658);
        fVar25 = (float)FUN_05f84e30(&stack0x00000220,0);
        fVar33 = *(float *)(unaff_x19 + 0x47c);
        fVar32 = (float)FUN_05f89368(&stack0x00000210,0);
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
        fVar24 = fVar24 + (1.0 - *(float *)(unaff_x19 + 0x300)) *
                          (*(float *)(unaff_x19 + 0x2d4) +
                          fVar23 * (fVar25 * fVar33 + fVar32) +
                          in_stack_00000060 *
                          (fStack0000000000000068 +
                          fVar35 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
      }
      else {
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_05d0be24;
        fVar24 = *(float *)(unaff_x19 + 0x658) +
                 (1.0 - *(float *)(unaff_x19 + 0x300)) *
                 (*(float *)(unaff_x19 + 0x2d4) +
                 (*(float *)(unaff_x19 + 0x2d8) - fVar27) +
                 in_stack_00000060 * (fVar35 + *(float *)(*(long *)(unaff_x19 + 0x100) + 0x1a4)));
      }
      *(float *)(unaff_x19 + 0x658) = fVar24;
      if ((uStack0000000000000084 != 0) || (unaff_w27 == 0x200b)) {
        *(float *)(unaff_x19 + 0x658) = fVar24 + in_stack_00000060 * *(float *)(unaff_x19 + 0x2e0);
      }
      if (unaff_w27 == 0xd) {
        fVar35 = *(float *)(unaff_x19 + 0x444) + 0.0;
        goto LAB_05d0b240;
      }
      bVar5 = unaff_w27 == 10;
      if (((0xb < unaff_w27) || ((1 << (ulong)(unaff_w27 & 0x1f) & 0xc08U) == 0)) &&
         (1 < unaff_w27 - 0x2028)) goto LAB_05d0b248;
LAB_05d0b2f0:
      if (0.0 < *(float *)(unaff_x19 + 0x4ec)) {
        fVar35 = *(float *)(unaff_x19 + 0x4dc);
        fVar24 = *(float *)(unaff_x19 + 0x4e4);
        if (*(int *)(*(long *)PTR_DAT_06646780 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        fVar35 = fVar35 - fVar24;
        if (((fStack0000000000000024 < ABS(fVar35)) && (*(char *)(unaff_x19 + 0x2f0) == '\0')) &&
           (*(char *)(unaff_x19 + 0x374) == '\0')) {
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) - fVar35;
          *(float *)(unaff_x19 + 0x4ec) = fVar35 + *(float *)(unaff_x19 + 0x4ec);
        }
      }
      *(undefined1 *)(unaff_x19 + 0x374) = 0;
      fVar24 = *(float *)(unaff_x19 + 0x4e0) - *(float *)(unaff_x19 + 0x4ec);
      fVar35 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar24 <= *(float *)(unaff_x19 + 0x4d8)) {
        fVar35 = fVar24;
      }
      *(float *)(unaff_x19 + 0x4d8) = fVar35;
      if (((unaff_w28 == unaff_w21) && (unaff_w27 == 0x2d)) ||
         ((unaff_w27 - 10 < 2 || (unaff_w27 - 0x2028 < 2)))) {
        FUN_05d115d4();
        FUN_05d115d4();
        uVar7 = *(uint *)(unaff_x19 + 0x4a4);
        lVar14 = *(long *)(unaff_x19 + 0x498);
        iVar13 = uVar7 + 1;
        *(int *)(unaff_x19 + 0x4b8) = *(int *)(unaff_x19 + 0x4b8) + 1;
        *(int *)(unaff_x19 + 0x4a8) = iVar13;
        if (lVar14 == 0) goto LAB_05d0be24;
        if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
        fVar35 = *(float *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x14c);
        if (*(float *)(unaff_x19 + 0x2ec) == DAT_01274f94) {
          fVar24 = 0.0;
          if (unaff_w27 == 0x2029) {
            bVar5 = true;
          }
          if (bVar5) {
            fVar24 = *(float *)(unaff_x19 + 0x2f8);
          }
          uVar17 = 0;
          fVar24 = fVar35 + (0.0 - *(float *)(unaff_x19 + 0x4e0)) +
                   fStack000000000000002c * (fStack0000000000000028 + *(float *)(unaff_x19 + 0x2e8))
                   + in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar24) +
                   *(float *)(unaff_x19 + 0x4ec);
        }
        else {
          fVar24 = 0.0;
          if (unaff_w27 == 0x2029) {
            bVar5 = true;
          }
          if (bVar5) {
            fVar24 = *(float *)(unaff_x19 + 0x2f8);
          }
          uVar17 = 1;
          fVar24 = *(float *)(unaff_x19 + 0x4ec) +
                   *(float *)(unaff_x19 + 0x2ec) +
                   in_stack_00000060 * (*(float *)(unaff_x19 + 0x2e4) + fVar24);
        }
        *(float *)(unaff_x19 + 0x4ec) = fVar24;
        puVar4 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_UpdateBuildAlias__;
        *(undefined1 *)(unaff_x19 + 0x2f0) = uVar17;
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar14 = *(long *)puVar4;
          iVar13 = *(int *)(unaff_x25 + 0x28) + 1;
        }
        fVar24 = *(float *)(unaff_x19 + 0x440);
        fVar25 = *(float *)(unaff_x19 + 0x444);
        uVar29 = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x1730);
        *(float *)(unaff_x19 + 0x4e4) = fVar35;
        *(int *)(unaff_x19 + 0x4a4) = iVar13;
        uVar29 = NEON_rev64(uVar29,4);
        *(undefined8 *)(unaff_x25 + 0x60) = uVar29;
        *(float *)(unaff_x19 + 0x658) = fVar24 + 0.0 + fVar25;
        goto LAB_05d0b9f0;
      }
      if (unaff_w27 == 3) {
        if (*(long *)(unaff_x19 + 0x488) == 0) goto LAB_05d0be24;
        unaff_w26 = *(uint *)(*(long *)(unaff_x19 + 0x488) + 0x18);
        unaff_w27 = 3;
      }
    }
    if (((in_stack_00000070 != 3) && (in_stack_00000070 != 0)) ||
       ((*(uint *)(unaff_x19 + 0x310) | 2) == 3)) {
      if (((uStack0000000000000084 == 0) && (unaff_w27 != 0x2d)) &&
         ((unaff_w27 != 0x200b && (unaff_w27 != 0xad)))) {
        if (*(char *)(unaff_x19 + 0x309) == '\0') goto LAB_05d0b5f0;
LAB_05d0b288:
        if ((uStack0000000000000044 & 1) == 0) {
          uStack0000000000000044 = 0;
          goto LAB_05d0b9e0;
        }
        if ((unaff_w27 == 0xa0 || uStack0000000000000084 == 0) &&
           (bVar6 != true || (in_stack_00000038._4_1_ & 1) != 0)) {
          uStack0000000000000044 = 1;
        }
        else {
          FUN_05d115d4();
          uStack0000000000000044 = 1;
        }
      }
      else {
        if (*(char *)(unaff_x19 + 0x309) != '\0') goto LAB_05d0b288;
        if ((int)unaff_w27 < 0x2007) {
          if (unaff_w27 == 0x2d) {
            uVar7 = *(int *)(unaff_x25 + 0x28) - 1;
            if (0 < *(int *)(unaff_x25 + 0x28)) {
              if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
                 (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0))
              goto LAB_05d0be24;
              if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
              uVar2 = *(undefined2 *)(lVar14 + (ulong)uVar7 * 0x178 + 0x24);
              if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar10 = FUN_04f72380(uVar2,0);
              if ((uVar10 & 1) != 0) {
                if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
                   (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0))
                goto LAB_05d0be24;
                uVar7 = *(int *)(unaff_x25 + 0x28) - 1;
                if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
                if (*(int *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x5c) ==
                    *(int *)(unaff_x19 + 0x4b8)) goto LAB_05d0b9e0;
              }
            }
          }
          else if (unaff_w27 == 0xa0) goto LAB_05d0b5f0;
LAB_05d0b9b8:
          uStack0000000000000044 = 0;
        }
        else {
          if (((0x28 < unaff_w27 - 0x2007) ||
              ((1L << ((ulong)(unaff_w27 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
             (unaff_w27 != 0x2060)) goto LAB_05d0b9b8;
LAB_05d0b5f0:
          if (*(int *)(*(long *)
                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                      + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar10 = FUN_05d36aac(unaff_w27,0);
          if ((uVar10 & 1) == 0) {
LAB_05d0b63c:
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar10 = FUN_05d36b08(unaff_w27,0);
            if ((uVar10 & 1) != 0) goto LAB_05d0b664;
            if ((*(char *)(unaff_x19 + 0x309) != '\0') ||
               (uVar7 = *(int *)(unaff_x25 + 0x28) + 1, iStack0000000000000020 <= (int)uVar7))
            goto LAB_05d0b288;
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0))
            goto LAB_05d0be24;
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
            uVar2 = *(undefined2 *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x24);
            if (*(int *)(*(long *)
                          Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListServerBackfillTicketsForPlayer__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar10 = FUN_05d36b08(uVar2,0);
            if ((uVar10 & 1) == 0) goto LAB_05d0b288;
            if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
               (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0))
            goto LAB_05d0be24;
            uVar7 = *(int *)(unaff_x25 + 0x28) + 1;
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
            uVar2 = *(undefined2 *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x24);
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar14 = FUN_05d2cd04(0);
            if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) goto LAB_05d0be24;
            uVar7 = FUN_04cb59e0(*(long *)(lVar14 + 0x10),unaff_w27,
                                 *(undefined8 *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
            lVar14 = FUN_05d2cd04(0);
            if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) goto LAB_05d0be24;
            uVar9 = FUN_04cb59e0(*(long *)(lVar14 + 0x18),uVar2,
                                 *(undefined8 *)
                                  Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
            if (((uVar7 | uVar9) & 1) != 0) goto LAB_05d0b9e0;
          }
          else {
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar10 = FUN_05d2cf18(0);
            if ((uVar10 & 1) != 0) goto LAB_05d0b63c;
LAB_05d0b664:
            if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__
                        + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar14 = FUN_05d2cd04(0);
            if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) {
LAB_05d0be24:
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar10 = FUN_04cb59e0(*(long *)(lVar14 + 0x10),unaff_w27,
                                  *(undefined8 *)
                                   Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__);
            if (*(int *)(unaff_x25 + 0x28) < iStack000000000000005c) {
              if (*(int *)(*(long *)
                            Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                          0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar14 = FUN_05d2cd04(0);
              if ((lVar14 == 0) || (lVar18 = *in_stack_00000088, lVar18 == 0)) goto LAB_05d0be24;
              uVar8 = *(int *)(unaff_x25 + 0x28) + 1;
              if (*(uint *)(lVar18 + 0x18) <= uVar8) {
LAB_05d0be28:
                    /* WARNING: Subroutine does not return */
                FUN_02d4def0();
              }
              if (*(long *)(lVar14 + 0x18) == 0) goto LAB_05d0be24;
              uVar8 = FUN_04cb59e0(*(long *)(lVar14 + 0x18),
                                   *(undefined2 *)(lVar18 + (long)(int)uVar8 * 0x178 + 0x24),
                                   *(undefined8 *)
                                    Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListBuildAliases__)
              ;
              if ((uVar10 & 1) != 0) goto LAB_05d0b8e4;
              uStack0000000000000044 = uVar8 & uStack0000000000000044;
              uVar21 = uStack0000000000000044 & uStack0000000000000084 != 0;
              if (((uStack0000000000000044 & 1) != 0) || (((uVar8 ^ 1) & 1) != 0))
              goto LAB_05d0b90c;
              uStack0000000000000044 = 0;
            }
            else {
              if ((uVar10 & 1) == 0) {
                uStack0000000000000044 = 0;
                goto LAB_05d0b9d0;
              }
LAB_05d0b8e4:
              uVar21 = (uint)(uStack0000000000000084 != 0);
              if ((uStack0000000000000044 & uVar7 == uVar9) == 0) goto LAB_05d0b9e0;
              uStack0000000000000044 = 1;
LAB_05d0b90c:
              FUN_05d115d4();
            }
            if (uVar21 == 0) goto LAB_05d0b9e0;
          }
        }
      }
LAB_05d0b9d0:
      FUN_05d115d4();
    }
LAB_05d0b9e0:
    *(int *)(unaff_x25 + 0x28) = *(int *)(unaff_x25 + 0x28) + 1;
  }
LAB_05d0b9f0:
  unaff_w29 = 1;
  unaff_w24 = 0x178;
  in_stack_00000e38 = uVar37;
  unaff_s15 = fVar23;
LAB_05d09f20:
  unaff_w28 = in_stack_00000e38;
  lVar14 = *(long *)(unaff_x19 + 0x488);
  unaff_w26 = unaff_w26 + 1;
  if (lVar14 != 0) {
    if ((int)*(uint *)(lVar14 + 0x18) <= (int)unaff_w26) goto LAB_05d0bc0c;
    if (unaff_w26 < *(uint *)(lVar14 + 0x18)) goto code_r0x05d09cb0;
    goto LAB_05d0be28;
  }
  goto LAB_05d0be24;
code_r0x05d09cb0:
  unaff_w27 = *(uint *)(lVar14 + (long)(int)unaff_w26 * 0x10 + 0x24);
  in_stack_00000e38 = unaff_w28;
  if (unaff_w27 == 0x1a) goto LAB_05d09f20;
  if (unaff_w27 == 0) {
LAB_05d0bc0c:
    if ((((*(float *)(unaff_x19 + 0x264) - *(float *)(unaff_x19 + 0x268) <= DAT_01275268) ||
         ((_fStack0000000000000010 & 0x100000000) == 0)) ||
        (fVar23 = *in_stack_00000018, *(float *)(unaff_x19 + 0x27c) <= fVar23)) ||
       (*(int *)(unaff_x19 + 0x270) <= *(int *)(unaff_x19 + 0x26c))) {
      *(undefined1 *)(unaff_x19 + 0x42d) = 0;
      uVar30 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x378),0,4);
      uVar29 = NEON_fmaxnm(*(undefined8 *)(unaff_x19 + 0x380),0,4);
      uVar31 = NEON_fmov(0x3f800000,4);
      fVar23 = (*(float *)(unaff_x19 + 0x41c) + (float)uVar30 + (float)uVar29) * 100.0 +
               (float)uVar31;
      fVar35 = (*(float *)(unaff_x19 + 0x428) + (float)((ulong)uVar30 >> 0x20) +
               (float)((ulong)uVar29 >> 0x20)) * 100.0 + (float)((ulong)uVar31 >> 0x20);
      uVar29 = NEON_scvtf(CONCAT44((int)fVar35,(int)fVar23),4);
      uVar10 = CONCAT44((float)((ulong)uVar29 >> 0x20) / 100.0,(float)uVar29 / 100.0);
      *(undefined1 *)(unaff_x19 + 0x274) = 1;
      uVar10 = uVar10 ^ (uVar10 ^ 0xcba3d70acba3d70a) &
                        CONCAT44(-(uint)(fVar35 == INFINITY),-(uint)(fVar23 == INFINITY));
      *(int *)(unaff_x19 + 0x41c) = (int)uVar10;
      *(float *)(unaff_x19 + 0x428) = (float)(uVar10 >> 0x20);
      return;
    }
    if (*(float *)(unaff_x19 + 0x300) < *(float *)(unaff_x19 + 0x2fc) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x300) = 0;
      fVar23 = *in_stack_00000018;
    }
    *(float *)(unaff_x19 + 0x268) = fVar23;
    fVar23 = (*(float *)(unaff_x19 + 0x264) - *in_stack_00000018) * 0.5;
    if (fVar23 <= DAT_012751b0) {
      fVar23 = DAT_012751b0;
    }
    fVar23 = *in_stack_00000018 + fVar23;
    *in_stack_00000018 = fVar23;
    fVar35 = fVar23 * 20.0 + 0.5;
    fVar23 = DAT_01275250;
    if (fVar35 != INFINITY) {
      fVar23 = (float)(int)fVar35 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x27c) <= fVar23) {
      fVar23 = *(float *)(unaff_x19 + 0x27c);
    }
    *in_stack_00000018 = fVar23;
    goto LAB_05d0bce0;
  }
  uVar17 = (undefined1)unaff_w29;
  if ((unaff_w27 == 0x3c) && (*(char *)(unaff_x19 + 0x33a) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x469) = uVar17;
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    uVar10 = FUN_05d0be34();
    if (((uVar10 & 1) != 0) && (unaff_w26 = in_stack_0000020c, *(int *)(unaff_x19 + 0x65c) == 0))
    goto LAB_05d09f20;
  }
  else {
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0)) goto LAB_05d0be24;
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
    lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24;
    *(undefined4 *)(unaff_x19 + 0x65c) = *(undefined4 *)(lVar14 + 0x20);
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar14 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar14 + 0x40);
    thunk_FUN_02dc1ef0(unaff_x19 + 0x100);
  }
  if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar14 == 0)) goto LAB_05d0be24;
  unaff_w21 = *(uint *)(unaff_x25 + 0x28);
  if (*(uint *)(lVar14 + 0x18) <= unaff_w21) goto LAB_05d0be28;
  unaff_w23 = *(undefined4 *)(unaff_x19 + 0x120);
  bVar1 = *(byte *)(lVar14 + (long)(int)unaff_w21 * (long)(int)unaff_w24 + 0x54);
  *(undefined1 *)(unaff_x19 + 0x469) = 0;
  in_stack_00000080 = (uint)bVar1;
  uVar7 = unaff_w21;
  if (unaff_w28 == unaff_w21) {
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    if (in_stack_00000e3c == 0x2026) {
      lVar14 = *in_stack_00000088;
      if (lVar14 == 0) goto LAB_05d0be24;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w21) goto LAB_05d0be28;
      *(undefined8 *)(lVar14 + (long)(int)unaff_w21 * (long)(int)unaff_w24 + 0x30) =
           *(undefined8 *)(unaff_x19 + 0x668);
      thunk_FUN_02dc1ef0();
      lVar14 = *(long *)(unaff_x19 + 0x498);
      if (lVar14 == 0) goto LAB_05d0be24;
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
      lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24;
      *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(unaff_x19 + 0x670);
      *(undefined4 *)(lVar14 + 0x20) = 0;
      thunk_FUN_02dc1ef0();
      lVar14 = *(long *)(unaff_x19 + 0x498);
      if (lVar14 == 0) goto LAB_05d0be24;
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x25 + 0x28)) goto LAB_05d0be28;
      *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x25 + 0x28) * (long)(int)unaff_w24 + 0x48)
           = *(undefined8 *)(unaff_x19 + 0x678);
      thunk_FUN_02dc1ef0();
      lVar14 = *(long *)(unaff_x19 + 0x498);
      if (lVar14 == 0) goto LAB_05d0be24;
      uVar7 = *(uint *)(unaff_x19 + 0x4a4);
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
      unaff_w27 = 0x2026;
      *(undefined4 *)(lVar14 + (long)(int)uVar7 * (long)(int)unaff_w24 + 0x50) =
           *(undefined4 *)(unaff_x19 + 0x680);
      *(undefined1 *)(unaff_x19 + 0x328) = uVar17;
      in_stack_00000e3c = 3;
      in_stack_00000e38 = uVar7 + 1;
    }
    else {
      unaff_w27 = in_stack_00000e3c;
      if (in_stack_00000e3c == 3) {
        lVar14 = *in_stack_00000088;
        if (((lVar14 == 0) || (*(long *)(unaff_x19 + 0x100) == 0)) ||
           (lVar18 = FUN_05ce825c(*(long *)(unaff_x19 + 0x100),0), lVar18 == 0)) goto LAB_05d0be24;
        uVar29 = FUN_048bdb30(lVar18,3,*(undefined8 *)
                                        Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListAssetSummaries__
                             );
        if (*(uint *)(lVar14 + 0x18) <= unaff_w21) goto LAB_05d0be28;
        unaff_w24 = 0x178;
        *(undefined8 *)(lVar14 + (long)(int)unaff_w21 * 0x178 + 0x30) = uVar29;
        thunk_FUN_02dc1ef0();
        unaff_w27 = 3;
        *(undefined1 *)(unaff_x19 + 0x328) = uVar17;
LAB_05d09f34:
        unaff_s14 = 1.0;
        fVar23 = 1.0;
        if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_05d0a044;
        uVar7 = *(uint *)(unaff_x19 + 0x284);
        if ((uVar7 >> 4 & 1) != 0) {
                    /* try { // try from 05d09fa8 to 05e09fb3 has its CatchHandler @ 05d0acc4 */
          in_w8 = *(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4);
          goto code_r0x05d09fb4;
        }
        unaff_s14 = fVar23;
        if ((uVar7 >> 3 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar10 = FUN_04f7494c(unaff_w27,0);
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            uVar7 = FUN_04f74dec(unaff_w27,0);
            goto LAB_05d0a040;
          }
          goto LAB_05d0a044;
        }
        if ((uVar7 >> 5 & 1) == 0) goto LAB_05d0a044;
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar10 = FUN_04f749ec(unaff_w27,0);
        if ((uVar10 & 1) != 0) goto code_r0x05d09f78;
        goto LAB_05d0a044;
      }
    }
  }
  if ((unaff_w27 == 3) || (*(int *)(unaff_x19 + 0x35c) <= (int)uVar7)) goto LAB_05d09f34;
  lVar14 = *in_stack_00000088;
  if (lVar14 == 0) goto LAB_05d0be24;
  if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_05d0be28;
  lVar14 = lVar14 + (long)(int)uVar7 * (long)(int)unaff_w24;
  *(undefined1 *)(lVar14 + 400) = 0;
  *(undefined2 *)(lVar14 + 0x24) = 0x200b;
  *(undefined4 *)(lVar14 + 0x5c) = 0;
  *(uint *)(unaff_x25 + 0x28) = uVar7 + 1;
  goto LAB_05d09f20;
code_r0x05d09f78:
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar7 = FUN_04f74c74(unaff_w27,0);
  fVar23 = fStack0000000000000010;
  goto LAB_05d0a040;
}


