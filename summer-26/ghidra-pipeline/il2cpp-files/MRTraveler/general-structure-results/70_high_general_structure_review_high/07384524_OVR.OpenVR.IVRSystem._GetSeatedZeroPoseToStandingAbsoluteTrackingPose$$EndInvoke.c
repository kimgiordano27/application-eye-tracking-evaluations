/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 07384524
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__EndInvoke
          (undefined1 param_1 [16],float param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  float fVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  double in_stack_00000028;
  
  FUN_03c8f898(PTR_DAT_08e68f00);
  *(undefined1 *)(unaff_x20 + 0x3ff) = 1;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08eb4560;
  uVar2 = FUN_085dfaac(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_073847bc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = FUN_045e0f40(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08e798c8);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*unaff_x22);
    }
    uVar2 = FUN_085dfaac(lVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (lVar3 == 0) goto LAB_073847bc;
      fVar5 = (float)FUN_085ea3f0(lVar3,0);
      fVar10 = param_2;
      fVar6 = (float)FUN_085ecd7c(lVar3,0);
      FUN_085ecd7c(lVar3,0);
      iVar7 = *(int *)(unaff_x19 + 0x3c);
      if (DAT_094102d1 == '\0') {
        FUN_03c8f898(PTR_DAT_08e6a6b8);
        DAT_094102d1 = '\x01';
      }
      puVar1 = PTR_DAT_08e6a6b8;
      fVar5 = fVar5 * fVar6 * (float)iVar7;
      if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar11 = (double)fVar5;
      dVar8 = modf(dVar11,&stack0x00000028);
      if (0.0 <= fVar5) {
        if (dVar8 == 0.5) {
          dVar8 = 1.0;
          goto LAB_0738468c;
        }
        dVar11 = (double)(long)(dVar11 + 0.5);
      }
      else if (dVar8 == -0.5) {
        dVar8 = -1.0;
LAB_0738468c:
        dVar11 = in_stack_00000028;
        if (((long)in_stack_00000028 & 1U) != 0) {
          dVar11 = in_stack_00000028 + dVar8;
        }
      }
      else {
        dVar11 = (double)(long)(dVar11 + -0.5);
      }
      iVar9 = *(int *)(unaff_x19 + 0x3c);
      iVar7 = -0x80000000;
      if (dVar11 != INFINITY) {
        iVar7 = (int)dVar11;
      }
      if (DAT_094102d1 == '\0') {
        FUN_03c8f898(PTR_DAT_08e6a6b8);
        DAT_094102d1 = '\x01';
      }
      fVar10 = param_2 * fVar10 * (float)iVar9;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar11 = (double)fVar10;
      dVar8 = modf(dVar11,&stack0x00000028);
      if (0.0 <= fVar10) {
        if (dVar8 == 0.5) {
          dVar8 = 1.0;
          goto LAB_0738474c;
        }
        in_stack_00000028 = (double)(long)(dVar11 + 0.5);
      }
      else if (dVar8 == -0.5) {
        dVar8 = -1.0;
LAB_0738474c:
        if (((long)in_stack_00000028 & 1U) != 0) {
          in_stack_00000028 = in_stack_00000028 + dVar8;
        }
      }
      else {
        in_stack_00000028 = (double)(long)(dVar11 + -0.5);
      }
      iVar9 = -0x80000000;
      if (in_stack_00000028 != INFINITY) {
        iVar9 = (int)in_stack_00000028;
      }
      if (iVar7 < 2) {
        iVar7 = 1;
      }
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      goto LAB_0738479c;
    }
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar3 = *(long *)puVar1;
  }
  iVar7 = **(int **)(lVar3 + 0xb8);
  iVar9 = (*(int **)(lVar3 + 0xb8))[1];
LAB_0738479c:
  return CONCAT44(iVar9,iVar7);
}


