/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$get_Array
ENTRY_POINT: 065ab658
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_ArraySegment<OVRPlugin_SpaceQueryResult>__get_Array(long param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000008;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_04980b34();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  FUN_092cbd18(unaff_w21 <= *(int *)(unaff_x22 + 0x18),*unaff_x23,0,0);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_04980b34();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  lVar4 = unaff_x20;
  if (*(int *)(unaff_x22 + 0x18) != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34();
    }
    lVar4 = unaff_x22;
    if (*(int *)(unaff_x20 + 0x18) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar4 + 0x135);
      if ((uVar3 & 1) == 0) {
        FUN_04980b34();
        lVar4 = *(long *)(unaff_x19 + 0x20);
        uVar3 = *(ushort *)(lVar4 + 0x135);
      }
      iVar1 = *(int *)(unaff_x22 + 0x18);
      if ((uVar3 & 1) == 0) {
        FUN_04980b34();
        lVar4 = *(long *)(unaff_x19 + 0x20);
        uVar3 = *(ushort *)(lVar4 + 0x135);
      }
      iVar2 = *(int *)(unaff_x20 + 0x18);
      if ((uVar3 & 1) == 0) {
        lVar4 = FUN_04980b34();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xb8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04980b34();
      }
      lVar4 = FUN_04947fd0(lVar4,iVar2 + iVar1);
      if (unaff_w21 != 0) {
        FUN_08da0170();
      }
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        FUN_04980b34();
        lVar5 = *(long *)(unaff_x19 + 0x20);
      }
      if (*(int *)(unaff_x22 + 0x18) != unaff_w21) {
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04980b34();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04980b34();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        if ((uVar3 & 1) == 0) {
          FUN_04980b34();
          uVar3 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        }
        if ((uVar3 & 1) == 0) {
          FUN_04980b34();
        }
        FUN_08d9f1fc();
        lVar5 = *(long *)(unaff_x19 + 0x20);
      }
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      FUN_08d9f1fc();
      in_stack_00000008 = 0;
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      in_stack_00000008 = lVar4;
      thunk_FUN_049ee3d8(&stack0x00000008,lVar4);
      lVar4 = in_stack_00000008;
    }
  }
  return lVar4;
}


