/*
FUNCTION_NAME: System.Data.DataColumnCollection$$BaseRemove
ENTRY_POINT: 01c2f07c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 179
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void System_Data_DataColumnCollection__BaseRemove(long param_1)

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
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = StringLiteral_5076;
  puVar1 = System_Net_FileWebRequest_TypeInfo;
  if (param_1 != 0) {
    FUN_012a2fdc(param_1,*(undefined8 *)
                          Method_System_Nullable<InputActionRebindingExtensions_ParameterOverride>_get_HasValue__
                );
    **(long **)(*(long *)puVar1 + 0xb8) = param_1;
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
    if (lVar10 != 0) {
      FUN_012a2fdc(lVar10,*(undefined8 *)UnityEngine_UIElements_Rotate_TypeInfo);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar10;
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar3 = StringLiteral_2510;
      puVar2 = 
      Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
      ;
      if (lVar10 != 0) {
        FUN_017b46ec(lVar10,0);
        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar10;
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar3;
        }
        uVar11 = **(undefined8 **)(lVar10 + 0xb8);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar9 = StringLiteral_5228;
        puVar8 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        puVar7 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
        puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
        puVar5 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
        puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
        puVar3 = Method_UnityEngine_InputSystem_InputControl<TouchState>_get_value__;
        puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
        if (lVar10 != 0) {
          FUN_012dd3f8(lVar10,uVar11,*(undefined8 *)Method_System_Xml_XmlEntity_set_InnerXml__);
          uVar11 = *(undefined8 *)puVar7;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_01780344(uVar11,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar9,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)
                                 Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                ,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                ,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__
                                ,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                ,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_3349,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = lVar10;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


