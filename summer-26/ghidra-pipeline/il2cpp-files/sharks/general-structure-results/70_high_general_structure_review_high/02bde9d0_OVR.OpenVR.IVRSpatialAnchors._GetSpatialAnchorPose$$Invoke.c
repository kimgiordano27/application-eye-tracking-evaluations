/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$Invoke
ENTRY_POINT: 02bde9d0
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


ulong OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__Invoke(ulong param_1)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  uint in_w8;
  long in_x9;
  ushort *in_x10;
  long in_x11;
  ushort *puVar4;
  ulong in_x12;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint in_w14;
  uint uVar8;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  do {
    if (in_w14 - 0x41 < 0x1a) {
      uVar6 = in_w14 - 0x37;
    }
    else {
      if (0x19 < in_w14 - 0x61) {
LAB_02bdea20:
        if (param_1 < 0x8000000000000001) {
          return param_1;
        }
LAB_02bdea2c:
        FUN_02bdf444();
        uVar6 = *unaff_x19;
        uVar3 = 0x1fffffffffffffff;
        if (unaff_w21 != 8) {
          uVar3 = 0x7fffffffffffffff;
        }
        uVar7 = 0xfffffffffffffff;
        if (unaff_w21 != 0x10) {
          uVar7 = uVar3;
        }
        uVar3 = 0x1999999999999999;
        if (unaff_w21 != 10) {
          uVar3 = uVar7;
        }
        if ((int)unaff_w20 <= (int)uVar6) {
          return 0;
        }
        puVar4 = (ushort *)(unaff_x22 + (long)(int)uVar6 * 2);
        lVar5 = (long)(int)unaff_w20 - (long)(int)uVar6;
        uVar7 = 0;
        while (uVar6 < unaff_w20) {
          uVar2 = *puVar4;
          uVar8 = uVar2 - 0x30;
          if (9 < uVar8) {
            uVar8 = (uint)uVar2;
            if (uVar2 - 0x41 < 0x1a) {
              uVar8 = uVar8 - 0x37;
            }
            else {
              if (0x19 < uVar8 - 0x61) {
                return uVar7;
              }
              uVar8 = uVar8 - 0x57;
            }
          }
          if (unaff_w21 <= (int)uVar8) {
            return uVar7;
          }
          if ((uVar3 < uVar7) || (uVar1 = uVar7 * (long)unaff_w21 + (ulong)uVar8, uVar1 < uVar7)) {
            FUN_02bdf48c();
            uVar3 = FUN_02bdeb40();
            return uVar3;
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + -1;
          puVar4 = puVar4 + 1;
          *unaff_x19 = uVar6;
          uVar7 = uVar1;
          if (lVar5 == 0) {
            return uVar1;
          }
        }
LAB_02bdeb20:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      uVar6 = in_w14 - 0x57;
    }
    do {
      if (unaff_w21 <= (int)uVar6) goto LAB_02bdea20;
      if (in_x12 <= param_1) goto LAB_02bdea2c;
      in_w8 = in_w8 + 1;
      in_x11 = in_x11 + -1;
      param_1 = param_1 * in_x9 + (ulong)uVar6;
      in_x10 = in_x10 + 1;
      *unaff_x19 = in_w8;
      if (in_x11 == 0) goto LAB_02bdea20;
      if (unaff_w20 <= in_w8) goto LAB_02bdeb20;
      in_w14 = (uint)*in_x10;
      uVar6 = *in_x10 - 0x30;
    } while (uVar6 < 10);
  } while( true );
}


