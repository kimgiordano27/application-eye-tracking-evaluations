/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04b2fc34
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>
               (long param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  uVar5 = 0;
                    /* try { // try from 04b2fc40 to 04c2fc5b has its CatchHandler @ 04b2fb34 */
  bVar1 = true;
  while( true ) {
                    /* try { // try from 04b2fc5c to 04c2fc67 has its CatchHandler @ 04b2fcac */
    memcpy(&stack0x00000048,(void *)((long)unaff_x21 + uVar5 * *(uint *)(*unaff_x21 + 0x104) + 0x20)
           ,(ulong)*(uint *)(*unaff_x21 + 0x104));
                    /* try { // try from 04b2fc6c to 04c2fc7b has its CatchHandler @ 04b2fca8 */
    in_stack_00000038 = in_stack_00000050;
    in_stack_00000030 = in_stack_00000048;
    in_stack_00000040 = in_stack_00000058;
    uVar2 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
                    /* try { // try from 04b2fc84 to 04c2fc8f has its CatchHandler @ 04b2fcb8 */
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
                    /* try { // try from 04b2fc90 to 04c2fcdb has its CatchHandler @ 04b2fb34 */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03d8f26c(lVar4);
    }
    in_stack_00000010 = 0xffffffffffffffff;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fc6c with catch @ 04b2fca8
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fc5c with catch @ 04b2fcac
                        */
    uVar7 = unaff_x20[1];
    uVar6 = *unaff_x20;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fc2c with catch @ 04b2fcb0
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fbb4 with catch @ 04b2fcb4
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fc84 with catch @ 04b2fcb8
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fbd4 with catch @ 04b2fcbc
                        */
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(unaff_x20 + 2);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fb6c with catch @ 04b2fcc0
                        */
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    in_stack_00000008 = lVar4;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fb84 with catch @ 04b2fcc4
                       catch(type#1 @ 08cb6798) { ... } // from try @ 04b2fbfc with catch @ 04b2fcc4
                        */
    uVar3 = thunk_FUN_071d4ed8(&stack0x00000008,uVar2,0);
    if ((uVar3 & 1) != 0) break;
    uVar5 = uVar5 + 1;
    bVar1 = uVar5 < (param_2 & 0xffffffff);
                    /* try { // try from 04b2fcdc to 04c2fcf3 has its CatchHandler @ 04b2fd34 */
    if ((param_2 & 0xffffffff) == uVar5) {
      return bVar1;
    }
  }
  return bVar1;
}


