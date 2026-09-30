/*
FUNCTION_NAME: System.Dynamic.Utils.TypeUtils$$GetNullableType
ENTRY_POINT: 01c051dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Dynamic_Utils_TypeUtils__GetNullableType(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined1 unaff_w22;
  undefined8 *unaff_x25;
  
  uVar4 = FUN_00da4fb8(param_1,0x19000);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
  FUN_01be4990();
  *(undefined1 *)(unaff_x19 + 0x54) = unaff_w22;
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  *(undefined1 *)(unaff_x19 + 0x55) = 1;
  lVar5 = thunk_FUN_00d62348(*unaff_x25);
  puVar3 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
  puVar2 = Method_System_Linq_Enumerable_OrderByDescending<MedleyBossProjectileSpawnPoint,_float>__;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (lVar5 != 0) {
    FUN_01298da0(lVar5,*(undefined8 *)
                        Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_set_Item__);
    uVar4 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01780344(uVar4,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s8__;
    puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    puVar1 = Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__DisplayClass45_2_TypeInfo;
    if (lVar6 != 0) {
      FUN_011c21b8();
      FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
      uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = StringLiteral_5228;
      puVar1 = 
      Method_Oculus_Interaction_PointerInteractor<GrabInteractor,_GrabInteractable>_HandlePointerEventRaised__
      ;
      if (lVar6 != 0) {
        FUN_011c21b8();
        FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
        uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        puVar1 = UnityEngine_InputSystem_EnhancedTouch_Touch_TypeInfo;
        if (lVar6 != 0) {
          FUN_011c21b8();
          FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
          uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar2 = Method_System_Data_DataSet_ReadXmlDiffgram__;
          puVar1 = Method_System_Collections_Generic_List<Vector4>_get_Count__;
          if (lVar6 != 0) {
            FUN_011c21b8();
            FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
            uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar2 = Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnDetachFromPanel__;
            puVar1 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
            if (lVar6 != 0) {
              FUN_011c21b8();
              FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
              uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
              puVar1 = 
              Method_Sirenix_Serialization_MultiDimensionalArrayFormatter<object,___Il2CppFullySharedGenericType>__cctor__
              ;
              if (lVar6 != 0) {
                FUN_011c21b8();
                FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar2 = StringLiteral_6673;
                puVar1 = Sirenix_Utilities_DeepReflection_<>c__DisplayClass23_0_TypeInfo;
                if (lVar6 != 0) {
                  FUN_011c21b8();
                  FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                  uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  puVar2 = 
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                  ;
                  puVar1 = 
                  Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                  ;
                  if (lVar6 != 0) {
                    FUN_011c21b8();
                    FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                    uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    puVar2 = 
                    Method_UnityEngine_Rendering_VolumeStack_GetComponent<ColorAdjustments>__;
                    puVar1 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                    if (lVar6 != 0) {
                      FUN_011c21b8();
                      FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                      uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      puVar2 = Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
                      puVar1 = Method_System_Xml_Schema_XsdBuilder_InitSchema__;
                      if (lVar6 != 0) {
                        FUN_011c21b8();
                        FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                        uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        puVar2 = StringLiteral_8318;
                        puVar1 = 
                        System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                        ;
                        if (lVar6 != 0) {
                          FUN_011c21b8();
                          FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                          uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          puVar2 = StringLiteral_7427;
                          puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                          if (lVar6 != 0) {
                            FUN_011c21b8();
                            FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                            uVar4 = FUN_01780344(*(undefined8 *)puVar1,0);
                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            puVar2 = StringLiteral_3349;
                            puVar1 = PTR_DAT_033edda8;
                            if (lVar6 != 0) {
                              FUN_011c21b8();
                              FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                              uVar4 = FUN_01780344(*(undefined8 *)puVar2,0);
                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                              if (lVar6 != 0) {
                                FUN_011c21b8();
                                FUN_0129a054(lVar5,uVar4,lVar6,*(undefined8 *)puVar3);
                                *(long *)(unaff_x19 + 0x38) = lVar5;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


