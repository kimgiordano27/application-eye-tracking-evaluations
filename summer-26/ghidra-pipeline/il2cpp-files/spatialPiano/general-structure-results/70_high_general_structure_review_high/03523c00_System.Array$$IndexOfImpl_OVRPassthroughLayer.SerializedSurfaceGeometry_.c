/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03523c00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined4 unaff_w26;
  
  uVar2 = FUN_03524c2c();
  if (unaff_x21 != 0) {
    FUN_05cd5a80();
    *(undefined8 *)(unaff_x21 + 0xe0) = uVar2;
    *(undefined8 *)(unaff_x21 + 0x10) = unaff_x24;
    *(undefined8 *)(unaff_x21 + 0x20) = unaff_x23;
    *unaff_x22 = uVar2;
    lVar3 = *(long *)(unaff_x19 + 0x38);
    *(undefined4 *)(unaff_x21 + 0x18) = unaff_w26;
    *(undefined4 *)(unaff_x21 + 0x1c) = 0;
    *(undefined1 *)(unaff_x21 + 0x2a) = 1;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
        }
        else {
          FUN_03abf904();
        }
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
        FUN_05cd275c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


