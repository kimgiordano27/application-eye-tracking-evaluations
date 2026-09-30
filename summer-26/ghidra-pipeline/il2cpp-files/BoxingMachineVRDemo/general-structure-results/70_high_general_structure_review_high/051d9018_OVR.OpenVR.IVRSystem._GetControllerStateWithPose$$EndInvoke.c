/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 051d9018
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int unaff_w21;
  long *unaff_x23;
  
  do {
    lVar2 = thunk_FUN_0606f5c0(param_1,0);
    if (lVar2 == 0) break;
    uVar3 = FUN_04e92178();
    if ((uVar3 & 1) != 0) {
      return param_1;
    }
    lVar2 = FUN_051d8fac(param_1);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x23);
    }
    uVar3 = FUN_0606a004(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      return lVar2;
    }
    unaff_w21 = unaff_w21 + 1;
    iVar1 = FUN_0607aa84();
    if (iVar1 <= unaff_w21) {
      return 0;
    }
    param_1 = FUN_0607b2ac();
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


