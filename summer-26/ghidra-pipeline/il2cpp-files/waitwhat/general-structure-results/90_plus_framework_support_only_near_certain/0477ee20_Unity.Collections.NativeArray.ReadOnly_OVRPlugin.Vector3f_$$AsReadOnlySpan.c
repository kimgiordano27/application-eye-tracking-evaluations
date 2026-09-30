/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$AsReadOnlySpan
ENTRY_POINT: 0477ee20
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__AsReadOnlySpan
               (long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  FUN_054518b0(param_2,*(undefined8 *)(*(long *)(*(long *)(*param_1 + 0x20) + 0xc0) + 200));
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd0();
  }
  if ((unaff_w21 == 5) || (unaff_w21 == 0)) {
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x30);
      if (lVar2 == 0) goto Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Length;
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),*(long *)(unaff_x19 + 0x40),
                 *(undefined8 *)(lVar2 + 0x28));
    }
    lVar2 = *(long *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    if (lVar2 == 0) {
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__get_Length:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    *(undefined4 *)(unaff_x19 + 0x48) = 0;
  }
  return;
}


