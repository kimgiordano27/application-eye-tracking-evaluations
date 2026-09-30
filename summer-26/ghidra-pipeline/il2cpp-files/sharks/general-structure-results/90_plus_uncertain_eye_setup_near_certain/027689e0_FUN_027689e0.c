/*
FUNCTION_NAME: FUN_027689e0
ENTRY_POINT: 027689e0
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_027689e0(undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = (param_3 - param_2) + 1;
  if (1 < (int)uVar2) {
    uVar5 = uVar2 >> 1;
    do {
      lVar4 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar4 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
                (param_1,uVar5,uVar2,param_2,param_4,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98)
                );
      uVar3 = uVar5 - 1;
      bVar1 = 0 < (int)uVar5;
      uVar5 = uVar3;
    } while (uVar3 != 0 && bVar1);
    if (1 < (int)uVar2) {
      do {
        lVar4 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_027682a0(param_1,param_2,param_3);
        lVar4 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0185daa4();
        }
        Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
                  (param_1,1,-param_2 + param_3,param_2,param_4,
                   *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98));
        param_3 = param_3 + -1;
      } while (2 < -param_2 + param_3 + 2);
    }
  }
  return;
}


