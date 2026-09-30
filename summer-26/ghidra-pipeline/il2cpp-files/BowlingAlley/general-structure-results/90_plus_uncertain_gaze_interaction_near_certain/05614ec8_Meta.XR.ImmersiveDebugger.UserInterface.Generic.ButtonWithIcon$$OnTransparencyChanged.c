/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$OnTransparencyChanged
ENTRY_POINT: 05614ec8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__OnTransparencyChanged(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  long *unaff_x27;
  
  do {
    thunk_FUN_0333a630();
    while( true ) {
      uVar2 = System_Collections_Generic_ArraySortHelper<NativeArray<ConvertMeshJobData>>__DownHeap
                        (&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0xf8));
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0x70))();
        FUN_0698c1bc();
        (*(code *)**(undefined8 **)(*(long *)(*unaff_x27 + 0xc0) + 0x68))();
        return;
      }
      uVar3 = FUN_052d5cb0(&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x27 + 0xc0) + 0xd8));
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) break;
      FUN_041e2c78();
    }
    *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
  } while( true );
}


