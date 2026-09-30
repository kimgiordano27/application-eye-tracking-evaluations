/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 01d433e4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *plVar7;
  uint unaff_w24;
  long *unaff_x25;
  long lVar8;
  undefined8 *unaff_x26;
  long lVar9;
  long unaff_x29;
  undefined8 auStack_10 [2];
  
  if (!in_ZR && in_NG == in_OV) {
    lVar9 = *(long *)PTR_DAT_023517a8;
    if ((unaff_w20 < 3) || (unaff_w24 < param_1)) {
      FUN_01d68788(0);
    }
    if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    *(undefined4 *)(unaff_x29 + -4) = 0;
    uVar5 = FUN_01d4403c();
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_01d43db0();
    if ((uVar5 & 1) == 0) {
LAB_01d437e0:
      FUN_01d45310();
      return 0;
    }
    lVar9 = *unaff_x25;
    param_1 = param_1 + 6;
    if (unaff_w20 < param_1) {
      FUN_01d68788(0);
    }
    if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    lVar9 = unaff_x21 + (long)(int)param_1 * 2;
    uVar3 = FUN_01d450b0(lVar9,unaff_w20 - param_1,0x2c,*unaff_x26);
    if (0 < (int)uVar3) {
      lVar8 = *(long *)PTR_DAT_023517a8;
      if ((unaff_w20 < param_1) || (unaff_w20 - param_1 < uVar3)) {
        FUN_01d68788(0);
      }
      if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      *(undefined8 *)(unaff_x29 + -8) = 0;
      *(undefined2 *)(unaff_x19 + 4) = 0;
      uVar5 = FUN_01d4403c(lVar9,uVar3,unaff_x29 + -8,0xffffffff,0x1000,unaff_x29 + -4);
      *(short *)(unaff_x19 + 4) = (short)*(undefined4 *)(unaff_x29 + -4);
      puVar2 = PTR_DAT_02351a18;
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar5 = FUN_01d43db0();
      if ((uVar5 & 1) == 0) goto LAB_01d437e0;
      lVar9 = *(long *)puVar2;
      uVar3 = uVar3 + param_1 + 3;
      if (unaff_w20 < uVar3) {
        FUN_01d68788(0);
      }
      if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      lVar9 = unaff_x21 + (long)(int)uVar3 * 2;
      uVar4 = FUN_01d450b0(lVar9,unaff_w20 - uVar3,0x2c,*unaff_x26);
      if (0 < (int)uVar4) {
        lVar8 = *(long *)PTR_DAT_023517a8;
        if ((unaff_w20 < uVar3) || (unaff_w20 - uVar3 < uVar4)) {
          FUN_01d68788(0);
        }
        if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        *(undefined8 *)(unaff_x29 + -8) = 0;
        *(undefined2 *)(unaff_x19 + 6) = 0;
        uVar5 = FUN_01d4403c(lVar9,uVar4,unaff_x29 + -8,0xffffffff,0x1000,unaff_x29 + -4);
        uVar6 = 0;
        *(short *)(unaff_x19 + 6) = (short)*(undefined4 *)(unaff_x29 + -4);
        plVar7 = (long *)PTR_DAT_02351a18;
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        uVar1 = uVar4 + uVar3;
        if ((int)uVar1 < (int)unaff_w20) {
          if (unaff_w20 <= uVar1) {
LAB_01d43878:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c(uVar6);
          }
          if (*(short *)(unaff_x21 + (long)(int)uVar1 * 2) == 0x7b) {
            *(undefined8 **)(unaff_x29 + -0x18) = auStack_10;
            uVar5 = 0;
            auStack_10[0] = 0;
            do {
              uVar6 = FUN_01d43db0();
              if ((uVar6 & 1) == 0) goto LAB_01d437e0;
              lVar9 = *plVar7;
              uVar3 = uVar3 + uVar4 + 3;
              if (unaff_w20 < uVar3) {
                FUN_01d68788(0);
              }
              if ((*(byte *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
                FUN_0103c244();
              }
              uVar1 = unaff_w20 - uVar3;
              lVar9 = unaff_x21 + (long)(int)uVar3 * 2;
              if (uVar5 < 7) {
                uVar4 = FUN_01d450b0(lVar9,uVar1,0x2c,*unaff_x26);
              }
              else {
                uVar4 = FUN_01d450b0(lVar9,uVar1,0x7d,*unaff_x26);
              }
              if ((int)uVar4 < 1) goto LAB_01d4379c;
              lVar8 = *(long *)PTR_DAT_023517a8;
              if ((unaff_w20 < uVar3) || (uVar1 < uVar4)) {
                FUN_01d68788(0);
              }
              if ((*(byte *)(*(long *)(lVar8 + 0x20) + 0x135) & 1) == 0) {
                FUN_0103c244();
              }
              *(undefined4 *)(unaff_x29 + -4) = 0;
              uVar6 = FUN_01d4403c(lVar9,uVar4,unaff_x29 + -4,0xffffffff,0x1000,unaff_x29 + -0xc);
              plVar7 = (long *)PTR_DAT_02351a18;
              if ((uVar6 & 1) == 0) {
                return 0;
              }
              if (0xff < *(uint *)(unaff_x29 + -0xc)) goto LAB_01d4379c;
              *(char *)(*(long *)(unaff_x29 + -0x18) + uVar5) = (char)*(uint *)(unaff_x29 + -0xc);
              uVar5 = uVar5 + 1;
            } while (uVar5 != 8);
            uVar3 = uVar3 + uVar4 + 1;
            *(undefined8 *)(unaff_x19 + 8) = **(undefined8 **)(unaff_x29 + -0x18);
            if ((int)uVar3 < (int)unaff_w20) {
              if (unaff_w20 <= uVar3) goto LAB_01d43878;
              if ((*(short *)(unaff_x21 + (long)(int)uVar3 * 2) == 0x7d) && (uVar3 == unaff_w20 - 1)
                 ) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
LAB_01d4379c:
  FUN_01d45264();
  return 0;
}


