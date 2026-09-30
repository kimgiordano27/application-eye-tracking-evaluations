/*
FUNCTION_NAME: FUN_034d50b0
ENTRY_POINT: 034d50b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034d50b0(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_04832d4d & 1) == 0) {
                    /* try { // try from 034d50e8 to 035d510f has its CatchHandler @ 034d55e8 */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_04832d4d = 1;
  }
  FUN_034d2afc(param_1);
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
                    /* try { // try from 034d51c0 to 035d51cb has its CatchHandler @ 034d55c4 */
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<StateEvent>__
                              );
                    /* try { // try from 034d51d0 to 035d51db has its CatchHandler @ 034d55c0 */
    FUN_034efd20(uVar2,uVar3,0);
                    /* try { // try from 034d51dc to 035d537f has its CatchHandler @ 034d4b58 */
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<TouchState>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,uVar3);
  }
  if (param_1 != 0) {
    *(long *)(param_1 + 0x98) = param_2;
    thunk_FUN_01f51358((long *)(param_1 + 0x98),param_2);
    lVar1 = param_2;
    if (param_3 != 0) {
      lVar1 = param_3;
    }
    if ((param_5 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = FUN_034d1098(lVar1);
                    /* try { // try from 034d5144 to 035d5187 has its CatchHandler @ 034d55ec */
    }
    if (param_1 != 0) {
      *(long *)(param_1 + 0x90) = lVar1;
      thunk_FUN_01f51358((long *)(param_1 + 0x90),lVar1);
      if (param_4 == 0) {
        if (*(int *)(*(long *)
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        param_4 = FUN_034d51f0(param_2);
      }
      *(long *)(param_1 + 0xa0) = param_4;
      thunk_FUN_01f51358((long *)(param_1 + 0xa0),param_4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


