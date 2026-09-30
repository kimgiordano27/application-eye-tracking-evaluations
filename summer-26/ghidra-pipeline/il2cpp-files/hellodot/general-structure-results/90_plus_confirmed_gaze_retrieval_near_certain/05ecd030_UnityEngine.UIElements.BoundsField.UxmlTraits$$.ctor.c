/*
FUNCTION_NAME: UnityEngine.UIElements.BoundsField.UxmlTraits$$.ctor
ENTRY_POINT: 05ecd030
PROGRAM: hellodot-libil2cpp.so
SCORE: 117
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_UIElements_BoundsField_UxmlTraits___ctor(code *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x23;
  undefined4 uStack000000000000000c;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_left()");
                    /* try { // try from 05ecd048 to 05fcd077 has its CatchHandler @ 05ecd190 */
    *(code **)(unaff_x23 + 0x310) = param_1;
  }
  uStack000000000000000c = (*param_1)();
  lVar1 = FUN_04f2e83c(&stack0x0000000c);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_02cea798(lVar1,*(undefined8 *)(*param_2 + 0x40)), lVar2 == 0)) {
LAB_05ecd20c:
    uVar3 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar3,0);
  }
  if ((int)param_2[3] != 0) {
    param_2[4] = lVar1;
    if (DAT_06a7d320 == (code *)0x0) {
                    /* try { // try from 05ecd0a8 to 05fcd0d7 has its CatchHandler @ 05ecd18c */
      DAT_06a7d320 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_right()");
    }
    uStack000000000000000c = (*DAT_06a7d320)();
    lVar1 = FUN_04f2e83c(&stack0x0000000c);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_02cea798(lVar1,*(undefined8 *)(*param_2 + 0x40)), lVar2 == 0))
    goto LAB_05ecd20c;
    if (1 < *(uint *)(param_2 + 3)) {
      param_2[5] = lVar1;
                    /* try { // try from 05ecd108 to 05fcd137 has its CatchHandler @ 05ecd188 */
      if (DAT_06a7d330 == (code *)0x0) {
        DAT_06a7d330 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_top()");
      }
      uStack000000000000000c = (*DAT_06a7d330)();
                    /* try { // try from 05ecd138 to 05fcd177 has its CatchHandler @ 05eccefc */
      lVar1 = FUN_04f2e83c(&stack0x0000000c);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_02cea798(lVar1,*(undefined8 *)(*param_2 + 0x40)), lVar2 == 0))
      goto LAB_05ecd20c;
      if (2 < *(uint *)(param_2 + 3)) {
        param_2[6] = lVar1;
                    /* try { // try from 05ecd178 to 05fcd17b has its CatchHandler @ 05ecd194 */
        if (DAT_06a7d340 == (code *)0x0) {
                    /* try { // try from 05ecd17c to 05fcd183 has its CatchHandler @ 05eccefc */
                    /* try { // try from 05ecd184 to 05fcd187 has its CatchHandler @ 05ecd190 */
          DAT_06a7d340 = (code *)FUN_02ce79f8("UnityEngine.RectOffset::get_bottom()");
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 05ecd108 with catch @ 05ecd188
                       try { // try from 05ecd188 to 05fcd1ab has its CatchHandler @ 05eccefc */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 05ecd0a8 with catch @ 05ecd18c
                        */
        }
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 05ecd048 with catch @ 05ecd190
                       catch(type#1 @ 0620d888) { ... } // from try @ 05ecd184 with catch @ 05ecd190
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 05eccfdc with catch @ 05ecd194
                       catch(type#1 @ 0620d888) { ... } // from try @ 05ecd178 with catch @ 05ecd194
                        */
        uStack000000000000000c = (*DAT_06a7d340)();
                    /* try { // try from 05ecd1ac to 05fcd1af has its CatchHandler @ 05ecd1bc */
        lVar1 = FUN_04f2e83c(&stack0x0000000c);
                    /* catch() { ... } // from try @ 05ecd1ac with catch @ 05ecd1bc */
                    /* try { // try from 05ecd1c0 to 05fcd1df has its CatchHandler @ 05ecd1f4 */
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_02cea798(lVar1,*(undefined8 *)(*param_2 + 0x40)), lVar2 == 0))
        goto LAB_05ecd20c;
        if (3 < *(uint *)(param_2 + 3)) {
          param_2[7] = lVar1;
          FUN_05f5cc4c(*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo,param_2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


