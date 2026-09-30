/*
FUNCTION_NAME: FUN_05e5c1c0
ENTRY_POINT: 05e5c1c0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void FUN_05e5c1c0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,long param_9,uint *param_10,
                 undefined8 param_11)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float in_stack_00000000;
  float in_stack_00000008;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  
  if ((DAT_06bc4001 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067c9998);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnHoverEntered__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnSelectEntered__
                );
    FUN_02f08768(Method_TMPro_TMP_Text_ResizeInternalArray<TMP_Text_TextProcessingElement>__);
    DAT_06bc4001 = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  FUN_05e5cf70(param_9,*(undefined8 *)(param_9 + 0xf8));
  auVar9._8_8_ = local_d0._8_8_;
  auVar9._0_8_ = local_d0._0_8_;
  auVar8._8_8_ = local_d0._8_8_;
  auVar8._0_8_ = local_d0._0_8_;
  lVar22 = *(long *)(param_9 + 0x688);
  if (lVar22 == 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnSelectEntered__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar21 = FUN_05e72cdc(0);
    if ((uVar21 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060aa024(*(undefined8 *)
                  Method_TMPro_TMP_Text_ResizeInternalArray<TMP_Text_TextProcessingElement>__,
                 param_9,0);
    return;
  }
  if ((*(long *)(param_9 + 0x3a0) != 0) &&
     (lVar27 = *(long *)(*(long *)(param_9 + 0x3a0) + 0x60), local_d0 = auVar8, lVar27 != 0)) {
    uVar5 = *(uint *)(param_9 + 0x6a0);
    uVar24 = *(uint *)(lVar27 + 0x18);
    local_d0 = auVar9;
    if (uVar24 <= uVar5) goto LAB_05e5cf68;
    lVar28 = lVar27 + (long)(int)uVar5 * 0x50;
    lVar26 = *(long *)(lVar28 + 0x30);
    if (lVar26 != 0) {
      uVar3 = *param_10;
      iVar1 = uVar3 + 0xc;
      if (*(int *)(lVar26 + 0x18) < iVar1) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnHoverEntered__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          uVar24 = *(uint *)(lVar27 + 0x18);
        }
        if (uVar24 <= uVar5) goto LAB_05e5cf68;
        iVar4 = uVar3 + 0xf;
        if (-1 < iVar1) {
          iVar4 = iVar1;
        }
        FUN_05e6fb4c(lVar28 + 0x20,iVar4 >> 2,0);
        lVar22 = *(long *)(param_9 + 0x688);
        if (param_5 <= param_2) {
          param_2 = param_5;
        }
        if (lVar22 == 0) goto LAB_05e5cf6c;
      }
      else if (param_5 <= param_2) {
        param_2 = param_5;
      }
      if (*(long *)(lVar22 + 0x20) != 0) {
        FUN_061900f0(&local_144,*(long *)(lVar22 + 0x20),0);
        auVar10._8_8_ = local_d0._8_8_;
        auVar10._0_8_ = local_d0._0_8_;
        uStack_b8 = uStack_13c;
        local_c0 = local_144;
        local_b0 = local_134;
        if ((*(long *)(param_9 + 0x688) != 0) &&
           (lVar22 = *(long *)(*(long *)(param_9 + 0x688) + 0x20), local_d0 = auVar10, lVar22 != 0))
        {
          local_d0 = FUN_06190118(lVar22,0);
          fVar29 = (float)FUN_0618ff18(&local_c0,0);
          fVar30 = (float)FUN_0618ff18(&local_c0,0);
          fVar32 = param_4 - param_1;
          fVar34 = fVar32 * 0.5;
          if (fVar30 * in_stack_00000000 <= fVar32) {
            fVar34 = fVar29 * 0.5 * in_stack_00000000;
          }
          if (*(long *)(param_9 + 0x690) != 0) {
            fVar30 = *(float *)(param_9 + 0x630);
            memmove(&local_130,(void *)(*(long *)(param_9 + 0x690) + 0x28),0x60);
            fVar29 = (float)FUN_0618fcbc(&local_130,0);
            if ((*(long *)(param_9 + 0x3a0) != 0) &&
               (lVar22 = *(long *)(*(long *)(param_9 + 0x3a0) + 0x60), lVar22 != 0)) {
              if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                lVar22 = *(long *)(lVar22 + (long)(int)uVar5 * 0x50 + 0x30);
                if (lVar22 == 0) goto LAB_05e5cf6c;
                if (*param_10 < *(uint *)(lVar22 + 0x18)) {
                  fVar31 = *(float *)(param_9 + 0x630);
                  lVar27 = lVar22 + (long)(int)*param_10 * 0xc;
                  *(float *)(lVar27 + 0x28) = param_3 + 0.0;
                  *(float *)(lVar27 + 0x20) = param_1 + 0.0;
                  *(float *)(lVar27 + 0x24) =
                       param_2 + (0.0 - (fVar29 + fVar31) * in_stack_00000000);
                  if (*param_10 + 1 < *(uint *)(lVar22 + 0x18)) {
                    fVar31 = *(float *)(param_9 + 0x630);
                    lVar27 = lVar22 + (long)(int)(*param_10 + 1) * 0xc;
                    *(float *)(lVar27 + 0x28) = param_3 + 0.0;
                    *(float *)(lVar27 + 0x20) = param_1 + 0.0;
                    *(float *)(lVar27 + 0x24) = param_2 + fVar31 * in_stack_00000000;
                    uVar24 = *param_10 + 1;
                    if ((uVar24 < *(uint *)(lVar22 + 0x18)) &&
                       (uVar3 = *param_10 + 2, uVar3 < *(uint *)(lVar22 + 0x18))) {
                      puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar24 * 0xc);
                      puVar23 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                      uVar35 = *puVar25;
                      *(float *)(puVar23 + 1) = *(float *)(puVar25 + 1) + 0.0;
                      *puVar23 = CONCAT44((float)((ulong)uVar35 >> 0x20) + 0.0,
                                          fVar34 + (float)uVar35);
                      uVar24 = *param_10;
                      if ((uVar24 < *(uint *)(lVar22 + 0x18)) &&
                         (uVar24 + 3 < *(uint *)(lVar22 + 0x18))) {
                        puVar23 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar24 * 0xc);
                        uVar35 = *puVar23;
                        fVar31 = *(float *)(puVar23 + 1);
                        puVar23 = (undefined8 *)(lVar22 + 0x20 + (long)(int)(uVar24 + 3) * 0xc);
                        *puVar23 = CONCAT44((float)((ulong)uVar35 >> 0x20) + 0.0,
                                            fVar34 + (float)uVar35);
                        *(float *)(puVar23 + 1) = fVar31 + 0.0;
                        uVar24 = *param_10 + 3;
                        if ((uVar24 < *(uint *)(lVar22 + 0x18)) &&
                           (uVar3 = *param_10 + 4, uVar3 < *(uint *)(lVar22 + 0x18))) {
                          puVar23 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar24 * 0xc);
                          puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                          uVar33 = *(undefined4 *)(puVar23 + 1);
                          *puVar25 = *puVar23;
                          *(undefined4 *)(puVar25 + 1) = uVar33;
                          uVar24 = *param_10 + 2;
                          if ((uVar24 < *(uint *)(lVar22 + 0x18)) &&
                             (uVar3 = *param_10 + 5, uVar3 < *(uint *)(lVar22 + 0x18))) {
                            puVar23 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar24 * 0xc);
                            puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                            uVar33 = *(undefined4 *)(puVar23 + 1);
                            *puVar25 = *puVar23;
                            *(undefined4 *)(puVar25 + 1) = uVar33;
                            if (*param_10 + 6 < *(uint *)(lVar22 + 0x18)) {
                              fVar31 = *(float *)(param_9 + 0x630);
                              lVar27 = lVar22 + (long)(int)(*param_10 + 6) * 0xc;
                              param_6 = param_6 + 0.0;
                              *(float *)(lVar27 + 0x20) = param_4 - fVar34;
                              *(float *)(lVar27 + 0x24) = param_2 + fVar31 * in_stack_00000000;
                              *(float *)(lVar27 + 0x28) = param_6;
                              if (*param_10 + 7 < *(uint *)(lVar22 + 0x18)) {
                                fVar31 = *(float *)(param_9 + 0x630);
                                lVar27 = lVar22 + (long)(int)(*param_10 + 7) * 0xc;
                                *(float *)(lVar27 + 0x28) = param_6;
                                *(float *)(lVar27 + 0x20) = param_4 - fVar34;
                                *(float *)(lVar27 + 0x24) =
                                     param_2 - (fVar29 + fVar31) * in_stack_00000000;
                                uVar24 = *param_10 + 7;
                                if ((uVar24 < *(uint *)(lVar22 + 0x18)) &&
                                   (uVar3 = *param_10 + 8, uVar3 < *(uint *)(lVar22 + 0x18))) {
                                  puVar23 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar24 * 0xc);
                                  puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                                  uVar33 = *(undefined4 *)(puVar23 + 1);
                                  *puVar25 = *puVar23;
                                  *(undefined4 *)(puVar25 + 1) = uVar33;
                                  uVar24 = *param_10 + 6;
                                  if ((uVar24 < *(uint *)(lVar22 + 0x18)) &&
                                     (uVar3 = *param_10 + 9, uVar3 < *(uint *)(lVar22 + 0x18))) {
                                    puVar23 = (undefined8 *)
                                              (lVar22 + 0x20 + (long)(int)uVar24 * 0xc);
                                    puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc)
                                    ;
                                    uVar33 = *(undefined4 *)(puVar23 + 1);
                                    *puVar25 = *puVar23;
                                    *(undefined4 *)(puVar25 + 1) = uVar33;
                                    if (*param_10 + 10 < *(uint *)(lVar22 + 0x18)) {
                                      fVar34 = *(float *)(param_9 + 0x630);
                                      lVar27 = lVar22 + (long)(int)(*param_10 + 10) * 0xc;
                                      *(float *)(lVar27 + 0x28) = param_6;
                                      *(float *)(lVar27 + 0x20) = param_4 + 0.0;
                                      *(float *)(lVar27 + 0x24) =
                                           param_2 + fVar34 * in_stack_00000000;
                                      if (*param_10 + 0xb < *(uint *)(lVar22 + 0x18)) {
                                        fVar34 = *(float *)(param_9 + 0x630);
                                        lVar27 = lVar22 + (long)(int)(*param_10 + 0xb) * 0xc;
                                        *(float *)(lVar27 + 0x28) = param_6;
                                        *(float *)(lVar27 + 0x20) = param_4 + 0.0;
                                        *(float *)(lVar27 + 0x24) =
                                             param_2 - (fVar29 + fVar34) * in_stack_00000000;
                                        if ((*(long *)(param_9 + 0x3a0) != 0) &&
                                           (lVar27 = *(long *)(*(long *)(param_9 + 0x3a0) + 0x60),
                                           lVar27 != 0)) {
                                          if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_05e5cf68;
                                          lVar26 = *(long *)(param_9 + 0x690);
                                          if (lVar26 != 0) {
                                            iVar1 = *(int *)(lVar26 + 0x158);
                                            lVar27 = *(long *)(lVar27 + (long)(int)uVar5 * 0x50 +
                                                              0x48);
                                            iVar4 = *(int *)(lVar26 + 0x15c);
                                            if (*(int *)(*(long *)PTR_DAT_067c9998 + 0xe4) == 0) {
                                              thunk_FUN_02f6670c();
                                            }
                                            iVar11 = FUN_0618fcdc(local_d0,0);
                                            iVar12 = FUN_0618fce4(local_d0,0);
                                            fVar29 = *(float *)(param_9 + 0x630);
                                            iVar13 = FUN_0618fce4(local_d0,0);
                                            iVar14 = FUN_0618fcf4(local_d0,0);
                                            fVar34 = *(float *)(param_9 + 0x630);
                                            iVar15 = FUN_0618fcdc(local_d0,0);
                                            iVar16 = FUN_0618fcec(local_d0,0);
                                            iVar17 = FUN_0618fcdc(local_d0,0);
                                            iVar18 = FUN_0618fcec(local_d0,0);
                                            iVar19 = FUN_0618fcdc(local_d0,0);
                                            iVar20 = FUN_0618fcec(local_d0,0);
                                            if (lVar27 != 0) {
                                              if (*param_10 < *(uint *)(lVar27 + 0x18)) {
                                                fVar31 = (float)iVar1;
                                                lVar26 = lVar27 + (long)(int)*param_10 * 0x10;
                                                *(undefined4 *)(lVar26 + 0x28) = 0;
                                                fVar36 = (fVar30 * param_7) / in_stack_00000000;
                                                uVar24 = *(uint *)(lVar27 + 0x18);
                                                fVar37 = ((float)iVar11 - fVar36) / fVar31;
                                                fVar29 = ((float)iVar12 - fVar29) / (float)iVar4;
                                                in_stack_00000008 = ABS(in_stack_00000008);
                                                *(float *)(lVar26 + 0x2c) = in_stack_00000008;
                                                *(float *)(lVar26 + 0x20) = fVar37;
                                                *(float *)(lVar26 + 0x24) = fVar29;
                                                if (*param_10 + 1 < uVar24) {
                                                  lVar26 = lVar27 + (long)(int)(*param_10 + 1) *
                                                                    0x10;
                                                  *(undefined4 *)(lVar26 + 0x28) = 0;
                                                  *(float *)(lVar26 + 0x2c) = in_stack_00000008;
                                                  uVar24 = *(uint *)(lVar27 + 0x18);
                                                  fVar34 = (fVar34 + (float)(iVar14 + iVar13)) /
                                                           (float)iVar4;
                                                  *(float *)(lVar26 + 0x20) = fVar37;
                                                  *(float *)(lVar26 + 0x24) = fVar34;
                                                  if (*param_10 + 2 < uVar24) {
                                                    lVar26 = lVar27 + (long)(int)(*param_10 + 2) *
                                                                      0x10;
                                                    *(undefined4 *)(lVar26 + 0x28) = 0;
                                                    *(float *)(lVar26 + 0x2c) = in_stack_00000008;
                                                    uVar24 = *(uint *)(lVar27 + 0x18);
                                                    fVar36 = (((float)iVar15 - fVar36) +
                                                             (float)iVar16 / 2.0) / fVar31;
                                                    *(float *)(lVar26 + 0x20) = fVar36;
                                                    *(float *)(lVar26 + 0x24) = fVar34;
                                                    if (*param_10 + 3 < uVar24) {
                                                      lVar26 = lVar27 + (long)(int)(*param_10 + 3) *
                                                                        0x10;
                                                      *(float *)(lVar26 + 0x20) = fVar36;
                                                      *(float *)(lVar26 + 0x24) = fVar29;
                                                      *(undefined4 *)(lVar26 + 0x28) = 0;
                                                      *(float *)(lVar26 + 0x2c) = in_stack_00000008;
                                                      fVar37 = DAT_011b0768;
                                                      if (*param_10 + 4 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar26 = lVar27 + (long)(int)(*param_10 + 4)
                                                                          * 0x10;
                                                        *(undefined4 *)(lVar26 + 0x28) = 0;
                                                        *(float *)(lVar26 + 0x2c) =
                                                             in_stack_00000008;
                                                        uVar24 = *(uint *)(lVar27 + 0x18);
                                                        fVar38 = fVar36 - fVar36 * fVar37;
                                                        *(float *)(lVar26 + 0x20) = fVar38;
                                                        *(float *)(lVar26 + 0x24) = fVar29;
                                                        if (*param_10 + 5 < uVar24) {
                                                          lVar26 = lVar27 + (long)(int)(*param_10 +
                                                                                       5) * 0x10;
                                                          *(float *)(lVar26 + 0x20) = fVar38;
                                                          *(float *)(lVar26 + 0x24) = fVar34;
                                                          *(undefined4 *)(lVar26 + 0x28) = 0;
                                                          *(float *)(lVar26 + 0x2c) =
                                                               in_stack_00000008;
                                                          if (*param_10 + 6 <
                                                              *(uint *)(lVar27 + 0x18)) {
                                                            fVar36 = fVar36 + fVar36 * fVar37;
                                                            lVar26 = lVar27 + (long)(int)(*param_10
                                                                                         + 6) * 0x10
                                                            ;
                                                            *(undefined4 *)(lVar26 + 0x28) = 0;
                                                            *(float *)(lVar26 + 0x2c) =
                                                                 in_stack_00000008;
                                                            uVar24 = *(uint *)(lVar27 + 0x18);
                                                            *(float *)(lVar26 + 0x20) = fVar36;
                                                            *(float *)(lVar26 + 0x24) = fVar34;
                                                            if (*param_10 + 7 < uVar24) {
                                                              lVar26 = lVar27 + (long)(int)(*
                                                  param_10 + 7) * 0x10;
                                                  *(float *)(lVar26 + 0x20) = fVar36;
                                                  *(float *)(lVar26 + 0x24) = fVar29;
                                                  *(undefined4 *)(lVar26 + 0x28) = 0;
                                                  *(float *)(lVar26 + 0x2c) = in_stack_00000008;
                                                  if (*param_10 + 8 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar27 + (long)(int)(*param_10 + 8) *
                                                                      0x10;
                                                    *(undefined4 *)(lVar26 + 0x28) = 0;
                                                    *(float *)(lVar26 + 0x2c) = in_stack_00000008;
                                                    in_stack_00000000 =
                                                         (fVar30 * param_8) / in_stack_00000000;
                                                    uVar24 = *(uint *)(lVar27 + 0x18);
                                                    fVar30 = (in_stack_00000000 + (float)iVar17 +
                                                             (float)iVar18 / 2.0) / fVar31;
                                                    *(float *)(lVar26 + 0x20) = fVar30;
                                                    *(float *)(lVar26 + 0x24) = fVar29;
                                                    if (*param_10 + 9 < uVar24) {
                                                      lVar26 = lVar27 + (long)(int)(*param_10 + 9) *
                                                                        0x10;
                                                      *(float *)(lVar26 + 0x20) = fVar30;
                                                      *(float *)(lVar26 + 0x24) = fVar34;
                                                      *(undefined4 *)(lVar26 + 0x28) = 0;
                                                      *(float *)(lVar26 + 0x2c) = in_stack_00000008;
                                                      if (*param_10 + 10 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar26 = lVar27 + (long)(int)(*param_10 + 10
                                                                                     ) * 0x10;
                                                        *(undefined4 *)(lVar26 + 0x28) = 0;
                                                        *(float *)(lVar26 + 0x2c) =
                                                             in_stack_00000008;
                                                        uVar24 = *(uint *)(lVar27 + 0x18);
                                                        fVar31 = (in_stack_00000000 + (float)iVar19
                                                                 + (float)iVar20) / fVar31;
                                                        *(float *)(lVar26 + 0x20) = fVar31;
                                                        *(float *)(lVar26 + 0x24) = fVar34;
                                                        if (*param_10 + 0xb < uVar24) {
                                                          lVar27 = lVar27 + (long)(int)(*param_10 +
                                                                                       0xb) * 0x10;
                                                          *(float *)(lVar27 + 0x20) = fVar31;
                                                          *(float *)(lVar27 + 0x24) = fVar29;
                                                          *(undefined4 *)(lVar27 + 0x28) = 0;
                                                          *(float *)(lVar27 + 0x2c) =
                                                               in_stack_00000008;
                                                          uVar24 = *param_10;
                                                          if (uVar24 + 2 < *(uint *)(lVar22 + 0x18))
                                                          {
                                                            if ((*(long *)(param_9 + 0x3a0) == 0) ||
                                                               (lVar27 = *(long *)(*(long *)(param_9
                                                                                            + 0x3a0)
                                                                                  + 0x60),
                                                               lVar27 == 0)) goto LAB_05e5cf6c;
                                                            if (uVar5 < *(uint *)(lVar27 + 0x18)) {
                                                              lVar27 = *(long *)(lVar27 + (long)(int
                                                  )uVar5 * 0x50 + 0x50);
                                                  if (lVar27 == 0) goto LAB_05e5cf6c;
                                                  if (uVar24 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar22 + 0x20;
                                                    fVar34 = *(float *)(lVar26 + (long)(int)(uVar24 
                                                  + 2) * 0xc);
                                                  *(undefined8 *)
                                                   (lVar27 + (long)(int)uVar24 * 8 + 0x20) = 0;
                                                  if (*param_10 + 1 < *(uint *)(lVar27 + 0x18)) {
                                                    *(undefined8 *)
                                                     (lVar27 + (long)(int)(*param_10 + 1) * 8 + 0x20
                                                     ) = DAT_011b0bc8;
                                                    if (*param_10 + 2 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar28 = lVar27 + (long)(int)(*param_10 + 2) *
                                                                        8;
                                                      *(undefined4 *)(lVar28 + 0x24) = 0x3f800000;
                                                      fVar34 = (fVar34 - param_1) / fVar32;
                                                      *(float *)(lVar28 + 0x20) = fVar34;
                                                      if (*param_10 + 3 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar28 = lVar27 + (long)(int)(*param_10 + 3)
                                                                          * 8;
                                                        *(float *)(lVar28 + 0x20) = fVar34;
                                                        *(undefined4 *)(lVar28 + 0x24) = 0;
                                                        uVar24 = *param_10 + 4;
                                                        if (((uVar24 < *(uint *)(lVar22 + 0x18)) &&
                                                            (uVar3 = *param_10 + 6,
                                                            uVar3 < *(uint *)(lVar22 + 0x18))) &&
                                                           (uVar24 < *(uint *)(lVar27 + 0x18))) {
                                                          lVar28 = lVar27 + (long)(int)uVar24 * 8;
                                                          fVar29 = (*(float *)(lVar26 + (long)(int)
                                                  uVar24 * 0xc) - param_1) / fVar32;
                                                  fVar34 = *(float *)(lVar26 + (long)(int)uVar3 *
                                                                               0xc);
                                                  *(undefined4 *)(lVar28 + 0x24) = 0;
                                                  *(float *)(lVar28 + 0x20) = fVar29;
                                                  if (*param_10 + 5 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar28 = lVar27 + (long)(int)(*param_10 + 5) * 8
                                                    ;
                                                    *(float *)(lVar28 + 0x20) = fVar29;
                                                    *(undefined4 *)(lVar28 + 0x24) = 0x3f800000;
                                                    if (*param_10 + 6 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar28 = lVar27 + (long)(int)(*param_10 + 6) *
                                                                        8;
                                                      *(undefined4 *)(lVar28 + 0x24) = 0x3f800000;
                                                      fVar34 = (fVar34 - param_1) / fVar32;
                                                      *(float *)(lVar28 + 0x20) = fVar34;
                                                      if (*param_10 + 7 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar28 = lVar27 + (long)(int)(*param_10 + 7)
                                                                          * 8;
                                                        *(float *)(lVar28 + 0x20) = fVar34;
                                                        *(undefined4 *)(lVar28 + 0x24) = 0;
                                                        uVar24 = *param_10 + 8;
                                                        if ((uVar24 < *(uint *)(lVar22 + 0x18)) &&
                                                           (uVar24 < *(uint *)(lVar27 + 0x18))) {
                                                          fVar34 = *(float *)(lVar26 + (long)(int)
                                                  uVar24 * 0xc);
                                                  lVar22 = lVar27 + (long)(int)uVar24 * 8;
                                                  *(undefined4 *)(lVar22 + 0x24) = 0;
                                                  fVar32 = (fVar34 - param_1) / fVar32;
                                                  *(float *)(lVar22 + 0x20) = fVar32;
                                                  if (*param_10 + 9 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar22 = lVar27 + (long)(int)(*param_10 + 9) * 8
                                                    ;
                                                    *(float *)(lVar22 + 0x20) = fVar32;
                                                    *(undefined4 *)(lVar22 + 0x24) = 0x3f800000;
                                                    if (*param_10 + 10 < *(uint *)(lVar27 + 0x18)) {
                                                      uVar35 = NEON_fmov(0x3f800000,4);
                                                      *(undefined8 *)
                                                       (lVar27 + (long)(int)(*param_10 + 10) * 8 +
                                                       0x20) = uVar35;
                                                      if (*param_10 + 0xb < *(uint *)(lVar27 + 0x18)
                                                         ) {
                                                        *(undefined8 *)
                                                         (lVar27 + (long)(int)(*param_10 + 0xb) * 8
                                                         + 0x20) = DAT_011b0bd0;
                                                        bVar2 = *(byte *)(param_9 + 0x147);
                                                        if (((uint)((ulong)param_11 >> 0x18) & 0xff)
                                                            <= (uint)*(byte *)(param_9 + 0x147)) {
                                                          bVar2 = (byte)((ulong)param_11 >> 0x18);
                                                        }
                                                        if ((*(long *)(param_9 + 0x3a0) == 0) ||
                                                           (lVar22 = *(long *)(*(long *)(param_9 +
                                                                                        0x3a0) +
                                                                              0x60), lVar22 == 0))
                                                        goto LAB_05e5cf6c;
                                                        if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                                                          lVar22 = *(long *)(lVar22 + (long)(int)
                                                  uVar5 * 0x50 + 0x58);
                                                  if (lVar22 == 0) goto LAB_05e5cf6c;
                                                  if (*param_10 < *(uint *)(lVar22 + 0x18)) {
                                                    lVar27 = lVar22 + (long)(int)*param_10 * 4;
                                                    uVar7 = (undefined1)((ulong)param_11 >> 0x10);
                                                    *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                    uVar6 = (undefined2)param_11;
                                                    *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                    *(byte *)(lVar27 + 0x23) = bVar2;
                                                    if (*param_10 + 1 < *(uint *)(lVar22 + 0x18)) {
                                                      lVar27 = lVar22 + (long)(int)(*param_10 + 1) *
                                                                        4;
                                                      *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                      *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                      *(byte *)(lVar27 + 0x23) = bVar2;
                                                      if (*param_10 + 2 < *(uint *)(lVar22 + 0x18))
                                                      {
                                                        lVar27 = lVar22 + (long)(int)(*param_10 + 2)
                                                                          * 4;
                                                        *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                        *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                        *(byte *)(lVar27 + 0x23) = bVar2;
                                                        if (*param_10 + 3 < *(uint *)(lVar22 + 0x18)
                                                           ) {
                                                          lVar27 = lVar22 + (long)(int)(*param_10 +
                                                                                       3) * 4;
                                                          *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                          *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                          *(byte *)(lVar27 + 0x23) = bVar2;
                                                          if (*param_10 + 4 <
                                                              *(uint *)(lVar22 + 0x18)) {
                                                            lVar27 = lVar22 + (long)(int)(*param_10
                                                                                         + 4) * 4;
                                                            *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                            *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                            *(byte *)(lVar27 + 0x23) = bVar2;
                                                            if (*param_10 + 5 <
                                                                *(uint *)(lVar22 + 0x18)) {
                                                              lVar27 = lVar22 + (long)(int)(*
                                                  param_10 + 5) * 4;
                                                  *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                  *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                  *(byte *)(lVar27 + 0x23) = bVar2;
                                                  if (*param_10 + 6 < *(uint *)(lVar22 + 0x18)) {
                                                    lVar27 = lVar22 + (long)(int)(*param_10 + 6) * 4
                                                    ;
                                                    *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                    *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                    *(byte *)(lVar27 + 0x23) = bVar2;
                                                    if (*param_10 + 7 < *(uint *)(lVar22 + 0x18)) {
                                                      lVar27 = lVar22 + (long)(int)(*param_10 + 7) *
                                                                        4;
                                                      *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                      *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                      *(byte *)(lVar27 + 0x23) = bVar2;
                                                      if (*param_10 + 8 < *(uint *)(lVar22 + 0x18))
                                                      {
                                                        lVar27 = lVar22 + (long)(int)(*param_10 + 8)
                                                                          * 4;
                                                        *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                        *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                        *(byte *)(lVar27 + 0x23) = bVar2;
                                                        if (*param_10 + 9 < *(uint *)(lVar22 + 0x18)
                                                           ) {
                                                          lVar27 = lVar22 + (long)(int)(*param_10 +
                                                                                       9) * 4;
                                                          *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                          *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                          *(byte *)(lVar27 + 0x23) = bVar2;
                                                          if (*param_10 + 10 <
                                                              *(uint *)(lVar22 + 0x18)) {
                                                            lVar27 = lVar22 + (long)(int)(*param_10
                                                                                         + 10) * 4;
                                                            *(undefined1 *)(lVar27 + 0x22) = uVar7;
                                                            *(undefined2 *)(lVar27 + 0x20) = uVar6;
                                                            *(byte *)(lVar27 + 0x23) = bVar2;
                                                            if (*param_10 + 0xb <
                                                                *(uint *)(lVar22 + 0x18)) {
                                                              lVar22 = lVar22 + (long)(int)(*
                                                  param_10 + 0xb) * 4;
                                                  *(undefined1 *)(lVar22 + 0x22) = uVar7;
                                                  *(undefined2 *)(lVar22 + 0x20) = uVar6;
                                                  *(byte *)(lVar22 + 0x23) = bVar2;
                                                  *param_10 = *param_10 + 0xc;
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                              goto LAB_05e5cf68;
                                            }
                                          }
                                        }
                                        goto LAB_05e5cf6c;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_05e5cf68:
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
        }
      }
    }
  }
LAB_05e5cf6c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


