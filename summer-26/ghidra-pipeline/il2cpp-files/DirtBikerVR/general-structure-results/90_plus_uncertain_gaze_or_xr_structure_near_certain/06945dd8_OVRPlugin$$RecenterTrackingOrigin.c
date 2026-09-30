/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 06945dd8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__RecenterTrackingOrigin(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  undefined8 *unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x27;
  long *unaff_x28;
  int unaff_w29;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  
  do {
    if (in_w8 == 2) {
      lVar1 = FUN_03a8a804(*(undefined8 *)PTR_DAT_084867c8,5);
      if (lVar1 == 0) {
LAB_069460ac:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar1 + 0x18) == 0) {
LAB_069460ec:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(lVar1 + 0x20) = *unaff_x27;
      thunk_FUN_03afed3c();
      if ((*unaff_x23 == 0) ||
         (lVar2 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410), lVar2 == 0))
      goto LAB_069460ac;
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x28));
      if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_069460ec;
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)PTR_DAT_084b6468;
      thunk_FUN_03afed3c();
      lVar2 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
      if (lVar2 == 0) goto LAB_069460ac;
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) == 0) goto LAB_069460ec;
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x28);
      thunk_FUN_03afed3c((undefined8 *)(lVar1 + 0x38));
      if (*(uint *)(lVar1 + 0x18) < 5) goto LAB_069460ec;
      *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_0848f320;
      thunk_FUN_03afed3c();
      uVar3 = FUN_065ce45c(lVar1,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4f4f4(uVar3,0);
      lVar1 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
      if (((lVar1 == 0) || (*(long *)(lVar1 + 0x80) == 0)) ||
         (lVar1 = FUN_07c98f88(*(long *)(lVar1 + 0x80),0), lVar1 == 0)) goto LAB_069460ac;
      fVar5 = (float)FUN_07cac280(lVar1,0);
      if (unaff_s8 <= fVar5) {
        lVar1 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
        if (((lVar1 == 0) || (*(long *)(lVar1 + 0x80) == 0)) ||
           (lVar1 = FUN_07c98f88(*(long *)(lVar1 + 0x80),0), lVar1 == 0)) goto LAB_069460ac;
        fVar5 = (float)FUN_07cac280(lVar1,0);
        if (fVar5 <= unaff_s9) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b6488,0);
          goto LAB_06946098;
        }
        if (*unaff_x23 == 0) goto LAB_069460ac;
        lVar1 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
        uVar3 = FUN_04de82e0(unaff_x24,1,*unaff_x19);
        if (lVar1 == 0) goto LAB_069460ac;
        FUN_06941ffc(lVar1,uVar3);
        if (*unaff_x23 == 0) goto LAB_069460ac;
        lVar1 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
        uVar4 = *unaff_x19;
        uVar3 = 0;
      }
      else {
        if (*unaff_x23 == 0) goto LAB_069460ac;
        lVar1 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
        uVar3 = FUN_04de82e0(unaff_x24,0,*unaff_x19);
        if (lVar1 == 0) goto LAB_069460ac;
        FUN_06941ffc(lVar1,uVar3);
        if (*unaff_x23 == 0) goto LAB_069460ac;
        lVar1 = FUN_04de82e0(*unaff_x23,unaff_w22,*(undefined8 *)PTR_DAT_084b6410);
        uVar4 = *unaff_x19;
        uVar3 = 1;
      }
      uVar3 = FUN_04de82e0(unaff_x24,uVar3,uVar4);
      if (lVar1 == 0) goto LAB_069460ac;
      FUN_069426d0(lVar1,uVar3);
    }
LAB_06946098:
    if (unaff_w29 == unaff_w22) {
      (**(code **)(*unaff_x28 + 0x248))();
      return;
    }
    unaff_w22 = unaff_w22 + 1;
    if (((*unaff_x21 == 0) ||
        (lVar1 = FUN_04de82e0(*unaff_x21,unaff_w22,*(undefined8 *)PTR_DAT_084b63c8), lVar1 == 0)) ||
       (unaff_x24 = FUN_0694d834(), unaff_x24 == 0)) goto LAB_069460ac;
    in_w8 = *(int *)(unaff_x24 + 0x18);
  } while( true );
}


