/*
FUNCTION_NAME: FUN_0399e868
ENTRY_POINT: 0399e868
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_0399e868(long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < 0) {
    FUN_04d9c908(0);
  }
  if (param_3 < 0) {
    FUN_04d9c54c(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    Oculus_Interaction_SecondaryInteractorConnection__Start(0x17,0);
  }
  if ((*(ushort *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  lVar1 = thunk_FUN_02b79644();
  Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
            (lVar1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_04d9e334(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(lVar1 + 0x10),0,param_3,0);
    *(int *)(lVar1 + 0x18) = param_3;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


