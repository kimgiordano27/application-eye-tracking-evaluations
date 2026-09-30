/*
FUNCTION_NAME: System.Data.DataTable$$AddRow
ENTRY_POINT: 01c46160
PROGRAM: Lovesick-libil2cpp.so
SCORE: 188
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void System_Data_DataTable__AddRow(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x27;
  undefined8 *puVar12;
  long unaff_x28;
  long *plVar13;
  
  puVar7 = StringLiteral_5228;
  puVar6 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Append<Value>__;
  puVar5 = Method_System_Collections_Generic_List<TextStyle>__ctor__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  puVar3 = Method_System_Collections_Generic_List_Enumerator<InventorySlot>_MoveNext__;
  puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  puVar1 = PTR_DAT_033ebf60;
  puVar10 = *(undefined8 **)(unaff_x20 + 0xa60);
  plVar13 = *(long **)(unaff_x28 + 0xf98);
  puVar12 = *(undefined8 **)(unaff_x27 + 0xae8);
  FUN_01298da0(param_2,*param_1);
  uVar11 = *puVar10;
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_01780344(uVar11,0);
  uVar8 = FUN_01780344(*puVar12,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
  uVar8 = FUN_01780344(*(undefined8 *)puVar5,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
  uVar8 = FUN_01780344(*(undefined8 *)puVar1,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
  uVar8 = FUN_01780344(*(undefined8 *)puVar6,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)
                         Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0)
  ;
  uVar8 = FUN_01780344(*(undefined8 *)Method_System_Xml_Schema_XmlAnyConverter_ToInt64__,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
  uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_497,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)
                         Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0);
  uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_14170,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
  uVar8 = FUN_01780344(*(undefined8 *)PTR_DAT_033f2a58,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
  uVar8 = FUN_01780344(*(undefined8 *)System_Security_CodeAccessPermission_TypeInfo,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                        ,0);
  uVar8 = FUN_01780344(*(undefined8 *)
                        Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<bool>__,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
  uVar8 = FUN_01780344(*(undefined8 *)Method_System_Net_Sockets_Socket_<>c_<BeginSend>b__297_0__,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
  uVar8 = FUN_01780344(*(undefined8 *)Method_Newtonsoft_Json_Utilities_AotHelper_Ensure__,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)
                         System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                        ,0);
  uVar8 = FUN_01780344(*(undefined8 *)PTR_DAT_033f1d40,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
  uVar8 = FUN_01780344(*(undefined8 *)System_Globalization_CompareOptions_var,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)Method_System_Nullable<float>_GetValueOrDefault__,0);
  uVar8 = FUN_01780344(*(undefined8 *)
                        Method_System_Collections_Generic_HashSet<InternedString>_Add__,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_10024,0);
  uVar8 = FUN_01780344(*(undefined8 *)StringLiteral_9063,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_3349,0);
  uVar8 = FUN_01780344(*(undefined8 *)
                        Method_System_ValueTuple<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_System_Collections_IStructuralComparable_CompareTo__
                       ,0);
  FUN_0129a054(param_2,uVar11,uVar8,*(undefined8 *)puVar3);
  puVar1 = Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__;
  **(undefined8 **)
    (*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ + 0xb8) = param_2
  ;
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)Method_UnityEngine_MonoBehaviour_StopCoroutine__);
  puVar3 = StringLiteral_8854;
  puVar2 = StringLiteral_2510;
  if (lVar9 != 0) {
    FUN_017b46ec(lVar9,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar9;
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar9 = *(long *)puVar2;
    }
    uVar11 = **(undefined8 **)(lVar9 + 0xb8);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar4 = Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_OnTeleported__;
    if (lVar9 != 0) {
      FUN_01298e34(lVar9,uVar11,
                   *(undefined8 *)
                    Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_OnTeleported__);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar9;
      uVar11 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar9 != 0) {
        FUN_01298e34(lVar9,uVar11,*(undefined8 *)puVar4);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar9;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


