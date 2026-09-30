/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$ToArray
ENTRY_POINT: 03b0a938
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray
               (undefined8 param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  uint in_w8;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (in_w8 < param_2) {
    FUN_050f6004(0xd,0x1b,0);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (in_w8 == *(uint *)(lVar1 + 0x18)) {
      FUN_03b0a100();
      in_w8 = *(uint *)(unaff_x19 + 0x18);
      lVar1 = *(long *)(unaff_x19 + 0x10);
    }
    if (in_w8 - param_2 != 0 && (int)param_2 <= (int)in_w8) {
      FUN_050f7d68(lVar1,param_2,lVar1,param_2 + 1,in_w8 - param_2,0);
      lVar1 = *(long *)(unaff_x19 + 0x10);
    }
    if (lVar1 != 0) {
      if (param_2 < *(uint *)(lVar1 + 0x18)) {
        uVar3 = param_3[1];
        uVar2 = *param_3;
        lVar1 = lVar1 + (long)(int)param_2 * 0x18;
        *(undefined8 *)(lVar1 + 0x30) = param_3[2];
        *(undefined8 *)(lVar1 + 0x28) = uVar3;
        *(undefined8 *)(lVar1 + 0x20) = uVar2;
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


