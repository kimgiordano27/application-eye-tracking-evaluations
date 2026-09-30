/*
FUNCTION_NAME: FUN_0422b728
ENTRY_POINT: 0422b728
PROGRAM: Waifu-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0422b728(long param_1,long param_2)

{
  long lVar1;
  
  if ((DAT_086d992c & 1) == 0) {
    FUN_0335b6c8(&DAT_083f0718,1);
    DataMemoryBarrier(2,3);
    DAT_086d992c = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
              ((long *)(param_1 + 0x10),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20));
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


