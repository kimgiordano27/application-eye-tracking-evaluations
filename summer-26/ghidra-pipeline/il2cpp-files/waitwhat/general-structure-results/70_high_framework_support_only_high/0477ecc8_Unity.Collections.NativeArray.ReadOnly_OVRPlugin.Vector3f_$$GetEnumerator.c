/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector3f>$$GetEnumerator
ENTRY_POINT: 0477ecc8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector3f>__GetEnumerator(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (param_1 == 0) {
    *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
LAB_0477ed84:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if ((int)(uVar1 + 1) < *(int *)(unaff_x20 + 0x38)) {
      lVar3 = *(long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar3 == 0) goto LAB_0477ed84;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
        FUN_042e4a64();
        return;
      }
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x19;
    }
    else {
      lVar2 = *(long *)(unaff_x20 + 0x30);
      *(int *)(unaff_x20 + 0x48) = *(int *)(unaff_x20 + 0x48) + -1;
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0477ed58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
        return;
      }
    }
  }
  return;
}


