/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 033c04d8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetActionStatePose(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long *plVar4;
  undefined8 *unaff_x26;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000040;
  
                    /* try { // try from 033c04e4 to 034c04e7 has its CatchHandler @ 033c04ec */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c048c with catch @ 033c04e8
                       try { // try from 033c04e8 to 034c050b has its CatchHandler @ 033c0370 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c04e4 with catch @ 033c04ec
                        */
  if ((param_1 != 0) && (lVar2 = thunk_FUN_01de26bc(), lVar2 == 0)) {
    uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar3,0);
  }
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c0420 with catch @ 033c04f0
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c0464 with catch @ 033c04f4
                        */
  if (unaff_w23 < *(uint *)(unaff_x22 + 0x18)) {
    plVar4 = (long *)(unaff_x22 + (long)(int)unaff_w23 * 8 + 0x20);
    *plVar4 = unaff_x21;
                    /* try { // try from 033c050c to 034c050f has its CatchHandler @ 033c0538 */
    thunk_FUN_01e10808(plVar4);
                    /* try { // try from 033c0510 to 034c0547 has its CatchHandler @ 033c0370 */
    if (unaff_w23 < *(uint *)(unaff_x22 + 0x18)) {
      lVar2 = *unaff_x28;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 != (long *)0x0) {
                    /* catch() { ... } // from try @ 033c050c with catch @ 033c0538 */
        bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                    /* try { // try from 033c0548 to 034c054f has its CatchHandler @ 033c0564 */
                    /* try { // try from 033c0550 to 034c055b has its CatchHandler @ 033c0370 */
                    /* try { // try from 033c055c to 034c0563 has its CatchHandler @ 033c0564 */
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_1183)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plVar4);
        }
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c0548 with catch @ 033c0564
                       catch(type#2 @ 00000000) { ... } // from try @ 033c055c with catch @ 033c0564
                        */
      FUN_033b4f38(lVar2,unaff_w23,plVar4,0,*(int *)(lVar2 + 0x18) - unaff_w23,0);
      *unaff_x28 = unaff_x22;
      thunk_FUN_01e10808();
      if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
        return *unaff_x26;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


