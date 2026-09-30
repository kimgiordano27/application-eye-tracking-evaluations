/*
FUNCTION_NAME: FUN_02014eec
ENTRY_POINT: 02014eec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_02014eec(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_03780950 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    DAT_03780950 = 1;
  }
  if (param_2 == 0) {
    param_2 = **(long **)(*(long *)
                           System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                         + 0xb8);
    if (param_2 == 0) goto LAB_02014fd0;
  }
  iVar1 = FUN_016047a8(param_2,0x3a,0);
  if ((iVar1 == -1) || (param_2 = FUN_01601d40(param_2,0,iVar1,0), param_2 != 0)) {
    if (*(int *)(param_2 + 0x10) != 0) {
      if (*(int *)(*(long *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_01fc7704(param_2,0);
      if ((uVar2 & 1) == 0) {
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar3 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar4 = thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<ZBin>_Reinterpret<float4>__)
        ;
        uVar5 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
        FUN_016ec624(uVar3,uVar4,uVar5,0);
        uVar4 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddlvq_s16__);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar3,uVar4);
      }
      param_2 = FUN_0160411c(param_2,0);
    }
    *(long *)(param_1 + 0x48) = param_2;
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
LAB_02014fd0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


