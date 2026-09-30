/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 050a0d04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  ulong unaff_x24;
  int iVar3;
  ulong uVar4;
  
  if (in_NG == in_OV) {
    uVar4 = unaff_x24 >> 1 & 0x7fffffff;
    do {
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090();
      }
      FUN_050a0e58(param_1,uVar4,unaff_x24 & 0xffffffff,param_2,param_4,
                   *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
      iVar3 = (int)uVar4;
      uVar1 = iVar3 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0 && 0 < iVar3);
    if (1 < (int)unaff_x24) {
      do {
        lVar2 = *(long *)(param_5 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a051c(param_1,param_2,param_3);
        lVar2 = *(long *)(param_5 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090();
        }
        FUN_050a0e58(param_1,1,-param_2 + param_3,param_2,param_4,
                     *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
        param_3 = param_3 + -1;
      } while (2 < -param_2 + param_3 + 2U);
    }
  }
  return;
}


