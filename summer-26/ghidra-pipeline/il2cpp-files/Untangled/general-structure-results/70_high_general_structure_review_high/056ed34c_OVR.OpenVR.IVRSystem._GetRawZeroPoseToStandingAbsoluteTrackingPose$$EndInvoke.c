/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 056ed34c
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__EndInvoke(void)

{
  bool bVar1;
  short sVar2;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  uint unaff_w22;
  bool bVar3;
  
code_r0x056ed34c:
  FUN_0546ce88();
  do {
    bVar3 = false;
    bVar1 = true;
    while( true ) {
      while( true ) {
        unaff_w21 = unaff_w21 + 1;
        if (*(int *)(unaff_x19 + 0x10) <= unaff_w21) {
          if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x056ed388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x20 + 0x168))();
            return;
          }
          goto LAB_056ed38c;
        }
        sVar2 = FUN_05460528();
        if (sVar2 == 0x2c) break;
        if (sVar2 == 0x5d) {
          if (unaff_x20 == (long *)0x0) goto LAB_056ed38c;
          FUN_0546ce88();
          bVar3 = false;
          unaff_w22 = 0;
          bVar1 = false;
        }
        else {
          if (sVar2 == 0x5b) {
            if (unaff_x20 != (long *)0x0) {
              FUN_0546ce88();
              unaff_w22 = 0;
              bVar1 = false;
              goto LAB_056ed2d0;
            }
            goto LAB_056ed38c;
          }
          if ((unaff_w22 & 1) == 0) {
            if (unaff_x20 == (long *)0x0) goto LAB_056ed38c;
            FUN_0546ce88();
            bVar3 = false;
            unaff_w22 = 0;
          }
          else {
            bVar3 = false;
            unaff_w22 = 1;
          }
        }
      }
      if (!bVar3) break;
      if (unaff_x20 == (long *)0x0) goto LAB_056ed38c;
      FUN_0546ce88();
LAB_056ed2d0:
      bVar3 = true;
    }
    if (!bVar1) break;
    unaff_w22 = 1;
  } while( true );
  if (unaff_x20 == (long *)0x0) {
LAB_056ed38c:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  goto code_r0x056ed34c;
}


