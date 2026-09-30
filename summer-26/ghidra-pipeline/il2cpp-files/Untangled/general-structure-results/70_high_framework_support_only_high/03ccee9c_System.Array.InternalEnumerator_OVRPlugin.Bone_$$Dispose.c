/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 03ccee9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array_InternalEnumerator<OVRPlugin_Bone>__Dispose(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x25;
  ulong unaff_x26;
  
  do {
    uVar1 = FUN_03cccc58();
    unaff_w22 = unaff_w22 + (uVar1 & 1);
    do {
      unaff_x26 = unaff_x26 + 1;
      unaff_x25 = unaff_x25 + 0x18;
      if ((long)*(int *)(unaff_x21 + 0x24) <= (long)unaff_x26) {
        return unaff_w22;
      }
      lVar3 = *(long *)(unaff_x21 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar3 = lVar3 + unaff_x25;
    } while ((*(int *)(lVar3 + 0x20) < 0) ||
            (uVar2 = (**(code **)(unaff_x20 + 0x18))
                               (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + 0x28),
                                *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(unaff_x20 + 0x28)),
            (uVar2 & 1) == 0));
  } while( true );
}


