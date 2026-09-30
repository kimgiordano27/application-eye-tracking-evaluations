/*
FUNCTION_NAME: FUN_00f42470
ENTRY_POINT: 00f42470
PROGRAM: Lovesick-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_8;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_00f42470(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 uStack_128;
  long *local_120;
  long local_118;
  undefined8 uStack_110;
  long *local_108;
  long local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puVar10;
  
  puVar10 = Method_System_Reflection_MemberInfoSerializationHolder_GetObjectData__;
  if ((DAT_0377568b & 1) == 0) {
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
    DAT_0377568b = 1;
  }
  lVar4 = *(long *)puVar10;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar10;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_00f42770;
  uVar5 = FUN_0129eff4(**(long **)(lVar4 + 0xb8),param_2,&local_80,
                       *(undefined8 *)Method_UnityEngine_Resources_LoadAsync<TextAsset>__);
  puVar2 = System_Collections_Generic_Dictionary<uint,_int>_TypeInfo;
  if ((uVar5 & 1) != 0) goto LAB_00f42744;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_float>_TryGetValue__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_0115f9b4(param_2,*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    uVar5 = FUN_015ff8a0(*(undefined8 *)(lVar4 + 0x18),0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(lVar4 + 0x10) != 0) goto LAB_00f425b8;
LAB_00f425d8:
      uVar11 = 0;
    }
    else {
      if (*(long *)(lVar4 + 0x10) == 0) goto LAB_00f426fc;
LAB_00f425b8:
      uVar5 = FUN_015ff8a0(*(undefined8 *)(lVar4 + 0x18),0);
      if ((uVar5 & 1) != 0) {
        uVar13 = thunk_FUN_00d48444(
                                   Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                                   );
        if (param_2 == (long *)0x0) {
          uVar8 = 0;
          puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlb_u8__;
        }
        else {
          uVar13 = thunk_FUN_00d48444(
                                     Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                                     );
          uVar8 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
          puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqshlb_u8__;
        }
LAB_00f427b8:
        uVar9 = thunk_FUN_00d48444(puVar10);
        uVar13 = FUN_01600424(uVar13,uVar8,uVar9,0);
        thunk_FUN_00d48444(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                          );
        uVar8 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_017a9608(uVar8,uVar13,0);
        uVar13 = thunk_FUN_00d48444(StringLiteral_12589);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,uVar13);
      }
      if (*(long *)(lVar4 + 0x10) == 0) goto LAB_00f425d8;
      uVar11 = *(undefined4 *)(*(long *)(lVar4 + 0x10) + 0x18);
    }
    lVar6 = FUN_00da4fb8(*(undefined8 *)
                          Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_OnEnable__
                         ,uVar11);
    puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_48__;
    puVar2 = Method_System_Collections_Generic_Dictionary<Graphic,_int>__ctor__;
    if (lVar6 == 0) goto LAB_00f42770;
    if (0 < *(int *)(lVar6 + 0x18)) {
      uVar5 = 0;
      puVar14 = (undefined8 *)(lVar6 + 0x20);
      do {
        lVar12 = *(long *)(lVar4 + 0x10);
        if (lVar12 == 0) goto LAB_00f42770;
        if (*(uint *)(lVar12 + 0x18) <= uVar5) {
LAB_00f4276c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar13 = *(undefined8 *)(lVar12 + uVar5 * 8 + 0x20);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_00f42470(&local_d0,uVar13);
        uStack_98 = uStack_c8;
        local_a0 = local_d0;
        uStack_88 = uStack_b8;
        uStack_90 = local_c0;
        uVar7 = Meta_Voice_NLPRequestEvents<object,___Il2CppFullySharedGenericType>___ctor
                          (&local_a0,*(undefined8 *)puVar3);
        if ((uVar7 & 1) != 0) {
          local_d0 = thunk_FUN_00d48444(
                                       Method_OVRTask_FromResult<OVRResult<OVRAnchor_EraseResult>>__
                                       );
          uStack_c8 = 0xffffffffffffffff;
          uStack_b8 = uStack_98;
          local_c0 = local_a0;
          uStack_a8 = uStack_88;
          uStack_b0 = uStack_90;
          uVar8 = FUN_017cc6f4(&local_d0,0);
          uVar13 = thunk_FUN_00d48444(
                                     Method_Oculus_Interaction_PoseDetection_FeatureConfigBase<FingerFeature>_get_Feature__
                                     );
          puVar10 = 
          Method_System_Collections_Generic_Dictionary_KeyCollection<string,_string>_get_Count__;
          goto LAB_00f427b8;
        }
        FUN_0123eb18(&local_a0,&local_e8,*(undefined8 *)puVar2);
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 <= uVar5) goto LAB_00f4276c;
        uVar5 = uVar5 + 1;
        puVar14[2] = local_d8;
        puVar14[1] = uStack_e0;
        *puVar14 = local_e8;
        puVar14 = puVar14 + 3;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
    puVar2 = StringLiteral_2545;
    uVar13 = *(undefined8 *)(lVar4 + 0x18);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    local_100 = lVar6;
    uStack_f8 = uVar13;
    local_f0 = param_2;
    FUN_00f4285c(&local_100);
    local_118 = lVar6;
    uStack_110 = uVar13;
    local_108 = param_2;
    FUN_00f42b34(&local_118);
    local_130 = lVar6;
    uStack_128 = uVar13;
    local_120 = param_2;
    FUN_0115f810(&local_130,&local_d0,*(undefined8 *)puVar2);
    uStack_78 = uStack_c8;
    local_80 = local_d0;
    uStack_68 = uStack_b8;
    uStack_70 = local_c0;
  }
LAB_00f426fc:
  lVar4 = *(long *)puVar10;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar10;
  }
  uStack_c8 = uStack_78;
  local_d0 = local_80;
  uStack_b8 = uStack_68;
  local_c0 = uStack_70;
  if (**(long **)(lVar4 + 0xb8) != 0) {
    uStack_148 = uStack_78;
    local_150 = local_80;
    uStack_138 = uStack_68;
    uStack_140 = uStack_70;
    FUN_01299e64(**(long **)(lVar4 + 0xb8),param_2,&local_150,*(undefined8 *)StringLiteral_2403);
LAB_00f42744:
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    return;
  }
LAB_00f42770:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


