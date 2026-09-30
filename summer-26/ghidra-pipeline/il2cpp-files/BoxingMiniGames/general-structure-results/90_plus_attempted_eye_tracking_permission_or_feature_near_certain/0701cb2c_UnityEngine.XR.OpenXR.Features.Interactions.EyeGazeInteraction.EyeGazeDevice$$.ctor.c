/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 0701cb2c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 128
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_4
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 extraout_x1;
  long unaff_x19;
  long *unaff_x20;
  long *plVar20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar21;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined1 uStack00000000000000f8;
  undefined7 uStack00000000000000f9;
  long in_stack_00000100;
  
  FUN_07201074();
  FUN_07201090();
  FUN_072010ac();
  FUN_072010c8();
  lVar15 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2d8) = *(undefined4 *)((long)unaff_x20 + 0x8c);
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar16 = FUN_03d1b724(&stack0x00000100,*unaff_x23);
  if ((uVar16 & 1) == 0) {
LAB_0701cba8:
    uVar13 = (undefined4)unaff_x20[0xc];
    *(undefined4 *)(unaff_x19 + 0x350) = uVar13;
  }
  else {
    if (in_stack_00000100 == 0) goto LAB_0701d984;
    uVar16 = FUN_070081e8(in_stack_00000100,0);
    if ((uVar16 & 1) != 0) goto LAB_0701cba8;
    *(undefined4 *)(unaff_x19 + 0x350) = *(undefined4 *)((long)unaff_x20 + 0x5c);
    uVar13 = (undefined4)unaff_x20[0xc];
  }
  *(undefined4 *)(unaff_x19 + 0x354) = uVar13;
  puVar7 = PTR_DAT_079ff4c8;
  *(undefined4 *)(unaff_x19 + 0x358) = *(undefined4 *)((long)unaff_x20 + 100);
  lVar15 = *(long *)puVar7;
  *(char *)(unaff_x19 + 0x35c) = (char)unaff_x20[0xe];
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar6 = PTR_DAT_079f4e28;
  lVar15 = FUN_0702e180(0);
  if ((lVar15 != 0) && (*(char *)(lVar15 + 0xf7) != '\0')) {
    FUN_06fc8c9c(&stack0x00000030,0);
    in_stack_000000d8 = in_stack_00000038;
    in_stack_000000d0 = in_stack_00000030;
    in_stack_000000e0 = in_stack_00000040;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar15 = FUN_0702e180(0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar6);
    }
    uVar16 = FUN_071c630c(lVar15,0);
    if ((uVar16 & 1) != 0) {
      if (lVar15 == 0) goto LAB_0701d984;
      uVar13 = FUN_06f89eb4(lVar15,0);
      in_stack_000000d8 = CONCAT44(in_stack_000000d8._4_4_,uVar13);
      in_stack_000000d0 = FUN_06f8a0dc(lVar15,0);
    }
    uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                 OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
    FUN_06fc6088(uVar17,&stack0x000000d0,0);
    *(undefined8 *)(unaff_x19 + 0x2d0) = uVar17;
    thunk_FUN_036b7ad0(unaff_x19 + 0x2d0,uVar17);
  }
  bVar12 = (**(code **)(*unaff_x20 + 0x178))();
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x25);
  }
  *(byte *)(unaff_x19 + 0x141) = bVar12 & 1;
  bVar12 = (**(code **)(*unaff_x20 + 0x198))();
  lVar15 = *unaff_x24;
  *(byte *)(unaff_x19 + 0x142) = bVar12 & 1;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07eebae3 == '\0') {
    FUN_03642964(OVR_OpenVR_IVRChaperone__SetSceneColor_TypeInfo);
    DAT_07eebae3 = '\x01';
  }
  puVar10 = Oculus_Interaction_UnityCanvas_OVRCanvasMeshRenderer_Properties_TypeInfo;
  puVar8 = System_Threading_OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeInfo;
  puVar6 = TMPro_KerningTable_<>c_TypeInfo;
  puVar7 = PadsWorkout_JumpPromptTimelineController_<>c_TypeInfo;
  lVar15 = *unaff_x24;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar15 = *unaff_x24;
  }
  puVar9 = System_Linq_Expressions_Interpreter_NumericConvertInstruction_Checked_TypeInfo;
  in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0x2d0);
  *(byte *)(unaff_x19 + 0x142) = *(byte *)(*(long *)(lVar15 + 0xb8) + 8) ^ 1;
  thunk_FUN_036b7ad0(&stack0x000000f0);
  uVar19 = in_stack_000000f0;
  uStack00000000000000f8 = (*(uint *)((long)unaff_x20 + 0x74) & 0xfffffffe) == 2;
  uVar17 = CONCAT71(uStack00000000000000f9,uStack00000000000000f8);
  uVar18 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
  FUN_07048dd8(uVar18,uVar19,uVar17,0);
  *(undefined8 *)(unaff_x19 + 0x298) = uVar18;
  thunk_FUN_036b7ad0(unaff_x19 + 0x298,uVar18);
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)((long)unaff_x20 + 0x74);
  *(undefined4 *)(unaff_x19 + 0x2b0) = *(undefined4 *)((long)unaff_x20 + 0x7c);
  uVar13 = FUN_06fc0aa4();
  *(undefined4 *)(unaff_x19 + 0x2b4) = uVar13;
  uVar13 = FUN_06fc0bfc();
  uVar17 = *(undefined8 *)puVar7;
  *(undefined4 *)(unaff_x19 + 0x2b8) = uVar13;
  lVar15 = unaff_x20[8];
  *(undefined1 *)(unaff_x19 + 700) = 0;
  *(char *)(unaff_x19 + 0x134) = (char)lVar15;
  uVar17 = thunk_FUN_0367fe20(uVar17);
  FUN_0705c6c4(uVar17,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x168,uVar17);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
  FUN_07043a28(uVar17,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x170) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x170,uVar17);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar10);
  FUN_06ff8660(uVar17,0xfa,0);
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1e8,uVar17);
  puVar7 = 
  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo;
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo
                             );
  FUN_07050674(uVar17,0x3ea,unaff_x27,0,0,0,0,0);
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1f0,uVar17);
  if (*(int *)(*(long *)PTR_DAT_07a006a8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar17 = FUN_071fc720(0);
  uVar13 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar19 = thunk_FUN_0367fe20(*(undefined8 *)puVar9);
  FUN_070544c8(uVar19,0x96,uVar17,uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar19;
  thunk_FUN_036b7ad0(unaff_x19 + 0x148,uVar19);
  uVar17 = FUN_071fc720(0);
  uVar13 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo
                             );
  FUN_07052aac(uVar19,0x96,uVar17,uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar19;
  thunk_FUN_036b7ad0(unaff_x19 + 0x150,uVar19);
  uVar14 = *(uint *)(unaff_x19 + 0x2a8);
  if ((uVar14 | 2) == 2) {
    uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
    FUN_07050674(uVar17,200,unaff_x27,1,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x158) = uVar17;
    thunk_FUN_036b7ad0(unaff_x19 + 0x158,uVar17);
    uVar14 = *(uint *)(unaff_x19 + 0x2a8);
  }
  puVar7 = 
  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo;
  if ((uVar14 | 2) == 3) {
    in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0x2f8);
    in_stack_000000b8 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 0;
    thunk_FUN_036b7ad0(&stack0x000000b0);
    in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x300);
    thunk_FUN_036b7ad0((ulong)&stack0x000000b0 | 8);
    in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0x2d0);
    thunk_FUN_036b7ad0(&stack0x000000c0);
    uVar3 = *(undefined1 *)(unaff_x19 + 0x134);
    in_stack_000000c8 = CONCAT71(in_stack_000000c8._1_7_,*(int *)(unaff_x19 + 0x2a8) == 3);
    in_stack_00000038 = in_stack_000000b8;
    in_stack_00000030 = in_stack_000000b0;
    in_stack_00000048 = in_stack_000000c8;
    in_stack_00000040 = in_stack_000000c0;
    uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
    in_stack_00000088 = in_stack_00000038;
    in_stack_00000080 = in_stack_00000030;
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
    FUN_0703c6d0(uVar17,&stack0x00000080,uVar3,0);
    *(undefined8 *)(unaff_x19 + 0x2a0) = uVar17;
    thunk_FUN_036b7ad0(unaff_x19 + 0x2a0,uVar17);
    puVar7 = PTR_DAT_07a006a8;
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_0701d984;
    *(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x19) = (char)unaff_x20[0x11];
    puVar6 = OVRAnchor_DeferredKey_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar17 = FUN_071fc720(0);
    lVar15 = unaff_x20[0xc];
    uVar18 = *unaff_x22;
    uVar13 = *(undefined4 *)(unaff_x22 + 1);
    uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x2a0);
    uVar19 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
    FUN_0705a9dc(uVar19,0xd2,uVar17,(int)lVar15,uVar18,uVar13,uVar1,uVar21);
    *(undefined8 *)(unaff_x19 + 0x178) = uVar19;
    thunk_FUN_036b7ad0(unaff_x19 + 0x178,uVar19);
    uVar17 = *unaff_x22;
    uVar13 = *(undefined4 *)(unaff_x22 + 1);
    if (*(int *)(*(long *)
                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_0703ec20(uVar17,uVar13,0x60,0);
    lVar15 = FUN_03642a4c(*(undefined8 *)Oculus_Platform_Message_Callback_TypeInfo,3);
    uStack000000000000007c = 0;
    FUN_07200324((long)&stack0x00000078 + 4,
                 *(undefined8 *)
                  Oculus_Interaction_InteractorControllerDecorator_ValueDecorator_TypeInfo,0);
    puVar7 = Oculus_Interaction_InteractorControllerDecorator_Decorator_TypeInfo;
    if (lVar15 == 0) goto LAB_0701d984;
    if (*(int *)(lVar15 + 0x18) == 0) {
LAB_0701d988:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined4 *)(lVar15 + 0x20) = uStack000000000000007c;
    uStack0000000000000078 = 0;
    FUN_07200324(&stack0x00000078,*(undefined8 *)puVar7,0);
    puVar7 = OVRControllerHelper_ControllerType_TypeInfo;
    if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_0701d988;
    *(undefined4 *)(lVar15 + 0x24) = uStack0000000000000078;
    in_stack_00000070._4_4_ = 0;
    FUN_07200324((long)&stack0x00000070 + 4,*(undefined8 *)puVar7,0);
    puVar6 = OVRControllerTest_<>c_TypeInfo;
    puVar7 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_HasValue_TypeInfo;
    if (*(uint *)(lVar15 + 0x18) < 3) goto LAB_0701d988;
    *(undefined4 *)(lVar15 + 0x28) = in_stack_00000070._4_4_;
    uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                                 System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo
                               );
    FUN_07050674(uVar17,0xd3,unaff_x27,1,0,0,*(undefined8 *)puVar6,0);
    *(undefined8 *)(unaff_x19 + 0x180) = uVar17;
    thunk_FUN_036b7ad0(unaff_x19 + 0x180,uVar17);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x2a0);
    uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
    FUN_07051f54(uVar17,0xe6,uVar19,0);
    *(undefined8 *)(unaff_x19 + 0x188) = uVar17;
    thunk_FUN_036b7ad0(unaff_x19 + 0x188,uVar17);
    uVar17 = FUN_071fc720(0);
    lVar5 = unaff_x20[0xc];
    uVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                                 System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                               );
    FUN_07055628(uVar19,*(undefined8 *)OVRFaceExpressions_FaceExpressionsEnumerator_TypeInfo,lVar15,
                 1,0xfa,uVar17,(int)lVar5);
    *(undefined8 *)(unaff_x19 + 400) = uVar19;
    thunk_FUN_036b7ad0(unaff_x19 + 400,uVar19);
  }
  puVar7 = System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_07a006a8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar17 = FUN_071fc720(0);
  lVar15 = unaff_x20[0xc];
  uVar18 = *unaff_x22;
  uVar13 = *(undefined4 *)(unaff_x22 + 1);
  uVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                             );
  FUN_07055ae0(uVar19,10,1,0xfa,uVar17,(int)lVar15,uVar18,uVar13);
  *(undefined8 *)(unaff_x19 + 0x198) = uVar19;
  thunk_FUN_036b7ad0(unaff_x19 + 0x198,uVar19);
  uVar17 = FUN_071fc720(0);
  lVar15 = unaff_x20[0xc];
  uVar18 = *unaff_x22;
  uVar13 = *(undefined4 *)(unaff_x22 + 1);
  uVar19 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_07057578(uVar19,10,1,0xfa,uVar17,(int)lVar15,uVar18,uVar13);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar19;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1a0,uVar19);
  iVar2 = *(int *)(unaff_x19 + 0x2b0);
  uVar14 = 500;
  if (iVar2 != 1) {
    uVar14 = 400;
  }
  if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo + 0xe4) == 0)
  {
    thunk_FUN_036a1978();
  }
  puVar7 = OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum_TypeInfo;
  bVar12 = FUN_070056f4(0);
  puVar6 = 
  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo;
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo
                             );
  FUN_07050674(uVar17,uVar14,unaff_x27,1,0,iVar2 == 1 & bVar12,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1b0,uVar17);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x308);
  lVar15 = unaff_x20[0xc];
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                               Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c_TypeInfo);
  FUN_06fd49e4(uVar17,uVar14 | 1,uVar19,(int)lVar15,0);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x160,uVar17);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Threading_OSSpecificSynchronizationContext_<>c_TypeInfo);
  FUN_06fd1488(uVar17,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1a8,uVar17);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x2f0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValue_TypeInfo
                             );
  FUN_0704f37c(uVar17,400,uVar19,uVar18,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1b8,uVar17);
  lVar15 = unaff_x20[0xe];
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)Oculus_Interaction_Input_OVRCameraRigRef_<>c_TypeInfo);
  FUN_06ff6b6c(uVar17,0x1c2,(char)lVar15,0);
  *(undefined8 *)(unaff_x19 + 0x1c0) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1c0,uVar17);
  if (*(int *)(*(long *)PTR_DAT_07a006a8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar17 = FUN_071fc728(0);
  uVar13 = *(undefined4 *)((long)unaff_x20 + 100);
  uVar18 = *unaff_x22;
  uVar1 = *(undefined4 *)(unaff_x22 + 1);
  uVar19 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                             );
  FUN_07055ae0(uVar19,0xb,0,0x1c2,uVar17,uVar13,uVar18,uVar1);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar19;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1c8,uVar19);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)OVRAnchor_Telemetry_TypeInfo);
  FUN_06fd4340(uVar17,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1d0,uVar17);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x2f0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValue_TypeInfo
                             );
  FUN_0704f37c(uVar17,0x226,uVar19,uVar18,*(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x210,uVar17);
  uVar14 = FUN_070056f4(0);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
  FUN_07050674(uVar17,0x226,unaff_x27,0,uVar14 & 1,0,
               *(undefined8 *)OVRFaceExpressions_FaceExpression_TypeInfo,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x218,uVar17);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_06fcf2c8(uVar17,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x200,uVar17);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_06fcf2c8(uVar17,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x208) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x208,uVar17);
  FUN_06ff8f8c(0);
  in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x2e0);
  in_stack_000000a8 = extraout_x1;
  thunk_FUN_036b7ad0(&stack0x000000a0,in_stack_000000a0);
  puVar7 = PTR_DAT_079ff4c8;
  in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar15 = FUN_0702e180(0);
  puVar6 = PTR_DAT_079fdfb8;
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)PTR_DAT_079f4e28);
  }
  uVar16 = FUN_071c630c(lVar15,0);
  if ((uVar16 & 1) != 0) {
    if (lVar15 == 0) goto LAB_0701d984;
    cVar4 = *(char *)(lVar15 + 0x4d);
    uVar13 = *(undefined4 *)(lVar15 + 0x50);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar13 = FUN_070365f0(cVar4 != '\0',uVar13,0,0);
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,uVar13);
  }
  puVar11 = OVRFace_IMeshWeightsProvider_TypeInfo;
  puVar9 = OVRAnchor_TrackerConfiguration_TypeInfo;
  puVar10 = System_Threading_OSSpecificSynchronizationContext_InvocationContext_TypeInfo;
  puVar8 = 
  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetHashCodeClass_TypeInfo;
  puVar7 = OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId_TypeInfo;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  FUN_06ff9040(&stack0x00000030,unaff_x20[10],&stack0x000000a0,0);
  *(undefined8 *)(unaff_x19 + 0x318) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x310) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x328) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 800) = in_stack_00000040;
  *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000058;
  *(undefined8 *)(unaff_x19 + 0x330) = in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0x348) = in_stack_00000068;
  *(undefined8 *)(unaff_x19 + 0x340) = in_stack_00000060;
  thunk_FUN_036b7ad0(unaff_x19 + 0x310,0);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
  FUN_06fce7e4(uVar17,1000,0);
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1e0,uVar17);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e8);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar10);
  FUN_07058848(uVar17,0x3e9,uVar19,uVar18,0);
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1d8,uVar17);
  uVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar9);
  FUN_0705f548(uVar17,*(undefined8 *)puVar11,0);
  *(undefined8 *)(unaff_x19 + 0x228) = uVar17;
  thunk_FUN_036b7ad0(unaff_x19 + 0x228,uVar17);
  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_06fbf87c(lVar15,0);
  puVar7 = UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo;
  if (*(int *)(*(long *)UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  plVar20 = (long *)(unaff_x19 + 0xf0);
  *plVar20 = lVar15;
  thunk_FUN_036b7ad0(plVar20,lVar15);
  if ((*(uint *)(unaff_x19 + 0x2a8) | 2) == 3) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (*plVar20 == 0) {
LAB_0701d984:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(undefined1 *)(*plVar20 + 0x11) = 0;
  }
  puVar7 = UnityEngine_UIElements_RectField_TypeInfo;
  lVar15 = *(long *)UnityEngine_UIElements_RectField_TypeInfo;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar15 = *(long *)puVar7;
  }
  *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x24) = DAT_0164f880;
  FUN_06ed91c8(0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  bVar12 = FUN_071e17a8(0x1d,0);
  *(byte *)(unaff_x19 + 0x2dc) = bVar12 & 1;
  return;
}


