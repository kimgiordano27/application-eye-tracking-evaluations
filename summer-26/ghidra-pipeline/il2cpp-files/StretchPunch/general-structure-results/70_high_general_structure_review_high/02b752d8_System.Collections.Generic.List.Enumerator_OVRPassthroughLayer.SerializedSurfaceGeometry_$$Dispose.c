/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 02b752d8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint in_w9;
  undefined4 in_register_0000404c;
  uint in_w10;
  long unaff_x21;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  
  if ((in_w9 <= in_w10) &&
     (*(long *)(*(long *)(param_1 + 200) + CONCAT44(in_register_0000404c,in_w9) * 8 + -8) == param_3
     )) {
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar3 = 0;
      puVar4 = (undefined4 *)(lVar2 + 0x38);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < (int)puVar4[-6]) {
          FUN_02b76310(puVar4[-2],puVar4[-1],*puVar4);
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 8;
      } while (uVar1 != uVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c();
}


