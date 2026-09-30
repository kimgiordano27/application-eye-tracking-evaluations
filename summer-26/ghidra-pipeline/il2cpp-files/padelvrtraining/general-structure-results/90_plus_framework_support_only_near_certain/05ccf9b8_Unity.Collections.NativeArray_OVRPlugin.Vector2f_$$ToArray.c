/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 05ccf9b8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__ToArray
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
    FUN_03d8f26c();
  }
  uVar1 = thunk_FUN_03d2ef40();
                    /* catch() { ... } // from try @ 05ccfb18 with catch @ 05ccf9d8
                       catch() { ... } // from try @ 05ccfb54 with catch @ 05ccf9d8
                       catch() { ... } // from try @ 05ccfb90 with catch @ 05ccf9d8
                       catch() { ... } // from try @ 05ccfbbc with catch @ 05ccf9d8
                       catch() { ... } // from try @ 05ccfc30 with catch @ 05ccf9d8 */
  FUN_06648190();
  *(undefined8 *)(unaff_x19 + 0x158) = uVar1;
                    /* try { // try from 05ccfa0c to 05dcfa0f has its CatchHandler @ 05ccfb18 */
  thunk_FUN_03d1023c((long *)(unaff_x19 + 0x158),uVar1);
  lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
                    /* try { // try from 05ccfa28 to 05dcfb17 has its CatchHandler @ 05ccfb24 */
  plVar3 = (long *)FUN_03d2d394(lVar2,3);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar2 = *(long *)(unaff_x19 + 0x160);
  if ((lVar2 != 0) &&
     (lVar4 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_05ccfb08:
    uVar1 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar1,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar2;
    thunk_FUN_03d1023c(plVar3 + 4,lVar2);
    lVar2 = *(long *)(unaff_x19 + 0x158);
    if ((lVar2 != 0) &&
       (lVar4 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_05ccfb08;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar2;
      thunk_FUN_03d1023c(plVar3 + 5,lVar2);
      lVar2 = *(long *)(unaff_x19 + 0x150);
      if ((lVar2 != 0) &&
         (lVar4 = thunk_FUN_03d2ee44(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_05ccfb08;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar2;
        thunk_FUN_03d1023c(plVar3 + 6,lVar2);
        FUN_05cd2664();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


