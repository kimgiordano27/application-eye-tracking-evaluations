/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$get_Current
ENTRY_POINT: 025f8278
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__get_Current
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  
  do {
    *(undefined4 *)(param_1 + 0x20) = param_3;
LAB_025f8294:
    do {
      unaff_w22 = unaff_w22 - 1;
      if ((int)unaff_w22 < 0) {
        return;
      }
      lVar2 = *unaff_x21;
      if (lVar2 == 0) goto LAB_025f82ac;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w22) goto LAB_025f82b0;
    } while (*(long *)(lVar2 + (ulong)unaff_w22 * 8 + 0x20) != unaff_x20);
    lVar2 = unaff_x21[1];
    if (lVar2 == 0) {
LAB_025f82ac:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_025f82b0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (unaff_x19 == 0) goto LAB_025f82ac;
    param_3 = *(undefined4 *)(lVar2 + (ulong)unaff_w22 * 4 + 0x20);
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_025f82ac;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar1) {
      FUN_02b2f054();
      goto LAB_025f8294;
    }
    param_1 = param_1 + (long)(int)uVar1 * 4;
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
  } while( true );
}


