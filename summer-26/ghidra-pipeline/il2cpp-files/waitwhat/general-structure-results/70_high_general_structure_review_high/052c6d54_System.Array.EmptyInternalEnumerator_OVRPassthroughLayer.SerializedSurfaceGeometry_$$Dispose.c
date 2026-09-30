/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 052c6d54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


int System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
              (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  lVar4 = *unaff_x19;
  if (lVar4 == 0) {
    FUN_05950954(0x32,0);
    lVar4 = *unaff_x19;
  }
  lVar5 = *(long *)(unaff_x21 + 0x20);
  lVar2 = unaff_x19[1];
  uVar1 = *(undefined4 *)((long)unaff_x19 + 0xc);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  iVar3 = FUN_03ce8f24(lVar4,unaff_w20,(int)lVar2,uVar1,
                       *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x50));
  if (iVar3 < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar3 - (int)unaff_x19[1];
  }
  return iVar3;
}


