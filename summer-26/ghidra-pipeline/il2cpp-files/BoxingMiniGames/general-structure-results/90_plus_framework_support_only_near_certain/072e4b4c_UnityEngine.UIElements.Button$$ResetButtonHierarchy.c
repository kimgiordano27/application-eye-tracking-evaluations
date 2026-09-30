/*
FUNCTION_NAME: UnityEngine.UIElements.Button$$ResetButtonHierarchy
ENTRY_POINT: 072e4b4c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


void UnityEngine_UIElements_Button__ResetButtonHierarchy(void)

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
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = Method_OVREnumerable_Enumerator<OVRAnchor_TrackableType>_MoveNext__;
  if ((DAT_07ef2a9f & 1) == 0) {
    FUN_03642964(Method_OVREnumerable_Enumerator<OVRAnchor_TrackableType>_get_Current__);
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_Dispose__);
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_MoveNext__);
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_get_Current__
                );
    FUN_03642964(
                Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_Dispose__
                );
    FUN_03642964(
                Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_MoveNext__
                );
    FUN_03642964(
                Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
                );
    FUN_03642964(PTR_DAT_079f74d0);
    FUN_03642964(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
                );
    FUN_03642964(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                );
    FUN_03642964(Method_OVREnumerable_Enumerator<OVRAnchor_TrackableType>_MoveNext__);
    FUN_03642964(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__);
    DAT_07ef2a9f = 1;
  }
  puVar9 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
  ;
  puVar8 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
  ;
  puVar7 = 
  Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__;
  puVar6 = Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
  ;
  puVar5 = Method_Unity_Collections_NativeArray_Enumerator<OVRLocatable_TrackingSpacePose>_Dispose__
  ;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_get_Current__;
  puVar3 = Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_MoveNext__;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<OVRInput_Controller>_Dispose__;
  lVar10 = *(long *)puVar1;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar10 = *(long *)puVar1;
  }
  uVar13 = **(undefined8 **)(lVar10 + 0xb8);
  uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_0414d3cc(uVar11,uVar13,*(undefined8 *)puVar7,0);
  uVar14 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_0554a400(uVar13,uVar14,*(undefined8 *)puVar8,0);
  uVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
  FUN_04a7676c(uVar14,uVar11,uVar13,0,0,1,1,10000);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar14;
  thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar14);
  uVar13 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
  FUN_0414d3cc(uVar11,uVar13,*(undefined8 *)puVar9,0);
  uVar14 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                               Method_OVREnumerable_Enumerator<OVRAnchor_TrackableType>_get_Current__
                             );
  FUN_0554a400(uVar13,uVar14,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
               ,0);
  uVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                               Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                             );
  FUN_04a7676c(uVar14,uVar11,uVar13,0,0,1,1,10000);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar12 = uVar14;
  thunk_FUN_036b7ad0(puVar12,uVar14);
  uVar11 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f74d0);
  FUN_067afa50(uVar11,*(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__
               ,8,0);
  puVar12 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar12 = uVar11;
  thunk_FUN_036b7ad0(puVar12,uVar11);
  return;
}


