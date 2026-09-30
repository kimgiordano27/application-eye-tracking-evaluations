/*
FUNCTION_NAME: FUN_01c23024
ENTRY_POINT: 01c23024
PROGRAM: Lovesick-libil2cpp.so
SCORE: 204
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01c23024(void)

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
  undefined4 local_64;
  
  puVar1 = StringLiteral_2510;
  if ((DAT_0377e9f4 & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f3dd0);
    thunk_FUN_00d48444(UnityEngine_TextCore_Text_LineInfo___TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_set_Item__
                      );
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(StringLiteral_2510);
    thunk_FUN_00d48444(StringLiteral_3349);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(StringLiteral_7221);
    DAT_0377e9f4 = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_set_Item__
  ;
  lVar10 = *(long *)puVar1;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar1;
  }
  uVar11 = **(undefined8 **)(lVar10 + 0xb8);
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar9 = StringLiteral_5228;
  puVar8 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
  puVar6 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
  puVar5 = Method_System_Data_DataSet_ReadXmlDiffgram__;
  puVar4 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  puVar1 = PTR_DAT_033f3dd0;
  if (lVar10 != 0) {
    FUN_01298e34(lVar10,uVar11,*(undefined8 *)UnityEngine_TextCore_Text_LineInfo___TypeInfo);
    uVar11 = *(undefined8 *)puVar6;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01780344(uVar11,0);
    local_64 = 0;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar2,0);
    local_64 = 1;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar9,0);
    local_64 = 2;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar8,0);
    local_64 = 3;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar5,0);
    local_64 = 4;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar4,0);
    local_64 = 5;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)puVar7,0);
    local_64 = 6;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
    local_64 = 7;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)
                           Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                          ,0);
    local_64 = 8;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
    local_64 = 9;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
    local_64 = 10;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)
                           System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                          ,0);
    local_64 = 0xb;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
    local_64 = 0xc;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    uVar11 = FUN_01780344(*(undefined8 *)StringLiteral_3349,0);
    local_64 = 0xd;
    FUN_0129a054(lVar10,uVar11,&local_64,*(undefined8 *)puVar1);
    **(long **)(*(long *)StringLiteral_7221 + 0xb8) = lVar10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


