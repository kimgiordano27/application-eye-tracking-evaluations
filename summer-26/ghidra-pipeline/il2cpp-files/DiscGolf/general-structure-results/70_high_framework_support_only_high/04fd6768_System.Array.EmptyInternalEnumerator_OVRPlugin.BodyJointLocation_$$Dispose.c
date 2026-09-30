/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 04fd6768
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose(void)

{
  long *plVar1;
  ulong uVar2;
  uint in_w8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 in_stack_00000008;
  
  while( true ) {
    unaff_w21 = unaff_w21 + 1;
    if (in_w8 <= unaff_w22) {
      return unaff_w22;
    }
                    /* try { // try from 04fd66f8 to 050d66fb has its CatchHandler @ 04fd66fc */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fd66f8 with catch @ 04fd66fc
                       try { // try from 04fd66fc to 050d6723 has its CatchHandler @ 04fd63b8 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fd6638 with catch @ 04fd6700
                        */
    if (*(int *)(unaff_x24 + (long)(int)unaff_w22 * (long)unaff_w25) == unaff_w20) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fd66d0 with catch @ 04fd6704
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fd6654 with catch @ 04fd6708
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 04fd66d4 with catch @ 04fd670c
                        */
      plVar1 = (long *)FUN_0390b9f8(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w22) break;
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 04fd6724 to 050d673b has its CatchHandler @ 04fd678c */
      uVar2 = (**(code **)(*plVar1 + 0x1b8))
                        (plVar1,*(undefined4 *)
                                 (unaff_x24 + (long)(int)unaff_w22 * (long)unaff_w25 + 8),
                         in_stack_00000008._4_4_,*(undefined8 *)(*plVar1 + 0x1c0));
                    /* try { // try from 04fd673c to 050d677b has its CatchHandler @ 04fd63b8 */
      if ((uVar2 & 1) != 0) {
        return unaff_w22;
      }
      in_w8 = *(uint *)(unaff_x23 + 0x18);
    }
    if (in_w8 <= unaff_w22) break;
    unaff_w22 = *(uint *)(unaff_x24 + (long)(int)unaff_w22 * (long)unaff_w25 + 4);
    if ((int)in_w8 <= unaff_w21) {
      FUN_05509a24(0);
    }
    in_w8 = *(uint *)(unaff_x23 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


