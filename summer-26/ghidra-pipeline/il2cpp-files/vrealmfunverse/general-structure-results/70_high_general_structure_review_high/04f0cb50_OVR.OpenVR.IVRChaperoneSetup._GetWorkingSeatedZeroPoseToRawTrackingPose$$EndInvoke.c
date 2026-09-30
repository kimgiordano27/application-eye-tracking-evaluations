/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 04f0cb50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  
  uVar1 = FUN_0452dfb4();
  if ((uVar1 & 1) != 0) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar2 = thunk_FUN_02b79644();
    uVar3 = thunk_FUN_02ba3594(
                              System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<short>_TypeInfo
                              );
    FUN_04cf4a4c(uVar2,uVar3,0);
    uVar3 = thunk_FUN_02ba3594(
                              System_Linq_Expressions_Interpreter_CastInstruction_CastInstructionT<int>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar2,uVar3);
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04f0cc18();
  if (unaff_x19 != 0) {
    FUN_05c8efe4();
    lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    if (lVar4 != 0) {
      FUN_0452ddc0(lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


