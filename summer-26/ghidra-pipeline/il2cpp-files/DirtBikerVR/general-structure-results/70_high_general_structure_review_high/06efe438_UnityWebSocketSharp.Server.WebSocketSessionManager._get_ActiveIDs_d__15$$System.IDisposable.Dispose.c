/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager.<get_ActiveIDs>d__15$$System.IDisposable.Dispose
ENTRY_POINT: 06efe438
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
UnityWebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__15__System_IDisposable_Dispose
          (void)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  
  if ((*(char *)(unaff_x19 + 0x52) == '\0') || (*(long *)(unaff_x19 + 0x38) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_084d2078 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = FUN_06efe4f0(uVar4,uVar1,(long)&stack0x00000008 + 4);
    if (in_stack_00000008._4_4_ != 0) {
      thunk_FUN_03af1434(PTR_DAT_084bec20);
      uVar4 = thunk_FUN_03ac74bc();
      FUN_06f0415c(uVar4,in_stack_00000008._4_4_,0);
      uVar3 = thunk_FUN_03af1434(PTR_DAT_084d2aa0);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar4,uVar3);
    }
    plVar2 = *(long **)(unaff_x19 + 0x38);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0(0,uVar4);
    }
    uVar4 = (**(code **)(*plVar2 + 0x198))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x1a0));
  }
  return uVar4;
}


