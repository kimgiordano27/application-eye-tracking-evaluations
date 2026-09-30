/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 056ed244
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__EndInvoke(long *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long unaff_x19;
  int iVar6;
  
  FUN_05473914();
  if (unaff_x19 != 0) {
    if (0 < *(int *)(unaff_x19 + 0x10)) {
      iVar6 = 0;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      do {
        uVar5 = FUN_05460528();
        uVar1 = uVar5 & 0xffff;
        if (uVar1 == 0x2c) {
          if (bVar2) {
            if (param_1 == (long *)0x0) goto LAB_056ed38c;
            FUN_0546ce88(param_1,0x2c,0);
LAB_056ed2d0:
            bVar2 = true;
          }
          else {
            if (bVar4) {
              bVar3 = true;
            }
            else {
              if (param_1 == (long *)0x0) goto LAB_056ed38c;
              FUN_0546ce88(param_1,0x2c,0);
            }
            bVar2 = false;
            bVar4 = true;
          }
        }
        else if (uVar1 == 0x5d) {
          if (param_1 == (long *)0x0) goto LAB_056ed38c;
          FUN_0546ce88(param_1,0x5d,0);
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          if (uVar1 == 0x5b) {
            if (param_1 != (long *)0x0) {
              FUN_0546ce88(param_1,0x5b,0);
              bVar3 = false;
              bVar4 = false;
              goto LAB_056ed2d0;
            }
            goto LAB_056ed38c;
          }
          if (bVar3) {
            bVar2 = false;
            bVar3 = true;
          }
          else {
            if (param_1 == (long *)0x0) goto LAB_056ed38c;
            FUN_0546ce88(param_1,uVar5,0);
            bVar2 = false;
            bVar3 = false;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_x19 + 0x10));
    }
    if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x056ed388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      return;
    }
  }
LAB_056ed38c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


