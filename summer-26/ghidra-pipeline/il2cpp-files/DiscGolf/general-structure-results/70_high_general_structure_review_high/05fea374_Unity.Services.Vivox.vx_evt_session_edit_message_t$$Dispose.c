/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_edit_message_t$$Dispose
ENTRY_POINT: 05fea374
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
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int unaff_w19;
  long unaff_x22;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x22 + 0x990);
  uVar2 = FUN_0634ee08(param_1,0);
  lVar4 = *plVar6;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar4);
  }
  uVar3 = FUN_0634eb94(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar4 = FUN_0634bbcc();
  if ((lVar4 != 0) && (lVar4 = FUN_0634ee08(lVar4,0), lVar4 != 0)) {
    lVar4 = FUN_06360120(lVar4,1,0);
    lVar5 = *plVar6;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
    }
    uVar3 = FUN_0634eb94(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (lVar4 != 0) {
      iVar1 = FUN_0635f748(lVar4,0);
      if (iVar1 <= unaff_w19) {
        return 0;
      }
      lVar4 = FUN_06360120(lVar4,unaff_w19,0);
      if (lVar4 != 0) {
        uVar2 = FUN_0634bbcc(lVar4,0);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


