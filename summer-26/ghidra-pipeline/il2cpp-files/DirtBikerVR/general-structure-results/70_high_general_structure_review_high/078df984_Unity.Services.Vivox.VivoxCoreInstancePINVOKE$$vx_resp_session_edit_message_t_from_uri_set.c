/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_edit_message_t_from_uri_set
ENTRY_POINT: 078df984
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_edit_message_t_from_uri_set
          (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x21;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0xbc0);
  if ((param_1 & 1) == 0) {
    FUN_03a8a718(
                System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                );
    FUN_03a8a718(
                System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_TypeInfo
                );
    FUN_03a8a718(System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo);
    FUN_03a8a718(UnityEngine_Playables_ScriptPlayable<WaterSurfaceBehaviour>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Stack<HashSet<IConfirmedProperty>>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084902d8);
    FUN_03a8a718(PTR_DAT_08486bc0);
    FUN_03a8a718(System_Collections_Generic_Stack<HashSet<ParameterExpression>>_TypeInfo);
                    /* try { // try from 078df9f0 to 079df9ff has its CatchHandler @ 078dfa00 */
    *(undefined1 *)(unaff_x21 + 0xaa2) = 1;
  }
  puVar1 = PTR_DAT_084902d8;
                    /* catch() { ... } // from try @ 078df964 with catch @ 078dfa00
                       catch() { ... } // from try @ 078df9f0 with catch @ 078dfa00 */
  uVar6 = *puVar5;
                    /* try { // try from 078dfa04 to 079dfa07 has its CatchHandler @ 078dfa10 */
  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* try { // try from 078dfa08 to 079dfa13 has its CatchHandler @ 078df6c4 */
                    /* catch() { ... } // from try @ 078dfa04 with catch @ 078dfa10 */
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)
                                System_Collections_Generic_Stack<HashSet<IConfirmedProperty>>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_084902d8,0);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)
                                System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x18),*(undefined8 *)puVar1,0);
  }
  puVar2 = System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)
                                UnityEngine_Playables_ScriptPlayable<WaterSurfaceBehaviour>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x28),*(undefined8 *)puVar1,0);
  }
  puVar2 = System_Collections_Generic_Stack<HashSet<ParameterExpression>>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar6 = FUN_065ce354(uVar6,*(undefined8 *)puVar2,uVar4,*(undefined8 *)puVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar6 = FUN_065cddf0(uVar6,*(undefined8 *)
                                System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x38),0);
    return uVar6;
  }
  return uVar6;
}


