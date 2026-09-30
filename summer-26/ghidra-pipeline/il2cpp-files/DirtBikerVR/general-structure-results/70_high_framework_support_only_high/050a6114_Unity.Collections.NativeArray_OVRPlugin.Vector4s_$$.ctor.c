/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 050a6114
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
               (undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
               long param_6)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    param_4 = param_4 + -1;
    iVar2 = param_3 - param_2;
    if (iVar2 + 1 < 0x11) break;
    if (param_4 == -1) {
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      FUN_050a6734(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80));
      return;
    }
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    iVar2 = FUN_050a6454(param_1,param_2,param_3,param_5,
                         *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x88));
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090(lVar3);
    }
    FUN_050a6110(param_1,iVar2 + 1,param_3,param_4,param_5,
                 *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
    param_3 = iVar2 + -1;
  }
  if (param_3 == param_2) {
    return;
  }
  lVar3 = *(long *)(param_6 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  if (iVar2 == 2) {
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar3 = *(long *)(param_6 + 0x20);
    iVar2 = param_3 + -1;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    FUN_050a5e54(param_1,param_5,param_2,iVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    FUN_050a5e54(param_1,param_5,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(lVar3 + 0xc0);
  }
  else {
    if (iVar2 != 1) {
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      lVar3 = *(long *)(param_6 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03ac4090();
      }
      Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy
                (param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x78));
      return;
    }
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar3 = *(long *)(param_6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    lVar3 = *(long *)(lVar3 + 0xc0);
    iVar2 = param_2;
  }
  FUN_050a5e54(param_1,param_5,iVar2,param_3,*(undefined8 *)(lVar3 + 0x70));
  return;
}


