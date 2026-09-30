/*
FUNCTION_NAME: Autohand.Finger$$<SetMinPose>g__GetKidsCount|24_0
ENTRY_POINT: 00e792fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 162
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Autohand_Finger__<SetMinPose>g__GetKidsCount_24_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__);
  *(undefined1 *)(unaff_x20 + 0xf1d) = 1;
  puVar4 = StringLiteral_13673;
  puVar3 = Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__;
  puVar2 = Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__;
  puVar1 = Method_Unity_Collections_NativeArray<XRRaycastHit>__ctor__;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
                    /* try { // try from 00e79344 to 00f7935f has its CatchHandler @ 00e79758 */
    FUN_01323390(*(long *)(unaff_x19 + 0x18),&stack0x00000008,
                 *(undefined8 *)
                  Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                );
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
                    /* try { // try from 00e79364 to 00f79367 has its CatchHandler @ 00e79784 */
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      lVar6 = FUN_00ac2e08(&stack0x00000020,*(undefined8 *)puVar4);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 00e7938c to 00f793a3 has its CatchHandler @ 00e7975c */
      lVar6 = FUN_0268fd4c(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0268ace8(lVar6,1,0);
    }
                    /* try { // try from 00e793ac to 00f793af has its CatchHandler @ 00e79784 */
    FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar3);
    lVar6 = FUN_00ed56f0(0);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
      FUN_00fcbec8(*(long *)(lVar6 + 0x40),*(undefined8 *)puVar1,0);
                    /* try { // try from 00e793d4 to 00f793eb has its CatchHandler @ 00e79750 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


