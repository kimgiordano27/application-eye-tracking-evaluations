/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 05807368
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
                    /* catch() { ... } // from try @ 05807300 with catch @ 05807370
                       catch() { ... } // from try @ 05807360 with catch @ 05807370 */
                    /* try { // try from 05807374 to 05907377 has its CatchHandler @ 05807380 */
                    /* try { // try from 05807378 to 05907383 has its CatchHandler @ 0580713c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05807374 with catch @ 05807380
                        */
    memcpy(&stack0x00000030,(void *)(unaff_x25 + unaff_x24 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
                    /* try { // try from 05807384 to 059073bf has its CatchHandler @ 05807384
                       catch() { ... } // from try @ 05807384 with catch @ 05807384
                       catch() { ... } // from try @ 058074fc with catch @ 05807384
                       catch() { ... } // from try @ 05807560 with catch @ 05807384
                       catch() { ... } // from try @ 058075c0 with catch @ 05807384 */
    in_stack_00000020 = unaff_x22;
    in_stack_00000028 = unaff_x21;
    thunk_FUN_04983b98(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_04980b34(lVar3);
    }
                    /* try { // try from 058073c0 to 059073c7 has its CatchHandler @ 0580752c */
    *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000038;
    *(undefined8 *)(unaff_x26 + 0x10) = in_stack_00000030;
    uVar2 = thunk_FUN_08dd7094();
    if ((uVar2 & 1) != 0) break;
                    /* try { // try from 058073dc to 05907403 has its CatchHandler @ 05807530 */
    unaff_x24 = unaff_x24 + 1;
    if (unaff_x27 == unaff_x24) {
      iVar1 = thunk_FUN_049556bc();
                    /* try { // try from 05807414 to 0590742b has its CatchHandler @ 05807520 */
      return iVar1 + -1;
    }
  }
  iVar1 = thunk_FUN_049556bc();
  return iVar1 + (int)unaff_x24;
}


