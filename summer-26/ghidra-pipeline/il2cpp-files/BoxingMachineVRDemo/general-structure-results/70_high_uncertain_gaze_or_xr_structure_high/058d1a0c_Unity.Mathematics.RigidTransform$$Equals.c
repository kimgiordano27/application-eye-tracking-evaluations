/*
FUNCTION_NAME: Unity.Mathematics.RigidTransform$$Equals
ENTRY_POINT: 058d1a0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Unity_Mathematics_RigidTransform__Equals
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
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
  undefined8 in_stack_00000128;
  
  FUN_034654e4(0,param_3,param_4,*param_1);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRGLTFLoader_<LoadGLTF>d__37_TypeInfo,1,0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  FUN_03dccff4(&stack0x000000b8,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_000000b8,in_stack_000000c0,*(undefined8 *)OVRAnchor_ShareResult_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHand_MicrogestureType_TypeInfo,1,0);
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  FUN_03dccff4(&stack0x000000a8,uVar1,*unaff_x20);
  FUN_034654e4(*(undefined8 *)OVRInput_OVRControllerRTouch_TypeInfo,in_stack_000000a8,
               in_stack_000000b0,
               *(undefined8 *)
                System_Threading_OSSpecificSynchronizationContext_InvocationEntryDelegate_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_OVRControllerLTouch_TypeInfo,1,0);
  in_stack_00000098 = 0;
  in_stack_000000a0 = 0;
  FUN_03dccff4(&stack0x00000098,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000098,in_stack_000000a0,
               *(undefined8 *)Unity_VisualScripting_NumericNegationHandler_<>c_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRManager_<>c_TypeInfo,1,0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  FUN_03dccff4(&stack0x00000088,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000088,in_stack_00000090,
               *(undefined8 *)
                System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo)
  ;
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,
                       *(undefined8 *)UnityEngine_EventSystems_OVRInputModule_InputSource_TypeInfo,1
                       ,0);
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  FUN_03dccff4(&stack0x00000078,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000078,in_stack_00000080,
               *(undefined8 *)
                System_Linq_Expressions_Interpreter_NumericConvertInstruction_Checked_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_OVRControllerGamepadAndroid_TypeInfo
                       ,1,0);
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  FUN_03dccff4(&stack0x00000068,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000068,in_stack_00000070,
               *(undefined8 *)OVRAnchor_TrackerConfiguration_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHandTest_BoolMonitor_TypeInfo,1,0);
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  FUN_03dccff4(&stack0x00000058,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000058,in_stack_00000060,*(undefined8 *)OVRAnchor_Telemetry_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  in_stack_00000128 = FUN_0583b1d8(&stack0x00000128,*unaff_x23,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_Controller_TypeInfo,1,0);
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  FUN_03dccff4(&stack0x00000048,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000048,in_stack_00000050,
               *(undefined8 *)OVRFace_IMeshWeightsProvider_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRGLTFLoader_<ProcessNode>d__38_TypeInfo,1,0
                      );
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_03dccff4(&stack0x00000038,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000038,in_stack_00000040,
               *(undefined8 *)OVRColocationSession_Result_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  in_stack_00000128 = FUN_0583b1d8(&stack0x00000128,*unaff_x23,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHaptics_OVRHapticsOutput_TypeInfo,1,0);
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  FUN_03dccff4(&stack0x00000028,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000028,in_stack_00000030,
               *(undefined8 *)OVRControllerTest_BoolMonitor_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  in_stack_00000128 = FUN_0583b1d8(&stack0x00000128,*unaff_x23,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRHand_Hand_TypeInfo,1,0);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  FUN_03dccff4(&stack0x00000018,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000018,in_stack_00000020,
               *(undefined8 *)System_Threading_OSSpecificSynchronizationContext_<>c_TypeInfo);
  in_stack_00000128 = 0;
  in_stack_00000128 = FUN_0583aee0(&stack0x00000128,*unaff_x21,1,0);
  in_stack_00000128 = FUN_0583b1d8(&stack0x00000128,*unaff_x23,1,0);
  uVar1 = FUN_0583b2c4(&stack0x00000128,*(undefined8 *)OVRInput_OVRControllerRHand_TypeInfo,1,0);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_03dccff4(&stack0x00000008,uVar1,*unaff_x20);
  FUN_034654e4(0,in_stack_00000008,in_stack_00000010,*(undefined8 *)OVRControllerTest_<>c_TypeInfo);
  return;
}


