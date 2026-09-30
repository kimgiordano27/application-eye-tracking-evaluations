/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0546e8d4
PROGRAM: m3ar-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  puVar1 = PTR_DAT_08f8a808;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    lVar2 = thunk_FUN_0406deb8(lVar3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_062c42d0(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 8) = lVar2;
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04a81d90(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x40);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    lVar2 = thunk_FUN_0406deb8(lVar3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_062bcef0(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x10) = lVar2;
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04a7e604(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x60);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    lVar2 = thunk_FUN_0406deb8(lVar3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_062c4390(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x68),*(undefined8 *)(lVar3 + 0x70));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x18) = lVar2;
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04a81ecc(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar2 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec();
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar3 = *(long *)(lVar3 + 0x80);
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    lVar2 = thunk_FUN_0406deb8(lVar3);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_062c0c40(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90));
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar3 + 0xb8) + 0x20) = lVar2;
    if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04a7f888(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


