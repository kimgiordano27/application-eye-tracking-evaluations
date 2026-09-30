/*
FUNCTION_NAME: UnityEngine.UI.Extensions.ScrollSnapBase$$set_OnSelectionPageChangedEvent
ENTRY_POINT: 0979ef7c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UI_Extensions_ScrollSnapBase__set_OnSelectionPageChangedEvent(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int in_w8;
  uint in_w9;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x23;
  long in_stack_00000048;
  
  puVar1 = 
  System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
  ;
  if (in_w9 < 2) {
    lVar4 = *(long *)(unaff_x20 + 0x10);
    lVar2 = *(long *)
             System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
    ;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x50);
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar5 = thunk_FUN_0448520c(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                );
      FUN_05554a1c(lVar5,uVar6,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                   ,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
      *plVar3 = lVar5;
LAB_0979f088:
      lVar2 = thunk_FUN_044bb4b4(plVar3,lVar5);
    }
  }
  else {
    if (in_w8 != 3) goto LAB_0979f0d8;
    lVar4 = *(long *)(unaff_x20 + 0x10);
    lVar2 = *(long *)
             System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_TypeInfo
    ;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x58);
    if (lVar5 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar2 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      lVar5 = thunk_FUN_0448520c(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                                );
      FUN_05554a1c(lVar5,uVar6,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                   ,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
      *plVar3 = lVar5;
      goto LAB_0979f088;
    }
  }
  FUN_0979f8f8(lVar2,*(undefined4 *)(unaff_x19 + 0x40));
  FUN_06c6d168();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_04cb7e10(lVar4,lVar5,0,
               *(undefined8 *)
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
              );
LAB_0979f0d8:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


