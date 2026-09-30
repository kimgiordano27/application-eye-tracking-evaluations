/*
FUNCTION_NAME: System.Data.DataColumnCollection$$CanRemove
ENTRY_POINT: 01c2f138
PROGRAM: Lovesick-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Data_DataColumnCollection__CanRemove(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x21;
  
  lVar9 = thunk_FUN_00d62348();
  puVar8 = StringLiteral_5228;
  puVar7 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar6 = Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
  puVar5 = Method_System_Data_DataSet_ReadXmlDiffgram__;
  puVar4 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_UnityEngine_InputSystem_InputControl<TouchState>_get_value__;
  puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  if (lVar9 != 0) {
    FUN_012dd3f8();
    uVar10 = *(undefined8 *)puVar6;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01780344(uVar10,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)puVar1,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)puVar8,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)puVar7,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)puVar5,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)puVar4,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)
                           Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                          ,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)
                           System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                          ,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = FUN_01780344(*(undefined8 *)StringLiteral_3349,0);
    FUN_012df150(lVar9,uVar10,*(undefined8 *)puVar2);
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18) = lVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


