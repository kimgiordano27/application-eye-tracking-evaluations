/*
FUNCTION_NAME: OVRSimpleJSON.JSONObject$$.ctor
ENTRY_POINT: 056fb2dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_6;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056fb530) */
/* WARNING: Removing unreachable block (ram,0x056fb78c) */
/* WARNING: Removing unreachable block (ram,0x056fb450) */
/* WARNING: Removing unreachable block (ram,0x056fb5c8) */
/* WARNING: Removing unreachable block (ram,0x056fb688) */
/* WARNING: Removing unreachable block (ram,0x056fb680) */
/* WARNING: Removing unreachable block (ram,0x056fb7f4) */

undefined1  [16] OVRSimpleJSON_JSONObject___ctor(void *param_1,int param_2,size_t param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_000000b8;
  undefined1 *in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 *puStack00000000000001e8;
  
  uStack00000000000001e0 = 0;
  puStack00000000000001e8 = (undefined8 *)0x0;
  uStack00000000000001d8 = 0;
  memset(param_1,param_2,param_3);
  puVar12 = UnityEngine_Rendering_HableCurve_Segment___TypeInfo;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar13 = thunk_FUN_02dd3144();
    puVar12 = PTR_DAT_06a0e6b0;
  }
  else {
    if (unaff_x19 != 0) {
      uStack00000000000001d8 = FUN_037638c0();
      FUN_038d7a74(&stack0x00000020,&stack0x000001d8,2,*(undefined8 *)puVar12);
      uVar14 = in_stack_00000030;
      puVar15 = in_stack_00000028;
      uVar13 = in_stack_00000020;
      in_stack_000000c0 = &stack0x00000200;
      in_stack_000000b8 = 0;
      in_stack_00000138 = FUN_03762800();
      FUN_0434a52c(&stack0x00000020,&stack0x00000138,
                   *(undefined8 *)UnityEngine_InputSystem_InputActionMap_ReadActionJson___TypeInfo);
      puVar7 = OVRHaptics_OVRHapticsOutput___TypeInfo;
      puVar6 = OVRHaptics_OVRHapticsChannel___TypeInfo;
      puVar5 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
      puVar4 = UnityEngine_InputSystem_InputActionMap_BindingJson___TypeInfo;
      puVar3 = System_Globalization_HebrewNumber_HebrewValue___TypeInfo;
      puVar2 = System_Globalization_HebrewNumber_HS___TypeInfo;
      puVar1 = PTR_DAT_06a0d0a8;
      memcpy(&stack0x00000140,&stack0x00000020,0x98);
      while (uVar10 = FUN_03785860(&stack0x00000140,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
        FUN_037855d8(&stack0x00000020,&stack0x00000140,*(undefined8 *)puVar4);
        uVar8 = in_stack_00000020;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_04354b64(&stack0x00000200,uVar8,*(undefined8 *)puVar5);
      }
      FUN_0515325c(&stack0x00000140,*(undefined8 *)puVar2);
      uStack00000000000001d8 = FUN_03763914();
      FUN_038d7a74(&stack0x00000020,&stack0x000001d8,2,*(undefined8 *)puVar12);
      uVar8 = in_stack_00000030;
      puStack00000000000001e8 = in_stack_00000028;
      uStack00000000000001e0 = in_stack_00000020;
      in_stack_000000c8 = FUN_03762878();
      FUN_0434b468(&stack0x00000020,&stack0x000000c8,*(undefined8 *)OVRInput_HapticInfo___TypeInfo);
      memcpy(&stack0x000000d0,&stack0x00000020,0x68);
      in_stack_00000020 = 0;
      in_stack_00000028 = &stack0x000000d0;
      while (uVar10 = FUN_05159700(&stack0x000000d0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        uVar11 = FUN_05159a18(&stack0x000000d0,*(undefined8 *)puVar7);
        FUN_04354b64(&stack0x000001e0,uVar11,*(undefined8 *)puVar5);
      }
      FUN_05155b44(&stack0x000000d0,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo);
      puVar12 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
      if ((int)((ulong)uVar8 >> 0x20) < 1) {
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar13 = thunk_FUN_02dd3144();
        uVar14 = thunk_FUN_02dfd288(OVRPlugin_Bone___TypeInfo);
        FUN_05452924(uVar13,uVar14,0);
        uVar14 = thunk_FUN_02dfd288(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar13,uVar14);
      }
      if ((int)((ulong)uVar14 >> 0x20) == 0) {
        auVar16 = FUN_03767208(0,*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
        puVar15 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo;
        auVar16 = FUN_03768aa0(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,
                               *(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo);
      }
      else {
        in_stack_00000020 = uVar13;
        in_stack_00000028 = puVar15;
        in_stack_00000030 = uVar14;
        auVar16 = FUN_04355430(&stack0x00000020,
                               *(undefined8 *)
                                UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo
                              );
        in_stack_00000028 = puStack00000000000001e8;
        in_stack_00000020 = uStack00000000000001e0;
        in_stack_00000030 = uVar8;
        auVar17 = FUN_04355430(&stack0x00000020,*(undefined8 *)puVar12);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar15 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo;
        auVar16 = FUN_056fb08c(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_);
      }
      FUN_043552c0(&stack0x000001e0,*puVar15);
      lVar9 = in_stack_000000b8;
      FUN_043552c0(in_stack_000000c0,*puVar15);
      if (lVar9 == 0) {
        return auVar16;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(lVar9);
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar13 = thunk_FUN_02dd3144();
    puVar12 = OVRPlugin_AppPerfFrameStats___TypeInfo;
  }
  uVar14 = thunk_FUN_02dfd288(puVar12);
  FUN_0544bf54(uVar13,uVar14,0);
  uVar14 = thunk_FUN_02dfd288(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar13,uVar14);
}


