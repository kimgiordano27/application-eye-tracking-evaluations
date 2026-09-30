/*
FUNCTION_NAME: FUN_034daed0
ENTRY_POINT: 034daed0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


long FUN_034daed0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_04832d95 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_GetObjectData__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_UIR_Utility_SetVectorArray<Transform3x4>__);
    DAT_04832d95 = 1;
  }
  uVar3 = FUN_0340eec4(param_1,0);
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (1 < *(int *)(param_1 + 0x10)) {
      if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_GetObjectData__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_034ca344(param_1,0);
      if ((param_2 & 1) != 0) {
        uVar2 = FUN_03409f80(param_1,*(int *)(param_1 + 0x10) + -1,0);
        puVar1 = 
        Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
        if (*(int *)(*(long *)
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                            );
        }
        uVar3 = FUN_034db014(uVar2);
        if ((uVar3 & 1) != 0) {
                    /* try { // try from 034dafd4 to 035db04b has its CatchHandler @ 034dafd4
                       catch() { ... } // from try @ 034dafd4 with catch @ 034dafd4
                       catch() { ... } // from try @ 034db7a4 with catch @ 034dafd4
                       catch() { ... } // from try @ 034db90c with catch @ 034dafd4
                       catch() { ... } // from try @ 034db9a0 with catch @ 034dafd4 */
          lVar4 = FUN_035ac8e0(*(undefined8 *)
                                Method_UnityEngine_UIElements_UIR_Utility_SetVectorArray<Transform3x4>__
                               ,0);
          return lVar4;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar4 = FUN_034d51f0(param_1);
        return lVar4;
      }
    }
  }
  else {
    param_1 = **(long **)(*(long *)
                           Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8
                         );
  }
  return param_1;
}


