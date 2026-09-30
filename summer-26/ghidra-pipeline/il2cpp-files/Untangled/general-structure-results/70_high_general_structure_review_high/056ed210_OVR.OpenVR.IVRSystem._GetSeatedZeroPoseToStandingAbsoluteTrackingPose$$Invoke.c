/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 056ed210
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


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  long unaff_x20;
  int iVar8;
  
  puVar5 = PTR_DAT_06d06310;
  if ((*(byte *)(unaff_x20 + 0x6d8) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d06310);
    *(undefined1 *)(unaff_x20 + 0x6d8) = 1;
  }
  plVar7 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar5);
  FUN_05473914(plVar7,0);
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar8 = 0;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      do {
        uVar6 = FUN_05460528(param_1,iVar8,0);
        uVar1 = uVar6 & 0xffff;
        if (uVar1 == 0x2c) {
          if (bVar2) {
            if (plVar7 == (long *)0x0) goto LAB_056ed38c;
            FUN_0546ce88(plVar7,0x2c,0);
LAB_056ed2d0:
            bVar2 = true;
          }
          else {
            if (bVar4) {
              bVar3 = true;
            }
            else {
              if (plVar7 == (long *)0x0) goto LAB_056ed38c;
              FUN_0546ce88(plVar7,0x2c,0);
            }
            bVar2 = false;
            bVar4 = true;
          }
        }
        else if (uVar1 == 0x5d) {
          if (plVar7 == (long *)0x0) goto LAB_056ed38c;
          FUN_0546ce88(plVar7,0x5d,0);
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          if (uVar1 == 0x5b) {
            if (plVar7 != (long *)0x0) {
              FUN_0546ce88(plVar7,0x5b,0);
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
            if (plVar7 == (long *)0x0) goto LAB_056ed38c;
            FUN_0546ce88(plVar7,uVar6,0);
            bVar2 = false;
            bVar3 = false;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x10));
    }
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x056ed388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      return;
    }
  }
LAB_056ed38c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


