/*
FUNCTION_NAME: FUN_06a14e88
ENTRY_POINT: 06a14e88
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a14e88(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = Method_OVRPlugin_PinnedArray<Guid>__ctor__;
  if ((DAT_076e2930 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRPlugin_PinnedArray<Guid>__ctor__);
    DAT_076e2930 = 1;
  }
  auVar2 = FUN_050143ac(param_1,*(undefined8 *)puVar1);
  if (param_2 != 0) {
    FUN_06a3d528(param_2,auVar2._0_8_,auVar2._8_8_,4,param_1 + 0x68,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


