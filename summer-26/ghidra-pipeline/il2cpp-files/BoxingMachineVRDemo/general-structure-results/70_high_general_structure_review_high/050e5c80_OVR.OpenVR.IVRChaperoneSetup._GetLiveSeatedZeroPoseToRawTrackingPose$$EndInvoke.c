/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 050e5c80
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  
  if ((unaff_x21 != 0) && (lVar1 = thunk_FUN_02d9d438(), lVar1 == 0)) {
LAB_050e5e40:
    uVar2 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar2,0);
  }
                    /* try { // try from 050e5c9c to 051e5ca3 has its CatchHandler @ 050e5d68 */
  if (*(int *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = unaff_x21;
    thunk_FUN_02dd37b4();
    if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_02d9d438(), lVar1 == 0)) goto LAB_050e5e40;
    if (1 < *(uint *)(param_1 + 0x18)) {
      *(long *)(param_1 + 0x28) = unaff_x20;
      thunk_FUN_02dd37b4();
      if (unaff_x23 != (long *)0x0) {
        uVar2 = (**(code **)(*unaff_x23 + 0x958))();
        *unaff_x22 = uVar2;
        thunk_FUN_02dd37b4();
        lVar1 = FUN_02d60934(*unaff_x26,2);
        if (lVar1 != 0) {
          if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_02d9d438(), lVar3 == 0)) goto LAB_050e5e40;
          if (*(int *)(lVar1 + 0x18) != 0) {
            *(long *)(lVar1 + 0x20) = unaff_x21;
            thunk_FUN_02dd37b4();
            if ((unaff_x20 != 0) && (lVar3 = thunk_FUN_02d9d438(), lVar3 == 0)) goto LAB_050e5e40;
            if (1 < *(uint *)(lVar1 + 0x18)) {
              *(long *)(lVar1 + 0x28) = unaff_x20;
              thunk_FUN_02dd37b4();
              if (unaff_x24 != (long *)0x0) {
                uVar2 = (**(code **)(*unaff_x24 + 0x408))();
                if (*(int *)(*(long *)PTR_DAT_067680e0 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_067680e0);
                }
                plVar4 = (long *)FUN_05117140(0);
                if (plVar4 != (long *)0x0) {
                  uVar2 = (**(code **)(*plVar4 + 0x188))
                                    (plVar4,uVar2,*(undefined8 *)(*plVar4 + 400));
                  *unaff_x19 = uVar2;
                  thunk_FUN_02dd37b4();
                  return 1;
                }
              }
              goto LAB_050e5e38;
            }
          }
          goto LAB_050e5e3c;
        }
      }
LAB_050e5e38:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
LAB_050e5e3c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


