/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$Invoke
ENTRY_POINT: 0634434c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__Invoke(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar4;
  long lVar5;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  if ((unaff_x24 != 0) && (lVar1 = thunk_FUN_037787d0(), lVar1 == 0)) {
LAB_063444fc:
    uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar3,0);
  }
  if (*(uint *)(unaff_x23 + 0x18) < 2) {
LAB_063444f8:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  *(long *)(unaff_x23 + 0x28) = unaff_x24;
  thunk_FUN_037aeb94();
  if (unaff_x22 != (long *)0x0) {
    lVar1 = (**(code **)(*unaff_x22 + 0x978))();
    plVar4 = (long *)(unaff_x21 + 0xe8);
    *plVar4 = lVar1;
    thunk_FUN_037aeb94(plVar4,lVar1);
    lVar1 = *plVar4;
    plVar4 = (long *)RootMotion_FinalIK_Finger___ctor(*unaff_x25,1);
    if (plVar4 != (long *)0x0) {
      lVar5 = *(long *)(unaff_x21 + 0xe0);
      if ((lVar5 != 0) &&
         (lVar2 = thunk_FUN_037787d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
      goto LAB_063444fc;
      if ((int)plVar4[3] == 0) goto LAB_063444f8;
      plVar4[4] = lVar5;
      thunk_FUN_037aeb94(plVar4 + 4,lVar5);
      if (lVar1 != 0) {
        uVar3 = FUN_0625d154(lVar1,plVar4,0);
        if (*(int *)(*(long *)PTR_DAT_07d966a0 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)PTR_DAT_07d966a0);
        }
        plVar4 = (long *)FUN_0635ac64(0);
        if (plVar4 != (long *)0x0) {
          lVar1 = (**(code **)(*plVar4 + 0x188))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 400));
          *unaff_x20 = lVar1;
          thunk_FUN_037aeb94();
          lVar5 = *unaff_x20;
          lVar1 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d882c0,1);
          if (lVar1 != 0) {
            if ((unaff_x19 != 0) && (lVar2 = thunk_FUN_037787d0(), lVar2 == 0)) goto LAB_063444fc;
            if (*(int *)(lVar1 + 0x18) == 0) goto LAB_063444f8;
            *(long *)(lVar1 + 0x20) = unaff_x19;
            thunk_FUN_037aeb94();
            if (lVar5 != 0) {
              lVar1 = (**(code **)(lVar5 + 0x18))
                                (*(undefined8 *)(lVar5 + 0x40),lVar1,*(undefined8 *)(lVar5 + 0x28));
              if (lVar1 != 0) {
                uVar3 = *(undefined8 *)PTR_DAT_07db4988;
                lVar5 = thunk_FUN_037787d0(lVar1,uVar3);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(lVar1,uVar3);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


