/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 0717cef4
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  do {
    FUN_0723be38(unaff_x23,param_1,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40));
    unaff_w20 = unaff_w20 + -1;
    if (unaff_w20 == 0) {
      return;
    }
    lVar1 = *unaff_x22;
    if (lVar1 == 0) break;
    unaff_x23 = *unaff_x21;
    param_1 = (**(code **)(lVar1 + 0x18))
                        (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  } while (unaff_x23 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


