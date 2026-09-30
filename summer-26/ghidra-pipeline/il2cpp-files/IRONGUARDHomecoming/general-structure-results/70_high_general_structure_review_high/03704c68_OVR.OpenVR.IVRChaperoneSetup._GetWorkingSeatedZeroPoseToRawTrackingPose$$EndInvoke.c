/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 03704c68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x338));
  *(undefined1 *)(unaff_x22 + 0xb8) = 1;
  puVar3 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_14__;
  puVar2 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__;
  puVar1 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__;
  if (unaff_x21 != 0) {
    iVar4 = FUN_02bd8dd4();
    FUN_035c41f0((long)iVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    FUN_036df988();
    FUN_03588260();
    uVar5 = FUN_036e0f88();
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_026ddee0(uVar6,uVar5,*(undefined8 *)puVar2);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


