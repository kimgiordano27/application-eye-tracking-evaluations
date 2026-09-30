/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 05f7fb28
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8(*(long *)(param_2 + 0x20));
  }
  if (*param_1 == 0) {
    return;
  }
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (iVar1 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f20bb0);
    uVar2 = thunk_FUN_0448520c();
    puVar4 = PTR_DAT_09f29150;
  }
  else {
    if (iVar1 < 0x40) {
      if (1 < iVar1) {
        FUN_094b62bc(*param_1,iVar1,0);
        *(undefined4 *)((long)param_1 + 0xc) = 0;
      }
      *param_1 = 0;
      return;
    }
    thunk_FUN_044adef4(PTR_DAT_09f20bb0);
    uVar2 = thunk_FUN_0448520c();
    puVar4 = PTR_DAT_09f29158;
  }
  uVar3 = thunk_FUN_044adef4(puVar4);
  FUN_07a3e070(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2,param_2);
}


