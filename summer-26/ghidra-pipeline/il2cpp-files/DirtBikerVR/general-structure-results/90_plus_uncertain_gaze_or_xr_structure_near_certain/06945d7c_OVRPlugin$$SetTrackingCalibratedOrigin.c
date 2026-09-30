/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 06945d7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingCalibratedOrigin(long param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w8;
  undefined8 *unaff_x19;
  long *unaff_x21;
  int iVar9;
  long *unaff_x23;
  long *unaff_x28;
  int unaff_w29;
  float fVar10;
  
  puVar3 = PTR_DAT_084b6480;
  fVar2 = DAT_015c5994;
  fVar1 = DAT_015c56e4;
  if (unaff_w29 < 1) {
LAB_069460b0:
    (**(code **)(*unaff_x28 + 0x248))();
    return;
  }
  iVar9 = 0;
  do {
    lVar4 = FUN_04de82e0(param_1,iVar9,*(undefined8 *)PTR_DAT_084b63c8);
    if ((lVar4 == 0) || (lVar4 = FUN_0694d834(), lVar4 == 0)) break;
    if (*(int *)(lVar4 + 0x18) == 2) {
      lVar5 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar3;
      thunk_FUN_03afed3c();
      if ((*unaff_x23 == 0) ||
         (lVar6 = FUN_04de82e0(*unaff_x23,iVar9,*(undefined8 *)PTR_DAT_084b6410), lVar6 == 0))
      break;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar5 + 0x28));
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar6 = FUN_04de82e0(lVar4,0,*unaff_x19);
      if (lVar6 == 0) break;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar6 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar5 + 0x38));
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar7 = FUN_065ce45c(lVar5,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar7,0);
      lVar5 = FUN_04de82e0(lVar4,0,*unaff_x19);
      if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
         (lVar5 = FUN_07c98f88(*(long *)(lVar5 + 0x80),0), lVar5 == 0)) break;
      fVar10 = (float)FUN_07cac280(lVar5,0);
      if (fVar1 <= fVar10) {
        lVar5 = FUN_04de82e0(lVar4,0,*unaff_x19);
        if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
           (lVar5 = FUN_07c98f88(*(long *)(lVar5 + 0x80),0), lVar5 == 0)) break;
        fVar10 = (float)FUN_07cac280(lVar5,0);
        if (fVar10 <= fVar2) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*unaff_x23 == 0) break;
        lVar5 = FUN_04de82e0(*unaff_x23,iVar9,*(undefined8 *)PTR_DAT_084b6410);
        uVar7 = FUN_04de82e0(lVar4,1,*unaff_x19);
        if (lVar5 == 0) break;
        FUN_06941ffc(lVar5,uVar7);
        if (*unaff_x23 == 0) break;
        lVar5 = FUN_04de82e0(*unaff_x23,iVar9,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = *unaff_x19;
        uVar7 = 0;
      }
      else {
        if (*unaff_x23 == 0) break;
        lVar5 = FUN_04de82e0(*unaff_x23,iVar9,*(undefined8 *)PTR_DAT_084b6410);
        uVar7 = FUN_04de82e0(lVar4,0,*unaff_x19);
        if (lVar5 == 0) break;
        FUN_06941ffc(lVar5,uVar7);
        if (*unaff_x23 == 0) break;
        lVar5 = FUN_04de82e0(*unaff_x23,iVar9,*(undefined8 *)PTR_DAT_084b6410);
        uVar8 = *unaff_x19;
        uVar7 = 1;
      }
      uVar7 = FUN_04de82e0(lVar4,uVar7,uVar8);
      if (lVar5 == 0) break;
      FUN_069426d0(lVar5,uVar7);
    }
LAB_06946098:
    if (in_w8 + -1 == iVar9) goto LAB_069460b0;
    param_1 = *unaff_x21;
    iVar9 = iVar9 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


