/*
FUNCTION_NAME: OVRSimpleJSON.JSONNumber$$.ctor
ENTRY_POINT: 056fb388
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056fb530) */
/* WARNING: Removing unreachable block (ram,0x056fb78c) */
/* WARNING: Removing unreachable block (ram,0x056fb450) */
/* WARNING: Removing unreachable block (ram,0x056fb5c8) */
/* WARNING: Removing unreachable block (ram,0x056fb688) */
/* WARNING: Removing unreachable block (ram,0x056fb680) */
/* WARNING: Removing unreachable block (ram,0x056fb7f4) */

undefined1  [16] OVRSimpleJSON_JSONNumber___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x28;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined1 *in_stack_000001e8;
  int in_stack_00000214;
  
  FUN_0434a52c(&stack0x00000138);
  puVar7 = OVRHaptics_OVRHapticsOutput___TypeInfo;
  puVar6 = OVRHaptics_OVRHapticsChannel___TypeInfo;
  puVar5 = UnityEngine_InputSystem_InputActionMap_ReadMapJson___TypeInfo;
  puVar4 = UnityEngine_InputSystem_InputActionMap_BindingJson___TypeInfo;
  puVar3 = System_Globalization_HebrewNumber_HebrewValue___TypeInfo;
  puVar2 = System_Globalization_HebrewNumber_HS___TypeInfo;
  puVar1 = PTR_DAT_06a0d0a8;
  memcpy(&stack0x00000140,&stack0x00000020,0x98);
  while (uVar9 = FUN_03785860(&stack0x00000140,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
    FUN_037855d8(&stack0x00000020,&stack0x00000140,*(undefined8 *)puVar4);
    uVar11 = in_stack_00000020;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_04354b64(&stack0x00000200,uVar11,*(undefined8 *)puVar5);
  }
  FUN_0515325c(&stack0x00000140,*(undefined8 *)puVar2);
  in_stack_000001d8 = FUN_03763914();
  FUN_038d7a74(&stack0x00000020,&stack0x000001d8,2,*unaff_x28);
  uVar11 = in_stack_00000030;
  in_stack_000001e8 = in_stack_00000028;
  in_stack_000001e0 = in_stack_00000020;
  in_stack_000000c8 = FUN_03762878();
  FUN_0434b468(&stack0x00000020,&stack0x000000c8,*(undefined8 *)OVRInput_HapticInfo___TypeInfo);
  memcpy(&stack0x000000d0,&stack0x00000020,0x68);
  in_stack_00000020 = 0;
  in_stack_00000028 = &stack0x000000d0;
  while (uVar9 = FUN_05159700(&stack0x000000d0,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
    uVar10 = FUN_05159a18(&stack0x000000d0,*(undefined8 *)puVar7);
    FUN_04354b64(&stack0x000001e0,uVar10,*(undefined8 *)puVar5);
  }
  FUN_05155b44(&stack0x000000d0,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo);
  puVar2 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
  if ((int)((ulong)uVar11 >> 0x20) < 1) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar11 = thunk_FUN_02dd3144();
    uVar10 = thunk_FUN_02dfd288(OVRPlugin_Bone___TypeInfo);
    FUN_05452924(uVar11,uVar10,0);
    uVar10 = thunk_FUN_02dfd288(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar11,uVar10);
  }
  if (in_stack_00000214 == 0) {
    auVar13 = FUN_03767208(0,*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
    puVar12 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo;
    auVar13 = FUN_03768aa0(auVar13._0_8_,auVar13._8_8_ & 0xffffffff,
                           *(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo);
  }
  else {
    auVar13 = FUN_04355430(&stack0x00000020,
                           *(undefined8 *)
                            UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo
                          );
    in_stack_00000028 = in_stack_000001e8;
    in_stack_00000020 = in_stack_000001e0;
    in_stack_00000030 = uVar11;
    auVar14 = FUN_04355430(&stack0x00000020,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    puVar12 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo;
    auVar13 = FUN_056fb08c(auVar13._0_8_,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_);
  }
  FUN_043552c0(&stack0x000001e0,*puVar12);
  lVar8 = in_stack_000000b8;
  FUN_043552c0(in_stack_000000c0,*puVar12);
  if (lVar8 == 0) {
    return auVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858(lVar8);
}


