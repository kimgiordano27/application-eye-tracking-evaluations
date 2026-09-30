/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03760aa8
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar3;
  
  if (((char)unaff_x19[7] == '\0') && (*(char *)((long)unaff_x19 + 0xa4) != '\0')) {
    (**(code **)(*unaff_x19 + 0x218))();
  }
  if (unaff_x19[0x15] != 0) {
    lVar1 = FUN_0375e138(unaff_x19[0x15],(int)unaff_x19[0x17]);
    if (lVar1 == 0) {
      return;
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x40);
      if (*(int *)(*(long *)(unaff_x21 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar2 = FUN_07a0d2c4(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (unaff_x19[8] == 0) {
        return;
      }
      if (*(long *)(lVar1 + 0x18) != 0) {
        FUN_054947ac(*(undefined4 *)(lVar1 + 0x7c),*(undefined4 *)(lVar1 + 0x80),
                     *(undefined4 *)(lVar1 + 0x84),unaff_x19[8],
                     *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0x40),DAT_083ff9e0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


