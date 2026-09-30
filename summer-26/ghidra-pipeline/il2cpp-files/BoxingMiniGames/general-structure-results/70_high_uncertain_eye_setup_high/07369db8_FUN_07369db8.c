/*
FUNCTION_NAME: FUN_07369db8
ENTRY_POINT: 07369db8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_07369db8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar4 = Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__;
  puVar3 = Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>_Dispose__;
  puVar1 = Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__;
  puVar2 = System_Security_Util_Tokenizer_StringMaker_TypeInfo;
  if ((DAT_07ef31ba & 1) == 0) {
    FUN_03642964(PTR_DAT_079f5050);
    FUN_03642964(Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__);
    FUN_03642964(Method_System_Collections_Generic_Dictionary<OVRGrabbable,_int>_Clear__);
    FUN_03642964(System_Security_Util_Tokenizer_StringMaker_TypeInfo);
    FUN_03642964(Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>_Dispose__);
    FUN_03642964(Method_OVRObjectPool_ListScope<OVRPlugin_SpaceComponentType>__ctor__);
    FUN_03642964(Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>__ctor__);
    FUN_03642964(Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>_Dispose__);
    FUN_03642964(Method_System_Collections_Generic_List<Action<Texture>>__ctor__);
                    /* try { // try from 07369e64 to 07469e8b has its CatchHandler @ 0736a47c */
    FUN_03642964(Method_System_Collections_Generic_List<Action<Texture>>_GetEnumerator__);
    FUN_03642964(Method_System_Collections_Generic_List<IntervalTree_Entry<RuntimeElement>>__ctor__)
    ;
    FUN_03642964(Method_System_Collections_Generic_List<EventCallback<AttachToPanelEvent>>__ctor__);
    FUN_03642964(Method_System_Collections_Generic_List<EventCallback<AttachToPanelEvent>>_Add__);
    FUN_03642964(Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>__ctor__);
    DAT_07ef31ba = 1;
  }
  puVar5 = Method_System_Collections_Generic_List<EventCallback<AttachToPanelEvent>>_Add__;
  uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_0459e7d4(uVar6,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar6;
  thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar6);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar7 = *(long *)puVar2;
  }
  puVar3 = Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>__ctor__;
  puVar1 = PTR_DAT_079f5050;
  lVar11 = *(long *)puVar5;
  uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar11);
    lVar11 = *(long *)puVar5;
  }
  uVar12 = **(undefined8 **)(lVar11 + 0xb8);
  uVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05d84434(uVar8,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05e5e514(uVar6,uVar8,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto LAB_0736a298;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto LAB_0736a298;
  }
  puVar3 = Method_OVRObjectPool_ListScope<OVRSpatialAnchor_UnboundAnchor>_Dispose__;
  thunk_FUN_036b7ad0(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05d84434(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05e5e514(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto LAB_0736a298;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto LAB_0736a298;
  }
  puVar4 = Method_System_Collections_Generic_List<Action<Texture>>__ctor__;
  puVar3 = Method_System_Collections_Generic_Dictionary<OVRGrabbable,_int>_Clear__;
  thunk_FUN_036b7ad0(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_04162738(uVar6,uVar12,*(undefined8 *)puVar4,0);
  lVar7 = FUN_05e5e514(uVar8,uVar6,0);
  if (lVar7 == 0) {
    lVar11 = 0;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_0367fd24(lVar7,uVar6);
    if (lVar11 == 0) goto UnityEngine_UIElements_PanelInputConfiguration__OnDisable;
    uVar6 = *(undefined8 *)puVar3;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar9 = lVar11;
    lVar11 = thunk_FUN_0367fd24(lVar7,uVar6);
    if (lVar11 == 0) goto LAB_0736a2d0;
  }
  puVar3 = Method_System_Collections_Generic_List<Action<Texture>>_GetEnumerator__;
  thunk_FUN_036b7ad0(plVar9,lVar11);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05d84434(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05e5e514(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar10 = 0;
  }
  else {
    lVar7 = *(long *)puVar1;
    if (*plVar9 != lVar7) goto LAB_0736a298;
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar10 = (long)plVar9;
    if (*plVar9 != lVar7) goto LAB_0736a298;
  }
  puVar4 = Method_System_Collections_Generic_List<IntervalTree_Entry<RuntimeElement>>__ctor__;
  puVar3 = Method_OVRObjectPool_ListScope<OVRSceneManager_Metrics>_Dispose__;
  thunk_FUN_036b7ad0(plVar10,plVar9);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_04159004(uVar6,uVar12,*(undefined8 *)puVar4,0);
  lVar7 = FUN_05e5e514(uVar8,uVar6,0);
  if (lVar7 == 0) {
    lVar11 = 0;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar9 = 0;
  }
  else {
    uVar6 = *(undefined8 *)puVar3;
    lVar11 = thunk_FUN_0367fd24(lVar7,uVar6);
    if (lVar11 == 0) {
UnityEngine_UIElements_PanelInputConfiguration__OnDisable:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(lVar7,uVar6);
    }
    uVar6 = *(undefined8 *)puVar3;
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar9 = lVar11;
    lVar11 = thunk_FUN_0367fd24(lVar7,uVar6);
    if (lVar11 == 0) {
LAB_0736a2d0:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(lVar7,uVar6);
    }
  }
  puVar3 = Method_System_Collections_Generic_List<EventCallback<AttachToPanelEvent>>__ctor__;
  thunk_FUN_036b7ad0(plVar9,lVar11);
  uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  uVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05d84434(uVar6,uVar12,*(undefined8 *)puVar3,0);
  plVar9 = (long *)FUN_05e5e514(uVar8,uVar6,0);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar10 = 0;
LAB_0736a2ac:
    thunk_FUN_036b7ad0(plVar10,plVar9);
    return;
  }
  lVar7 = *(long *)puVar1;
  if (*plVar9 == lVar7) {
    plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar10 = (long)plVar9;
    if (*plVar9 == lVar7) goto LAB_0736a2ac;
  }
LAB_0736a298:
                    /* WARNING: Subroutine does not return */
  FUN_03643084(plVar9);
}


