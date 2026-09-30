/*
FUNCTION_NAME: FUN_0469e974
ENTRY_POINT: 0469e974
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


void FUN_0469e974(undefined8 *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    lVar4 = *(long *)(param_4 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
              (uVar3,param_3,param_1,**(undefined8 **)(lVar4 + 0xc0));
    lVar4 = *(long *)(param_4 + 0x20);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    FUN_0469f1f4(param_2,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


