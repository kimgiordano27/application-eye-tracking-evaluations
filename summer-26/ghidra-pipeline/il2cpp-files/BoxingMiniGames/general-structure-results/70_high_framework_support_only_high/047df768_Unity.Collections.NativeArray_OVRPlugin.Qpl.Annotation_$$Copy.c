/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 047df768
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(long param_1)

{
  uint uVar1;
  ulong in_x9;
  ulong in_x10;
  long unaff_x23;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x28;
  long lVar5;
  long *in_stack_00000000;
  
  do {
    if (in_x9 <= in_x10) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar2 = *(long *)(param_1 + in_x10 * 8 + 0x20);
    while (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0x20);
      lVar5 = *plVar3;
                    /* try { // try from 047df794 to 048df7bb has its CatchHandler @ 047df948 */
      uVar1 = FUN_047df900();
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (*(uint *)(unaff_x23 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar4 = (long *)(unaff_x23 + (long)(int)uVar1 * 8 + 0x20);
      *plVar3 = *plVar4;
      thunk_FUN_036b7ad0(plVar3);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      *plVar4 = lVar2;
      thunk_FUN_036b7ad0(unaff_x28 + (long)(int)uVar1 * 8,lVar2);
      lVar2 = lVar5;
    }
    param_1 = *in_stack_00000000;
    in_x10 = in_x10 + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)in_x10) {
      *in_stack_00000000 = unaff_x23;
      thunk_FUN_036b7ad0();
      return;
    }
  } while( true );
}


