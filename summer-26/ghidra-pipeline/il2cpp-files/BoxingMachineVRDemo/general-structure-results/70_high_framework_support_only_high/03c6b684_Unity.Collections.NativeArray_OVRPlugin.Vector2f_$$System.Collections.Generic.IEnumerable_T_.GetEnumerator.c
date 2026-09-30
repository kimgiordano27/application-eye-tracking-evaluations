/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03c6b684
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack0000000000000038;
  
  lVar2 = tpidr_el0;
  lStack0000000000000038 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_03c6be50(param_1,uVar1 + 1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78)
              );
  *(uint *)(param_1 + 0x18) = uVar1 + 1;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* try { // try from 03c6b6e0 to 03d6b723 has its CatchHandler @ 03c6b6e0
                       catch() { ... } // from try @ 03c6b6e0 with catch @ 03c6b6e0
                       catch() { ... } // from try @ 03c6b7e0 with catch @ 03c6b6e0
                       catch() { ... } // from try @ 03c6b810 with catch @ 03c6b6e0
                       catch() { ... } // from try @ 03c6b884 with catch @ 03c6b6e0 */
  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
    lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
    *(undefined8 *)(lVar3 + 0x30) = param_2[2];
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    if (*(long *)(lVar2 + 0x28) == lStack0000000000000038) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


