/*
FUNCTION_NAME: FUN_07812450
ENTRY_POINT: 07812450
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_07812450(void)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_2c0 [152];
  undefined1 auStack_228 [152];
  undefined1 auStack_190 [152];
  undefined1 auStack_f8 [152];
  
  puVar2 = PTR_DAT_07d95b20;
  if ((DAT_0827231d & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95b20);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    FUN_0373b518(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                );
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_0373b518(Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>_get_name__);
    FUN_0373b518(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_Dispose__
                );
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<InspectedHandle>_Dispose__);
    FUN_0373b518(Method_System_Runtime_Serialization_DataNode<Array>_Clear__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_MoveNext__
                );
    FUN_0373b518(PTR_DAT_07d94fb8);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_MoveNext__
                );
    FUN_0373b518(Method_System_Runtime_Serialization_DataNode<char>__ctor__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__
                );
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<HapticLibraryAsset>_MoveNext__);
    DAT_0827231d = 1;
  }
  puVar12 = 
  Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_MoveNext__;
  puVar11 = 
  Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__;
  puVar10 = 
  Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_get_Current__;
  puVar9 = 
  Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_MoveNext__;
  puVar8 = Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_Dispose__;
  puVar7 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
  ;
  puVar6 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<InspectedHandle>_Dispose__;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<HapticLibraryAsset>_MoveNext__;
  puVar3 = Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__;
  puVar1 = PTR_DAT_07d94fb8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_07769d80(auStack_190,*(undefined8 *)puVar1,0);
  memcpy(auStack_f8,auStack_190,0x98);
  memcpy(*(void **)(*(long *)puVar6 + 0xb8),auStack_f8,0x98);
  thunk_FUN_037aeb94(*(long *)(*(long *)puVar6 + 0xb8) + 8,0);
  FUN_07769d80(auStack_228,*(undefined8 *)puVar5,0);
  memcpy(auStack_190,auStack_228,0x98);
  lVar14 = *(long *)puVar6;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x98),auStack_190,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0xa0,0);
  FUN_07769d80(auStack_2c0,*(undefined8 *)puVar12,0);
  memcpy(auStack_228,auStack_2c0,0x98);
  lVar14 = *(long *)puVar6;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x130),auStack_228,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x138,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x1c8) = *(undefined8 *)puVar11;
  thunk_FUN_037aeb94(lVar14 + 0x1c8);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c8),
                      *(undefined8 *)puVar3,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x1d0) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x1d0);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1d0),
                      *(undefined8 *)puVar8,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x1d8) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x1d8);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1d8),
                      *(undefined8 *)puVar7,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x1e0) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x1e0);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1d8),
                      *(undefined8 *)puVar10,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x1e8) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x1e8);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1d0),
                      *(undefined8 *)puVar9,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x1f0) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x1f0);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1f0),
                      *(undefined8 *)puVar7,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x1f8) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x1f8);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1d0),
                      *(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<OVRSpatialAnchor_UnboundAnchor>_Dispose__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x200) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x200);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c8),
                      *(undefined8 *)puVar4,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x208) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x208);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c8),
                      *(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_MoveNext__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x210) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x210);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c8),
                      *(undefined8 *)
                       Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>_get_name__,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x218) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x218);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x218),
                      *(undefined8 *)Method_System_Runtime_Serialization_DataNode<Array>_Clear__,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x220) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x220);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x220),
                      *(undefined8 *)Method_System_Runtime_Serialization_DataNode<char>__ctor__,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x228) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x228);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1d0),
                      *(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<OVRSceneManager_Metrics>_get_Current__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x230) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x230);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x1c8),
                      *(undefined8 *)
                       Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_MoveNext__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar6 + 0xb8);
  *(undefined8 *)(lVar14 + 0x238) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x238);
  return;
}


