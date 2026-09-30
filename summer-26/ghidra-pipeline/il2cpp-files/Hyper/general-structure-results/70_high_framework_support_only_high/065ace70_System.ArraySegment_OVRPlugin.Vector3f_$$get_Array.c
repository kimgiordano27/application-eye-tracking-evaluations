/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector3f>$$get_Array
ENTRY_POINT: 065ace70
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_ArraySegment<OVRPlugin_Vector3f>__get_Array(ushort *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  if ((*param_1 & 1) == 0) {
    FUN_04980b34();
  }
  if (unaff_x21 == 0) {
LAB_065acfac:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (*(int *)(unaff_x21 + 0x18) == 0) {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    if (unaff_x22 == 0) goto LAB_065acfac;
  }
  else {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if (*(int *)(unaff_x21 + 0x18) == 1) {
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      if (*(int *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      uVar1 = *(undefined4 *)(unaff_x21 + 0x20);
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      unaff_x22 = FUN_065ac1c4(&stack0x00000008,uVar1);
    }
    else {
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      unaff_x22 = FUN_065ac71c(&stack0x00000008);
    }
  }
  return unaff_x22;
}


