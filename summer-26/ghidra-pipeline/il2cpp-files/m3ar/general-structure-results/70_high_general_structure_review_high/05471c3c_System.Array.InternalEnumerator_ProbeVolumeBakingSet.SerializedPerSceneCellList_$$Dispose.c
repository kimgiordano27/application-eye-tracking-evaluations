/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 05471c3c
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0406aaec();
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0xb8) + 0x18);
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar1 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar1 = *(long *)(lVar1 + 0x60);
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0406aaec(lVar1);
    }
    lVar3 = thunk_FUN_0406deb8(lVar1);
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_062c5200(lVar3,uVar4,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70));
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0406aaec();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar1 + 0xb8) + 0x18) = lVar3;
    if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04a838b8(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0406aaec();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0406aaec();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar3 = *(long *)(lVar1 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    lVar1 = *(long *)(lVar1 + 0x80);
    uVar4 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0406aaec(lVar1);
    }
    lVar3 = thunk_FUN_0406deb8(lVar1);
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    FUN_062c1280(lVar3,uVar4,*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90));
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0406aaec();
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar1 + 0xb8) + 0x20) = lVar3;
    if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04a803a4(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


