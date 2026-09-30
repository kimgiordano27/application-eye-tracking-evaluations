/*
FUNCTION_NAME: FUN_0469b65c
ENTRY_POINT: 0469b65c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0469b65c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_4 + 0x20);
    uVar2 = *(ulong *)(param_1 + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    Unity_Collections_NativeArray<OVRPlugin_Vector2f>__get_Length
              (param_1,0,param_2,param_3,0,uVar2 & 0xffffffff,
               *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xc0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


