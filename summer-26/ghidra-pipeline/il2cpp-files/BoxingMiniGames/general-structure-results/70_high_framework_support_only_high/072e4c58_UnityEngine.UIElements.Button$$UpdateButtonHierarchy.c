/*
FUNCTION_NAME: UnityEngine.UIElements.Button$$UpdateButtonHierarchy
ENTRY_POINT: 072e4c58
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UIElements_Button__UpdateButtonHierarchy(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  long unaff_x21;
  undefined8 *puVar6;
  long *unaff_x22;
  long unaff_x23;
  long *plVar7;
  long unaff_x24;
  undefined8 *puVar8;
  long unaff_x25;
  undefined8 *puVar9;
  long unaff_x27;
  undefined8 *puVar10;
  long unaff_x28;
  undefined8 *puVar11;
  undefined8 *unaff_x29;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0xca8);
  puVar11 = *(undefined8 **)(unaff_x28 + 0xc68);
  puVar6 = *(undefined8 **)(unaff_x21 + 0xcb0);
  puVar10 = *(undefined8 **)(unaff_x27 + 0xca0);
  plVar7 = *(long **)(unaff_x23 + 0xc70);
  puVar9 = *(undefined8 **)(unaff_x25 + 0xc80);
  puVar8 = *(undefined8 **)(unaff_x24 + 0xcb8);
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar1 = *unaff_x22;
  }
  uVar3 = **(undefined8 **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_0367fe20(*unaff_x29);
  FUN_0414d3cc(uVar2,uVar3,*puVar5,0);
  uVar4 = **(undefined8 **)(*unaff_x22 + 0xb8);
  uVar3 = thunk_FUN_0367fe20(*puVar11);
  FUN_0554a400(uVar3,uVar4,*puVar6,0);
  uVar4 = thunk_FUN_0367fe20(*puVar10);
  FUN_04a7676c(uVar4,uVar2,uVar3,0,0,1,1,10000);
  **(undefined8 **)(*plVar7 + 0xb8) = uVar4;
  thunk_FUN_036b7ad0(*(undefined8 *)(*plVar7 + 0xb8),uVar4);
  uVar3 = **(undefined8 **)(*unaff_x22 + 0xb8);
  uVar2 = thunk_FUN_0367fe20(*puVar9);
  FUN_0414d3cc(uVar2,uVar3,*puVar8,0);
  uVar4 = **(undefined8 **)(*unaff_x22 + 0xb8);
  uVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_OVREnumerable_Enumerator<OVRAnchor_TrackableType>_get_Current__
                            );
  FUN_0554a400(uVar3,uVar4,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
               ,0);
  uVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_Dispose__
                            );
  FUN_04a7676c(uVar4,uVar2,uVar3,0,0,1,1,10000);
  puVar5 = (undefined8 *)(*(long *)(*plVar7 + 0xb8) + 8);
  *puVar5 = uVar4;
  thunk_FUN_036b7ad0(puVar5,uVar4);
  uVar2 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f74d0);
  FUN_067afa50(uVar2,*(undefined8 *)
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_Dispose__,
               8,0);
  puVar5 = (undefined8 *)(*(long *)(*plVar7 + 0xb8) + 0x10);
  *puVar5 = uVar2;
  thunk_FUN_036b7ad0(puVar5,uVar2);
  return;
}


