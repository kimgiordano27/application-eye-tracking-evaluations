/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_edit_message_t$$Dispose
ENTRY_POINT: 05fea3e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Vivox_vx_evt_session_edit_message_t__Dispose(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int in_w9;
  int unaff_w19;
  long unaff_x20;
  
  if (in_w9 == 0) {
    thunk_FUN_02df485c(param_1);
  }
  uVar2 = FUN_0634eb94();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (unaff_x20 != 0) {
    iVar1 = FUN_0635f748();
    if (iVar1 <= unaff_w19) {
      return 0;
    }
    lVar3 = FUN_06360120();
    if (lVar3 != 0) {
      uVar4 = FUN_0634bbcc(lVar3,0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


