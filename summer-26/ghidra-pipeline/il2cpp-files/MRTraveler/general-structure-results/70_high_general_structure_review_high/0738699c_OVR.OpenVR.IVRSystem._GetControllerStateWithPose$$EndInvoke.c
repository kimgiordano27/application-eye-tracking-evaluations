/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 0738699c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke
               (undefined1 param_1 [16],float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  uint uVar4;
  ulong in_x9;
  float *pfVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((in_x9 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6b9f8);
    *(undefined1 *)(unaff_x21 + 0x41c) = 1;
  }
  lVar6 = *(long *)(unaff_x20 + 0x40);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar12 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar10 = pfVar5[2];
    fVar9 = fVar12;
    fVar1 = fVar11;
    fVar2 = fVar10;
  }
  else {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
      lVar6 = *(long *)(unaff_x20 + 0x40);
      if (lVar6 == 0) goto LAB_07386b48;
    }
    puVar3 = PTR_DAT_08e68e18;
    pfVar5 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    uVar4 = *(uint *)(lVar6 + 0x18);
    fVar11 = pfVar5[1];
    fVar10 = pfVar5[2];
    fVar12 = *pfVar5;
    if (0 < (int)uVar4) {
      uVar7 = 0;
      do {
        if (uVar4 <= uVar7) goto LAB_07386b44;
        if (*(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20) == 0) goto LAB_07386b48;
        fVar9 = (float)FUN_07386b4c();
        uVar4 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
        fVar12 = fVar12 + fVar9;
        fVar11 = fVar11 + param_2;
        fVar10 = fVar10 + param_3;
      } while ((int)uVar7 < (int)uVar4);
    }
    lVar6 = *(long *)(unaff_x20 + 0x40);
    if (lVar6 == 0) {
LAB_07386b48:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      lVar8 = 0;
      uVar7 = uVar4;
      do {
        if (uVar7 <= (uint)lVar8) {
LAB_07386b44:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        if (*(long *)(lVar6 + 0x20 + lVar8 * 8) == 0) goto LAB_07386b48;
        FUN_07386d20();
        uVar7 = *(uint *)(lVar6 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar7);
    }
    fVar9 = (float)(int)uVar4;
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    fVar12 = fVar12 / fVar9;
    fVar11 = fVar11 / fVar9;
    fVar10 = fVar10 / fVar9;
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar9 = *pfVar5;
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  FUN_05ff0284(fVar12,fVar11,fVar10,fVar9,fVar1,fVar2);
  return;
}


