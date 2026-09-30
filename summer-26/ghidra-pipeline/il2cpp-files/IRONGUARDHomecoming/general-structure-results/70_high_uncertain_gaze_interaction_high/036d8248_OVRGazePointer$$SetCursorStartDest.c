/*
FUNCTION_NAME: OVRGazePointer$$SetCursorStartDest
ENTRY_POINT: 036d8248
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_gaze_interaction_hits_2
*/


void OVRGazePointer__SetCursorStartDest(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *plVar5;
  long *unaff_x21;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass47_0_<DOScaleY>b__0__);
  thunk_FUN_01efb3a4(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass47_0_<DOScaleY>b__1__);
  *(undefined1 *)(unaff_x20 + 0x2e8) = 1;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 036d829c to 037d82ab has its CatchHandler @ 036d83e0 */
  uVar1 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_022c59ec();
    plVar5 = (long *)(unaff_x19 + 0x58);
    *plVar5 = lVar2;
                    /* try { // try from 036d82ec to 037d82ff has its CatchHandler @ 036d83e4 */
    thunk_FUN_01f51358(plVar5,lVar2);
    lVar2 = *plVar5;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 036d830c to 037d830f has its CatchHandler @ 036d83c0 */
    uVar1 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (lVar2,0,0);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 036d8358 to 037d839f has its CatchHandler @ 036d819c */
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_036d7a4c(*plVar5,*(undefined4 *)(unaff_x19 + 0x50));
      return;
    }
                    /* try { // try from 036d8328 to 037d832f has its CatchHandler @ 036d83d8 */
    puVar3 = (undefined8 *)
             Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass47_0_<DOScaleY>b__1__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      puVar3 = (undefined8 *)
               Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass47_0_<DOScaleY>b__1__;
    }
  }
  else {
                    /* try { // try from 036d82b0 to 037d82b3 has its CatchHandler @ 036d83dc */
    puVar3 = (undefined8 *)
             Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass47_0_<DOScaleY>b__0__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
                    /* try { // try from 036d82c0 to 037d82c3 has its CatchHandler @ 036d83d4 */
      thunk_FUN_01ee6d7c();
      puVar3 = (undefined8 *)
               Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass47_0_<DOScaleY>b__0__;
    }
  }
                    /* try { // try from 036d8340 to 037d8343 has its CatchHandler @ 036d83d0 */
                    /* try { // try from 036d834c to 037d8357 has its CatchHandler @ 036d83c8 */
  FUN_0403ed64(*puVar3,0);
  return;
}


