/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 050e525c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__Invoke(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar5;
  long unaff_x23;
  
  FUN_02d6084c(PTR_DAT_0677f598);
  *(undefined1 *)(unaff_x23 + 0xa51) = 1;
  uVar5 = *unaff_x22;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar2 = FUN_05015c2c(uVar5,0);
  puVar1 = PTR_DAT_0675f8d8;
  if (lVar2 != 0) {
    plVar3 = (long *)FUN_05021174(lVar2,*(undefined8 *)PTR_DAT_0677f598,0);
    lVar2 = FUN_02d60934(*(undefined8 *)puVar1,2);
    if (lVar2 != 0) {
      if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_02d9d438(), lVar4 == 0)) {
LAB_050e53a0:
        uVar5 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar5,0);
      }
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(long *)(lVar2 + 0x20) = unaff_x21;
        thunk_FUN_02dd37b4();
        if ((unaff_x20 != 0) && (lVar4 = thunk_FUN_02d9d438(), lVar4 == 0)) goto LAB_050e53a0;
        if (1 < *(uint *)(lVar2 + 0x18)) {
          *(long *)(lVar2 + 0x28) = unaff_x20;
          thunk_FUN_02dd37b4();
          if (plVar3 != (long *)0x0) {
            lVar2 = (**(code **)(*plVar3 + 0x408))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x410));
            if (lVar2 != 0) {
              lVar2 = FUN_04f3a9a8();
              if (lVar2 != 0) {
                uVar5 = *(undefined8 *)PTR_DAT_067680e8;
                lVar4 = thunk_FUN_02d9d438(lVar2,uVar5);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(lVar2,uVar5);
                }
              }
              return;
            }
          }
          goto LAB_050e5398;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  }
LAB_050e5398:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


