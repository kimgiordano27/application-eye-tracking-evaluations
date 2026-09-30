/*
FUNCTION_NAME: FUN_017b8418
ENTRY_POINT: 017b8418
PROGRAM: Lovesick-libil2cpp.so
SCORE: 215
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction
*/


long FUN_017b8418(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  puVar1 = PTR_DAT_033f3ed0;
  if ((DAT_0377900d & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_702);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_Backpack_OnBackpackGrabbed__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>__ctor__
                      );
    thunk_FUN_00d48444(System_Func<IPEndPoint,_AsyncCallback,_object,_IAsyncResult>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Vector3,_Vector3>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_13993);
    thunk_FUN_00d48444(Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_CheckValid__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3ed0);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_set_Item__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Data_SceneData>__);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_SimpleTuple<Face,_Face>_get_item1__);
    thunk_FUN_00d48444(StringLiteral_12005);
    thunk_FUN_00d48444(StringLiteral_4131);
    thunk_FUN_00d48444(Unity_XR_Oculus_InputLayoutLoader_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vfma_lane_f32__);
    thunk_FUN_00d48444(StringLiteral_553);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_GetMemberType__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0198);
    thunk_FUN_00d48444(StringLiteral_189);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<BoxGrabSurface>__);
    thunk_FUN_00d48444(OVRPlugin_MeshType_TypeInfo);
    thunk_FUN_00d48444(System_InvalidOperationException_TypeInfo);
    DAT_0377900d = 1;
  }
  puVar5 = StringLiteral_702;
  puVar3 = Method_System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_GetMemberType__;
  puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  lVar7 = FUN_00da6c10();
  lVar8 = FUN_017b8224(*(undefined8 *)puVar1);
  if ((lVar8 == 0) ||
     (uVar9 = thunk_FUN_015fe514(lVar8,**(undefined8 **)(*(long *)puVar2 + 0xb8),0),
     (uVar9 & 1) != 0)) {
    puVar4 = StringLiteral_553;
    puVar1 = Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_016d5ebc(lVar7,*(undefined8 *)puVar4,0);
    lVar8 = FUN_016d5ebc(uVar10,*(undefined8 *)puVar1,0);
  }
  lVar11 = FUN_017b8224(*(undefined8 *)puVar3);
  if ((lVar11 == 0) ||
     (uVar9 = thunk_FUN_015fe514(lVar11,**(undefined8 **)(*(long *)puVar2 + 0xb8),0),
     (uVar9 & 1) != 0)) {
    puVar1 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_CheckValid__;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar11 = FUN_016d5ebc(lVar7,*(undefined8 *)puVar1,0);
  }
  puVar14 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vfma_lane_f32__;
  puVar3 = Method_Backpack_OnBackpackGrabbed__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>__ctor__
  ;
  switch(param_1) {
  case 0:
  case 0x10:
    puVar14 = (undefined8 *)Method_UnityEngine_GameObject_AddComponent<BoxGrabSurface>__;
    puVar15 = (undefined8 *)OVRPlugin_MeshType_TypeInfo;
    goto LAB_017b87f4;
  default:
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar12 = thunk_FUN_00d48444(StringLiteral_11965);
    FUN_016f2f28(uVar10,uVar12,0);
    uVar12 = thunk_FUN_00d48444(RCG_Lovesick_RhythmGame_SongManager_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar12);
  case 2:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0x11:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x25:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    goto switchD_017b867c_caseD_2;
  case 5:
  case 0x28:
    return lVar7;
  case 6:
    iVar6 = FUN_00da6774();
    if (iVar6 == 6) {
      iVar6 = *(int *)(*(long *)puVar5 + 0xe0);
      puVar14 = (undefined8 *)StringLiteral_4131;
joined_r0x017b8750:
      if (iVar6 == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = *(undefined8 *)puVar3;
      uVar12 = *puVar14;
LAB_017b879c:
      lVar7 = FUN_016e5484(lVar7,uVar10,uVar12,0);
      return lVar7;
    }
    goto switchD_017b867c_caseD_2;
  case 0xd:
    iVar6 = FUN_00da6774();
    puVar15 = (undefined8 *)StringLiteral_13993;
    goto joined_r0x017b86d8;
  case 0xe:
    puVar14 = (undefined8 *)StringLiteral_189;
    puVar15 = (undefined8 *)
              Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<__Il2CppFullySharedGenericType>_set_Item__
    ;
    goto LAB_017b87f4;
  case 0x14:
    iVar6 = FUN_00da6774();
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    if (iVar6 != 6) {
      uVar10 = *(undefined8 *)Unity_XR_Oculus_InputLayoutLoader_TypeInfo;
      goto LAB_017b8824;
    }
    uVar10 = *(undefined8 *)puVar3;
    uVar12 = *(undefined8 *)StringLiteral_12005;
    goto LAB_017b879c;
  case 0x15:
    puVar14 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<Vector3,_Vector3>_set_Item__;
    puVar15 = (undefined8 *)Method_UnityEngine_ProBuilder_SimpleTuple<Face,_Face>_get_item1__;
LAB_017b87f4:
    uVar10 = *puVar14;
    uVar12 = *puVar15;
LAB_017b8850:
    lVar7 = FUN_017b88b8(lVar11,lVar7,uVar10,uVar12);
    return lVar7;
  case 0x1a:
    goto switchD_017b867c_caseD_1a;
  case 0x1c:
    return lVar8;
  case 0x20:
    iVar6 = FUN_00da6774();
    if (iVar6 == 6) {
      iVar6 = *(int *)(*(long *)puVar5 + 0xe0);
      puVar14 = (undefined8 *)System_InvalidOperationException_TypeInfo;
      goto joined_r0x017b8750;
    }
switchD_017b867c_caseD_2:
    plVar13 = *(long **)(*(long *)puVar2 + 0xb8);
    break;
  case 0x23:
    plVar13 = (long *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__;
    break;
  case 0x26:
    iVar6 = FUN_00da6774();
    plVar13 = (long *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Data_SceneData>__;
    if (iVar6 != 6) goto switchD_017b867c_caseD_2;
    break;
  case 0x27:
    iVar6 = FUN_00da6774();
    puVar15 = (undefined8 *)System_Func<IPEndPoint,_AsyncCallback,_object,_IAsyncResult>_TypeInfo;
    puVar14 = (undefined8 *)puVar1;
joined_r0x017b86d8:
    if (iVar6 == 6) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = *puVar14;
LAB_017b8824:
      lVar7 = FUN_016d5ebc(lVar7,uVar10,0);
      return lVar7;
    }
    uVar10 = *puVar15;
    uVar12 = *puVar14;
    goto LAB_017b8850;
  case 0x2d:
    plVar13 = (long *)PTR_DAT_033f0198;
  }
  lVar11 = *plVar13;
switchD_017b867c_caseD_1a:
  return lVar11;
}


