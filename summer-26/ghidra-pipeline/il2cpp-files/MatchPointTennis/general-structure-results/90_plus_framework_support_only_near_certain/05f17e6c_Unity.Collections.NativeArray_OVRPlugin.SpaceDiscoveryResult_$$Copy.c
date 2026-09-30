/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05f17e6c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int unaff_w20;
  long unaff_x23;
  
  while( true ) {
    param_4 = param_4 + -1;
    iVar1 = unaff_w20 - param_2;
    if (iVar1 + 1 < 0x11) {
      if (iVar1 == 0) {
        return;
      }
      if (iVar1 == 2) {
        lVar2 = *(long *)(unaff_x23 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_05f17bf0(param_1);
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_05f17bf0(param_1);
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
      }
      else {
        if (iVar1 != 1) {
          lVar2 = *(long *)(unaff_x23 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_04481fb8();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_04481fb8();
          }
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          FUN_05f186e0(param_1,param_2,unaff_w20);
          return;
        }
        lVar2 = *(long *)(unaff_x23 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
      }
      FUN_05f17bf0(param_1);
      return;
    }
    if (param_4 == -1) break;
    lVar2 = *(long *)(unaff_x23 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
                    /* try { // try from 05f17ea0 to 06017edf has its CatchHandler @ 05f17ea0
                       catch() { ... } // from try @ 05f17ea0 with catch @ 05f17ea0
                       catch() { ... } // from try @ 05f17ef4 with catch @ 05f17ea0
                       catch() { ... } // from try @ 05f17f30 with catch @ 05f17ea0
                       catch() { ... } // from try @ 05f17f70 with catch @ 05f17ea0 */
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
                    /* try { // try from 05f17ee0 to 06017ef3 has its CatchHandler @ 05f17f00 */
    iVar1 = FUN_05f18158(param_1,param_2,unaff_w20);
    if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8(*(long *)(unaff_x23 + 0x20));
    }
    FUN_05f17e48(param_1,iVar1 + 1,unaff_w20,param_4);
    unaff_w20 = iVar1 + -1;
    if (unaff_w20 <= param_2) {
      return;
    }
  }
  lVar2 = *(long *)(unaff_x23 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04481fb8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04481fb8();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if ((*(byte *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  FUN_05f183e8(param_1,param_2,unaff_w20);
  return;
}


