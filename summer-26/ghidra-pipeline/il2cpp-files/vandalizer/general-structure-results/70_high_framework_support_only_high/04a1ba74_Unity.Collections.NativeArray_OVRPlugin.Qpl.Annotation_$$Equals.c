/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Equals
ENTRY_POINT: 04a1ba74
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals
               (undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
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
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      FUN_04a1c008(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
      return;
    }
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    iVar1 = FUN_04a1bd78(param_1,param_2,param_3,param_5,
                         *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x88));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    FUN_04a1ba68(param_1,iVar1 + 1,param_3,param_4,param_5,
                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x68));
    param_3 = iVar1 + -1;
  }
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 2) {
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar2 = *(long *)(param_6 + 0x20);
    iVar1 = param_3 + -1;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    FUN_04a1b88c(param_1,param_5,param_2,iVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    FUN_04a1b88c(param_1,param_5,param_2,param_3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x70));
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
  }
  else {
    if (iVar1 != 1) {
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar2 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      FUN_04a1c2fc(param_1,param_2,param_3,param_5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x78));
      return;
    }
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar2 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    iVar1 = param_2;
  }
  FUN_04a1b88c(param_1,param_5,iVar1,param_3,*(undefined8 *)(lVar2 + 0x70));
  return;
}


