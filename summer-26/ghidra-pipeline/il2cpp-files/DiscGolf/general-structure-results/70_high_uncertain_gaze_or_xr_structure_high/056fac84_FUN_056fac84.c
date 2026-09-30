/*
FUNCTION_NAME: FUN_056fac84
ENTRY_POINT: 056fac84
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_possible_biometrics_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x056fae90) */
/* WARNING: Removing unreachable block (ram,0x056faef4) */
/* WARNING: Removing unreachable block (ram,0x056faf8c) */

undefined1  [16] FUN_056fac84(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 local_170;
  undefined8 *puStack_168;
  undefined8 local_160;
  long local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_06dbeb83 & 1) == 0) {
    FUN_02d965b8(UnityEngine_Rendering_HableCurve_Segment___TypeInfo);
    FUN_02d965b8(OVRFaceExpressions_FaceExpression___TypeInfo);
    FUN_02d965b8(OVRHaptics_OVRHapticsChannel___TypeInfo);
    FUN_02d965b8(OVRHaptics_OVRHapticsOutput___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0d0a8);
    FUN_02d965b8(OVRInput_HapticInfo___TypeInfo);
    FUN_02d965b8(OVRInput_OpenVRControllerDetails___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputActionMap_WriteMapJson___TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo);
    FUN_02d965b8(OVROverlay_LayerTexture___TypeInfo);
    FUN_02d965b8(UnityEngine_InputForUI_Event_Type___TypeInfo);
    DAT_06dbeb83 = 1;
  }
  puVar2 = OVRInput_OpenVRControllerDetails___TypeInfo;
  puVar1 = UnityEngine_Rendering_HableCurve_Segment___TypeInfo;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_f8 = 0;
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar9 = thunk_FUN_02dd3144();
    uVar10 = thunk_FUN_02dfd288(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_0544bf54(uVar9,uVar10,0);
    uVar10 = thunk_FUN_02dfd288(OVRPlugin_BodyJointLocation___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar9,uVar10);
  }
  local_80 = FUN_03763914(param_2,*(undefined8 *)OVROverlay_LayerTexture___TypeInfo);
  FUN_038d7a74(&local_170,&local_80,2,*(undefined8 *)puVar1);
  local_60 = local_160;
  local_100 = &local_70;
  uStack_68 = puStack_168;
  local_70 = local_170;
  local_108 = 0;
  local_f8 = FUN_03762878(param_2,*(undefined8 *)puVar2);
  FUN_0434b468(&local_170,&local_f8,*(undefined8 *)OVRInput_HapticInfo___TypeInfo);
  puVar6 = OVRHaptics_OVRHapticsOutput___TypeInfo;
  puVar5 = OVRHaptics_OVRHapticsChannel___TypeInfo;
  puVar4 = OVRFaceExpressions_FaceExpression___TypeInfo;
  puVar3 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
  puVar2 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
  puVar1 = PTR_DAT_06a0d0a8;
  memcpy(&local_f0,&local_170,0x68);
  local_170 = 0;
  puStack_168 = &local_f0;
  while (uVar8 = FUN_05159700(&local_f0,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
    uVar9 = FUN_05159a18(&local_f0,*(undefined8 *)puVar6);
    FUN_04354b64(&local_70,uVar9,*(undefined8 *)puVar2);
  }
  FUN_05155b44(&local_f0,*(undefined8 *)puVar4);
  if (0 < local_60._4_4_) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    local_78 = *param_1;
    puStack_168 = (undefined8 *)uStack_68;
    local_170 = local_70;
    local_160 = local_60;
    auVar11 = FUN_04355430(&local_170,*(undefined8 *)puVar3);
    auVar11 = FUN_056fb08c(&local_78,1,auVar11._0_8_,auVar11._8_8_);
    lVar7 = local_108;
    FUN_043552c0(local_100,
                 *(undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo);
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar7);
    }
    return auVar11;
  }
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar9 = thunk_FUN_02dd3144();
  uVar10 = thunk_FUN_02dfd288(OVRPlugin_Bone___TypeInfo);
  FUN_05452924(uVar9,uVar10,0);
  uVar10 = thunk_FUN_02dfd288(OVRPlugin_BodyJointLocation___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar9,uVar10);
}


