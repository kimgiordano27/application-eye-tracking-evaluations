/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_session_edit_message_t_from_uri_get
ENTRY_POINT: 078dfa1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_session_edit_message_t_from_uri_get
          (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  uVar2 = FUN_065ce354(param_2,*param_1);
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)
                                System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x18),*unaff_x21,0);
  }
  puVar1 = System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar4,*unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 078dfa90 to 079dfb2f has its CatchHandler @ 078dfa90
                       catch() { ... } // from try @ 078dfa90 with catch @ 078dfa90
                       catch() { ... } // from try @ 078dfc6c with catch @ 078dfa90
                       catch() { ... } // from try @ 078dfd08 with catch @ 078dfa90
                       catch() { ... } // from try @ 078dfd58 with catch @ 078dfa90
                       catch() { ... } // from try @ 078dfde4 with catch @ 078dfa90 */
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)
                                UnityEngine_Playables_ScriptPlayable<WaterSurfaceBehaviour>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x28),*unaff_x21,0);
  }
  puVar1 = System_Collections_Generic_Stack<HashSet<ParameterExpression>>_TypeInfo;
  plVar3 = *(long **)(unaff_x19 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_065ce354(uVar2,*(undefined8 *)puVar1,uVar4,*unaff_x21,0);
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar2 = FUN_065cddf0(uVar2,*(undefined8 *)
                                System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                         ,*(long *)(unaff_x19 + 0x38),0);
    return uVar2;
  }
  return uVar2;
}


