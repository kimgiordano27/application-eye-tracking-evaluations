/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARTrackable<XRFace,-object>$$get_sessionRelativePose
ENTRY_POINT: 046ab724
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_ARFoundation_ARTrackable<XRFace,_object>__get_sessionRelativePose(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar4 = 0;
  puVar5 = (undefined8 *)(unaff_x24 + 0x38);
  do {
    if (*(uint *)(unaff_x24 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    if (-1 < *(int *)(puVar5 + -3)) {
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      in_stack_00000030 = 0;
      FUN_037de658(&stack0x00000020,puVar5[-2],puVar5[-1],*puVar5,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x150));
      lVar1 = thunk_FUN_02cea4e8(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_02cea798(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
        uVar3 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar2 = (long)(int)unaff_w19;
      unaff_w19 = unaff_w19 + 1;
      unaff_x22[lVar2 + 4] = lVar1;
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 4;
    if (unaff_x23 == uVar4) {
      return;
    }
  } while( true );
}


