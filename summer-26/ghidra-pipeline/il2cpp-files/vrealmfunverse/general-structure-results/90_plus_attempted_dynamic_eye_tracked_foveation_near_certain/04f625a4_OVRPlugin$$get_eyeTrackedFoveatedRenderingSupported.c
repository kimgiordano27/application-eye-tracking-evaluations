/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 04f625a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 216
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_foveation_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(void *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  puVar3 = Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo;
  puVar2 = 
  System_Collections_Generic_Dictionary_Enumerator<XmlQualifiedName,_SchemaElementDecl>_TypeInfo;
  if ((DAT_066c9af8 & 1) == 0) {
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_EventBase<AttachToPanelEvent>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo)
    ;
    FUN_02b3c81c(Oculus_Interaction_RandomSampleConsensus_EvaluateModelScore<Vector3>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary_Enumerator<XmlQualifiedName,_SchemaElementDecl>_TypeInfo
                );
    DAT_066c9af8 = 1;
  }
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_038c3f6c(lVar5,*(undefined8 *)puVar3);
  puVar4 = UnityEngine_UIElements_EventBase<AttachToPanelEvent>_TypeInfo;
  puVar3 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  puVar2 = 
  System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
  ;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x130) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_037a6fdc(&stack0x00000088,*(long *)(param_2 + 0x130),
               *(undefined8 *)
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo);
  while( true ) {
    uVar6 = FUN_0472eaf4(&stack0x00000088,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) {
      FUN_0472eaf0(&stack0x00000088,*(undefined8 *)puVar2);
      in_stack_00000080 = 0;
      uStack0000000000000084 = 0;
      in_stack_00000048 = 0;
      in_stack_00000058 = 0;
      uStack000000000000005c = 0;
      in_stack_00000050 = 0;
      uStack0000000000000054 = 0;
      in_stack_00000068 = 0;
      uStack000000000000006c = 0;
      in_stack_00000060 = 0;
      uStack0000000000000064 = 0;
      in_stack_00000078 = 0;
      uStack000000000000007c = 0;
      in_stack_00000070 = 0;
      uStack0000000000000074 = 0;
      in_stack_00000040 = lVar5;
      thunk_FUN_02bb0e9c(&stack0x00000040,lVar5);
      in_stack_00000050 = *(undefined4 *)(param_2 + 0xdc);
      in_stack_00000048 = CONCAT44(*(undefined4 *)(param_2 + 0x128),*(undefined4 *)(param_2 + 0xe4))
      ;
      uStack000000000000005c = (undefined4)*(undefined8 *)(param_2 + 0xf0);
      in_stack_00000060 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xf0) >> 0x20);
      uStack0000000000000054 = (undefined4)*(undefined8 *)(param_2 + 0xe8);
      in_stack_00000058 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xe8) >> 0x20);
      uStack0000000000000064 = (undefined4)*(undefined8 *)(param_2 + 0xf8);
      in_stack_00000068 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xf8) >> 0x20);
      uStack0000000000000074 = (undefined4)*(undefined8 *)(param_2 + 0x108);
      in_stack_00000078 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x108) >> 0x20);
      uStack000000000000006c = (undefined4)*(undefined8 *)(param_2 + 0x100);
      in_stack_00000070 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x100) >> 0x20);
      uStack000000000000007c = (undefined4)*(undefined8 *)(param_2 + 0x110);
      in_stack_00000080 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x110) >> 0x20);
      memcpy(param_1,&stack0x00000040,0x48);
      return;
    }
    FUN_04f621dc(&stack0x000000a0,in_stack_00000098);
    if (lVar5 == 0) break;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
      *(undefined8 *)(lVar7 + 0x38) = in_stack_000000b8;
      *(undefined8 *)(lVar7 + 0x30) = in_stack_000000b0;
      *(undefined8 *)(lVar7 + 0x48) = in_stack_000000c8;
      *(undefined8 *)(lVar7 + 0x40) = in_stack_000000c0;
      thunk_FUN_02bb0e9c(lVar7 + 0x40,0);
    }
    else {
      FUN_038c4894(lVar5,&stack0x000000a0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


