/*
FUNCTION_NAME: FUN_078df968
ENTRY_POINT: 078df968
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8 FUN_078df968(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_08486bc0;
                    /* try { // try from 078df97c to 079df9ef has its CatchHandler @ 078df6c4 */
  if ((DAT_08987aa2 & 1) == 0) {
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
    DAT_08987aa2 = 1;
  }
  puVar2 = PTR_DAT_084902d8;
  uVar5 = *(undefined8 *)puVar1;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)
                                System_Collections_Generic_Stack<HashSet<IConfirmedProperty>>_TypeInfo
                         ,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_084902d8,0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)
                                System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_TypeInfo
                         ,*(long *)(param_1 + 0x18),*(undefined8 *)puVar2,0);
  }
  puVar1 = System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo;
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar1,uVar4,*(undefined8 *)puVar2,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)
                                UnityEngine_Playables_ScriptPlayable<WaterSurfaceBehaviour>_TypeInfo
                         ,*(long *)(param_1 + 0x28),*(undefined8 *)puVar2,0);
  }
  puVar1 = System_Collections_Generic_Stack<HashSet<ParameterExpression>>_TypeInfo;
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = FUN_065ce354(uVar5,*(undefined8 *)puVar1,uVar4,*(undefined8 *)puVar2,0);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar5 = FUN_065cddf0(uVar5,*(undefined8 *)
                                System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                         ,*(long *)(param_1 + 0x38),0);
    return uVar5;
  }
  return uVar5;
}


