/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 02bdead0
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


ulong OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(void)

{
  ushort uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  uint in_w8;
  ulong in_x9;
  long in_x10;
  ushort *in_x11;
  long in_x12;
  ulong in_x13;
  uint in_w14;
  uint uVar3;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  
  while( true ) {
    if (((bool)in_CY && !(bool)in_ZR) || (uVar2 = in_x13 * in_x10 + (ulong)in_w14, uVar2 < in_x13))
    {
      FUN_02bdf48c();
      uVar2 = FUN_02bdeb40();
      return uVar2;
    }
    in_w8 = in_w8 + 1;
    in_x12 = in_x12 + -1;
    in_x11 = in_x11 + 1;
    *unaff_x19 = in_w8;
    if (in_x12 == 0) {
      return uVar2;
    }
    if (unaff_w20 <= in_w8) break;
    uVar1 = *in_x11;
    in_w14 = uVar1 - 0x30;
    if (9 < in_w14) {
      uVar3 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        in_w14 = uVar3 - 0x37;
      }
      else {
        if (0x19 < uVar3 - 0x61) {
          return uVar2;
        }
        in_w14 = uVar3 - 0x57;
      }
    }
    if (unaff_w21 <= (int)in_w14) {
      return uVar2;
    }
    in_CY = in_x9 <= uVar2;
    in_ZR = uVar2 == in_x9;
    in_x13 = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


