/*
FUNCTION_NAME: FUN_0276841c
ENTRY_POINT: 0276841c
PROGRAM: sharks-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0276841c(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  long lVar2;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    param_4 = param_4 + -1;
    iVar1 = param_3 - param_2;
    if (iVar1 + 1 < 0x11) break;
    if (param_4 == -1) {
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      FUN_027689e0(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
      return;
    }
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    iVar1 = Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
                      (param_1,param_2,param_3,param_5,
                       *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x88));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4(lVar2);
    }
    FUN_0276841c(param_1,iVar1 + 1,param_3,param_4,param_5,
                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x68));
    param_3 = iVar1 + -1;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 2) {
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = *(long *)(param_6 + 0x20);
    iVar1 = param_3 + -1;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    FUN_02768154(param_1,param_5,param_2,iVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    FUN_02768154(param_1,param_5,param_2,param_3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
  }
  else {
    if (iVar1 != 1) {
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      FUN_02768d18(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x78));
      return;
    }
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    iVar1 = param_2;
  }
  FUN_02768154(param_1,param_5,iVar1,param_3,*(undefined8 *)(lVar2 + 0x70));
  return;
}


