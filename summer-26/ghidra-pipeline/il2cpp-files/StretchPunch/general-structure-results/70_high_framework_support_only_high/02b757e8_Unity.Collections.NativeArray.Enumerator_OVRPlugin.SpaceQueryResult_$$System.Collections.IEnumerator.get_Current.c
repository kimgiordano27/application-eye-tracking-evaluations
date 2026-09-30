/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b757e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
          (long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_02b75f68(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xe8));
  if ((int)uVar1 < 0) {
    in_stack_00000008 = param_3;
    uVar2 = thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70),
                               &stack0x00000008);
                    /* try { // try from 02b75848 to 02c75853 has its CatchHandler @ 02b75860 */
    FUN_033b3790(uVar2,0);
    uVar4 = 0;
                    /* try { // try from 02b75854 to 02c7585f has its CatchHandler @ 02b7586c */
  }
  else {
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02b757d8 with catch @ 02b7586c
                       catch() { ... } // from try @ 02b75854 with catch @ 02b7586c */
      FUN_01d7db78();
    }
    uVar4 = *(undefined4 *)(lVar3 + (ulong)uVar1 * 0x20 + 0x30);
  }
  return uVar4;
}


