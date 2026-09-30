/*
FUNCTION_NAME: FUN_04f62598
ENTRY_POINT: 04f62598
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04f62598(void *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
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
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
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
  FUN_037a6fdc(&local_98,*(long *)(param_2 + 0x130),
               *(undefined8 *)
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo);
  while( true ) {
    uVar6 = FUN_0472eaf4(&local_98,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) {
      FUN_0472eaf0(&local_98,*(undefined8 *)puVar2);
      local_a0 = 0;
      uStack_9c = 0;
      uStack_d8 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      local_d0 = 0;
      uStack_cc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      local_c0 = 0;
      uStack_bc = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_e0 = lVar5;
      thunk_FUN_02bb0e9c(&local_e0,lVar5);
      local_d0 = *(undefined4 *)(param_2 + 0xdc);
      uStack_d8 = CONCAT44(*(undefined4 *)(param_2 + 0x128),*(undefined4 *)(param_2 + 0xe4));
      uStack_c4 = (undefined4)*(undefined8 *)(param_2 + 0xf0);
      local_c0 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xf0) >> 0x20);
      uStack_cc = (undefined4)*(undefined8 *)(param_2 + 0xe8);
      uStack_c8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xe8) >> 0x20);
      uStack_bc = (undefined4)*(undefined8 *)(param_2 + 0xf8);
      uStack_b8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xf8) >> 0x20);
      uStack_ac = (undefined4)*(undefined8 *)(param_2 + 0x108);
      uStack_a8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x108) >> 0x20);
      uStack_b4 = (undefined4)*(undefined8 *)(param_2 + 0x100);
      uStack_b0 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x100) >> 0x20);
      uStack_a4 = (undefined4)*(undefined8 *)(param_2 + 0x110);
      local_a0 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x110) >> 0x20);
      memcpy(param_1,&local_e0,0x48);
      return;
    }
    FUN_04f621dc(&local_80,local_88);
    if (lVar5 == 0) break;
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0x30;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + 0x28) = uStack_78;
      *(undefined8 *)(lVar7 + 0x20) = local_80;
      *(undefined8 *)(lVar7 + 0x38) = uStack_68;
      *(undefined8 *)(lVar7 + 0x30) = uStack_70;
      *(undefined8 *)(lVar7 + 0x48) = uStack_58;
      *(undefined8 *)(lVar7 + 0x40) = local_60;
      thunk_FUN_02bb0e9c(lVar7 + 0x40,0);
    }
    else {
      FUN_038c4894(lVar5,&local_80,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


