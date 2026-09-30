/*
FUNCTION_NAME: FUN_05bc00a4
ENTRY_POINT: 05bc00a4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05bc00a4(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  int local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  long local_100;
  int iStack_f8;
  undefined4 uStack_f4;
  long local_f0;
  undefined1 auStack_e8 [16];
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined1 auStack_78 [16];
  
  if ((DAT_06a5749b & 1) == 0) {
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<EasingFunction>,_List<EasingFunction>>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<StylePropertyName>,_List<StylePropertyName>>__
                );
    FUN_02d4dc40(Method_System_Net_DelegatedStream_BeginWrite__);
    FUN_02d4dc40(Method_System_DelegateSerializationHolder_GetObjectData__);
    FUN_02d4dc40(
                Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<DrawScreenSpaceUIPass_PassData>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<TimeValue>,_List<TimeValue>>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackground,_Background>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundPosition,_BackgroundPosition>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundRepeat,_BackgroundRepeat>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundSize,_BackgroundSize>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleColor,_Color>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleEnum<Visibility>,_Visibility>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleEnum<TextAnchor>,_TextAnchor>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleCursor,_Cursor>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleEnum<Wrap>,_Wrap>__
                );
    DAT_06a5749b = 1;
  }
  puVar4 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundSize,_BackgroundSize>__
  ;
  puVar3 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundRepeat,_BackgroundRepeat>__
  ;
  puVar2 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleEnum<TextAnchor>,_TextAnchor>__
  ;
  local_a0 = 0;
  uStack_98 = 0;
  auStack_e8._8_8_ = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  local_100 = 0;
  auStack_e8._0_8_ = 0;
  local_f0 = 0;
  lStack_c8 = 0;
  local_d0 = 0;
  local_b8 = ZEXT816(0);
  local_c0 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_120 = 0;
  local_11c = 0;
  if (0 < (int)param_1[2]) {
    local_b8._8_8_ = 0;
    local_c0 = param_1[3];
    lStack_c8 = SUB168(*(undefined1 (*) [16])(param_1 + 1),8);
    local_d0 = SUB168(*(undefined1 (*) [16])(param_1 + 1),0);
    local_b8._0_8_ = 0;
    local_b8 = FUN_05efbe9c(*param_1,(int)param_1[2] << 4,0,0,0);
    lStack_88 = lStack_c8;
    local_90 = local_d0;
    local_80 = local_c0;
    auStack_78 = local_b8;
    FUN_0392cc44(param_1 + 4,&local_90,*(undefined8 *)puVar3);
    uVar6 = FUN_058e48a8(4,0);
    local_90 = 0;
    lStack_88 = 0;
    local_80 = 0;
    FUN_03f89bb8(&local_90,4,uVar6,0,*(undefined8 *)puVar2);
    param_1[2] = lStack_88;
    param_1[1] = local_90;
    param_1[3] = local_80;
  }
  uVar7 = FUN_0392cae8(param_1 + 4,*(undefined8 *)puVar4);
  puVar5 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleColor,_Color>__;
  puVar3 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackgroundPosition,_BackgroundPosition>__
  ;
  puVar2 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<EasingFunction>,_List<EasingFunction>>__
  ;
  while ((uVar7 & 1) == 0) {
    FUN_0392cbb4(&local_90,param_1 + 4,*(undefined8 *)puVar5);
    lStack_c8 = lStack_88;
    local_d0 = local_90;
    local_c0 = local_80;
    local_b8 = auStack_78;
    uVar7 = FUN_05efbb1c(local_b8,0);
    if ((uVar7 & 1) == 0) break;
    FUN_0392cca4(&local_90,param_1 + 4,*(undefined8 *)puVar3);
    iStack_f8 = (int)lStack_88;
    uStack_f4 = (undefined4)((ulong)lStack_88 >> 0x20);
    local_100 = local_90;
    local_f0 = local_80;
    auStack_e8 = auStack_78;
    uVar7 = FUN_05efbb94(auStack_e8,0);
    if ((uVar7 & 1) == 0) {
      auVar13 = FUN_03131358(auStack_e8,0,*(undefined8 *)puVar2);
      if (auVar13._8_4_ == iStack_f8 * 4) {
        if ((char)param_1[10] != '\0') {
          FUN_03f89e54(param_1 + 5,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleEnum<Visibility>,_Visibility>__
                      );
          FUN_0386eb70(param_1 + 8,*(undefined8 *)Method_System_Net_DelegatedStream_BeginWrite__);
          *(undefined1 *)(param_1 + 10) = 0;
        }
        auVar1._8_4_ = iStack_f8;
        auVar1._0_8_ = local_100;
        auVar1._12_4_ = uStack_f4;
        param_1[6] = auVar1._8_8_;
        param_1[5] = local_100;
        param_1[7] = local_f0;
        local_90 = 0;
        lStack_88 = 0;
        FUN_0386e9b8(&local_90,auVar13._0_8_,auVar13._8_8_,4,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetRenderFunc<DrawScreenSpaceUIPass_PassData>__
                    );
        *(undefined1 *)(param_1 + 10) = 1;
        param_1[9] = lStack_88;
        param_1[8] = local_90;
      }
    }
    uVar7 = FUN_0392cae8(param_1 + 4,*(undefined8 *)puVar4);
  }
  puVar2 = Method_System_DelegateSerializationHolder_GetObjectData__;
  if (param_2 != 0) {
    FUN_038ff7b8(param_2 + 0x20,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleBackground,_Background>__
                );
    puVar3 = 
    Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<TimeValue>,_List<TimeValue>>__
    ;
    if (((char)param_1[10] != '\0') && (0 < (int)param_1[6])) {
      lVar12 = 0;
      do {
        piVar10 = (int *)param_1[5];
        piVar8 = piVar10 + lVar12 * 5;
        local_130 = *(undefined8 *)piVar8;
        local_120 = piVar8[4];
        if (piVar8[1] == 1 || local_120 != 0) {
          if (lVar12 != 0) {
            lVar11 = lVar12;
            do {
              if ((piVar10[4] != 0 || piVar10[1] == 1) && *piVar10 == *piVar8) {
                iVar9 = piVar8[2] - piVar10[2];
                goto LAB_05bc0444;
              }
              lVar11 = lVar11 + -1;
              piVar10 = piVar10 + 5;
            } while (lVar11 != 0);
          }
          iVar9 = 0;
        }
        else {
          iVar9 = -1;
        }
LAB_05bc0444:
        auVar13 = NEON_rev64(*(undefined1 (*) [16])
                              (param_1[8] +
                              (-(ulong)(((uint)lVar12 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                              (ulong)((uint)lVar12 << 2) << 2)),4);
        uStack_128 = CONCAT44(piVar8[3],iVar9);
        uStack_114 = auVar13._8_4_;
        uStack_110 = auVar13._12_4_;
        local_11c = auVar13._0_4_;
        uStack_118 = auVar13._4_4_;
        FUN_038ff2cc(param_2 + 0x20,&local_130,*(undefined8 *)puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[6]);
    }
    FUN_0386e888(&local_a0,0x100,2,1,*(undefined8 *)puVar2);
    if (*param_1 != 0) {
      FUN_03238d78(*param_1,local_a0,uStack_98,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_AddProperty<StyleList<StylePropertyName>,_List<StylePropertyName>>__
                  );
      FUN_0386eb70(&local_a0,*(undefined8 *)Method_System_Net_DelegatedStream_BeginWrite__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


