/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$FinishSetup
ENTRY_POINT: 0701caac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 128
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_4
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__FinishSetup(void)

{
  undefined1 (*pauVar1) [12];
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 extraout_x1;
  long unaff_x19;
  long *unaff_x20;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar22;
  undefined1 auVar23 [12];
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
  long in_stack_00000108;
  
  thunk_FUN_036b7ad0();
  if (in_stack_00000108 == 0) goto LAB_0701d984;
  uVar21 = *(undefined8 *)(in_stack_00000108 + 0x38);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                               Oculus_Interaction_OVR_Input_OVRAxis1D_RemapConfig_TypeInfo);
  FUN_06ff6224(uVar15,uVar21,0);
  *(undefined8 *)(unaff_x19 + 0x220) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x220,uVar15);
  if (unaff_x20 == (long *)0x0) goto LAB_0701d984;
  lVar20 = unaff_x20[0xd];
  pauVar1 = (undefined1 (*) [12])(unaff_x19 + 0x2bd);
  auVar23 = FUN_071fc980(0);
  *pauVar1 = auVar23;
  puVar7 = Oculus_Interaction_ControllerSelector_<>c_TypeInfo;
  if (lVar20 == 0) goto LAB_0701d984;
  FUN_07200fe8(pauVar1,*(undefined1 *)(lVar20 + 0x10),0);
  FUN_07201074(pauVar1,*(undefined4 *)(lVar20 + 0x18),0);
  FUN_07201090(pauVar1,*(undefined4 *)(lVar20 + 0x1c),0);
  FUN_072010ac(pauVar1,*(undefined4 *)(lVar20 + 0x20),0);
  FUN_072010c8(pauVar1,*(undefined4 *)(lVar20 + 0x24),0);
  lVar16 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2d8) = *(undefined4 *)((long)unaff_x20 + 0x8c);
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar17 = FUN_03d1b724(&stack0x00000100,*(undefined8 *)puVar7);
  if ((uVar17 & 1) == 0) {
LAB_0701cba8:
    uVar13 = (undefined4)unaff_x20[0xc];
    *(undefined4 *)(unaff_x19 + 0x350) = uVar13;
  }
  else {
    if (in_stack_00000100 == 0) goto LAB_0701d984;
    uVar17 = FUN_070081e8(in_stack_00000100,0);
    if ((uVar17 & 1) != 0) goto LAB_0701cba8;
    *(undefined4 *)(unaff_x19 + 0x350) = *(undefined4 *)((long)unaff_x20 + 0x5c);
    uVar13 = (undefined4)unaff_x20[0xc];
  }
  *(undefined4 *)(unaff_x19 + 0x354) = uVar13;
  puVar7 = PTR_DAT_079ff4c8;
  *(undefined4 *)(unaff_x19 + 0x358) = *(undefined4 *)((long)unaff_x20 + 100);
  lVar16 = *(long *)puVar7;
  *(char *)(unaff_x19 + 0x35c) = (char)unaff_x20[0xe];
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar6 = PTR_DAT_079f4e28;
  lVar16 = FUN_0702e180(0);
  if ((lVar16 != 0) && (*(char *)(lVar16 + 0xf7) != '\0')) {
    FUN_06fc8c9c(&stack0x00000030,0);
    in_stack_000000d8 = in_stack_00000038;
    in_stack_000000d0 = in_stack_00000030;
    in_stack_000000e0 = in_stack_00000040;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar16 = FUN_0702e180(0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar6);
    }
    uVar17 = FUN_071c630c(lVar16,0);
    if ((uVar17 & 1) != 0) {
      if (lVar16 == 0) goto LAB_0701d984;
      uVar13 = FUN_06f89eb4(lVar16,0);
      in_stack_000000d8 = CONCAT44(in_stack_000000d8._4_4_,uVar13);
      in_stack_000000d0 = FUN_06f8a0dc(lVar16,0);
    }
    uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                 OVR_OpenVR_IVROverlay__GetOverlayRenderingPid_TypeInfo);
    FUN_06fc6088(uVar15,&stack0x000000d0,0);
    *(undefined8 *)(unaff_x19 + 0x2d0) = uVar15;
    thunk_FUN_036b7ad0(unaff_x19 + 0x2d0,uVar15);
  }
  bVar12 = (**(code **)(*unaff_x20 + 0x178))();
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x25);
  }
  *(byte *)(unaff_x19 + 0x141) = bVar12 & 1;
  bVar12 = (**(code **)(*unaff_x20 + 0x198))();
  lVar16 = *unaff_x24;
  *(byte *)(unaff_x19 + 0x142) = bVar12 & 1;
  if (*(int *)(lVar16 + 0xe4) == 0) {
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
  lVar16 = *unaff_x24;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar16 = *unaff_x24;
  }
  puVar9 = System_Linq_Expressions_Interpreter_NumericConvertInstruction_Checked_TypeInfo;
  in_stack_000000f0 = *(undefined8 *)(unaff_x19 + 0x2d0);
  *(byte *)(unaff_x19 + 0x142) = *(byte *)(*(long *)(lVar16 + 0xb8) + 8) ^ 1;
  thunk_FUN_036b7ad0(&stack0x000000f0);
  uVar21 = in_stack_000000f0;
  uStack00000000000000f8 = (*(uint *)((long)unaff_x20 + 0x74) & 0xfffffffe) == 2;
  uVar15 = CONCAT71(uStack00000000000000f9,uStack00000000000000f8);
  uVar18 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
  FUN_07048dd8(uVar18,uVar21,uVar15,0);
  *(undefined8 *)(unaff_x19 + 0x298) = uVar18;
  thunk_FUN_036b7ad0(unaff_x19 + 0x298,uVar18);
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)((long)unaff_x20 + 0x74);
  *(undefined4 *)(unaff_x19 + 0x2b0) = *(undefined4 *)((long)unaff_x20 + 0x7c);
  uVar13 = FUN_06fc0aa4();
  *(undefined4 *)(unaff_x19 + 0x2b4) = uVar13;
  uVar13 = FUN_06fc0bfc();
  uVar15 = *(undefined8 *)puVar7;
  *(undefined4 *)(unaff_x19 + 0x2b8) = uVar13;
  lVar16 = unaff_x20[8];
  *(undefined1 *)(unaff_x19 + 700) = 0;
  *(char *)(unaff_x19 + 0x134) = (char)lVar16;
  uVar15 = thunk_FUN_0367fe20(uVar15);
  FUN_0705c6c4(uVar15,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x168,uVar15);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
  FUN_07043a28(uVar15,0x32,0);
  *(undefined8 *)(unaff_x19 + 0x170) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x170,uVar15);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar10);
  FUN_06ff8660(uVar15,0xfa,0);
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1e8,uVar15);
  puVar7 = 
  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo;
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo
                             );
  FUN_07050674(uVar15,0x3ea,unaff_x27,0,0,0,0,0);
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1f0,uVar15);
  if (*(int *)(*(long *)PTR_DAT_07a006a8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar15 = FUN_071fc720(0);
  uVar13 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar21 = thunk_FUN_0367fe20(*(undefined8 *)puVar9);
  FUN_070544c8(uVar21,0x96,uVar15,uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar21;
  thunk_FUN_036b7ad0(unaff_x19 + 0x148,uVar21);
  uVar15 = FUN_071fc720(0);
  uVar13 = *(undefined4 *)(unaff_x19 + 0x350);
  uVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo
                             );
  FUN_07052aac(uVar21,0x96,uVar15,uVar13,0);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar21;
  thunk_FUN_036b7ad0(unaff_x19 + 0x150,uVar21);
  uVar14 = *(uint *)(unaff_x19 + 0x2a8);
  if ((uVar14 | 2) == 2) {
    uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
    FUN_07050674(uVar15,200,unaff_x27,1,1,0,0,0);
    *(undefined8 *)(unaff_x19 + 0x158) = uVar15;
    thunk_FUN_036b7ad0(unaff_x19 + 0x158,uVar15);
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
    uVar4 = *(undefined1 *)(unaff_x19 + 0x134);
    in_stack_000000c8 = CONCAT71(in_stack_000000c8._1_7_,*(int *)(unaff_x19 + 0x2a8) == 3);
    in_stack_00000038 = in_stack_000000b8;
    in_stack_00000030 = in_stack_000000b0;
    in_stack_00000048 = in_stack_000000c8;
    in_stack_00000040 = in_stack_000000c0;
    uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
    in_stack_00000088 = in_stack_00000038;
    in_stack_00000080 = in_stack_00000030;
    in_stack_00000098 = in_stack_00000048;
    in_stack_00000090 = in_stack_00000040;
    FUN_0703c6d0(uVar15,&stack0x00000080,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x2a0) = uVar15;
    thunk_FUN_036b7ad0(unaff_x19 + 0x2a0,uVar15);
    puVar7 = PTR_DAT_07a006a8;
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_0701d984;
    *(char *)(*(long *)(unaff_x19 + 0x2a0) + 0x19) = (char)unaff_x20[0x11];
    puVar6 = OVRAnchor_DeferredKey_TypeInfo;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar15 = FUN_071fc720(0);
    lVar16 = unaff_x20[0xc];
    uVar18 = *(undefined8 *)*pauVar1;
    uVar13 = *(undefined4 *)(unaff_x19 + 0x2c5);
    uVar2 = *(undefined4 *)(lVar20 + 0x14);
    uVar22 = *(undefined8 *)(unaff_x19 + 0x2a0);
    uVar21 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
    FUN_0705a9dc(uVar21,0xd2,uVar15,(int)lVar16,uVar18,uVar13,uVar2,uVar22);
    *(undefined8 *)(unaff_x19 + 0x178) = uVar21;
    thunk_FUN_036b7ad0(unaff_x19 + 0x178,uVar21);
    uVar15 = *(undefined8 *)*pauVar1;
    uVar13 = *(undefined4 *)(unaff_x19 + 0x2c5);
    if (*(int *)(*(long *)
                  System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_0703ec20(uVar15,uVar13,0x60,0);
    lVar20 = FUN_03642a4c(*(undefined8 *)Oculus_Platform_Message_Callback_TypeInfo,3);
    uStack000000000000007c = 0;
    FUN_07200324((long)&stack0x00000078 + 4,
                 *(undefined8 *)
                  Oculus_Interaction_InteractorControllerDecorator_ValueDecorator_TypeInfo,0);
    puVar7 = Oculus_Interaction_InteractorControllerDecorator_Decorator_TypeInfo;
    if (lVar20 == 0) goto LAB_0701d984;
    if (*(int *)(lVar20 + 0x18) == 0) {
LAB_0701d988:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined4 *)(lVar20 + 0x20) = uStack000000000000007c;
    uStack0000000000000078 = 0;
    FUN_07200324(&stack0x00000078,*(undefined8 *)puVar7,0);
    puVar7 = OVRControllerHelper_ControllerType_TypeInfo;
    if ((*(uint *)(lVar20 + 0x18) & 0xfffffffe) == 0) goto LAB_0701d988;
    *(undefined4 *)(lVar20 + 0x24) = uStack0000000000000078;
    in_stack_00000070._4_4_ = 0;
    FUN_07200324((long)&stack0x00000070 + 4,*(undefined8 *)puVar7,0);
    puVar6 = OVRControllerTest_<>c_TypeInfo;
    puVar7 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_HasValue_TypeInfo;
    if (*(uint *)(lVar20 + 0x18) < 3) goto LAB_0701d988;
    *(undefined4 *)(lVar20 + 0x28) = in_stack_00000070._4_4_;
    uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                 System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo
                               );
    FUN_07050674(uVar15,0xd3,unaff_x27,1,0,0,*(undefined8 *)puVar6,0);
    *(undefined8 *)(unaff_x19 + 0x180) = uVar15;
    thunk_FUN_036b7ad0(unaff_x19 + 0x180,uVar15);
    uVar21 = *(undefined8 *)(unaff_x19 + 0x2a0);
    uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
    FUN_07051f54(uVar15,0xe6,uVar21,0);
    *(undefined8 *)(unaff_x19 + 0x188) = uVar15;
    thunk_FUN_036b7ad0(unaff_x19 + 0x188,uVar15);
    uVar15 = FUN_071fc720(0);
    lVar16 = unaff_x20[0xc];
    uVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                                 System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                               );
    FUN_07055628(uVar21,*(undefined8 *)OVRFaceExpressions_FaceExpressionsEnumerator_TypeInfo,lVar20,
                 1,0xfa,uVar15,(int)lVar16);
    *(undefined8 *)(unaff_x19 + 400) = uVar21;
    thunk_FUN_036b7ad0(unaff_x19 + 400,uVar21);
  }
  puVar7 = System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_07a006a8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar15 = FUN_071fc720(0);
  lVar20 = unaff_x20[0xc];
  uVar18 = *(undefined8 *)*pauVar1;
  uVar13 = *(undefined4 *)(unaff_x19 + 0x2c5);
  uVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                             );
  FUN_07055ae0(uVar21,10,1,0xfa,uVar15,(int)lVar20,uVar18,uVar13);
  *(undefined8 *)(unaff_x19 + 0x198) = uVar21;
  thunk_FUN_036b7ad0(unaff_x19 + 0x198,uVar21);
  uVar15 = FUN_071fc720(0);
  lVar20 = unaff_x20[0xc];
  uVar18 = *(undefined8 *)*pauVar1;
  uVar13 = *(undefined4 *)(unaff_x19 + 0x2c5);
  uVar21 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_07057578(uVar21,10,1,0xfa,uVar15,(int)lVar20,uVar18,uVar13);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar21;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1a0,uVar21);
  iVar3 = *(int *)(unaff_x19 + 0x2b0);
  uVar14 = 500;
  if (iVar3 != 1) {
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
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault_TypeInfo
                             );
  FUN_07050674(uVar15,uVar14,unaff_x27,1,0,iVar3 == 1 & bVar12,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1b0,uVar15);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x308);
  lVar20 = unaff_x20[0xc];
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                               Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c_TypeInfo);
  FUN_06fd49e4(uVar15,uVar14 | 1,uVar21,(int)lVar20,0);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x160,uVar15);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Threading_OSSpecificSynchronizationContext_<>c_TypeInfo);
  FUN_06fd1488(uVar15,0x15e,0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1a8,uVar15);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x2f0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValue_TypeInfo
                             );
  FUN_0704f37c(uVar15,400,uVar21,uVar18,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1b8,uVar15);
  lVar20 = unaff_x20[0xe];
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)Oculus_Interaction_Input_OVRCameraRigRef_<>c_TypeInfo);
  FUN_06ff6b6c(uVar15,0x1c2,(char)lVar20,0);
  *(undefined8 *)(unaff_x19 + 0x1c0) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1c0,uVar15);
  if (*(int *)(*(long *)PTR_DAT_07a006a8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar15 = FUN_071fc728(0);
  uVar13 = *(undefined4 *)((long)unaff_x20 + 100);
  uVar18 = *(undefined8 *)*pauVar1;
  uVar2 = *(undefined4 *)(unaff_x19 + 0x2c5);
  uVar21 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                             );
  FUN_07055ae0(uVar21,0xb,0,0x1c2,uVar15,uVar13,uVar18,uVar2);
  *(undefined8 *)(unaff_x19 + 0x1c8) = uVar21;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1c8,uVar21);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)OVRAnchor_Telemetry_TypeInfo);
  FUN_06fd4340(uVar15,0x226,0);
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1d0,uVar15);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x2f0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValue_TypeInfo
                             );
  FUN_0704f37c(uVar15,0x226,uVar21,uVar18,*(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo,0);
  *(undefined8 *)(unaff_x19 + 0x210) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x210,uVar15);
  uVar14 = FUN_070056f4(0);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
  FUN_07050674(uVar15,0x226,unaff_x27,0,uVar14 & 1,0,
               *(undefined8 *)OVRFaceExpressions_FaceExpression_TypeInfo,0);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x218,uVar15);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_06fcf2c8(uVar15,0x226,1,0);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x200,uVar15);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_06fcf2c8(uVar15,0x3ea,0,0);
  *(undefined8 *)(unaff_x19 + 0x208) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x208,uVar15);
  FUN_06ff8f8c(0);
  in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x2e0);
  in_stack_000000a8 = extraout_x1;
  thunk_FUN_036b7ad0(&stack0x000000a0,in_stack_000000a0);
  puVar7 = PTR_DAT_079ff4c8;
  in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,0x4a);
  if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar20 = FUN_0702e180(0);
  puVar6 = PTR_DAT_079fdfb8;
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)PTR_DAT_079f4e28);
  }
  uVar17 = FUN_071c630c(lVar20,0);
  if ((uVar17 & 1) != 0) {
    if (lVar20 == 0) goto LAB_0701d984;
    cVar5 = *(char *)(lVar20 + 0x4d);
    uVar13 = *(undefined4 *)(lVar20 + 0x50);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar13 = FUN_070365f0(cVar5 != '\0',uVar13,0,0);
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
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
  FUN_06fce7e4(uVar15,1000,0);
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1e0,uVar15);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e8);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar10);
  FUN_07058848(uVar15,0x3e9,uVar21,uVar18,0);
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x1d8,uVar15);
  uVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar9);
  FUN_0705f548(uVar15,*(undefined8 *)puVar11,0);
  *(undefined8 *)(unaff_x19 + 0x228) = uVar15;
  thunk_FUN_036b7ad0(unaff_x19 + 0x228,uVar15);
  lVar20 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
  FUN_06fbf87c(lVar20,0);
  puVar7 = UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo;
  if (*(int *)(*(long *)UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  plVar19 = (long *)(unaff_x19 + 0xf0);
  *plVar19 = lVar20;
  thunk_FUN_036b7ad0(plVar19,lVar20);
  if ((*(uint *)(unaff_x19 + 0x2a8) | 2) == 3) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (*plVar19 == 0) {
LAB_0701d984:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(undefined1 *)(*plVar19 + 0x11) = 0;
  }
  puVar7 = UnityEngine_UIElements_RectField_TypeInfo;
  lVar20 = *(long *)UnityEngine_UIElements_RectField_TypeInfo;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar20 = *(long *)puVar7;
  }
  *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x24) = DAT_0164f880;
  FUN_06ed91c8(0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  bVar12 = FUN_071e17a8(0x1d,0);
  *(byte *)(unaff_x19 + 0x2dc) = bVar12 & 1;
  return;
}


