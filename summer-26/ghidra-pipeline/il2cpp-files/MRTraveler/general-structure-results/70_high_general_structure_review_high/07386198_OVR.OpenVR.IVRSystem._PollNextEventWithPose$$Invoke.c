/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$Invoke
ENTRY_POINT: 07386198
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__Invoke(void)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  
  if (in_w8 != 0) {
    unaff_x20[4] = unaff_x22;
    thunk_FUN_03d233cc();
    uVar1 = *(undefined4 *)(unaff_x21 + 0x38);
    lVar2 = thunk_FUN_03cf5234(*unaff_x24);
    FUN_07386400(lVar2,1,8,uVar1);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0)) {
LAB_07386320:
      uVar4 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar4,0);
    }
    if (1 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[5] = lVar2;
      thunk_FUN_03d233cc(unaff_x20 + 5,lVar2);
      uVar1 = *(undefined4 *)(unaff_x21 + 0x38);
      lVar2 = thunk_FUN_03cf5234(*unaff_x24);
      FUN_07386400(lVar2,2,0xb,uVar1);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
      goto LAB_07386320;
      if (2 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[6] = lVar2;
        thunk_FUN_03d233cc(unaff_x20 + 6,lVar2);
        uVar1 = *(undefined4 *)(unaff_x21 + 0x38);
        lVar2 = thunk_FUN_03cf5234(*unaff_x24);
        FUN_07386400(lVar2,3,0xe,uVar1);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
        goto LAB_07386320;
        if (3 < *(uint *)(unaff_x20 + 3)) {
          unaff_x20[7] = lVar2;
          thunk_FUN_03d233cc(unaff_x20 + 7,lVar2);
          uVar1 = *(undefined4 *)(unaff_x21 + 0x38);
          lVar2 = thunk_FUN_03cf5234(*unaff_x24);
          FUN_07386400(lVar2,4,0x12,uVar1);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
          goto LAB_07386320;
          if (4 < *(uint *)(unaff_x20 + 3)) {
            unaff_x20[8] = lVar2;
            thunk_FUN_03d233cc(unaff_x20 + 8,lVar2);
            *unaff_x19 = unaff_x20;
            thunk_FUN_03d233cc();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


