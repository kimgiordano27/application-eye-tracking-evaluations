/*
FUNCTION_NAME: CyclingWordPuzzle$$.ctor
ENTRY_POINT: 00f425c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void CyclingWordPuzzle___ctor(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar9;
  long lVar10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long *unaff_x24;
  undefined8 *puVar12;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
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
  undefined *puVar8;
  
  uVar3 = FUN_015ff8a0();
  if ((uVar3 & 1) != 0) {
    uVar11 = thunk_FUN_00d48444(
                               Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                               );
    if (unaff_x19 == (long *)0x0) {
      uVar6 = 0;
      puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlb_u8__;
    }
    else {
      uVar11 = thunk_FUN_00d48444(
                                 Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                                 );
      uVar6 = (**(code **)(*unaff_x19 + 0x168))();
      puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlb_u8__;
    }
LAB_00f427b8:
    uVar7 = thunk_FUN_00d48444(puVar8);
    uVar11 = FUN_01600424(uVar11,uVar6,uVar7,0);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                      );
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017a9608(uVar6,uVar11,0);
    uVar11 = thunk_FUN_00d48444(StringLiteral_12589);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar11);
  }
  if (*(long *)(unaff_x21 + 0x10) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined4 *)(*(long *)(unaff_x21 + 0x10) + 0x18);
  }
  lVar4 = FUN_00da4fb8(*(undefined8 *)
                        Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_OnEnable__
                       ,uVar9);
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_48__;
  puVar8 = Method_System_Collections_Generic_Dictionary<Graphic,_int>__ctor__;
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar3 = 0;
      puVar12 = (undefined8 *)(lVar4 + 0x20);
      do {
        lVar10 = *(long *)(unaff_x21 + 0x10);
        if (lVar10 == 0) goto LAB_00f42770;
        if (*(uint *)(lVar10 + 0x18) <= uVar3) {
LAB_00f4276c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar11 = *(undefined8 *)(lVar10 + uVar3 * 8 + 0x20);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_00f42470(&stack0x00000090,uVar11);
        in_stack_000000c8 = in_stack_00000098;
        in_stack_000000c0 = in_stack_00000090;
        in_stack_000000d8 = in_stack_000000a8;
        in_stack_000000d0 = in_stack_000000a0;
        uVar5 = Meta_Voice_NLPRequestEvents<object,___Il2CppFullySharedGenericType>___ctor
                          (&stack0x000000c0,*(undefined8 *)puVar2);
        if ((uVar5 & 1) != 0) {
          in_stack_00000090 =
               thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRResult<OVRAnchor_EraseResult>>__);
          in_stack_00000098 = 0xffffffffffffffff;
          in_stack_000000a8 = in_stack_000000c8;
          in_stack_000000a0 = in_stack_000000c0;
          in_stack_000000b8 = in_stack_000000d8;
          in_stack_000000b0 = in_stack_000000d0;
          uVar6 = FUN_017cc6f4(&stack0x00000090,0);
          uVar11 = thunk_FUN_00d48444(
                                     Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<FingerFeature>_get_Feature__
                                     );
          puVar8 = 
          Method_System_Collections_Generic_Dictionary_KeyCollection<string,_string>_get_Count__;
          goto LAB_00f427b8;
        }
        FUN_0123eb18(&stack0x000000c0,&stack0x00000078,*(undefined8 *)puVar8);
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 <= uVar3) goto LAB_00f4276c;
        uVar3 = uVar3 + 1;
        puVar12[2] = in_stack_00000088;
        puVar12[1] = in_stack_00000080;
        *puVar12 = in_stack_00000078;
        puVar12 = puVar12 + 3;
      } while ((long)uVar3 < (long)(int)uVar1);
    }
    puVar8 = StringLiteral_2545;
    uVar11 = *(undefined8 *)(unaff_x21 + 0x18);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00000060 = lVar4;
    in_stack_00000068 = uVar11;
    FUN_00f4285c(&stack0x00000060);
    in_stack_00000048 = lVar4;
    in_stack_00000050 = uVar11;
    FUN_00f42b34(&stack0x00000048);
    in_stack_00000030 = lVar4;
    in_stack_00000038 = uVar11;
    FUN_0115f810(&stack0x00000030,&stack0x00000090,*(undefined8 *)puVar8);
    in_stack_000000e8 = in_stack_00000098;
    in_stack_000000e0 = in_stack_00000090;
    in_stack_000000f8 = in_stack_000000a8;
    in_stack_000000f0 = in_stack_000000a0;
    lVar4 = *unaff_x24;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *unaff_x24;
    }
    in_stack_00000098 = in_stack_000000e8;
    in_stack_00000090 = in_stack_000000e0;
    in_stack_000000a8 = in_stack_000000f8;
    in_stack_000000a0 = in_stack_000000f0;
    if (**(long **)(lVar4 + 0xb8) != 0) {
      FUN_01299e64();
      unaff_x20[1] = in_stack_000000e8;
      *unaff_x20 = in_stack_000000e0;
      unaff_x20[3] = in_stack_000000f8;
      unaff_x20[2] = in_stack_000000f0;
      return;
    }
  }
LAB_00f42770:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


