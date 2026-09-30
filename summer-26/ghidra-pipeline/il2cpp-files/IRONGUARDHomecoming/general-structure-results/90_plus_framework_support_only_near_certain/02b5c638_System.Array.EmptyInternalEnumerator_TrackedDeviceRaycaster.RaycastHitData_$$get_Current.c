/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<TrackedDeviceRaycaster.RaycastHitData>$$get_Current
ENTRY_POINT: 02b5c638
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


void System_Array_EmptyInternalEnumerator<TrackedDeviceRaycaster_RaycastHitData>__get_Current
               (long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *unaff_x21;
  
  lVar5 = *param_1;
  __cxa_end_catch();
  if (unaff_x21 != (long *)0x0) {
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02b5c5c4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b5c5c4:
    (*(code *)*puVar1)();
  }
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990(lVar5);
}


