/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 03ba320c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint unaff_w24;
  uint uVar4;
  
  if (1 < (int)unaff_w24) {
    uVar4 = unaff_w24 >> 1;
    do {
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      FUN_03ba3348(param_1,uVar4,unaff_w24,param_2,param_4,
                   *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x98));
      uVar2 = uVar4 - 1;
      bVar1 = 0 < (int)uVar4;
      uVar4 = uVar2;
    } while (uVar2 != 0 && bVar1);
    if (1 < (int)unaff_w24) {
      do {
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d9a2e0();
        }
        FUN_03ba2ad8(param_1,param_2,param_3);
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02d9a2e0();
        }
        FUN_03ba3348(param_1,1,-param_2 + param_3,param_2,param_4,
                     *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x98));
        param_3 = param_3 + -1;
      } while (2 < -param_2 + param_3 + 2);
    }
  }
  return;
}


