/*
FUNCTION_NAME: System.Data.DataView$$Close
ENTRY_POINT: 01c6962c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 205
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void System_Data_DataView__Close(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
  FUN_012dd38c();
  puVar1 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                    /* try { // try from 01c69640 to 01d69667 has its CatchHandler @ 01c69688 */
  uVar9 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
  FUN_012df150(param_1,uVar9,*unaff_x25);
  uVar9 = FUN_01780344(*(undefined8 *)
                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                       ,0);
  FUN_012df150(param_1,uVar9,*unaff_x25);
  uVar9 = FUN_01780344(*unaff_x24,0);
  FUN_012df150(param_1,uVar9,*unaff_x25);
  uVar9 = FUN_01780344(*unaff_x26,0);
  FUN_012df150(param_1,uVar9,*unaff_x25);
  uVar9 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
  FUN_012df150(param_1,uVar9,*unaff_x25);
  FUN_0129a054();
  FUN_01780344(*(undefined8 *)puVar5,0);
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                               Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                             );
  puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  if (lVar10 != 0) {
    FUN_012dd38c(lVar10,*unaff_x23);
    puVar6 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
    uVar9 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__,0
                        );
    FUN_012df150(lVar10,uVar9,*unaff_x25);
    puVar3 = StringLiteral_6673;
    uVar9 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
    FUN_012df150(lVar10,uVar9,*unaff_x25);
    uVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
    FUN_012df150(lVar10,uVar9,*unaff_x25);
    uVar9 = FUN_01780344(*(undefined8 *)
                          Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                         ,0);
    FUN_012df150(lVar10,uVar9,*unaff_x25);
    uVar9 = FUN_01780344(*(undefined8 *)
                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                         ,0);
    FUN_012df150(lVar10,uVar9,*unaff_x25);
    uVar9 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
    FUN_012df150(lVar10,uVar9,*unaff_x25);
    uVar9 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
    FUN_012df150(lVar10,uVar9,*unaff_x25);
    FUN_0129a054();
    FUN_01780344(*(undefined8 *)puVar2,0);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                               );
    if (lVar10 != 0) {
      FUN_012dd38c(lVar10,*unaff_x23);
      uVar9 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      uVar9 = FUN_01780344(*(undefined8 *)puVar5,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      uVar9 = FUN_01780344(*(undefined8 *)puVar6,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      uVar9 = FUN_01780344(*(undefined8 *)puVar3,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      uVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      puVar8 = 
      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__;
      uVar9 = FUN_01780344(*(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                           ,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      puVar2 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
      uVar9 = FUN_01780344(*(undefined8 *)
                            System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                           ,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      uVar9 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      uVar9 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
      FUN_012df150(lVar10,uVar9,*unaff_x25);
      FUN_0129a054();
      FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
      puVar4 = 
      Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
      ;
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                 );
      puVar7 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
      if (lVar10 != 0) {
        FUN_012dd38c(lVar10,*(undefined8 *)PTR_DAT_033ecf78);
        uVar9 = FUN_01780344(*(undefined8 *)puVar5,0);
        FUN_012df150(lVar10,uVar9,*unaff_x25);
        uVar9 = FUN_01780344(*(undefined8 *)puVar6,0);
        FUN_012df150(lVar10,uVar9,*unaff_x25);
        uVar9 = FUN_01780344(*(undefined8 *)puVar3,0);
        FUN_012df150(lVar10,uVar9,*unaff_x25);
        uVar9 = FUN_01780344(*(undefined8 *)puVar1,0);
        FUN_012df150(lVar10,uVar9,*unaff_x25);
        uVar9 = FUN_01780344(*(undefined8 *)puVar8,0);
        FUN_012df150(lVar10,uVar9,*unaff_x25);
        uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
        FUN_012df150(lVar10,uVar9,*unaff_x25);
        puVar5 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
        uVar9 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
        FUN_012df150(lVar10,uVar9,*unaff_x25);
        uVar9 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0)
        ;
        FUN_012df150(lVar10,uVar9,*unaff_x25);
        FUN_0129a054();
        FUN_01780344(*(undefined8 *)puVar7,0);
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        puVar1 = PTR_DAT_033ecf78;
        if (lVar10 != 0) {
          FUN_012dd38c(lVar10,*(undefined8 *)PTR_DAT_033ecf78);
          FUN_0129a054();
          FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar10 != 0) {
            FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
            FUN_0129a054();
            FUN_01780344(*(undefined8 *)puVar2,0);
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar10 != 0) {
              FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
              uVar9 = FUN_01780344(*(undefined8 *)puVar5,0);
              FUN_012df150(lVar10,uVar9,*unaff_x25);
              FUN_0129a054();
              FUN_01780344(*(undefined8 *)puVar5,0);
              lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
              puVar2 = Method_System_Nullable<float>_GetValueOrDefault__;
              if (lVar10 != 0) {
                FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                FUN_0129a054();
                FUN_01780344(*(undefined8 *)puVar2,0);
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                puVar6 = StringLiteral_10024;
                if (lVar10 != 0) {
                  FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                  FUN_0129a054();
                  FUN_01780344(*(undefined8 *)puVar6,0);
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if (lVar10 != 0) {
                    FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                    FUN_0129a054();
                    puVar3 = Method_System_Collections_Generic_List<Collider>_Clear__;
                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    if (lVar10 != 0) {
                      FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                      FUN_0129a054();
                      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb0) = unaff_x19;
                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                      if (lVar10 != 0) {
                        FUN_012dd38c(lVar10,*(undefined8 *)puVar1);
                        uVar9 = FUN_01780344(*(undefined8 *)
                                              Method_System_Data_DataSet_ReadXmlDiffgram__,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)
                                              Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                             ,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)
                                              Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                             ,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)
                                              Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                             ,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)
                                              Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)
                                              Method_Sirenix_Serialization_Serializer<byte>__ctor__,
                                             0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)
                                              System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                             ,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)puVar5,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        uVar9 = FUN_01780344(*(undefined8 *)puVar6,0);
                        FUN_012df150(lVar10,uVar9,*unaff_x25);
                        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb8) = lVar10;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


