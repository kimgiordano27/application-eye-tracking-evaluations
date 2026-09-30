/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$Invoke
ENTRY_POINT: 0738684c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__Invoke
               (float param_1,float param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool in_NG;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  int iVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  if ((in_NG) && (*(char *)(unaff_x19 + 0x20) != '\0')) {
    fVar8 = (float)FUN_056bf850((char *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08e68e08);
    param_1 = (unaff_s8 - fVar8) / unaff_s11;
    param_2 = (unaff_s9 - param_2) / unaff_s11;
    param_3 = (unaff_s10 - param_3) / unaff_s11;
  }
  if (*(int *)(unaff_x19 + 0x30) < 0) {
    iVar7 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_x19 + 0x34);
    iVar7 = *(int *)(unaff_x19 + 0x30) + 1;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar7 / iVar1;
    }
    iVar7 = iVar7 - iVar3 * iVar1;
  }
  lVar4 = *(long *)(unaff_x19 + 0x18);
  if (lVar4 != 0) {
    uVar2 = *(uint *)(lVar4 + 0x18);
    if (iVar7 < (int)uVar2) {
      FUN_052dc3f8(lVar4,iVar7,*(undefined8 *)PTR_DAT_08e71818);
    }
    else {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar6 = *(long *)PTR_DAT_08e7f360;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07386970;
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar2 * 0xc;
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        *(float *)(lVar5 + 0x20) = param_1;
        *(float *)(lVar5 + 0x24) = param_2;
        *(float *)(lVar5 + 0x28) = param_3;
      }
      else {
        FUN_052dc6c8(lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_056bf834();
    *(int *)(unaff_x19 + 0x30) = iVar7;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    return;
  }
LAB_07386970:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


