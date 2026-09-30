/*
FUNCTION_NAME: OVRSystemPerfMetrics.PerfMetrics$$LoadFromJSON
ENTRY_POINT: 056fb3f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056fb530) */
/* WARNING: Removing unreachable block (ram,0x056fb78c) */
/* WARNING: Removing unreachable block (ram,0x056fb450) */
/* WARNING: Removing unreachable block (ram,0x056fb5c8) */
/* WARNING: Removing unreachable block (ram,0x056fb688) */
/* WARNING: Removing unreachable block (ram,0x056fb680) */
/* WARNING: Removing unreachable block (ram,0x056fb7f4) */

undefined1  [16] OVRSystemPerfMetrics_PerfMetrics__LoadFromJSON(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  undefined8 *puVar6;
  undefined8 *unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  
  while ((param_1 & 1) != 0) {
    FUN_037855d8(&stack0x00000020,&stack0x00000140,*unaff_x21);
    uVar5 = in_stack_00000020;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_04354b64(&stack0x00000200,uVar5,*unaff_x25);
    param_1 = FUN_03785860(&stack0x00000140,*unaff_x29);
  }
  FUN_0515325c(&stack0x00000140,*unaff_x22);
  in_stack_000001d8 = FUN_03763914();
  FUN_038d7a74(&stack0x00000020,&stack0x000001d8,2,*unaff_x28);
  uVar5 = in_stack_00000030;
  in_stack_000001e8 = in_stack_00000028;
  in_stack_000001e0 = in_stack_00000020;
  in_stack_000000c8 = FUN_03762878();
  FUN_0434b468(&stack0x00000020,&stack0x000000c8,*(undefined8 *)OVRInput_HapticInfo___TypeInfo);
  memcpy(&stack0x000000d0,&stack0x00000020,0x68);
  in_stack_00000020 = 0;
  in_stack_00000028 = &stack0x000000d0;
  while (uVar3 = FUN_05159700(&stack0x000000d0,*unaff_x26), (uVar3 & 1) != 0) {
    uVar4 = FUN_05159a18(&stack0x000000d0,*unaff_x27);
    FUN_04354b64(&stack0x000001e0,uVar4,*unaff_x25);
  }
  FUN_05155b44(&stack0x000000d0,*(undefined8 *)OVRFaceExpressions_FaceExpression___TypeInfo);
  puVar1 = UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo;
  if ((int)((ulong)uVar5 >> 0x20) < 1) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar5 = thunk_FUN_02dd3144();
    uVar4 = thunk_FUN_02dfd288(OVRPlugin_Bone___TypeInfo);
    FUN_05452924(uVar5,uVar4,0);
    uVar4 = thunk_FUN_02dfd288(OVRPlugin_GetBoneSkeleton2Delegate___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar4);
  }
  if (in_stack_00000214 == 0) {
    auVar7 = FUN_03767208(0,*(undefined8 *)OVRPlugin_EyeGazeState___TypeInfo);
    puVar6 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo;
    auVar7 = FUN_03768aa0(auVar7._0_8_,auVar7._8_8_ & 0xffffffff,
                          *(undefined8 *)OVRPlugin_FaceTrackingDataSource___TypeInfo);
  }
  else {
    auVar7 = FUN_04355430(&stack0x00000020,
                          *(undefined8 *)
                           UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem___TypeInfo
                         );
    in_stack_00000028 = in_stack_000001e8;
    in_stack_00000020 = in_stack_000001e0;
    in_stack_00000030 = uVar5;
    auVar8 = FUN_04355430(&stack0x00000020,*(undefined8 *)puVar1);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    puVar6 = (undefined8 *)UnityEngine_InputSystem_InputActionMap_WriteActionJson___TypeInfo;
    auVar7 = FUN_056fb08c(auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_);
  }
  FUN_043552c0(&stack0x000001e0,*puVar6);
  lVar2 = in_stack_000000b8;
  FUN_043552c0(in_stack_000000c0,*puVar6);
  if (lVar2 == 0) {
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858(lVar2);
}


