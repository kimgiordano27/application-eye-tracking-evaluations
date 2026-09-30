/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 073844f0
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
OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke
          (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  double dVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  double in_stack_00000028;
  
  puVar1 = PTR_DAT_08e68f00;
  if ((DAT_0941e3ff & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb4560);
    FUN_03c8f898(PTR_DAT_08e798c8);
    FUN_03c8f898(PTR_DAT_08e68f00);
    DAT_0941e3ff = 1;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar2 = PTR_DAT_08eb4560;
  uVar3 = FUN_085dfaac(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_3 + 0x20) == 0) {
LAB_073847bc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = FUN_045e0f40(*(long *)(param_3 + 0x20),*(undefined8 *)PTR_DAT_08e798c8);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar5);
    }
    uVar3 = FUN_085dfaac(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar4 == 0) goto LAB_073847bc;
      fVar7 = (float)FUN_085ea3f0(lVar4,0);
      fVar12 = param_2;
      fVar8 = (float)FUN_085ecd7c(lVar4,0);
      FUN_085ecd7c(lVar4,0);
      iVar9 = *(int *)(param_3 + 0x3c);
      if (DAT_094102d1 == '\0') {
        FUN_03c8f898(PTR_DAT_08e6a6b8);
        DAT_094102d1 = '\x01';
      }
      puVar1 = PTR_DAT_08e6a6b8;
      fVar7 = fVar7 * fVar8 * (float)iVar9;
      if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar13 = (double)fVar7;
      dVar10 = modf(dVar13,&stack0x00000028);
      if (0.0 <= fVar7) {
        if (dVar10 == 0.5) {
          dVar10 = 1.0;
          goto LAB_0738468c;
        }
        dVar13 = (double)(long)(dVar13 + 0.5);
      }
      else if (dVar10 == -0.5) {
        dVar10 = -1.0;
LAB_0738468c:
        dVar13 = in_stack_00000028;
        if (((long)in_stack_00000028 & 1U) != 0) {
          dVar13 = in_stack_00000028 + dVar10;
        }
      }
      else {
        dVar13 = (double)(long)(dVar13 + -0.5);
      }
      iVar11 = *(int *)(param_3 + 0x3c);
      iVar9 = -0x80000000;
      if (dVar13 != INFINITY) {
        iVar9 = (int)dVar13;
      }
      if (DAT_094102d1 == '\0') {
        FUN_03c8f898(PTR_DAT_08e6a6b8);
        DAT_094102d1 = '\x01';
      }
      fVar12 = param_2 * fVar12 * (float)iVar11;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      dVar13 = (double)fVar12;
      dVar10 = modf(dVar13,&stack0x00000028);
      if (0.0 <= fVar12) {
        if (dVar10 == 0.5) {
          dVar10 = 1.0;
          goto LAB_0738474c;
        }
        in_stack_00000028 = (double)(long)(dVar13 + 0.5);
      }
      else if (dVar10 == -0.5) {
        dVar10 = -1.0;
LAB_0738474c:
        if (((long)in_stack_00000028 & 1U) != 0) {
          in_stack_00000028 = in_stack_00000028 + dVar10;
        }
      }
      else {
        in_stack_00000028 = (double)(long)(dVar13 + -0.5);
      }
      iVar11 = -0x80000000;
      if (in_stack_00000028 != INFINITY) {
        iVar11 = (int)in_stack_00000028;
      }
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      goto LAB_0738479c;
    }
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *(long *)puVar2;
  }
  iVar9 = **(int **)(lVar4 + 0xb8);
  iVar11 = (*(int **)(lVar4 + 0xb8))[1];
LAB_0738479c:
  return CONCAT44(iVar11,iVar9);
}


