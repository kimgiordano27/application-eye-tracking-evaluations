/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 047df7d0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  long unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long *plVar1;
  uint unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  long lVar2;
  long unaff_x29;
  long *in_stack_00000000;
  ulong in_stack_00000008;
  
  while( true ) {
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
                    /* try { // try from 047df7e0 to 048df83f has its CatchHandler @ 047df94c */
    *unaff_x27 = unaff_x24;
    thunk_FUN_036b7ad0(unaff_x28 + unaff_x19 * 8,unaff_x24);
    while (unaff_x29 == 0) {
      lVar2 = *in_stack_00000000;
      in_stack_00000008 = in_stack_00000008 + 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)in_stack_00000008) {
        *in_stack_00000000 = unaff_x23;
        thunk_FUN_036b7ad0();
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= in_stack_00000008) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      unaff_x29 = *(long *)(lVar2 + in_stack_00000008 * 8 + 0x20);
    }
    plVar1 = (long *)(unaff_x29 + 0x20);
    lVar2 = *plVar1;
    unaff_w26 = FUN_047df900();
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w26) break;
    unaff_x19 = (long)(int)unaff_w26;
    unaff_x27 = (long *)(unaff_x23 + unaff_x19 * 8 + 0x20);
    *plVar1 = *unaff_x27;
    thunk_FUN_036b7ad0(plVar1);
    unaff_x24 = unaff_x29;
    unaff_x29 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


