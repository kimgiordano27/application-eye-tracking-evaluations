/*
FUNCTION_NAME: System.Data.DataView$$GetRowView
ENTRY_POINT: 01c691c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 220
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Data_DataView__GetRowView(undefined8 param_1)

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
  undefined8 unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x29;
  
  lVar10 = thunk_FUN_00d62348(param_1);
  puVar7 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
  puVar6 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
  puVar3 = Method_UnityEngine_InputSystem_InputControl<TouchState>_get_value__;
  puVar2 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
  if (lVar10 != 0) {
    FUN_012dd38c(lVar10,*unaff_x22);
    uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
    uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
    uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
    FUN_0129a054();
    FUN_01780344(*(undefined8 *)puVar6,0);
    lVar10 = thunk_FUN_00d62348(*unaff_x29);
    puVar1 = StringLiteral_5228;
    if (lVar10 != 0) {
      FUN_012dd38c(lVar10,*unaff_x22);
      puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
      uVar11 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
      FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
      uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
      FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
      uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
      FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
      uVar11 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
      FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
      FUN_0129a054();
      FUN_01780344(*(undefined8 *)puVar1,0);
      lVar10 = thunk_FUN_00d62348(*unaff_x29);
      puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
      if (lVar10 != 0) {
        FUN_012dd38c(lVar10,*unaff_x22);
        puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        uVar11 = FUN_01780344(*(undefined8 *)
                               Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                              ,0);
        FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
        uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
        FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
        uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
        FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
        puVar4 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
        uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
        FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
        uVar11 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0
                             );
        FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
        FUN_0129a054();
        FUN_01780344(*(undefined8 *)puVar1,0);
        lVar10 = thunk_FUN_00d62348(*unaff_x29);
        puVar1 = 
        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
        if (lVar10 != 0) {
          FUN_012dd38c(lVar10,*unaff_x22);
          uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          uVar11 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                ,0);
          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
          FUN_0129a054();
          FUN_01780344(*(undefined8 *)puVar1,0);
          lVar10 = thunk_FUN_00d62348(*unaff_x29);
          puVar1 = StringLiteral_6673;
          if (lVar10 != 0) {
            FUN_012dd38c(lVar10,*unaff_x22);
            uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
            FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
            uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
            FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
            uVar11 = FUN_01780344(*(undefined8 *)
                                   Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
            FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
            FUN_0129a054();
            FUN_01780344(*(undefined8 *)puVar1,0);
            lVar10 = thunk_FUN_00d62348(*unaff_x29);
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
            if (lVar10 != 0) {
              FUN_012dd38c(lVar10,*unaff_x22);
              puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
              uVar11 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
              uVar11 = FUN_01780344(*(undefined8 *)
                                     Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                    ,0);
              FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
              uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
              FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
              uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
              FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
              uVar11 = FUN_01780344(*(undefined8 *)
                                     Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
              FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
              FUN_0129a054();
              FUN_01780344(*(undefined8 *)puVar1,0);
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                           Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                         );
              puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
              if (lVar10 != 0) {
                FUN_012dd38c(lVar10,*unaff_x22);
                puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
                uVar11 = FUN_01780344(*(undefined8 *)
                                       Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                      ,0);
                FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                puVar4 = StringLiteral_6673;
                uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
                FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                uVar11 = FUN_01780344(*(undefined8 *)
                                       Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                      ,0);
                FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                uVar11 = FUN_01780344(*(undefined8 *)
                                       System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                      ,0);
                FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0)
                ;
                FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                uVar11 = FUN_01780344(*(undefined8 *)
                                       Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
                FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                FUN_0129a054();
                FUN_01780344(*(undefined8 *)puVar2,0);
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                           );
                if (lVar10 != 0) {
                  FUN_012dd38c(lVar10,*unaff_x22);
                  uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  puVar9 = 
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                  ;
                  uVar11 = FUN_01780344(*(undefined8 *)
                                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                        ,0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  puVar2 = 
                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                  ;
                  uVar11 = FUN_01780344(*(undefined8 *)
                                         System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                        ,0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,
                                        0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  uVar11 = FUN_01780344(*(undefined8 *)
                                         Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
                  FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                  FUN_0129a054();
                  FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                  puVar5 = 
                  Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                  ;
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                             );
                  puVar8 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
                  if (lVar10 != 0) {
                    FUN_012dd38c(lVar10,*(undefined8 *)PTR_DAT_033ecf78);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar1,0);
                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar9,0);
                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                    uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                    puVar6 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                    uVar11 = FUN_01780344(*(undefined8 *)
                                           Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                    uVar11 = FUN_01780344(*(undefined8 *)
                                           Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                    FUN_0129a054();
                    FUN_01780344(*(undefined8 *)puVar8,0);
                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                    puVar1 = PTR_DAT_033ecf78;
                    if (lVar10 != 0) {
                      FUN_012dd38c(lVar10,*(undefined8 *)PTR_DAT_033ecf78);
                      FUN_0129a054();
                      FUN_01780344(*(undefined8 *)
                                    Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                      if (lVar10 != 0) {
                        FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                        FUN_0129a054();
                        FUN_01780344(*(undefined8 *)puVar2,0);
                        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                        if (lVar10 != 0) {
                          FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                          uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                          FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                          FUN_0129a054();
                          FUN_01780344(*(undefined8 *)puVar6,0);
                          lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                          puVar2 = Method_System_Nullable<float>_GetValueOrDefault__;
                          if (lVar10 != 0) {
                            FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                            FUN_0129a054();
                            FUN_01780344(*(undefined8 *)puVar2,0);
                            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                            puVar7 = StringLiteral_10024;
                            if (lVar10 != 0) {
                              FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                              FUN_0129a054();
                              FUN_01780344(*(undefined8 *)puVar7,0);
                              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                              if (lVar10 != 0) {
                                FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                                FUN_0129a054();
                                puVar4 = Method_System_Collections_Generic_List<Collider>_Clear__;
                                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                if (lVar10 != 0) {
                                  FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                                  FUN_0129a054();
                                  *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb0) =
                                       unaff_x19;
                                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                  if (lVar10 != 0) {
                                    FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  Method_System_Data_DataSet_ReadXmlDiffgram__,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                                  ,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                           OVRPlugin_OVRP_1_50_0_TypeInfo,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,
                                                  0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                                  ,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  Method_System_Linq_Enumerable_ToList<EdgeLookup>__
                                                  ,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)
                                                                                                                      
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                                  ,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)puVar6,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
                                    FUN_012df150(lVar10,uVar11,*(undefined8 *)puVar3);
                                    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xb8) = lVar10;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


