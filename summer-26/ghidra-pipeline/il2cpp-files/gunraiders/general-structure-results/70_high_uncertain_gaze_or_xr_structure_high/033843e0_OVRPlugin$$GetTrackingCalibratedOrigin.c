/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 033843e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char in_NG;
  char in_OV;
  bool bVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  int iVar9;
  int iVar10;
  
  puVar2 = PTR_DAT_042305b0;
  puVar1 = PTR_DAT_042303d0;
  if (in_NG == in_OV) {
    iVar9 = 0;
    iVar10 = 0;
    do {
      sVar4 = FUN_0314e438();
      if (sVar4 == 0x20) {
        bVar3 = iVar10 != 0;
        iVar10 = 0;
        if (bVar3) {
          iVar10 = 3;
        }
      }
      else {
        uVar5 = FUN_0314e438();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar1);
        }
        uVar7 = FUN_0324ca78(uVar5,0);
        if ((uVar7 & 1) == 0) {
          uVar6 = FUN_0314e438();
          if ((uVar6 & 0xffff) == (unaff_w19 & 0xffff)) {
            if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
            FUN_0315aa9c();
            iVar10 = 0;
          }
          else {
            if (iVar10 == 3) {
              if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
              FUN_0315aa9c();
              FUN_0314e438();
            }
            else {
              FUN_0314e438();
              if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
            }
            FUN_0315aa9c();
            iVar10 = 1;
          }
        }
        else {
          if ((iVar10 == 1) || (iVar10 == 3)) {
LAB_033844cc:
            if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
            FUN_0315aa9c();
          }
          else if ((iVar10 == 2) && ((iVar9 != 0 && (iVar9 + 1 < *(int *)(unaff_x20 + 0x10))))) {
            uVar6 = FUN_0314e438();
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar1);
            }
            uVar7 = FUN_0324ca78(uVar6,0);
            if (((uVar6 & 0xffff) != (unaff_w19 & 0xffff)) && ((uVar7 & 1) == 0)) goto LAB_033844cc;
          }
          uVar5 = FUN_0314e438();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar2);
          }
          uVar8 = FUN_03295500(0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar1);
          }
          FUN_0324cf0c(uVar5,uVar8,0);
          if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
          FUN_0315aa9c();
          iVar10 = 2;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x20 + 0x10));
  }
  if (unaff_x21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03384618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x21 + 0x168))();
    return;
  }
LAB_0338461c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


