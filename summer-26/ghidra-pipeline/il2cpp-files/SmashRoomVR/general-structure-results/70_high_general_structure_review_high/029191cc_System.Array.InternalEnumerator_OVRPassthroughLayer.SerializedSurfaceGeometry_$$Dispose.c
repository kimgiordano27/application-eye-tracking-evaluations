/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 029191cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
               (long param_1)

{
  long lVar1;
  byte in_w8;
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      param_1 = FUN_01ae9e74();
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    FUN_029192e0();
    if (unaff_w25 + -1 == 0 || unaff_w25 < 1) break;
    param_1 = *(long *)(unaff_x19 + 0x20);
    in_w8 = *(byte *)(param_1 + 0x135);
    unaff_w25 = unaff_w25 + -1;
  }
  if (1 < unaff_w24) {
    do {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_029189c0();
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_029192e0();
      unaff_w21 = unaff_w21 + -1;
    } while (2 < (unaff_w21 - unaff_w22) + 2);
  }
  return;
}


