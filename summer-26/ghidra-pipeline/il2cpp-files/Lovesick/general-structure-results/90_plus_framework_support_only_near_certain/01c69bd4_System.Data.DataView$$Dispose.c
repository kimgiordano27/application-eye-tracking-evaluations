/*
FUNCTION_NAME: System.Data.DataView$$Dispose
ENTRY_POINT: 01c69bd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 157
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void System_Data_DataView__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  
  FUN_0129a054();
  FUN_01780344(*unaff_x24,0);
  lVar4 = thunk_FUN_00d62348(*unaff_x29);
  if (lVar4 != 0) {
    FUN_012dd38c(lVar4,*unaff_x27);
    uVar5 = FUN_01780344(*unaff_x22,0);
    FUN_012df150(lVar4,uVar5,*unaff_x25);
    FUN_0129a054();
    FUN_01780344(*unaff_x22,0);
    lVar4 = thunk_FUN_00d62348(*unaff_x29);
    puVar2 = Method_System_Nullable<float>_GetValueOrDefault__;
    if (lVar4 != 0) {
      FUN_012dd38c(lVar4,*unaff_x27);
      FUN_0129a054();
      FUN_01780344(*(undefined8 *)puVar2,0);
      lVar4 = thunk_FUN_00d62348(*unaff_x29);
      puVar3 = StringLiteral_10024;
      if (lVar4 != 0) {
        FUN_012dd38c(lVar4,*unaff_x27);
        FUN_0129a054();
        FUN_01780344(*(undefined8 *)puVar3,0);
        lVar4 = thunk_FUN_00d62348(*unaff_x29);
        if (lVar4 != 0) {
          FUN_012dd38c(lVar4,*unaff_x27);
          FUN_0129a054();
          puVar1 = Method_System_Collections_Generic_List<Collider>_Clear__;
          lVar4 = thunk_FUN_00d62348(*unaff_x29);
          if (lVar4 != 0) {
            FUN_012dd38c(lVar4,*unaff_x27);
            FUN_0129a054();
            *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0) = unaff_x19;
            lVar4 = thunk_FUN_00d62348(*unaff_x29);
            if (lVar4 != 0) {
              FUN_012dd38c(lVar4,*unaff_x27);
              uVar5 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)
                                    Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                   ,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)
                                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                   ,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,
                                   0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)
                                    Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                   ,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__
                                   ,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)
                                    Method_Sirenix_Serialization_Serializer<byte>__ctor__,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)
                                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                   ,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*unaff_x22,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)puVar2,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              uVar5 = FUN_01780344(*(undefined8 *)puVar3,0);
              FUN_012df150(lVar4,uVar5,*unaff_x25);
              *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8) = lVar4;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


