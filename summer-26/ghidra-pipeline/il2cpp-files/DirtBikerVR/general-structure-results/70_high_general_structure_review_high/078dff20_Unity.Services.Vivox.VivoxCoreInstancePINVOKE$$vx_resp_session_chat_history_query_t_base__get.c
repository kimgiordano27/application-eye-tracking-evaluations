/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_chat_history_query_t_base__get
ENTRY_POINT: 078dff20
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_chat_history_query_t_base__get(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  
  FUN_03a8a718(
              System_Collections_Generic_Stack<ValueTuple<VisualEffectControlTrackController_Chunk,_List<VisualEffectControlTrackController_Event>,_List<VisualEffectControlTrackController_Clip>>>_TypeInfo
              );
  FUN_03a8a718(PTR_DAT_08486bc0);
  *(undefined1 *)(unaff_x21 + 0xaa6) = 1;
  puVar1 = PTR_DAT_084902d8;
                    /* try { // try from 078dff4c to 079dff8b has its CatchHandler @ 078e00f0 */
  uVar5 = *unaff_x20;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)
                                System_Collections_Generic_Stack<HashSet<IConfirmedProperty>>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_084902d8,0);
  }
  puVar2 = System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  puVar2 = 
  System_Collections_Generic_Stack<ValueTuple<VisualEffectControlTrackController_Chunk,_List<VisualEffectControlTrackController_Event>,_List<VisualEffectControlTrackController_Clip>>>_TypeInfo
  ;
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  puVar1 = System_Collections_Generic_Stack<NativeArray<byte>>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x28);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065cddf0(uVar5,*(undefined8 *)puVar1,uVar4,0);
    return uVar5;
  }
  return uVar5;
}


