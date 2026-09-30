/*
FUNCTION_NAME: FUN_056fb1a4
ENTRY_POINT: 056fb1a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_8;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x056fb530) */
/* WARNING: Removing unreachable block (ram,0x056fb78c) */
/* WARNING: Removing unreachable block (ram,0x056fb450) */
/* WARNING: Removing unreachable block (ram,0x056fb5c8) */
/* WARNING: Removing unreachable block (ram,0x056fb688) */
/* WARNING: Removing unreachable block (ram,0x056fb680) */
/* WARNING: Removing unreachable block (ram,0x056fb7f4) */

undefined1  [16] FUN_056fb1a4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_260;
  undefined8 *puStack_258;
  undefined8 local_250;
  long local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [152];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_06dbeb84 & 1) == 0) {
    FUN_02d965b8(UnityEngine_Rendering_HableCurve_Segment___TypeInfo);
    FUN_02d965b8(System_Globalization_HebrewNumber_HS___TypeInfo);
    FUN_02d965b8(OVRFaceExpressions_FaceExpression___TypeInfo);
    FUN_02d965b8(System_Globalization_HebrewNumber_HebrewValue___TypeInfo);
    FUN_02d965b8(OVRHaptics_OVRHapticsChannel___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_BindingJson___TypeInfo);
    FUN_02d965b8(OVRHaptics_OVRHapticsOutput___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_ReadActionJson___TypeInfo);
    FUN_02d965b8(OVRInput_HapticInfo___TypeInfo);
    FUN_02d965b8(System_Collections_Hashtable_bucket___TypeInfo);
    FUN_02d965b8(OVRInput_OpenVRControllerDetails___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_HID_HIDSupport_HIDPageUsage___TypeInfo);
    FUN_02d965b8(OVROverlay_LayerTexture___TypeInfo);
    FUN_02d965b8(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_02d965b8(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    DAT_06dbeb84 = 1;
  }
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_a8 = 0;
  memset(auStack_140,0,0x98);
  puVar1 = System_Collections_Hashtable_bucket___TypeInfo;
  puVar12 = UnityEngine_Rendering_HableCurve_Segment___TypeInfo;
  local_150 = 0;
  local_148 = 0;
  local_1b8 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar11 = thunk_FUN_02dd3144();
    puVar12 = PTR_DAT_06a0e6b0;
  }
  else {
    if (param_2 != 0) {
      local_a8 = FUN_037638c0(param_1,*(undefined8 *)
                                       UnityEngine_InputSystem_HID_HIDSupport_HIDPageUsage___TypeInfo
                             );
      FUN_038d7a74(&local_260,&local_a8,2,*(undefined8 *)puVar12);
      local_70 = local_250;
      local_1c0 = &local_80;
      puStack_78 = puStack_258;
      local_80 = local_260;
      local_1c8 = 0;
      local_148 = FUN_03762800(param_1,*(undefined8 *)puVar1);
      FUN_0434a52c(&local_260,&local_148,
                   *(undefined8 *)UnityEngine_InputSystem_InputActionMap_ReadActionJson___TypeInfo);
      puVar8 = OVROverlay_LayerTexture___TypeInfo;
      puVar7 = OVRHaptics_OVRHapticsOutput___TypeInfo;
      puVar6 = OVRHaptics_OVRHapticsChannel___TypeInfo;
      puVar5 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
      puVar4 = UnityEngine_InputSystem_InputActionMap_BindingJson___TypeInfo;
      puVar3 = System_Globalization_HebrewNumber_HebrewValue___TypeInfo;
      puVar2 = System_Globalization_HebrewNumber_HS___TypeInfo;
      puVar1 = PTR_DAT_06a0d0a8;
      memcpy(auStack_140,&local_260,0x98);
      while (uVar10 = FUN_03785860(auStack_140,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
        FUN_037855d8(&local_260,auStack_140,*(undefined8 *)puVar4);
        uVar11 = local_260;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_04354b64(&local_80,uVar11,*(undefined8 *)puVar5);
      }
      FUN_0515325c(auStack_140,*(undefined8 *)puVar2);
      local_a8 = FUN_03763914(param_2,*(undefined8 *)puVar8);
      FUN_038d7a74(&local_260,&local_a8,2,*(undefined8 *)puVar12);
      puStack_98 = puStack_258;
      local_a0 = local_260;
      local_90 = local_250;
      local_1b8 = FUN_03762878(param_2,*(undefined8 *)OVRInput_OpenVRControllerDetails___TypeInfo);
      FUN_0434b468(&local_260,&local_1b8,*(undefined8 *)OVRInput_HapticInfo___TypeInfo);
      memcpy(&local_1b0,&local_260,0x68);
      local_260 = 0;
      puStack_258 = &local_1b0;
      while (uVar10 = FUN_05159700(&local_1b0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        uVar11 = FUN_05159a18(&local_1b0,*(undefined8 *)puVar7);
        FUN_04354b64(&local_a0,uVar11,*(undefined8 *)puVar5);
      }
      FUN_05155b44(&local_1b0,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo);
      puVar12 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
      if (local_90._4_4_ < 1) {
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar11 = thunk_FUN_02dd3144();
        uVar13 = thunk_FUN_02dfd288(OVRPlugin_Bone___TypeInfo);
        FUN_05452924(uVar11,uVar13,0);
        uVar13 = thunk_FUN_02dfd288(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar11,uVar13);
      }
      if (local_70._4_4_ == 0) {
        auVar15 = FUN_03767208(0,*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
        puVar14 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo;
        auVar15 = FUN_03768aa0(auVar15._0_8_,auVar15._8_8_ & 0xffffffff,
                               *(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo);
      }
      else {
        puStack_258 = puStack_78;
        local_260 = local_80;
        local_250 = local_70;
        auVar15 = FUN_04355430(&local_260,
                               *(undefined8 *)
                                UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo
                              );
        puStack_258 = puStack_98;
        local_260 = local_a0;
        local_250 = local_90;
        auVar16 = FUN_04355430(&local_260,*(undefined8 *)puVar12);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar14 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo;
        auVar15 = FUN_056fb08c(auVar15._0_8_,auVar15._8_8_,auVar16._0_8_,auVar16._8_8_);
      }
      FUN_043552c0(&local_a0,*puVar14);
      lVar9 = local_1c8;
      FUN_043552c0(local_1c0,*puVar14);
      if (lVar9 == 0) {
        return auVar15;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar9);
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar11 = thunk_FUN_02dd3144();
    puVar12 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  }
  uVar13 = thunk_FUN_02dfd288(puVar12);
  FUN_0544bf54(uVar11,uVar13,0);
  uVar13 = thunk_FUN_02dfd288(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar11,uVar13);
}


