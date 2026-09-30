/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 03cc50f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar2 = thunk_FUN_02f45270();
    uVar3 = thunk_FUN_02f6ef30(PTR_DAT_067c98c8);
    FUN_05056bc4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar2,param_3);
  }
  iVar1 = *(uint *)(param_1 + 0x18) - 1;
  *(int *)(param_1 + 0x18) = iVar1;
                    /* try { // try from 03cc5114 to 03dc513b has its CatchHandler @ 03cc52dc */
  if (iVar1 - param_2 != 0 && (int)param_2 <= iVar1) {
    FUN_050f7d68(*(undefined8 *)(param_1 + 0x10),param_2 + 1,*(undefined8 *)(param_1 + 0x10),param_2
                 ,iVar1 - param_2,0);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 0x18) < *(uint *)(lVar4 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20) = 0;
      *(int *)(param_1 + 0x1c) = iVar1 + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


