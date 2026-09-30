/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 047a5bb4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ushort in_w8;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      param_1 = FUN_0367c9fc();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
                    /* try { // try from 047a5bd4 to 048a5be3 has its CatchHandler @ 047a5be4 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
                    /* catch() { ... } // from try @ 047a5b58 with catch @ 047a5be4
                       catch() { ... } // from try @ 047a5bd4 with catch @ 047a5be4 */
                    /* try { // try from 047a5be8 to 048a5beb has its CatchHandler @ 047a5bf4 */
                    /* try { // try from 047a5bec to 048a5bf7 has its CatchHandler @ 047a5a8c */
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 047a5be8 with catch @ 047a5bf4
                        */
                    /* try { // try from 047a5bf8 to 048a5f1b has its CatchHandler @ 047a5bf8
                       catch() { ... } // from try @ 047a5bf8 with catch @ 047a5bf8
                       catch() { ... } // from try @ 047a5fec with catch @ 047a5bf8
                       catch() { ... } // from try @ 047a60bc with catch @ 047a5bf8
                       catch() { ... } // from try @ 047a6110 with catch @ 047a5bf8 */
    iVar3 = FUN_047a5ea4();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc(*(long *)(unaff_x23 + 0x20));
    }
    FUN_047a5b60();
    iVar3 = iVar3 + -1;
    unaff_w24 = unaff_w24 + -1;
    if (iVar3 <= unaff_w22) {
      return;
    }
    iVar2 = iVar3 - unaff_w22;
    if (iVar2 + 1 < 0x11) {
      if (iVar3 == unaff_w22) {
        return;
      }
      lVar4 = *(long *)(unaff_x23 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
      if (iVar2 == 2) {
        if ((uVar1 & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_047a58a4();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_047a58a4();
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
      }
      else {
        if (iVar2 != 1) {
          if ((uVar1 & 1) == 0) {
            lVar4 = FUN_0367c9fc();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0367c9fc();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          FUN_047a64cc();
          return;
        }
        if ((uVar1 & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0367c9fc();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
      }
      FUN_047a58a4();
      return;
    }
    if (unaff_w24 == -1) break;
    param_1 = *(long *)(unaff_x23 + 0x20);
    in_w8 = *(ushort *)(param_1 + 0x135);
  }
  lVar4 = *(long *)(unaff_x23 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_047a6184();
  return;
}


