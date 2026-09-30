/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_account_chat_history_get_last_read_t_session_handle_get
ENTRY_POINT: 08471918
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_chat_history_get_last_read_t_session_handle_get
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_084612fc(0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_084716e0(param_1);
    if (lVar2 != 0) {
      Oculus_Skinning_GpuSkinning_OvrExpandableTextureArray__GetTexArray(lVar2,0);
      return;
    }
  }
  else if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x08471940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


