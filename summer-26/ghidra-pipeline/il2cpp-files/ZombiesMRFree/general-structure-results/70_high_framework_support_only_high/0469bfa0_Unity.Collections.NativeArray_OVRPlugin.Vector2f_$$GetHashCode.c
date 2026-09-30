/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetHashCode
ENTRY_POINT: 0469bfa0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode(ulong param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9b0c0);
    *(undefined1 *)(unaff_x23 + 0x4dc) = 1;
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  if (*param_2 != 0) {
    if (0x3f < *(int *)((long)param_2 + 0xc)) {
      thunk_FUN_03037804(PTR_DAT_06f6d640);
      uVar1 = thunk_FUN_0301080c();
      uVar2 = thunk_FUN_03037804(PTR_DAT_06f9b0c8);
      FUN_05aeefcc(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar1);
    }
    if (*(int *)((long)param_2 + 0xc) < 2) {
      *param_2 = 0;
    }
    else {
      FUN_03c8a1fc();
      *param_2 = 0;
      *(undefined4 *)((long)param_2 + 0xc) = 0;
    }
  }
  return;
}


