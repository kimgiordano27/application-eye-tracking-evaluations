/*
FUNCTION_NAME: Unity.Mathematics.RigidTransform$$Euler
ENTRY_POINT: 058d1644
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_5
*/


void Unity_Mathematics_RigidTransform__Euler(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
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
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  FUN_02d6084c(OVRInput_OVRControllerLHand_TypeInfo);
  FUN_02d6084c(OVRInput_OVRControllerLTouch_TypeInfo);
  FUN_02d6084c(OVRInput_OVRControllerRHand_TypeInfo);
  FUN_02d6084c(OVRInput_OVRControllerRTouch_TypeInfo);
  FUN_02d6084c(OVRInput_OVRControllerTouch_TypeInfo);
  FUN_02d6084c(UnityEngine_EventSystems_OVRInputModule_InputSource_TypeInfo);
  FUN_02d6084c(OVRManager_<>c_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xac3) = 1;
  puVar9 = OVRGLTFAnimatinonNode_OVRGLTFTransformType_TypeInfo;
  puVar8 = OVRFaceExpressions_FaceViseme_TypeInfo;
  puVar7 = OVRControllerHelper_ControllerType_TypeInfo;
  puVar6 = System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_TypeInfo;
  puVar5 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_ToStringClass_TypeInfo;
  puVar4 = System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_HasValue_TypeInfo;
  puVar3 = System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt64_TypeInfo;
  puVar2 = 
  System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32LiftedToNull_TypeInfo;
  puVar1 = System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualUInt32_TypeInfo;
  in_stack_00000128 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar12 = OVRInput_OVRControllerTouch_TypeInfo;
  puVar11 = OVRHaptics_Config_TypeInfo;
  puVar10 = OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo;
  FUN_034654e4(*(undefined8 *)puVar1,0,0,*(undefined8 *)puVar7);
  FUN_034654e4(*(undefined8 *)puVar3,0,0,*(undefined8 *)puVar5);
  FUN_034654e4(*(undefined8 *)puVar2,0,0,*(undefined8 *)puVar6);
  FUN_034654e4(0,0,0,*(undefined8 *)puVar9);
  FUN_034654e4(0,0,0,*(undefined8 *)puVar8);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_05905aa8(uVar13,0,*(undefined8 *)OVRGLTFLoader_<LoadGLBCoroutine>d__26_TypeInfo,0);
  FUN_05856014(uVar13,0);
  in_stack_00000128 = 0;
  if (*(int *)(*(long *)PTR_DAT_06768598 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHaptics_OVRHapticsChannel_TypeInfo,1,0);
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  FUN_03dccff4(&stack0x00000118,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000118,in_stack_00000120,
               *(undefined8 *)OVRFaceExpressions_FaceExpression_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHandTest_<>c_TypeInfo,1,0);
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  FUN_03dccff4(&stack0x00000108,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000108,in_stack_00000110,
               *(undefined8 *)OVRFaceExpressions_FaceExpressionsEnumerator_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,
                        *(undefined8 *)OVRGLTFLoader_<ProcessAnimations>d__48_TypeInfo,1,0);
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  FUN_03dccff4(&stack0x000000f8,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_000000f8,in_stack_00000100,
               *(undefined8 *)
                System_Threading_OSSpecificSynchronizationContext_InvocationContext_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_HapticInfo_TypeInfo,1,0);
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  FUN_03dccff4(&stack0x000000e8,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_000000e8,in_stack_000000f0,
               *(undefined8 *)OVRAnchor_<>c__DisplayClass54_0_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_OVRControllerHands_TypeInfo,1,0);
  in_stack_000000d8 = 0;
  in_stack_000000e0 = 0;
  FUN_03dccff4(&stack0x000000d8,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_000000d8,in_stack_000000e0,*(undefined8 *)OVRAnchor_FetchResult_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_OVRControllerLHand_TypeInfo,1,0);
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  FUN_03dccff4(&stack0x000000c8,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_000000c8,in_stack_000000d0,*(undefined8 *)OVRAnchor_DeferredKey_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRGLTFLoader_<LoadGLTF>d__37_TypeInfo,1,0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  FUN_03dccff4(&stack0x000000b8,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_000000b8,in_stack_000000c0,*(undefined8 *)OVRAnchor_ShareResult_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHand_MicrogestureType_TypeInfo,1,0);
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  FUN_03dccff4(&stack0x000000a8,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(*(undefined8 *)OVRInput_OVRControllerRTouch_TypeInfo,in_stack_000000a8,
               in_stack_000000b0,
               *(undefined8 *)
                System_Threading_OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_OVRControllerLTouch_TypeInfo,1,0);
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  FUN_03dccff4(&stack0x00000098,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000098,in_stack_000000a0,
               *(undefined8 *)Unity_VisualScripting_NumericNegationHandler_<>c_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRManager_<>c_TypeInfo,1,0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  FUN_03dccff4(&stack0x00000088,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000088,in_stack_00000090,
               *(undefined8 *)
                System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo)
  ;
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,
                        *(undefined8 *)UnityEngine_EventSystems_OVRInputModule_InputSource_TypeInfo,
                        1,0);
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  FUN_03dccff4(&stack0x00000078,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000078,in_stack_00000080,
               *(undefined8 *)
                System_Linq_Expressions_Interpreter_NumericConvertInstruction_Checked_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,
                        *(undefined8 *)OVRInput_OVRControllerGamepadAndroid_TypeInfo,1,0);
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  FUN_03dccff4(&stack0x00000068,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000068,in_stack_00000070,
               *(undefined8 *)OVRAnchor_TrackerConfiguration_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHandTest_BoolMonitor_TypeInfo,1,0);
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  FUN_03dccff4(&stack0x00000058,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000058,in_stack_00000060,*(undefined8 *)OVRAnchor_Telemetry_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  in_stack_00000128 = FUN_0583b1d8(&stack0x00000128,*(undefined8 *)puVar11,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_Controller_TypeInfo,1,0);
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  FUN_03dccff4(&stack0x00000048,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000048,in_stack_00000050,
               *(undefined8 *)OVRFace_IMeshWeightsProvider_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRGLTFLoader_<ProcessNode>d__38_TypeInfo,1,
                        0);
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_03dccff4(&stack0x00000038,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000038,in_stack_00000040,
               *(undefined8 *)OVRColocationSession_Result_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  in_stack_00000128 = FUN_0583b1d8(&stack0x00000128,*(undefined8 *)puVar11,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHaptics_OVRHapticsOutput_TypeInfo,1,0);
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  FUN_03dccff4(&stack0x00000028,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000028,in_stack_00000030,
               *(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  in_stack_00000128 = FUN_0583b1d8(&stack0x00000128,*(undefined8 *)puVar11,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHand_Hand_TypeInfo,1,0);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  FUN_03dccff4(&stack0x00000018,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000018,in_stack_00000020,
               *(undefined8 *)System_Threading_OSSpecificSynchronizationContext_<>c_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*(undefined8 *)puVar12,1,0);
  in_stack_00000128 = FUN_0583b1d8(&stack0x00000128,*(undefined8 *)puVar11,1,0);
  uVar13 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_OVRControllerRHand_TypeInfo,1,0);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_03dccff4(&stack0x00000008,uVar13,*(undefined8 *)puVar10);
  FUN_034654e4(0,in_stack_00000008,in_stack_00000010,*(undefined8 *)OVRControllerTest_<>c_TypeInfo);
  return;
}


