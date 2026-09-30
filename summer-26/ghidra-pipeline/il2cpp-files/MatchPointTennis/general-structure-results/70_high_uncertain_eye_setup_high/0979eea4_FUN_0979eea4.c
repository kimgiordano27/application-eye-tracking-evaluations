/*
FUNCTION_NAME: FUN_0979eea4
ENTRY_POINT: 0979eea4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0979eea4(long param_1,int *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_90 [9];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_0a54799e & 1) == 0) {
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    FUN_04447ba8(System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo)
    ;
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
                );
    FUN_04447ba8(
                System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TypeInfo
                );
    DAT_0a54799e = 1;
  }
  puVar2 = 
  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
  ;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_0979f100;
  if (*(char *)(lVar7 + 0x3b) != '\0') {
    memcpy(local_90,param_2,0x48);
    uVar4 = thunk_FUN_04484e3c(*(undefined8 *)puVar2,local_90);
    FUN_0979dd94(lVar7,uVar4);
  }
  puVar2 = 
  System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
  ;
  if (*param_2 - 1U < 2) {
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)
             System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
    ;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x50);
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                );
      FUN_05554a1c(lVar8,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                   ,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
      *plVar5 = lVar8;
LAB_0979f088:
      lVar7 = thunk_FUN_044bb4b4(plVar5,lVar8);
    }
  }
  else {
    if (*param_2 != 3) goto LAB_0979f0d8;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar7 = *(long *)
             System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
    ;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x58);
    if (lVar8 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar2;
      }
      uVar4 = **(undefined8 **)(lVar7 + 0xb8);
      lVar8 = thunk_FUN_0448520c(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                );
      FUN_05554a1c(lVar8,uVar4,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                   ,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58);
      *plVar5 = lVar8;
      goto LAB_0979f088;
    }
  }
  uVar3 = FUN_0979f8f8(lVar7,param_2[0x10]);
  local_90[0] = 0;
  FUN_06c6d168(local_90,uVar3,param_2[1],
               *(undefined8 *)
                System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TypeInfo
              );
  if (lVar6 != 0) {
    FUN_04cb7e10(lVar6,lVar8,local_90[0],
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
LAB_0979f0d8:
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0979f100:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


