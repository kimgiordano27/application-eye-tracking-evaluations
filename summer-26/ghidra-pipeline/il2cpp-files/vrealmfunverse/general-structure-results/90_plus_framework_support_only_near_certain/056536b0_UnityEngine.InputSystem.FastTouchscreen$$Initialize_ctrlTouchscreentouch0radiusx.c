/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch0radiusx
ENTRY_POINT: 056536b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_9;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch0radiusx(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  long *unaff_x21;
  
  FUN_02b3c81c(
              Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_Dispose__
              );
                    /* try { // try from 056536c0 to 05753747 has its CatchHandler @ 0565354c */
  FUN_02b3c81c(
              Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_MoveNext__
              );
  FUN_02b3c81c(
              Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_get_Current__
              );
  FUN_02b3c81c(
              Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_Dispose__
              );
  FUN_02b3c81c(
              Method_System_Collections_Generic_List_Enumerator<ATGTextJobSystem_ManagedJobData>_get_Current__
              );
  FUN_02b3c81c(
              Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_MoveNext__
              );
  FUN_02b3c81c(
              Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_get_Current__
              );
  FUN_02b3c81c(Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_Dispose__);
  FUN_02b3c81c(Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_MoveNext__);
  FUN_02b3c81c(PTR_DAT_0632ceb8);
  FUN_02b3c81c(PTR_DAT_063385a8);
  FUN_02b3c81c(Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_get_Current__);
                    /* try { // try from 05653748 to 0575377b has its CatchHandler @ 056537a0 */
  FUN_02b3c81c(Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_Dispose__);
  FUN_02b3c81c(Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_MoveNext__);
  *(undefined1 *)(unaff_x19 + 0xcd1) = 1;
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *unaff_x21;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
                    /* try { // try from 0565377c to 0575378f has its CatchHandler @ 0565354c */
  thunk_FUN_02b4aae0();
  if (lVar3 == 0) {
                    /* try { // try from 05653790 to 0575379f has its CatchHandler @ 056537a0 */
    plVar4 = (long *)thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0632ba48);
    FUN_04d2e0f0(plVar4,0);
    puVar1 = PTR_DAT_06312310;
                    /* catch() { ... } // from try @ 056536a8 with catch @ 056537a0
                       catch() { ... } // from try @ 05653748 with catch @ 056537a0
                       catch() { ... } // from try @ 05653790 with catch @ 056537a0 */
                    /* try { // try from 056537a4 to 057537a7 has its CatchHandler @ 056537b0 */
                    /* try { // try from 056537a8 to 057537b3 has its CatchHandler @ 0565354c */
    lVar3 = *(long *)(PTR_DAT_06312310 + 0x28);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 056537a4 with catch @ 056537b0
                        */
                    /* try { // try from 056537b4 to 05753807 has its CatchHandler @ 056537b4
                       catch() { ... } // from try @ 056537b4 with catch @ 056537b4
                       catch() { ... } // from try @ 0565382c with catch @ 056537b4
                       catch() { ... } // from try @ 056538a4 with catch @ 056537b4
                       catch() { ... } // from try @ 056538dc with catch @ 056537b4
                       catch() { ... } // from try @ 05653998 with catch @ 056537b4
                       catch() { ... } // from try @ 056539c4 with catch @ 056537b4 */
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_04d8a7b0(lVar3 + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_Dispose__
                         ,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
                    /* try { // try from 05653808 to 05753813 has its CatchHandler @ 056538ac */
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x18) + 0x20,0);
                    /* try { // try from 05653824 to 0575382b has its CatchHandler @ 056538a4 */
                    /* try { // try from 0565382c to 0575389f has its CatchHandler @ 056537b4 */
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_MoveNext__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x30) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_MoveNext__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x88) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<BodyPoseComparerActiveState_JointComparerConfig>_get_Current__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x80) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_get_Current__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x90) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_Dispose__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x48) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_Dispose__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x38) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ControllerButtonsMapper_ButtonClickAction>_get_Current__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x68) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_MoveNext__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x78) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_get_Current__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x40) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_get_Current__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x50) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_Dispose__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x70) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<DebugUI_Widget>_MoveNext__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x10) + 0x20,0);
    puVar2 = PTR_DAT_063385a8;
    uVar6 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_063385a8,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x20) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)puVar2,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_063310a0,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<BoxColliderSerializationFixer_ColliderData>_MoveNext__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e428,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<BoxColliderSerializationFixer_ColliderData>_get_Current__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0631e420,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_Dispose__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0632ce70,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ClickDetector_ButtonClickStatus>_MoveNext__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_0632ceb8,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<DebugUI_Panel>_MoveNext__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(undefined8 *)PTR_DAT_06336f88,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ControllerButtonsMapper_ButtonClickAction>_MoveNext__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0xa0) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<Awaitable_AwaitableAndFrameIndex>_get_Current__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(undefined8 *)OVRPlugin_OVRP_1_41_0_TypeInfo,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<BoxColliderSerializationFixer_ColliderData>_Dispose__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    uVar5 = FUN_04d8a7b0(*(long *)(puVar1 + 0x98) + 0x20,0);
    uVar6 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<ControllerButtonsMapper_ButtonClickAction>_Dispose__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar5,uVar6,*(undefined8 *)(*plVar4 + 800));
    lVar3 = *unaff_x21;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *unaff_x21;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
    uVar5 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<DataBindingManager_BindingData>_Dispose__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar6,uVar5,*(undefined8 *)(*plVar4 + 800));
    uVar6 = *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
    uVar5 = FUN_04d8a7b0(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<CreationContext_AttributeOverrideRange>_get_Current__
                         ,0);
    (**(code **)(*plVar4 + 0x318))(plVar4,uVar6,uVar5,*(undefined8 *)(*plVar4 + 800));
    thunk_FUN_02b4aae0();
    plVar7 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    *plVar7 = (long)plVar4;
    thunk_FUN_02bb0e9c(plVar7,plVar4);
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *unaff_x21;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  thunk_FUN_02b4aae0();
  return uVar5;
}


