/*
FUNCTION_NAME: CyclingWordSet$$StoppedOnTargetValue
ENTRY_POINT: 00f4249c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void CyclingWordSet__StoppedOnTargetValue(ulong param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar10;
  long lVar11;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  long unaff_x24;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
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
  undefined *puVar9;
  
  plVar13 = *(long **)(unaff_x24 + 0x540);
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Resources_LoadAsync<TextAsset>__);
    thunk_FUN_00d48444(StringLiteral_2403);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_48__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Graphic,_int>__ctor__);
    thunk_FUN_00d48444(StringLiteral_2545);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<uint,_int>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__);
    thunk_FUN_00d48444(Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_OnEnable__
                      );
    *(undefined1 *)(unaff_x21 + 0x68b) = 1;
  }
  lVar3 = *plVar13;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *plVar13;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_00f42770;
  uVar4 = FUN_0129eff4(**(long **)(lVar3 + 0xb8),param_2,&stack0x000000e0,
                       *(undefined8 *)Method_UnityEngine_Resources_LoadAsync<TextAsset>__);
  puVar9 = System_Collections_Generic_Dictionary<uint,_int>_TypeInfo;
  if ((uVar4 & 1) != 0) goto LAB_00f42744;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar3 = FUN_0115f9b4(param_2,*(undefined8 *)puVar9);
  if (lVar3 != 0) {
    uVar4 = FUN_015ff8a0(*(undefined8 *)(lVar3 + 0x18),0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar3 + 0x10) != 0) goto LAB_00f425b8;
LAB_00f425d8:
      uVar10 = 0;
    }
    else {
      if (*(long *)(lVar3 + 0x10) == 0) goto LAB_00f426fc;
LAB_00f425b8:
      uVar4 = FUN_015ff8a0(*(undefined8 *)(lVar3 + 0x18),0);
      if ((uVar4 & 1) != 0) {
        uVar12 = thunk_FUN_00d48444(
                                   Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                                   );
        if (param_2 == (long *)0x0) {
          uVar7 = 0;
          puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlb_u8__;
        }
        else {
          uVar12 = thunk_FUN_00d48444(
                                     Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                                     );
          uVar7 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
          puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlb_u8__;
        }
LAB_00f427b8:
        uVar8 = thunk_FUN_00d48444(puVar9);
        uVar12 = FUN_01600424(uVar12,uVar7,uVar8,0);
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        uVar7 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017a9608(uVar7,uVar12,0);
        uVar12 = thunk_FUN_00d48444(StringLiteral_12589);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar7,uVar12);
      }
      if (*(long *)(lVar3 + 0x10) == 0) goto LAB_00f425d8;
      uVar10 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x18);
    }
    lVar5 = FUN_00da4fb8(*(undefined8 *)
                          Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_OnEnable__
                         ,uVar10);
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_48__;
    puVar9 = Method_System_Collections_Generic_Dictionary<Graphic,_int>__ctor__;
    if (lVar5 == 0) goto LAB_00f42770;
    if (0 < *(int *)(lVar5 + 0x18)) {
      uVar4 = 0;
      puVar14 = (undefined8 *)(lVar5 + 0x20);
      do {
        lVar11 = *(long *)(lVar3 + 0x10);
        if (lVar11 == 0) goto LAB_00f42770;
        if (*(uint *)(lVar11 + 0x18) <= uVar4) {
LAB_00f4276c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar12 = *(undefined8 *)(lVar11 + uVar4 * 8 + 0x20);
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_00f42470(&stack0x00000090,uVar12);
        in_stack_000000c8 = in_stack_00000098;
        in_stack_000000c0 = in_stack_00000090;
        in_stack_000000d8 = in_stack_000000a8;
        in_stack_000000d0 = in_stack_000000a0;
        uVar6 = Meta_Voice_NLPRequestEvents<object,___Il2CppFullySharedGenericType>___ctor
                          (&stack0x000000c0,*(undefined8 *)puVar2);
        if ((uVar6 & 1) != 0) {
          in_stack_00000090 =
               thunk_FUN_00d48444(Method_OVRTask_FromResult<OVRResult<OVRAnchor_EraseResult>>__);
          in_stack_00000098 = 0xffffffffffffffff;
          in_stack_000000a8 = in_stack_000000c8;
          in_stack_000000a0 = in_stack_000000c0;
          in_stack_000000b8 = in_stack_000000d8;
          in_stack_000000b0 = in_stack_000000d0;
          uVar7 = FUN_017cc6f4(&stack0x00000090,0);
          uVar12 = thunk_FUN_00d48444(
                                     Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<FingerFeature>_get_Feature__
                                     );
          puVar9 = 
          Method_System_Collections_Generic_Dictionary_KeyCollection<string,_string>_get_Count__;
          goto LAB_00f427b8;
        }
        FUN_0123eb18(&stack0x000000c0,&stack0x00000078,*(undefined8 *)puVar9);
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 <= uVar4) goto LAB_00f4276c;
        uVar4 = uVar4 + 1;
        puVar14[2] = in_stack_00000088;
        puVar14[1] = in_stack_00000080;
        *puVar14 = in_stack_00000078;
        puVar14 = puVar14 + 3;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    puVar9 = StringLiteral_2545;
    uVar12 = *(undefined8 *)(lVar3 + 0x18);
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00000060 = lVar5;
    in_stack_00000068 = uVar12;
    in_stack_00000070 = param_2;
    FUN_00f4285c(&stack0x00000060);
    in_stack_00000048 = lVar5;
    in_stack_00000050 = uVar12;
    in_stack_00000058 = param_2;
    FUN_00f42b34(&stack0x00000048);
    in_stack_00000030 = lVar5;
    in_stack_00000038 = uVar12;
    in_stack_00000040 = param_2;
    FUN_0115f810(&stack0x00000030,&stack0x00000090,*(undefined8 *)puVar9);
    in_stack_000000e8 = in_stack_00000098;
    in_stack_000000e0 = in_stack_00000090;
    in_stack_000000f8 = in_stack_000000a8;
    in_stack_000000f0 = in_stack_000000a0;
  }
LAB_00f426fc:
  lVar3 = *plVar13;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *plVar13;
  }
  in_stack_00000098 = in_stack_000000e8;
  in_stack_00000090 = in_stack_000000e0;
  in_stack_000000a8 = in_stack_000000f8;
  in_stack_000000a0 = in_stack_000000f0;
  if (**(long **)(lVar3 + 0xb8) != 0) {
    in_stack_00000018 = in_stack_000000e8;
    in_stack_00000010 = in_stack_000000e0;
    in_stack_00000028 = in_stack_000000f8;
    in_stack_00000020 = in_stack_000000f0;
    FUN_01299e64(**(long **)(lVar3 + 0xb8),param_2,&stack0x00000010,
                 *(undefined8 *)StringLiteral_2403);
LAB_00f42744:
    unaff_x20[1] = in_stack_000000e8;
    *unaff_x20 = in_stack_000000e0;
    unaff_x20[3] = in_stack_000000f8;
    unaff_x20[2] = in_stack_000000f0;
    return;
  }
LAB_00f42770:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


