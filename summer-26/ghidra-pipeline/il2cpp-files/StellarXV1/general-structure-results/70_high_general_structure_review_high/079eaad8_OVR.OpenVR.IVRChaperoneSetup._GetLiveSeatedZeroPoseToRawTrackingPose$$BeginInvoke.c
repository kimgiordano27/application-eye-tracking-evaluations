/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 079eaad8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke
               (undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long lVar4;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined4 uVar5;
  
  FUN_055f47e8(param_5,param_6,*param_1);
  puVar1 = PTR_DAT_092eef30;
  if ((*(long *)(unaff_x20 + 0x28) != 0) && (unaff_x22 != 0)) {
    uVar5 = FUN_0627b650();
    *unaff_x21 = uVar5;
    unaff_x21[1] = param_3;
    unaff_x21[2] = param_4;
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar2 = thunk_FUN_040b4efc(*unaff_x25);
    FUN_0569a48c();
    uVar3 = thunk_FUN_040b4efc(*unaff_x26);
    FUN_055f47e8();
    if ((*(long *)(unaff_x20 + 0x28) != 0) && (lVar4 != 0)) {
      uVar5 = FUN_0627b650(lVar4,uVar2,uVar3,*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x20),
                           *(undefined8 *)puVar1);
      *unaff_x19 = uVar5;
      unaff_x19[1] = param_3;
      unaff_x19[2] = param_4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


