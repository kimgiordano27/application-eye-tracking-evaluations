/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 06653098
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__Dispose(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  while (param_1 != 0) {
    if ((ulong)*(uint *)(param_1 + 0x18) <= unaff_x22 - 4U) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (param_2 == (long *)0x0) break;
    uVar1 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(param_1 + unaff_x22 * 8));
    if ((uVar1 & 1) != 0) {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34(*(long *)(unaff_x20 + 0x20),unaff_x22 + -3);
      }
      FUN_06653254();
      return;
    }
    lVar2 = unaff_x22 + -3;
    unaff_x22 = unaff_x22 + 1;
    if (*unaff_x19 + -1 <= lVar2) {
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    param_2 = (long *)FUN_0566ce58(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
    param_1 = *(long *)(unaff_x19 + 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


