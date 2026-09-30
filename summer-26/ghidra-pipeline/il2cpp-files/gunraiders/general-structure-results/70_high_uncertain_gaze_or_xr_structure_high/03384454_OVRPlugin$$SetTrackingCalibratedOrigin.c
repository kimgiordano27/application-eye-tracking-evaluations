/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 03384454
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingCalibratedOrigin(ulong param_1)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  
  do {
    uVar5 = FUN_0324ca78(param_1,0);
    if ((uVar5 & 1) == 0) {
      uVar3 = FUN_0314e438();
      if ((uVar3 & 0xffff) == (unaff_w19 & 0xffff)) {
        if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
        FUN_0315aa9c();
        unaff_w24 = 0;
      }
      else {
        if (unaff_w24 == 3) {
          if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
          FUN_0315aa9c();
          FUN_0314e438();
        }
        else {
          FUN_0314e438();
          if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
        }
        FUN_0315aa9c();
        unaff_w24 = 1;
      }
    }
    else {
      if ((unaff_w24 == 1) || (unaff_w24 == 3)) {
LAB_033844cc:
        if (unaff_x21 == (long *)0x0) {
LAB_0338461c:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_0315aa9c();
      }
      else if ((unaff_w24 == 2) &&
              ((unaff_w22 != 0 && (unaff_w22 + 1 < *(int *)(unaff_x20 + 0x10))))) {
        uVar3 = FUN_0314e438();
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        uVar5 = FUN_0324ca78(uVar3,0);
        if (((uVar3 & 0xffff) != (unaff_w19 & 0xffff)) && ((uVar5 & 1) == 0)) goto LAB_033844cc;
      }
      uVar4 = FUN_0314e438();
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x27);
      }
      uVar6 = FUN_03295500(0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      FUN_0324cf0c(uVar4,uVar6,0);
      if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
      FUN_0315aa9c();
      unaff_w24 = 2;
    }
    while( true ) {
      unaff_w22 = unaff_w22 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w22) {
        if (unaff_x21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03384618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x21 + 0x168))();
          return;
        }
        goto LAB_0338461c;
      }
      sVar2 = FUN_0314e438();
      if (sVar2 != 0x20) break;
      bVar1 = unaff_w24 != 0;
      unaff_w24 = 0;
      if (bVar1) {
        unaff_w24 = unaff_w25;
      }
    }
    param_1 = FUN_0314e438();
    param_1 = param_1 & 0xffffffff;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
  } while( true );
}


