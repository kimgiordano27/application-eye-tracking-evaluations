/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03c6e808
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  int iVar2;
  long unaff_x21;
  
  while( true ) {
    FUN_03aadb8c(param_2,unaff_w20,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x50));
    iVar2 = unaff_w20;
    do {
      unaff_w20 = iVar2 + -1;
      if (iVar2 < 1) {
        return;
      }
      if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_03c6e830;
      lVar1 = FUN_03aac1c4(*(long *)(unaff_x21 + 0x10),unaff_w20,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60));
      iVar2 = unaff_w20;
    } while (lVar1 != 0);
    param_2 = *(long *)(unaff_x21 + 0x10);
    if (param_2 == 0) break;
    param_1 = *(long *)(unaff_x19 + 0x20);
  }
LAB_03c6e830:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


