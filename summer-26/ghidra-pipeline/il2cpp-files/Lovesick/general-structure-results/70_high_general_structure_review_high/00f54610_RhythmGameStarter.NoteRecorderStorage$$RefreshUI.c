/*
FUNCTION_NAME: RhythmGameStarter.NoteRecorderStorage$$RefreshUI
ENTRY_POINT: 00f54610
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void RhythmGameStarter_NoteRecorderStorage__RefreshUI(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  undefined8 unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x24;
  
  FUN_012d239c();
  *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0xd0) = unaff_x22;
  puVar2 = Method_Obi_ObiNativeList<HeightFieldHeader>__ctor__;
  puVar1 = Method_System_Collections_Generic_Dictionary<IXRInteractor,_float>_TryGetValue__;
  uVar3 = FUN_010df764();
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  uVar3 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = 
  Method_<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_get_Assembly__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xd8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,*(undefined8 *)System_Xml_Linq_SaveOptions_var,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xd8) = lVar5;
  }
  uVar3 = FUN_010db508(uVar3,lVar5,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmulhq_laneq_s32__);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar2 = Method_System_Globalization_CultureInfo_get_CalendarType__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xe0);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,*(undefined8 *)StringLiteral_3209,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xe0) = lVar5;
  }
  uVar3 = FUN_010dcdb8(uVar3,lVar5,*(undefined8 *)Method_Obi_ObiNativeList<Vector3>_AddRange__);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xe8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__,0)
    ;
    lVar4 = *unaff_x24;
    *(long *)(*(long *)(lVar4 + 0xb8) + 0xe8) = lVar5;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = UnityEngine_InputSystem_Layouts_InputControlLayout_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xf0);
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar7,uVar6,*(undefined8 *)Method_System_Collections_Generic_List<Vector4>__ctor__,
                 0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xf0) = lVar7;
  }
  puVar2 = Method_System_Xml_XmlEncodedRawTextWriter_WriteCharEntity__;
  puVar1 = 
  Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_SetState__
  ;
  uVar3 = FUN_010df764(uVar3,lVar5,lVar7,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                      );
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar3;
                    /* try { // try from 00f548b4 to 010549eb has its CatchHandler @ 00f548b4
                       catch() { ... } // from try @ 00f548b4 with catch @ 00f548b4
                       catch() { ... } // from try @ 00f54a1c with catch @ 00f548b4
                       catch() { ... } // from try @ 00f54a6c with catch @ 00f548b4
                       catch() { ... } // from try @ 00f54a9c with catch @ 00f548b4 */
  uVar3 = FUN_0113a200(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = Method_System_Runtime_Serialization_ObjectManager_CompleteISerializableObject__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xf8);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,
                 *(undefined8 *)UnityEngine_Timeline_TrackAsset_<get_outputs>d__65_TypeInfo,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0xf8) = lVar5;
  }
  uVar3 = FUN_010db508(uVar3,lVar5,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxvq_s16__);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar2 = Method_System_Reflection_Emit_TypeBuilder_IsDefined__;
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x100);
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_00f54b0c;
    FUN_012d239c(lVar5,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Rotate>__
                 ,0);
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x100) = lVar5;
  }
  uVar3 = FUN_010dcdb8(uVar3,lVar5,
                       *(undefined8 *)Method_UnityEngine_AI_NavMeshBuilder_CollectSources__);
  lVar4 = *unaff_x24;
                    /* try { // try from 00f549ec to 010549f3 has its CatchHandler @ 00f54a50 */
  if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 00f549fc to 01054a03 has its CatchHandler @ 00f54a4c */
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x108);
                    /* try { // try from 00f54a0c to 01054a1b has its CatchHandler @ 00f54a48 */
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 00f54a1c to 01054a67 has its CatchHandler @ 00f548b4 */
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_00f54b0c;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 00f54a0c with catch @ 00f54a48
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 00f549fc with catch @ 00f54a4c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 00f549ec with catch @ 00f54a50
                        */
    FUN_012d239c(lVar5,uVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtd_f64__,0);
    lVar4 = *unaff_x24;
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x108) = lVar5;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 00f54a68 to 01054a6b has its CatchHandler @ 00f54a8c */
                    /* try { // try from 00f54a6c to 01054a93 has its CatchHandler @ 00f548b4 */
    thunk_FUN_00d32864(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar1 = Method_System_Threading_OSSpecificSynchronizationContext_InvocationEntry__;
  lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x110);
  if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 00f54a68 with catch @ 00f54a8c */
    if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 00f54a94 to 01054a9b has its CatchHandler @ 00f54ab0 */
      thunk_FUN_00d32864(lVar4);
      lVar4 = *unaff_x24;
    }
                    /* try { // try from 00f54a9c to 01054aa7 has its CatchHandler @ 00f548b4 */
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                    /* try { // try from 00f54aa8 to 01054aaf has its CatchHandler @ 00f54ab0 */
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) {
LAB_00f54b0c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 00f54a94 with catch @ 00f54ab0
                       catch(type#2 @ 00000000) { ... } // from try @ 00f54aa8 with catch @ 00f54ab0
                        */
    FUN_012d239c(lVar7,uVar6,*(undefined8 *)Method_System_Xml_Linq_XHashtable<WeakReference>_Add__,0
                );
    *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x110) = lVar7;
  }
  uVar3 = FUN_010df764(uVar3,lVar5,lVar7,*(undefined8 *)StringLiteral_773);
  *(undefined8 *)(unaff_x19 + 0x100) = uVar3;
  return;
}


