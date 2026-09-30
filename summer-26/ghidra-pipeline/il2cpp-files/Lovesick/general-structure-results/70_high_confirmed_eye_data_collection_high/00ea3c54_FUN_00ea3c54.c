/*
FUNCTION_NAME: FUN_00ea3c54
ENTRY_POINT: 00ea3c54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;negative_known_unity_or_il2cpp_false_positive_family;negative_generic_rendering_without_foveation_or_eye_source;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_00ea3c54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long local_68;
  
  if ((DAT_037750bf & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00000D6E_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<IXRGroupMember>_MoveNext__
                      );
    thunk_FUN_00d48444(UnityEngine_ProBuilder_SelectionPickerRenderer_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<TranscriptionEventListener>__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_ButtonControl___TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<int,_Panel>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_u64__);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_FromResult<Tuple<int,_int,_int,_bool>>__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(Method_OVRFaceExpressions_OnPermissionGranted__);
    thunk_FUN_00d48444(PTR_DAT_033f75b8);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<XRHumanBodyPose2DJoint>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_TryGetComponent<OVRSceneAnchor>__);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_get_Item__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<EventCallbackFunctorBase>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ValueTuple<List<OVRSpaceUser>,_List<OVRSpatialAnchor>>>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaeseq_u8__);
    DAT_037750bf = 1;
  }
  puVar2 = Method_Unity_Collections_NativeArray<XRHumanBodyPose2DJoint>__ctor__;
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) goto LAB_00ea4128;
  if (*(int *)(lVar6 + 0x18) == 1) {
    FUN_0132138c(lVar6,0,&local_68,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<XRHumanBodyPose2DJoint>__ctor__
                );
    puVar1 = 
    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizeOptimalRotation_00000D6E_PostfixBurstDelegate_var
    ;
    if ((local_68 == 0) || (*(long *)(local_68 + 0x10) == 0)) goto LAB_00ea4128;
    if (*(int *)(*(long *)(local_68 + 0x10) + 0x18) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00ea4128;
      FUN_0132138c(*(long *)(param_1 + 0x18),0,&local_68,*(undefined8 *)puVar2);
      lVar6 = local_68;
      uVar7 = FUN_010c3404(param_1,*(undefined8 *)puVar1);
      uVar7 = FUN_010dfe04(uVar7,*(undefined8 *)
                                  Method_UnityEngine_Component_GetComponent<TranscriptionEventListener>__
                          );
      if (lVar6 == 0) goto LAB_00ea4128;
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
    }
  }
  puVar1 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__ + 0xe0)
      == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03774e19 == '\0') {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    DAT_03774e19 = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar6 = *(long *)puVar1;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    lVar10 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(**(long **)(lVar6 + 0xb8) + 0x30);
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaeseq_u8__;
    puVar4 = Method_System_Threading_Tasks_Task_FromResult<Tuple<int,_int,_int,_bool>>__;
    puVar3 = Method_UnityEngine_Component_TryGetComponent<OVRSceneAnchor>__;
    puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<IXRGroupMember>_MoveNext__;
    if (lVar10 != 0) {
      iVar9 = 0;
      while (iVar9 < *(int *)(lVar10 + 0x18)) {
        FUN_0132138c(lVar10,iVar9,&local_68,*(undefined8 *)puVar2);
        if ((local_68 == 0) || (*(long *)(local_68 + 0x10) == 0)) goto LAB_00ea4128;
        if (*(int *)(*(long *)(local_68 + 0x10) + 0x18) == 0) {
LAB_00ea4028:
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_00ea4128;
          FUN_0132149c(*(long *)(param_1 + 0x18),iVar9,0,*(undefined8 *)puVar3);
        }
        else {
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (FUN_0132138c(*(long *)(param_1 + 0x18),iVar9,&local_68,*(undefined8 *)puVar2),
             local_68 == 0)) goto LAB_00ea4128;
          lVar6 = *(long *)puVar5;
          uVar7 = *(undefined8 *)(local_68 + 0x10);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar5;
          }
          lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar10 == 0) {
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar6 = *(long *)puVar5;
            }
            uVar12 = **(undefined8 **)(lVar6 + 0xb8);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar10 == 0) goto LAB_00ea4128;
            FUN_012d239c(lVar10,uVar12,
                         *(undefined8 *)
                          System_Collections_Generic_List<EventCallbackFunctorBase>_TypeInfo,0);
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = lVar10;
          }
          uVar8 = FUN_010d7cf0(uVar7,lVar10,*(undefined8 *)puVar1);
          if ((uVar8 & 1) == 0) goto LAB_00ea4028;
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_00ea4128;
          FUN_0132138c(*(long *)(param_1 + 0x18),iVar9,&local_68,*(undefined8 *)puVar2);
          lVar6 = local_68;
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (FUN_0132138c(*(long *)(param_1 + 0x18),iVar9,&local_68,*(undefined8 *)puVar2),
             local_68 == 0)) goto LAB_00ea4128;
          lVar10 = *(long *)puVar5;
          uVar7 = *(undefined8 *)(local_68 + 0x10);
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar5;
          }
          lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
          if (lVar11 == 0) {
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar10 = *(long *)puVar5;
            }
            uVar12 = **(undefined8 **)(lVar10 + 0xb8);
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar11 == 0) goto LAB_00ea4128;
            FUN_012d239c(lVar11,uVar12,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ValueTuple<List<OVRSpaceUser>,_List<OVRSpatialAnchor>>>_MoveNext__
                         ,0);
            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar11;
          }
          uVar7 = System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                            (uVar7,lVar11,
                             *(undefined8 *)
                              System_Collections_Generic_Dictionary<int,_Panel>_TypeInfo);
          uVar7 = FUN_010dfe04(uVar7,*(undefined8 *)
                                      Method_UnityEngine_Component_GetComponent<TranscriptionEventListener>__
                              );
          if (lVar6 == 0) goto LAB_00ea4128;
          *(undefined8 *)(lVar6 + 0x10) = uVar7;
        }
        lVar10 = *(long *)(param_1 + 0x18);
        iVar9 = iVar9 + 1;
        if (lVar10 == 0) goto LAB_00ea4128;
      }
      lVar6 = *(long *)puVar5;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar5;
      }
      lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (lVar11 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar5;
        }
        uVar7 = **(undefined8 **)(lVar6 + 0xb8);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_u64__);
        if (lVar11 == 0) goto LAB_00ea4128;
        FUN_012d239c(lVar11,uVar7,
                     *(undefined8 *)
                      Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractable>_get_Item__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18) = lVar11;
      }
      uVar7 = System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                        (lVar10,lVar11,
                         *(undefined8 *)UnityEngine_InputSystem_Controls_ButtonControl___TypeInfo);
      uVar7 = FUN_010dfe04(uVar7,*(undefined8 *)
                                  UnityEngine_ProBuilder_SelectionPickerRenderer_TypeInfo);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      FUN_00ea412c(param_1);
      FUN_00ea4210(param_1);
      FUN_00ea4330(param_1);
      return;
    }
  }
LAB_00ea4128:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


