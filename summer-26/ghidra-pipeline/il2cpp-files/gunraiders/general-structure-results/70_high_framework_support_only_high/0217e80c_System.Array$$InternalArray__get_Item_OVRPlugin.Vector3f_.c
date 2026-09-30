/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 0217e80c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Vector3f>(undefined8 param_1,uint param_2)

{
  long lVar1;
  uint in_w8;
  long unaff_x20;
  uint uVar2;
  
  if (0 < (int)in_w8) {
    uVar2 = 0;
    do {
      if (in_w8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      lVar1 = *(long *)(unaff_x20 + (long)(int)uVar2 * 8 + 0x20);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03d499ec(lVar1,param_2 & 1,0);
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)in_w8);
  }
  return;
}


