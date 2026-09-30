/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 01d432f8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke(void)

{
  short *psVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x19;
  uint uVar11;
  long unaff_x22;
  long lVar12;
  long *plVar13;
  long unaff_x29;
  undefined1 auVar14 [16];
  undefined8 auStack_10 [2];
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_02357d48);
  FUN_00fdc2e4(PTR_DAT_02357d50);
  FUN_00fdc2e4(PTR_DAT_02357d58);
  FUN_00fdc2e4(PTR_DAT_02357d60);
  FUN_00fdc2e4(PTR_DAT_02357d68);
  FUN_00fdc2e4(PTR_DAT_02351820);
  *(undefined1 *)(unaff_x22 + 0x53b) = 1;
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  auVar14 = FUN_01d43b78();
  uVar10 = auVar14._8_8_;
  psVar7 = auVar14._0_8_;
  uVar11 = auVar14._8_4_;
  if ((uVar11 != 0) && (*psVar7 == 0x7b)) {
    uVar8 = FUN_01d43db0(psVar7,uVar10,1);
    puVar3 = PTR_DAT_02351a18;
    if ((uVar8 & 1) == 0) {
LAB_01d437e0:
      FUN_01d45310();
      return 0;
    }
    lVar12 = *(long *)PTR_DAT_02351a18;
    if (uVar11 < 3) {
      FUN_01d68788(0);
    }
    if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    puVar4 = PTR_DAT_02357cf0;
    uVar5 = FUN_01d450b0(psVar7 + 3,uVar11 - 3,0x2c,*(undefined8 *)PTR_DAT_02357cf0);
    if (0 < (int)uVar5) {
      lVar12 = *(long *)PTR_DAT_023517a8;
      if ((uVar11 < 3) || (uVar11 - 3 < uVar5)) {
        FUN_01d68788(0);
      }
      if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      *(undefined4 *)(unaff_x29 + -4) = 0;
      uVar8 = FUN_01d4403c(psVar7 + 3,uVar5,unaff_x29 + -4,0xffffffff,0x1000);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      uVar8 = FUN_01d43db0(psVar7,uVar10,uVar5 + 4);
      if ((uVar8 & 1) == 0) goto LAB_01d437e0;
      lVar12 = *(long *)puVar3;
      uVar5 = uVar5 + 6;
      if (uVar11 < uVar5) {
        FUN_01d68788(0);
      }
      if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      uVar6 = FUN_01d450b0(psVar7 + (int)uVar5,uVar11 - uVar5,0x2c,*(undefined8 *)puVar4);
      if (0 < (int)uVar6) {
        lVar12 = *(long *)PTR_DAT_023517a8;
        if ((uVar11 < uVar5) || (uVar11 - uVar5 < uVar6)) {
          FUN_01d68788(0);
        }
        if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        *(undefined8 *)(unaff_x29 + -8) = 0;
        *(undefined2 *)(unaff_x19 + 4) = 0;
        uVar8 = FUN_01d4403c(psVar7 + (int)uVar5,uVar6,unaff_x29 + -8,0xffffffff,0x1000,
                             unaff_x29 + -4);
        *(short *)(unaff_x19 + 4) = (short)*(undefined4 *)(unaff_x29 + -4);
        puVar3 = PTR_DAT_02351a18;
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        uVar8 = FUN_01d43db0(psVar7,uVar10,uVar6 + uVar5 + 1);
        if ((uVar8 & 1) == 0) goto LAB_01d437e0;
        lVar12 = *(long *)puVar3;
        uVar5 = uVar6 + uVar5 + 3;
        if (uVar11 < uVar5) {
          FUN_01d68788(0);
        }
        if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar6 = FUN_01d450b0(psVar7 + (int)uVar5,uVar11 - uVar5,0x2c,*(undefined8 *)puVar4);
        if (0 < (int)uVar6) {
          lVar12 = *(long *)PTR_DAT_023517a8;
          if ((uVar11 < uVar5) || (uVar11 - uVar5 < uVar6)) {
            FUN_01d68788(0);
          }
          if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          *(undefined8 *)(unaff_x29 + -8) = 0;
          *(undefined2 *)(unaff_x19 + 6) = 0;
          uVar8 = FUN_01d4403c(psVar7 + (int)uVar5,uVar6,unaff_x29 + -8,0xffffffff,0x1000,
                               unaff_x29 + -4);
          uVar9 = 0;
          *(short *)(unaff_x19 + 6) = (short)*(undefined4 *)(unaff_x29 + -4);
          plVar13 = (long *)PTR_DAT_02351a18;
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          uVar6 = uVar6 + 1;
          uVar2 = uVar6 + uVar5;
          if ((int)uVar2 < (int)uVar11) {
            if (uVar11 <= uVar2) {
LAB_01d43878:
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c(uVar9);
            }
            if (psVar7[(int)uVar2] == 0x7b) {
              *(undefined8 **)(unaff_x29 + -0x18) = auStack_10;
              uVar8 = 0;
              auStack_10[0] = 0;
              do {
                uVar9 = FUN_01d43db0(psVar7,uVar10,uVar5 + uVar6 + 1);
                if ((uVar9 & 1) == 0) goto LAB_01d437e0;
                lVar12 = *plVar13;
                uVar5 = uVar5 + uVar6 + 3;
                if (uVar11 < uVar5) {
                  FUN_01d68788(0);
                }
                if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0103c244();
                }
                uVar2 = uVar11 - uVar5;
                psVar1 = psVar7 + (int)uVar5;
                if (uVar8 < 7) {
                  uVar6 = FUN_01d450b0(psVar1,uVar2,0x2c,*(undefined8 *)puVar4);
                }
                else {
                  uVar6 = FUN_01d450b0(psVar1,uVar2,0x7d,*(undefined8 *)puVar4);
                }
                if ((int)uVar6 < 1) goto LAB_01d4379c;
                lVar12 = *(long *)PTR_DAT_023517a8;
                if ((uVar11 < uVar5) || (uVar2 < uVar6)) {
                  FUN_01d68788(0);
                }
                if ((*(byte *)(*(long *)(lVar12 + 0x20) + 0x135) & 1) == 0) {
                  FUN_0103c244();
                }
                *(undefined4 *)(unaff_x29 + -4) = 0;
                uVar9 = FUN_01d4403c(psVar1,uVar6,unaff_x29 + -4,0xffffffff,0x1000,unaff_x29 + -0xc)
                ;
                plVar13 = (long *)PTR_DAT_02351a18;
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                if (0xff < *(uint *)(unaff_x29 + -0xc)) goto LAB_01d4379c;
                *(char *)(*(long *)(unaff_x29 + -0x18) + uVar8) = (char)*(uint *)(unaff_x29 + -0xc);
                uVar8 = uVar8 + 1;
              } while (uVar8 != 8);
              uVar5 = uVar5 + uVar6 + 1;
              *(undefined8 *)(unaff_x19 + 8) = **(undefined8 **)(unaff_x29 + -0x18);
              if ((int)uVar5 < (int)uVar11) {
                if (uVar11 <= uVar5) goto LAB_01d43878;
                if ((psVar7[(int)uVar5] == 0x7d) && (uVar5 == uVar11 - 1)) {
                  return 1;
                }
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


