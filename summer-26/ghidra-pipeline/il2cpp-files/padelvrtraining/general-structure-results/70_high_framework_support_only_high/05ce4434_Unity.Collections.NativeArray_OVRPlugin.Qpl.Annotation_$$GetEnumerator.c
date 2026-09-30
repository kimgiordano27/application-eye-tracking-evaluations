/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 05ce4434
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ce44a0) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  double dVar5;
  double unaff_d8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  while (dVar5 = (double)FUN_0718efd4(param_1,0), unaff_d8 < dVar5) {
    FUN_05ce476c();
    iVar1 = FUN_05ce4010();
    if (iVar1 == 0) break;
    lVar2 = FUN_05ce423c();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar3 = FUN_04145524(0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    in_stack_00000008 = FUN_0715ab44(uVar3,uVar4,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_1 = &stack0x00000008;
  }
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  return;
}


