/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRRaycaster.RaycastHit>$$Dispose
ENTRY_POINT: 029137fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 131
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void System_Collections_Generic_List_Enumerator<OVRRaycaster_RaycastHit>__Dispose(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    FUN_032f25c4(0x11,0);
    uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    do {
      if (uVar2 <= unaff_x23) {
LAB_029138c4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      unaff_x24 = unaff_x24 + 7;
      Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset();
      unaff_x23 = unaff_x23 + 1;
      if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
        *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar1 = FUN_0329f684(0);
        if (lVar1 != 0) {
          FUN_0282be2c();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
      if (uVar2 <= unaff_x23) goto LAB_029138c4;
    } while (*unaff_x24 != 0);
  } while( true );
}


