/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$ToArray
ENTRY_POINT: 04b60570
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


int System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray
              (ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  uint uVar3;
  ulong unaff_x21;
  uint unaff_w22;
  
  do {
    unaff_x21 = (ulong)((int)unaff_x21 + 1);
    do {
      if ((int)param_1 <= (int)unaff_x21) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w22;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)param_1 - unaff_w22;
      }
      unaff_x21 = (ulong)(int)unaff_x21;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 == 0) goto LAB_04b605a0;
        if (*(uint *)(lVar2 + 0x18) <= (uint)unaff_x21) goto LAB_04b6059c;
        uVar1 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),
                           *(undefined8 *)(lVar2 + unaff_x21 * 8 + 0x20),
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar1 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x21 = unaff_x21 + 1;
      } while ((long)unaff_x21 < (long)param_1);
      uVar3 = (uint)unaff_x21;
    } while ((int)param_1 <= (int)uVar3);
    lVar2 = *(long *)(unaff_x19 + 0x10);
    if (lVar2 == 0) {
LAB_04b605a0:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if ((*(uint *)(lVar2 + 0x18) <= uVar3) || (*(uint *)(lVar2 + 0x18) <= unaff_w22)) {
LAB_04b6059c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    *(undefined8 *)(lVar2 + 0x20 + (long)(int)unaff_w22 * 8) =
         *(undefined8 *)(lVar2 + 0x20 + (long)(int)uVar3 * 8);
    unaff_w22 = unaff_w22 + 1;
  } while( true );
}


