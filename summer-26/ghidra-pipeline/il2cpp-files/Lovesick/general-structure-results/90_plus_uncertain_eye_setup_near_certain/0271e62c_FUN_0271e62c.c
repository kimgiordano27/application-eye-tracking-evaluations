/*
FUNCTION_NAME: FUN_0271e62c
ENTRY_POINT: 0271e62c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0271e62c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int local_6c;
  int local_68;
  undefined4 uStack_64;
  
  if ((DAT_03788280 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ebbb0);
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(
                      System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_HandFinger>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<BIHNode>_AddRange__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Stack<IEnumerator<ITreeViewItem>>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_6798);
    thunk_FUN_00d48444(StringLiteral_7265);
    thunk_FUN_00d48444(StringLiteral_1647);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                      );
    thunk_FUN_00d48444(StringLiteral_11716);
    thunk_FUN_00d48444(Sirenix_OdinInspector_ValueDropdownList<int>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f72f8);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpminq_s8__);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(StringLiteral_479);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_SelectMany<Dictionary<Vertex,_int>,_Vertex>__);
    thunk_FUN_00d48444(Method_System_DBNull_System_IConvertible_ToInt32__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_Remove__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(
                      Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Array_Resize<Tween>__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_VisualElementPanelActivator_OnEnter__);
    thunk_FUN_00d48444(OVRHandTest_BoolMonitor_BoolGenerator_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_JToken>_TryGetValue__);
    thunk_FUN_00d48444(StringLiteral_13652);
    DAT_03788280 = 1;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_Remove__
                              );
    if (lVar9 == 0) goto LAB_0271eb34;
    FUN_01298da0(lVar9,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpminq_s8__);
    *(long *)(param_1 + 0x40) = lVar9;
  }
  else {
    FUN_0129a9f4(*(long *)(param_1 + 0x40),*(undefined8 *)StringLiteral_1647);
  }
  if (*(long *)(param_1 + 200) == 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Array_Resize<Tween>__);
    if (lVar9 == 0) goto LAB_0271eb34;
    FUN_01298da0(lVar9,*(undefined8 *)StringLiteral_479);
    *(long *)(param_1 + 200) = lVar9;
  }
  else {
    FUN_0129a9f4(*(long *)(param_1 + 200),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Stack<IEnumerator<ITreeViewItem>>_get_Count__);
  }
  puVar7 = StringLiteral_13652;
  puVar6 = StringLiteral_11716;
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_JToken>_TryGetValue__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__;
  puVar3 = Sirenix_OdinInspector_ValueDropdownList<int>_TypeInfo;
  puVar2 = 
  System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_HandFinger>_TypeInfo
  ;
  puVar1 = PTR_DAT_033ebbb0;
  lVar9 = *(long *)(param_1 + 0xc0);
  if (lVar9 != 0) {
    iVar11 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar11) {
        if (*(long *)(param_1 + 0x38) == 0) {
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
          puVar12 = (undefined8 *)Method_System_DBNull_System_IConvertible_ToInt32__;
          puVar14 = (undefined8 *)Method_Obi_ObiNativeList<BIHNode>_AddRange__;
          puVar13 = (undefined8 *)PTR_DAT_033f72f8;
          if (lVar9 == 0) break;
          FUN_01298da0(lVar9,*(undefined8 *)
                              Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                      );
          *(long *)(param_1 + 0x38) = lVar9;
        }
        else {
          FUN_0129a9f4(*(long *)(param_1 + 0x38),*(undefined8 *)StringLiteral_6798);
          puVar12 = (undefined8 *)Method_System_DBNull_System_IConvertible_ToInt32__;
          puVar13 = (undefined8 *)PTR_DAT_033f72f8;
          puVar14 = (undefined8 *)Method_Obi_ObiNativeList<BIHNode>_AddRange__;
        }
        if (*(long *)(param_1 + 0xb8) == 0) {
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_OVRPlugin_<>c__DisplayClass526_0_<GetVirtualKeyboardModelAnimationStates>b__1__
                                    );
          if (lVar9 == 0) break;
          FUN_01298da0(lVar9,*(undefined8 *)
                              Method_System_Linq_Enumerable_SelectMany<Dictionary<Vertex,_int>,_Vertex>__
                      );
          *(long *)(param_1 + 0xb8) = lVar9;
        }
        else {
          FUN_0129a9f4(*(long *)(param_1 + 0xb8),*(undefined8 *)StringLiteral_7265);
        }
        lVar9 = *(long *)(param_1 + 0xb0);
        if (lVar9 != 0) {
          iVar11 = 0;
          goto LAB_0271e9e8;
        }
        break;
      }
      FUN_0132138c(lVar9,iVar11,&local_68,*(undefined8 *)puVar7);
      lVar9 = CONCAT44(uStack_64,local_68);
      if (lVar9 == 0) break;
      iVar8 = FUN_026fd61c(lVar9,0);
      if (*(long *)(param_1 + 0x40) == 0) break;
      local_68 = iVar8;
      uVar10 = FUN_0129aa60(*(long *)(param_1 + 0x40),&local_68,*(undefined8 *)puVar6);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(param_1 + 0x40) == 0) break;
        local_6c = iVar11;
        local_68 = iVar8;
        FUN_0129a054(*(long *)(param_1 + 0x40),&local_68,&local_6c,*(undefined8 *)puVar2);
      }
      if (*(long *)(param_1 + 200) == 0) break;
      local_68 = iVar8;
      uVar10 = FUN_0129aa60(*(long *)(param_1 + 200),&local_68,*(undefined8 *)puVar3);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(param_1 + 200) == 0) break;
        local_68 = iVar8;
        FUN_0129a054(*(long *)(param_1 + 200),&local_68,lVar9,*(undefined8 *)puVar1);
      }
      lVar9 = *(long *)(param_1 + 0xc0);
      iVar11 = iVar11 + 1;
    } while (lVar9 != 0);
  }
  goto LAB_0271eb34;
LAB_0271e9e8:
  do {
    if (*(int *)(lVar9 + 0x18) <= iVar11) {
      *(undefined1 *)(param_1 + 0xd8) = 0;
      return;
    }
    FUN_0132138c(lVar9,iVar11,&local_68,*(undefined8 *)puVar5);
    lVar9 = CONCAT44(uStack_64,local_68);
    if (lVar9 != 0) {
      if (*(long *)(param_1 + 200) == 0) break;
      iVar8 = *(int *)(lVar9 + 0x28);
      local_68 = iVar8;
      uVar10 = FUN_0129aa60(*(long *)(param_1 + 200),&local_68,*(undefined8 *)puVar3);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 200) == 0) break;
        local_6c = iVar8;
        FUN_01299bc0(*(long *)(param_1 + 200),&local_6c,&local_68,*puVar12);
        *(long *)(lVar9 + 0x18) = param_1;
        *(ulong *)(lVar9 + 0x20) = CONCAT44(uStack_64,local_68);
        if (*(long *)(param_1 + 0xb0) == 0) break;
        FUN_0132138c(*(long *)(param_1 + 0xb0),iVar11,&local_68,*(undefined8 *)puVar5);
        if (CONCAT44(uStack_64,local_68) == 0) break;
        FUN_02727be8(CONCAT44(uStack_64,local_68),0);
        iVar8 = FUN_02713a18();
        if (*(long *)(param_1 + 0x38) == 0) break;
        local_68 = iVar8;
        uVar10 = FUN_0129aa60(*(long *)(param_1 + 0x38),&local_68,*(undefined8 *)puVar4);
        if ((uVar10 & 1) == 0) {
          if (*(long *)(param_1 + 0x38) == 0) break;
          local_6c = iVar11;
          local_68 = iVar8;
          FUN_0129a054(*(long *)(param_1 + 0x38),&local_68,&local_6c,
                       *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
        }
        if (*(long *)(param_1 + 0xb0) == 0) break;
        FUN_0132138c(*(long *)(param_1 + 0xb0),iVar11,&local_68,*(undefined8 *)puVar5);
        if (CONCAT44(uStack_64,local_68) == 0) break;
        iVar8 = *(int *)(CONCAT44(uStack_64,local_68) + 0x14);
        if (iVar8 != 0xfffe) {
          if (*(long *)(param_1 + 0xb8) == 0) break;
          local_68 = iVar8;
          uVar10 = FUN_0129aa60(*(long *)(param_1 + 0xb8),&local_68,*puVar13);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(param_1 + 0xb8) == 0) break;
            local_68 = iVar8;
            FUN_0129a054(*(long *)(param_1 + 0xb8),&local_68,lVar9,*puVar14);
          }
        }
      }
    }
    lVar9 = *(long *)(param_1 + 0xb0);
    iVar11 = iVar11 + 1;
  } while (lVar9 != 0);
LAB_0271eb34:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


