/*
FUNCTION_NAME: FUN_05a3c55c
ENTRY_POINT: 05a3c55c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05a3c55c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,long param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                 undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                 undefined8 param_25,byte param_26)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_06b81216 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
                );
    DAT_06b81216 = 1;
  }
  fVar20 = powf((float)param_17,0.25);
  if (param_14 != 0) {
    FUN_06090bec(0,0,param_1,param_2,param_14,0);
    if ((param_26 & 1) != 0) {
      FUN_06091440(0,0,0,0x3f800000,param_14,0,1,0);
    }
    puVar9 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
    ;
    puVar8 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
    ;
    puVar7 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
    ;
    puVar5 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
    puVar6 = Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__;
    fVar24 = (float)param_2;
    if (param_7 != 0) {
      fVar23 = (float)param_1;
      fVar22 = fVar23 * DAT_01208594;
      uVar11 = FUN_06038110(param_7,*(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                            ,0);
      uVar12 = FUN_06038110(param_7,*(undefined8 *)puVar7,0);
      uVar13 = FUN_06038110(param_7,*(undefined8 *)puVar5,0);
      uVar14 = FUN_06038110(param_7,*(undefined8 *)puVar9,0);
      uVar15 = FUN_06038110(param_7,*(undefined8 *)puVar8,0);
      lVar16 = *(long *)puVar6;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar16);
        lVar16 = *(long *)puVar6;
      }
      plVar19 = (long *)PTR_DAT_06767d28;
      uVar4 = *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x7c);
      FUN_06088f24(&local_d0,param_10,0);
      uStack_f8 = uStack_c8;
      local_100 = local_d0;
      uStack_e8 = uStack_b8;
      uStack_f0 = uStack_c0;
      local_e0 = local_b0;
      FUN_0609adc4(param_14,uVar4,&local_100,0);
      uVar4 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x84);
      FUN_06088f24(&local_d0,param_11,0);
      uStack_128 = uStack_c8;
      local_130 = local_d0;
      uStack_118 = uStack_b8;
      uStack_120 = uStack_c0;
      local_110 = local_b0;
      FUN_0609adc4(param_14,uVar4,&local_130,0);
      FUN_06091af8((undefined4)param_15,param_15._4_4_,(undefined4)param_16,param_16._4_4_,param_14,
                   *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x94),0);
      FUN_06091af8(fVar20,param_17._4_4_,(undefined4)param_18,param_18._4_4_,param_14,
                   *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x98),0);
      FUN_06091af8((undefined4)param_19,param_19._4_4_,(float)param_20 / 20.0,param_20._4_4_,
                   param_14,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x9c),0);
      FUN_06091af8((float)param_21,fVar22 * param_21._4_4_ * 10.0,(float)param_22 / 90.0,
                   param_22._4_4_,param_14,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xa0)
                   ,0);
      FUN_06091af8((undefined4)param_23,(fVar23 / fVar24) * (1.0 / param_23._4_4_),
                   1.0 / (float)param_24,param_24._4_4_,param_14,
                   *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xa4),0);
      UnityEngine_UIElements_ConverterGroups_<>c__<RegisterInt16Converters>b__18_10
                (param_3,param_4,param_5,param_6,param_14,
                 *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x90),0);
      if (0.0 < (float)param_21) {
        FUN_06088f24(&local_158,param_12,0);
        uStack_c8 = uStack_150;
        local_d0 = local_158;
        uStack_b8 = uStack_140;
        uStack_c0 = uStack_148;
        local_b0 = local_138;
        if (*(int *)(*plVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uStack_178 = uStack_c8;
        local_180 = local_d0;
        uStack_168 = uStack_b8;
        uStack_170 = uStack_c0;
        local_160 = local_b0;
        FUN_05a5bb74(param_14,&local_180,0,0,0xffffffff,0xffffffff,0);
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4)
            == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_05a56870(param_14,param_7,uVar11,0);
        if (fVar24 <= fVar23) {
          fVar24 = fVar23;
        }
        if (DAT_06b81263 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b81263 = '\x01';
        }
        puVar5 = PTR_DAT_0675e6d8;
        if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        dVar21 = (double)FUN_05007ed4((double)fVar24,0x4000000000000000,0);
        if (DAT_06b72bd9 == '\0') {
          FUN_02d6084c(PTR_DAT_0675e6d8);
          DAT_06b72bd9 = '\x01';
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar17 = 0;
        iVar18 = -0x80000000;
        if ((float)(int)dVar21 != INFINITY) {
          iVar18 = (int)dVar21;
        }
        do {
          lVar16 = *(long *)puVar6;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar16 = *(long *)puVar6;
          }
          uVar1 = uVar17 & 1;
          FUN_06091988(param_14,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x8c),uVar17,0);
          uVar2 = param_12;
          if (uVar1 != 0) {
            uVar2 = param_13;
          }
          uVar3 = param_13;
          if (uVar1 != 0) {
            uVar3 = param_12;
          }
          uVar11 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x88);
          FUN_06088f24(&local_d0,uVar2,0);
          uStack_1a8 = uStack_c8;
          local_1b0 = local_d0;
          uStack_198 = uStack_b8;
          uStack_1a0 = uStack_c0;
          local_190 = local_b0;
          FUN_0609adc4(param_14,uVar11,&local_1b0,0);
          FUN_06088f24(&local_158,uVar3,0);
          uStack_c8 = uStack_150;
          local_d0 = local_158;
          uStack_b8 = uStack_140;
          uStack_c0 = uStack_148;
          local_b0 = local_138;
          if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uStack_1d8 = uStack_c8;
          local_1e0 = local_d0;
          uStack_1c8 = uStack_b8;
          uStack_1d0 = uStack_c0;
          local_1c0 = local_b0;
          FUN_05a5bb74(param_14,&local_1e0,0,0,0xffffffff,0xffffffff,0);
          if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4)
              == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05a56870(param_14,param_7,uVar12,0);
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < iVar18);
        iVar18 = 0;
        do {
          lVar16 = *(long *)puVar6;
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar16 = *(long *)puVar6;
          }
          FUN_06091988(param_14,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x8c),iVar18,0);
          bVar10 = ((uVar17 & 1) + iVar18 & 1) != 0;
          uVar2 = param_12;
          if (bVar10) {
            uVar2 = param_13;
          }
          uVar3 = param_13;
          if (bVar10) {
            uVar3 = param_12;
          }
          uVar11 = *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x88);
          FUN_06088f24(&local_d0,uVar2,0);
          uStack_208 = uStack_c8;
          local_210 = local_d0;
          uStack_1f8 = uStack_b8;
          uStack_200 = uStack_c0;
          local_1f0 = local_b0;
          FUN_0609adc4(param_14,uVar11,&local_210,0);
          FUN_06088f24(&local_158,uVar3,0);
          plVar19 = (long *)PTR_DAT_06767d28;
          uStack_c8 = uStack_150;
          local_d0 = local_158;
          uStack_b8 = uStack_140;
          uStack_c0 = uStack_148;
          local_b0 = local_138;
          if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uStack_238 = uStack_c8;
          local_240 = local_d0;
          uStack_228 = uStack_b8;
          uStack_230 = uStack_c0;
          local_220 = local_b0;
          FUN_05a5bb74(param_14,&local_240,0,0,0xffffffff,0xffffffff,0);
          if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4)
              == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05a56870(param_14,param_7,uVar13,0);
          iVar18 = iVar18 + 1;
        } while (((uVar17 & 1) - (uVar1 ^ 3)) + iVar18 != 0);
        lVar16 = *(long *)puVar6;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar16 = *(long *)puVar6;
        }
        uVar11 = *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x88);
        FUN_06088f24(&local_d0,uVar3,0);
        uStack_268 = uStack_c8;
        local_270 = local_d0;
        uStack_258 = uStack_b8;
        uStack_260 = uStack_c0;
        local_250 = local_b0;
        FUN_0609adc4(param_14,uVar11,&local_270,0);
      }
      if (*(int *)(*plVar19 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a57de4(param_14,param_25,0,0,0xffffffff,0xffffffff,0);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4) ==
          0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a56870(param_14,param_7,uVar14,0);
      lVar16 = *(long *)puVar6;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar16 = *(long *)puVar6;
      }
      uVar11 = *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x80);
      FUN_05a4812c(&local_d0,param_25,0);
      uStack_298 = uStack_c8;
      local_2a0 = local_d0;
      uStack_288 = uStack_b8;
      uStack_290 = uStack_c0;
      local_280 = local_b0;
      FUN_0609adc4(param_14,uVar11,&local_2a0,0);
      FUN_06088f24(&local_d0,param_9,0);
      uStack_2c8 = uStack_c8;
      local_2d0 = local_d0;
      uStack_2b8 = uStack_b8;
      uStack_2c0 = uStack_c0;
      local_2b0 = local_b0;
      FUN_05a5bb74(param_14,&local_2d0,0,0,0xffffffff,0xffffffff,0);
      FUN_05a56870(param_14,param_7,uVar15,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


