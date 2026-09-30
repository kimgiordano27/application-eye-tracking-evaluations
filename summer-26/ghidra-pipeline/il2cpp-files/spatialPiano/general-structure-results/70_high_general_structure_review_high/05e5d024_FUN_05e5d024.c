/*
FUNCTION_NAME: FUN_05e5d024
ENTRY_POINT: 05e5d024
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


void FUN_05e5d024(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7,uint *param_8,undefined8 param_9
                 )

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 local_a0 [16];
  
  if ((DAT_06bc4002 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(PTR_DAT_067c9998);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnHoverEntered__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnSelectEntered__
                );
    FUN_02f08768(Method_TMPro_TMP_Text_ResizeInternalArray<TMP_Text_TextProcessingElement>__);
    DAT_06bc4002 = 1;
  }
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if ((*(long *)(param_7 + 0x688) == 0) &&
     (FUN_05e5cf70(param_7,*(undefined8 *)(param_7 + 0xf8)), *(long *)(param_7 + 0x688) == 0)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnSelectEntered__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar22 = FUN_05e72cdc(0);
    if ((uVar22 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_060aa024(*(undefined8 *)
                  Method_TMPro_TMP_Text_ResizeInternalArray<TMP_Text_TextProcessingElement>__,
                 param_7,0);
    return;
  }
  auVar9._8_8_ = local_a0._8_8_;
  auVar9._0_8_ = local_a0._0_8_;
  auVar8._8_8_ = local_a0._8_8_;
  auVar8._0_8_ = local_a0._0_8_;
  lVar23 = *(long *)(param_7 + 0x3a0);
  if ((lVar23 != 0) && (lVar26 = *(long *)(lVar23 + 0x60), local_a0 = auVar8, lVar26 != 0)) {
    uVar5 = *(uint *)(param_7 + 0x6a0);
    uVar24 = *(uint *)(lVar26 + 0x18);
    local_a0 = auVar9;
    if (uVar24 <= uVar5) goto LAB_05e5d5a8;
    lVar27 = lVar26 + (long)(int)uVar5 * 0x50;
    lVar25 = *(long *)(lVar27 + 0x30);
    if (lVar25 != 0) {
      uVar3 = *param_8;
      iVar1 = uVar3 + 4;
      if (*(int *)(lVar25 + 0x18) < iVar1) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Feedback_SimpleAudioFeedback_OnHoverEntered__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          uVar24 = *(uint *)(lVar26 + 0x18);
        }
        if (uVar24 <= uVar5) goto LAB_05e5d5a8;
        iVar4 = uVar3 + 7;
        if (-1 < iVar1) {
          iVar4 = iVar1;
        }
        FUN_05e6fb4c(lVar27 + 0x20,iVar4 >> 2,0);
        lVar23 = *(long *)(param_7 + 0x3a0);
        if (lVar23 == 0) goto LAB_05e5d5ac;
      }
      auVar15._8_8_ = local_a0._8_8_;
      auVar15._0_8_ = local_a0._0_8_;
      auVar14._8_8_ = local_a0._8_8_;
      auVar14._0_8_ = local_a0._0_8_;
      auVar13._8_8_ = local_a0._8_8_;
      auVar13._0_8_ = local_a0._0_8_;
      auVar12._8_8_ = local_a0._8_8_;
      auVar12._0_8_ = local_a0._0_8_;
      auVar11._8_8_ = local_a0._8_8_;
      auVar11._0_8_ = local_a0._0_8_;
      auVar10._8_8_ = local_a0._8_8_;
      auVar10._0_8_ = local_a0._0_8_;
      lVar23 = *(long *)(lVar23 + 0x60);
      if (lVar23 != 0) {
        local_a0 = auVar15;
        if (uVar5 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = *(long *)(lVar23 + (long)(int)uVar5 * 0x50 + 0x30);
          local_a0 = auVar10;
          if (lVar23 == 0) goto LAB_05e5d5ac;
          local_a0 = auVar15;
          if (*param_8 < *(uint *)(lVar23 + 0x18)) {
            lVar26 = lVar23 + (long)(int)*param_8 * 0xc;
            *(undefined4 *)(lVar26 + 0x20) = param_1;
            *(undefined4 *)(lVar26 + 0x24) = param_2;
            *(undefined4 *)(lVar26 + 0x28) = param_3;
            if (*param_8 + 1 < *(uint *)(lVar23 + 0x18)) {
              lVar26 = lVar23 + (long)(int)(*param_8 + 1) * 0xc;
              *(undefined4 *)(lVar26 + 0x20) = param_1;
              *(undefined4 *)(lVar26 + 0x24) = param_5;
              *(undefined4 *)(lVar26 + 0x28) = 0;
              if (*param_8 + 2 < *(uint *)(lVar23 + 0x18)) {
                lVar26 = lVar23 + (long)(int)(*param_8 + 2) * 0xc;
                *(undefined4 *)(lVar26 + 0x20) = param_4;
                *(undefined4 *)(lVar26 + 0x24) = param_5;
                *(undefined4 *)(lVar26 + 0x28) = param_6;
                if (*param_8 + 3 < *(uint *)(lVar23 + 0x18)) {
                  lVar23 = lVar23 + (long)(int)(*param_8 + 3) * 0xc;
                  *(undefined4 *)(lVar23 + 0x20) = param_4;
                  *(undefined4 *)(lVar23 + 0x24) = param_2;
                  *(undefined4 *)(lVar23 + 0x28) = 0;
                  puVar17 = PTR_DAT_067c9998;
                  local_a0 = auVar11;
                  if ((*(long *)(param_7 + 0x3a0) != 0) &&
                     (lVar23 = *(long *)(*(long *)(param_7 + 0x3a0) + 0x60), local_a0 = auVar12,
                     lVar23 != 0)) {
                    local_a0 = auVar15;
                    if (*(uint *)(lVar23 + 0x18) <= uVar5) goto LAB_05e5d5a8;
                    lVar26 = *(long *)(param_7 + 0x690);
                    local_a0 = auVar13;
                    if (((lVar26 != 0) && (local_a0 = auVar14, *(long *)(param_7 + 0x688) != 0)) &&
                       (lVar25 = *(long *)(*(long *)(param_7 + 0x688) + 0x20), local_a0 = auVar15,
                       lVar25 != 0)) {
                      iVar1 = *(int *)(lVar26 + 0x158);
                      iVar4 = *(int *)(lVar26 + 0x15c);
                      lVar23 = *(long *)(lVar23 + (long)(int)uVar5 * 0x50 + 0x48);
                      local_a0 = FUN_06190118(lVar25,0);
                      if (*(int *)(*(long *)puVar17 + 0xe4) == 0) {
                        thunk_FUN_02f6670c();
                      }
                      iVar18 = FUN_0618fcdc(local_a0,0);
                      iVar19 = FUN_0618fcec(local_a0,0);
                      iVar20 = FUN_0618fce4(local_a0,0);
                      iVar21 = FUN_0618fcf4(local_a0,0);
                      if (lVar23 != 0) {
                        if (*param_8 < *(uint *)(lVar23 + 0x18)) {
                          lVar26 = lVar23 + (long)(int)*param_8 * 0x10;
                          *(undefined8 *)(lVar26 + 0x28) = 0;
                          uVar24 = *(uint *)(lVar23 + 0x18);
                          fVar29 = ((float)iVar19 / 2.0 + (float)iVar18) / (float)iVar1;
                          fVar31 = ((float)iVar21 / 2.0 + (float)iVar20) / (float)iVar4;
                          fVar30 = 1.0 / (float)iVar1;
                          fVar33 = 1.0 / (float)iVar4;
                          fVar32 = fVar29 - fVar30;
                          fVar28 = fVar31 - fVar33;
                          *(float *)(lVar26 + 0x20) = fVar32;
                          *(float *)(lVar26 + 0x24) = fVar28;
                          if (*param_8 + 1 < uVar24) {
                            fVar33 = fVar33 + fVar31;
                            lVar26 = lVar23 + (long)(int)(*param_8 + 1) * 0x10;
                            *(undefined8 *)(lVar26 + 0x28) = 0;
                            uVar24 = *(uint *)(lVar23 + 0x18);
                            *(float *)(lVar26 + 0x20) = fVar32;
                            *(float *)(lVar26 + 0x24) = fVar33;
                            if (*param_8 + 2 < uVar24) {
                              fVar30 = fVar30 + fVar29;
                              lVar26 = lVar23 + (long)(int)(*param_8 + 2) * 0x10;
                              *(undefined8 *)(lVar26 + 0x28) = 0;
                              uVar24 = *(uint *)(lVar23 + 0x18);
                              *(float *)(lVar26 + 0x20) = fVar30;
                              *(float *)(lVar26 + 0x24) = fVar33;
                              if (*param_8 + 3 < uVar24) {
                                lVar23 = lVar23 + (long)(int)(*param_8 + 3) * 0x10;
                                *(float *)(lVar23 + 0x20) = fVar30;
                                *(float *)(lVar23 + 0x24) = fVar28;
                                *(undefined8 *)(lVar23 + 0x28) = 0;
                                uVar16 = DAT_011b0bc8;
                                if ((*(long *)(param_7 + 0x3a0) == 0) ||
                                   (lVar23 = *(long *)(*(long *)(param_7 + 0x3a0) + 0x60),
                                   lVar23 == 0)) goto LAB_05e5d5ac;
                                if (uVar5 < *(uint *)(lVar23 + 0x18)) {
                                  lVar23 = *(long *)(lVar23 + (long)(int)uVar5 * 0x50 + 0x50);
                                  if (lVar23 == 0) goto LAB_05e5d5ac;
                                  if (*param_8 < *(uint *)(lVar23 + 0x18)) {
                                    *(undefined8 *)(lVar23 + (long)(int)*param_8 * 8 + 0x20) =
                                         DAT_011b0bc8;
                                    if (*param_8 + 1 < *(uint *)(lVar23 + 0x18)) {
                                      *(undefined8 *)(lVar23 + (long)(int)(*param_8 + 1) * 8 + 0x20)
                                           = uVar16;
                                      if (*param_8 + 2 < *(uint *)(lVar23 + 0x18)) {
                                        *(undefined8 *)
                                         (lVar23 + (long)(int)(*param_8 + 2) * 8 + 0x20) = uVar16;
                                        if (*param_8 + 3 < *(uint *)(lVar23 + 0x18)) {
                                          *(undefined8 *)
                                           (lVar23 + (long)(int)(*param_8 + 3) * 8 + 0x20) = uVar16;
                                          bVar2 = *(byte *)(param_7 + 0x147);
                                          if (((uint)((ulong)param_9 >> 0x18) & 0xff) <=
                                              (uint)*(byte *)(param_7 + 0x147)) {
                                            bVar2 = (byte)((ulong)param_9 >> 0x18);
                                          }
                                          if ((*(long *)(param_7 + 0x3a0) == 0) ||
                                             (lVar23 = *(long *)(*(long *)(param_7 + 0x3a0) + 0x60),
                                             lVar23 == 0)) goto LAB_05e5d5ac;
                                          if (uVar5 < *(uint *)(lVar23 + 0x18)) {
                                            lVar23 = *(long *)(lVar23 + (long)(int)uVar5 * 0x50 +
                                                              0x58);
                                            if (lVar23 == 0) goto LAB_05e5d5ac;
                                            if (*param_8 < *(uint *)(lVar23 + 0x18)) {
                                              lVar26 = lVar23 + (long)(int)*param_8 * 4;
                                              uVar7 = (undefined1)((ulong)param_9 >> 0x10);
                                              *(undefined1 *)(lVar26 + 0x22) = uVar7;
                                              uVar6 = (undefined2)param_9;
                                              *(undefined2 *)(lVar26 + 0x20) = uVar6;
                                              *(byte *)(lVar26 + 0x23) = bVar2;
                                              if (*param_8 + 1 < *(uint *)(lVar23 + 0x18)) {
                                                lVar26 = lVar23 + (long)(int)(*param_8 + 1) * 4;
                                                *(undefined1 *)(lVar26 + 0x22) = uVar7;
                                                *(undefined2 *)(lVar26 + 0x20) = uVar6;
                                                *(byte *)(lVar26 + 0x23) = bVar2;
                                                if (*param_8 + 2 < *(uint *)(lVar23 + 0x18)) {
                                                  lVar26 = lVar23 + (long)(int)(*param_8 + 2) * 4;
                                                  *(undefined1 *)(lVar26 + 0x22) = uVar7;
                                                  *(undefined2 *)(lVar26 + 0x20) = uVar6;
                                                  *(byte *)(lVar26 + 0x23) = bVar2;
                                                  if (*param_8 + 3 < *(uint *)(lVar23 + 0x18)) {
                                                    lVar23 = lVar23 + (long)(int)(*param_8 + 3) * 4;
                                                    *(undefined1 *)(lVar23 + 0x22) = uVar7;
                                                    *(undefined2 *)(lVar23 + 0x20) = uVar6;
                                                    *(byte *)(lVar23 + 0x23) = bVar2;
                                                    *param_8 = *param_8 + 4;
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
                        goto LAB_05e5d5a8;
                      }
                    }
                  }
                  goto LAB_05e5d5ac;
                }
              }
            }
          }
        }
LAB_05e5d5a8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
    }
  }
LAB_05e5d5ac:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


