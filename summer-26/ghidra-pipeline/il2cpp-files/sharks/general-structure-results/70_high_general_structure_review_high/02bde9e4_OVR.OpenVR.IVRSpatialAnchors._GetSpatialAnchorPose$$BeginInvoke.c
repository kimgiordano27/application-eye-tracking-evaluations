/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 02bde9e4
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


ulong OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke(ulong param_1)

{
  ushort uVar1;
  ulong uVar2;
  uint in_w8;
  long in_x9;
  ushort *in_x10;
  long in_x11;
  ushort *puVar3;
  ulong in_x12;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint in_w14;
  uint uVar7;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  while (in_w14 - 0x61 < 0x1a) {
    uVar5 = in_w14 - 0x57;
    while( true ) {
      do {
        if (unaff_w21 <= (int)uVar5) goto LAB_02bdea20;
        if (in_x12 <= param_1) goto LAB_02bdea2c;
        in_w8 = in_w8 + 1;
        in_x11 = in_x11 + -1;
        param_1 = param_1 * in_x9 + (ulong)uVar5;
        in_x10 = in_x10 + 1;
        *unaff_x19 = in_w8;
        if (in_x11 == 0) goto LAB_02bdea20;
        if (unaff_w20 <= in_w8) goto LAB_02bdeb20;
        uVar1 = *in_x10;
        in_w14 = (uint)uVar1;
        uVar5 = uVar1 - 0x30;
      } while (uVar5 < 10);
      if (0x19 < uVar1 - 0x41) break;
      uVar5 = uVar1 - 0x37;
    }
  }
LAB_02bdea20:
  if (0x8000000000000000 < param_1) {
LAB_02bdea2c:
    FUN_02bdf444();
    uVar5 = *unaff_x19;
    uVar2 = 0x1fffffffffffffff;
    if (unaff_w21 != 8) {
      uVar2 = 0x7fffffffffffffff;
    }
    uVar6 = 0xfffffffffffffff;
    if (unaff_w21 != 0x10) {
      uVar6 = uVar2;
    }
    uVar2 = 0x1999999999999999;
    if (unaff_w21 != 10) {
      uVar2 = uVar6;
    }
    if ((int)uVar5 < (int)unaff_w20) {
      puVar3 = (ushort *)(unaff_x22 + (long)(int)uVar5 * 2);
      lVar4 = (long)(int)unaff_w20 - (long)(int)uVar5;
      uVar6 = 0;
      do {
        if (unaff_w20 <= uVar5) {
LAB_02bdeb20:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        uVar1 = *puVar3;
        uVar7 = uVar1 - 0x30;
        if (9 < uVar7) {
          uVar7 = (uint)uVar1;
          if (uVar1 - 0x41 < 0x1a) {
            uVar7 = uVar7 - 0x37;
          }
          else {
            if (0x19 < uVar7 - 0x61) {
              return uVar6;
            }
            uVar7 = uVar7 - 0x57;
          }
        }
        if (unaff_w21 <= (int)uVar7) {
          return uVar6;
        }
        if ((uVar2 < uVar6) || (param_1 = uVar6 * (long)unaff_w21 + (ulong)uVar7, param_1 < uVar6))
        {
          FUN_02bdf48c();
          uVar2 = FUN_02bdeb40();
          return uVar2;
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 1;
        *unaff_x19 = uVar5;
        uVar6 = param_1;
      } while (lVar4 != 0);
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}


