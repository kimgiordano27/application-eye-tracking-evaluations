/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Item
ENTRY_POINT: 02bf1ad4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Item
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long in_x9;
  int *piVar2;
  long unaff_x20;
  
  if (in_x9 != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar2 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar2 * 0x10 + 0x138);
        goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item;
      }
      in_x9 = in_x9 + -1;
      piVar2 = piVar2 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ae9f78();
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item:
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab0160();
}


