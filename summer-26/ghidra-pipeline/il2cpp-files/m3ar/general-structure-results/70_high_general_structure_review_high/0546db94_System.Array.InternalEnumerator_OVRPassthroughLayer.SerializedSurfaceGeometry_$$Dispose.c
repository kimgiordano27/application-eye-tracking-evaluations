/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 0546db94
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *in_x9;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x22;
  
  uVar5 = *in_x9;
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0406aaec(param_1);
  }
  uVar1 = thunk_FUN_0406deb8(param_1);
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  FUN_062bcb80(uVar1,uVar5,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar2 + 0x70));
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  lVar2 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec();
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18) = uVar1;
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04a7dfd8(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78));
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
    FUN_062c0a30(lVar2,uVar5,*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90));
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
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_04a7f4d4(lVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98));
  return;
}


