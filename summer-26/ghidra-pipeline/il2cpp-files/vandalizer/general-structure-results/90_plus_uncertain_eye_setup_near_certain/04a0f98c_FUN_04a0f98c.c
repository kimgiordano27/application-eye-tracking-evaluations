/*
FUNCTION_NAME: FUN_04a0f98c
ENTRY_POINT: 04a0f98c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04a0f98c(long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_3 == param_4) {
    return;
  }
  if (param_1 != 0) {
    if (param_3 < *(uint *)(param_1 + 0x18)) {
      puVar4 = (undefined8 *)(param_1 + (long)(int)param_3 * 8 + 0x20);
      uVar2 = *puVar4;
      if (param_4 < *(uint *)(param_1 + 0x18)) {
        puVar5 = (undefined8 *)(param_1 + (long)(int)param_4 * 8 + 0x20);
        uVar3 = *puVar5;
        if (param_2 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor;
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        iVar1 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),uVar2,uVar3,
                           *(undefined8 *)(param_2 + 0x28));
        if (iVar1 < 1) {
          return;
        }
        if ((param_3 < *(uint *)(param_1 + 0x18)) && (param_4 < *(uint *)(param_1 + 0x18))) {
          uVar2 = *puVar4;
          *puVar4 = *puVar5;
          if (param_4 < *(uint *)(param_1 + 0x18)) {
            *puVar5 = uVar2;
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


