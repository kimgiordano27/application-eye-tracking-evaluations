/*
FUNCTION_NAME: FUN_044ef788
ENTRY_POINT: 044ef788
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_044ef788(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
            (param_1,uVar1 + 1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
  lVar2 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = uVar1 + 1;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (uVar1 < *(uint *)(lVar2 + 0x18)) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    lVar2 = lVar2 + (long)(int)uVar1 * 0x18;
    *(undefined8 *)(lVar2 + 0x30) = param_2[2];
    *(undefined8 *)(lVar2 + 0x28) = uVar4;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


