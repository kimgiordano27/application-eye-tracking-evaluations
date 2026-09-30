/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.RoomFace>
ENTRY_POINT: 0399d218
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_RoomFace>(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (unaff_w22 < param_1) {
                    /* try { // try from 0399d230 to 03a9d243 has its CatchHandler @ 0399d2b4 */
    memcpy(&stack0x00000000,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w22 + 0x20),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
                    /* try { // try from 0399d244 to 03a9d25f has its CatchHandler @ 0399d11c */
    unaff_x20[1] = in_stack_00000008;
    *unaff_x20 = in_stack_00000000;
    unaff_x20[3] = in_stack_00000018;
    unaff_x20[2] = in_stack_00000010;
    return;
  }
                    /* try { // try from 0399d260 to 03a9d26b has its CatchHandler @ 0399d2b0 */
  thunk_FUN_036aa1c8(&DAT_07b65100);
  uVar1 = thunk_FUN_0367fe20();
                    /* try { // try from 0399d270 to 03a9d27f has its CatchHandler @ 0399d2ac */
  uVar2 = thunk_FUN_036aa1c8(&DAT_07beee88);
                    /* try { // try from 0399d288 to 03a9d293 has its CatchHandler @ 0399d2bc */
  FUN_05d862e8(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0399d294 to 03a9d2df has its CatchHandler @ 0399d11c */
  FUN_03642acc(uVar1);
}


