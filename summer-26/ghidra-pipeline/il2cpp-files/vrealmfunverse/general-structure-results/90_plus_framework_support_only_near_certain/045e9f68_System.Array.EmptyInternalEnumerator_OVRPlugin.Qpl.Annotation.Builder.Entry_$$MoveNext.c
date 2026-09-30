/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$MoveNext
ENTRY_POINT: 045e9f68
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  void *unaff_x21;
  void *pvVar4;
  long *unaff_x22;
  undefined8 uVar5;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    lVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8),
                       &stack0x0000000c);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02b79548(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar2;
    thunk_FUN_02bb0e9c(unaff_x29 + (long)(int)unaff_w20 * 8,lVar2);
    unaff_w20 = unaff_w20 + 1;
    do {
      pvVar4 = unaff_x21;
      unaff_x28 = unaff_x28 + 1;
      unaff_x21 = (void *)((long)pvVar4 + 100);
      if (unaff_x26 == unaff_x28) {
        return;
      }
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
    } while (*(int *)((long)pvVar4 + 0x58) < 0);
    uVar1 = *(undefined4 *)((long)pvVar4 + 0x60);
    memcpy(&stack0x00000068,unaff_x21,0x58);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    *(undefined8 *)((long)unaff_x25 + 0x54) = 0;
    *(undefined8 *)((long)unaff_x25 + 0x4c) = 0;
    unaff_x25[3] = 0;
    unaff_x25[2] = 0;
    unaff_x25[5] = 0;
    unaff_x25[4] = 0;
    unaff_x25[7] = 0;
    unaff_x25[6] = 0;
    unaff_x25[9] = 0;
    unaff_x25[8] = 0;
    unaff_x25[1] = 0;
    *unaff_x25 = 0;
    uVar5 = *(undefined8 *)(lVar2 + 0x158);
    memcpy(&stack0x0000000c,&stack0x00000068,0x58);
    FUN_0361bc90(&stack0x000000c0,uVar1,&stack0x0000000c,uVar5);
    memcpy(&stack0x0000000c,&stack0x000000c0,0x5c);
  } while( true );
}


