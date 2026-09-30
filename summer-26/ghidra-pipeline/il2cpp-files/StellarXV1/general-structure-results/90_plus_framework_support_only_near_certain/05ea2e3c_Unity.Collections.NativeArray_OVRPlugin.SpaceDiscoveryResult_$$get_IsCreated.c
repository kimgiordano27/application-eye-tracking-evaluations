/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_IsCreated
ENTRY_POINT: 05ea2e3c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_IsCreated(void)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_092ba5c0;
  if ((char)unaff_x19[4] != '\0') {
    if (*(int *)(*(long *)PTR_DAT_092ba5c0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07700efc(0);
  }
  *(undefined1 *)(unaff_x19 + 4) = 1;
  if (*unaff_x19 == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = FUN_040b1498();
    if (lVar3 == 0) {
      return;
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar6 = unaff_x19[2];
  if (lVar6 == 0) {
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    FUN_05ea311c();
    return;
  }
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  puVar2 = PTR_DAT_092b6dd0;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x40) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    lVar3 = thunk_FUN_040b4efc();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x20 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    FUN_06caf394(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x10) = lVar3;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    thunk_FUN_040ec700(*(long *)(lVar4 + 0xb8) + 0x10,lVar3);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_04fd9b00(lVar6,lVar3);
  return;
}


