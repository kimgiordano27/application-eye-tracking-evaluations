/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 03d62394
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1
System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  uint uVar4;
  
  uVar1 = (**(code **)(param_1 + 0x1a8))();
  lVar3 = *(long *)(unaff_x19 + 0xf0);
  if ((lVar3 == 0) || (*(int *)(unaff_x19 + 0xe0) + -1 < 1)) {
    return uVar1;
  }
  uVar4 = 0;
  do {
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    plVar2 = *(long **)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
    if (plVar2 == (long *)0x0) break;
    uVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,uVar1);
    uVar4 = uVar4 + 1;
    if (*(int *)(unaff_x19 + 0xe0) + -1 <= (int)uVar4) {
      return uVar1;
    }
    lVar3 = *(long *)(unaff_x19 + 0xf0);
  } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


