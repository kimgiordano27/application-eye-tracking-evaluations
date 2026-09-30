/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02876e58
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  uint in_w8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar2;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  
  if (unaff_w28 < in_w8) {
    FUN_017fc374((long)unaff_x22 + (ulong)*(uint *)(*unaff_x22 + 0x104) * unaff_x27 + 0x20,
                 *(long *)(*(long *)(*(long *)(unaff_x21 + 0xc0) + 0xa0) + 0x80) + 0x80);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar2 = *(long *)(unaff_x29 + -0x30);
    if (unaff_w26 < *(uint *)(lVar1 + 0x18)) {
      *(uint *)(lVar1 + unaff_x20 * 4 + 0x20) = unaff_w28;
      if (*(long *)(lVar2 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


