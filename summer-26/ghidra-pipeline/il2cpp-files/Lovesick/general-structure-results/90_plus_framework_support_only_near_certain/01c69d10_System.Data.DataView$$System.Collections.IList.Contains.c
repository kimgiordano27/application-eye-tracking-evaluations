/*
FUNCTION_NAME: System.Data.DataView$$System.Collections.IList.Contains
ENTRY_POINT: 01c69d10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 143
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Data_DataView__System_Collections_IList_Contains(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_0129a054();
  puVar1 = Method_System_Collections_Generic_List<Collider>_Clear__;
  lVar2 = thunk_FUN_00d62348(*unaff_x29);
  if (lVar2 != 0) {
    FUN_012dd38c(lVar2,*unaff_x27);
    FUN_0129a054();
    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0) = unaff_x19;
    lVar2 = thunk_FUN_00d62348(*unaff_x29);
    if (lVar2 != 0) {
      FUN_012dd38c(lVar2,*unaff_x27);
      uVar3 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)
                            Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                           ,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)
                            Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                           ,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)
                            Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0
                          );
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*(undefined8 *)
                            System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                           ,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*unaff_x26,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*unaff_x24,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      uVar3 = FUN_01780344(*unaff_x28,0);
      FUN_012df150(lVar2,uVar3,*unaff_x25);
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8) = lVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


