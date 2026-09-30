/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 05ce4778
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ce482c) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  char cStack000000000000001c;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  cStack000000000000001c = '\0';
  FUN_071e78b0(uVar2,&stack0x0000001c,0);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar1 = FUN_06b6f910(*(long *)(param_1 + 0x18),param_2,&stack0x00000008,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05d0f444(*(long *)(param_1 + 0x20),in_stack_00000008,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0));
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_06b6f2d8(*(long *)(param_1 + 0x18),param_2,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
  }
  if (cStack000000000000001c != '\0') {
    thunk_FUN_03d180a8(uVar2,0);
  }
  return;
}


