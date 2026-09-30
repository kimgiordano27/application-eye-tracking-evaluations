/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 05dc1f5c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__Dispose(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  while( true ) {
    FUN_05dc1e70();
    iVar2 = unaff_w25 + -1;
    unaff_w24 = unaff_w24 + -1;
    if (iVar2 <= unaff_w22) {
      return;
    }
    iVar3 = iVar2 - unaff_w22;
    if (iVar3 + 1 < 0x11) break;
    if (unaff_w24 == -1) {
      lVar4 = *(long *)(unaff_x23 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      FUN_05dc2494();
      return;
    }
    lVar4 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    unaff_w25 = FUN_05dc21b4();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc(*(long *)(unaff_x23 + 0x20));
    }
  }
  if (iVar2 == unaff_w22) {
    return;
  }
  lVar4 = *(long *)(unaff_x23 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if (iVar3 == 2) {
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_05dc1bb4();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_05dc1bb4();
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
  }
  else {
    if (iVar3 != 1) {
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      FUN_05dc27dc();
      return;
    }
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
  }
  FUN_05dc1bb4();
  return;
}


