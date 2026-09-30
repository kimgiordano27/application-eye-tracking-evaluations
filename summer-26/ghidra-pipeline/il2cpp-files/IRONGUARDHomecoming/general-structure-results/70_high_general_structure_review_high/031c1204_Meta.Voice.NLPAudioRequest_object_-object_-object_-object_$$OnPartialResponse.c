/*
FUNCTION_NAME: Meta.Voice.NLPAudioRequest<object,-object,-object,-object>$$OnPartialResponse
ENTRY_POINT: 031c1204
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Meta_Voice_NLPAudioRequest<object,_object,_object,_object>__OnPartialResponse(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar1 = FUN_03579868();
  uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                             ,uVar1,0);
  uVar2 = FUN_01f08890(uVar2,2);
  FUN_01bc50c0();
  FUN_01bc56ec(uVar2);
  FUN_01bc5408(uVar2,0);
  FUN_01bc50c0(uVar2);
  FUN_01bc56ec(uVar2,uVar1);
  FUN_01bc5408(uVar2,1,uVar1);
  uVar1 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_s32__);
  uVar1 = FUN_035ae81c(uVar1,uVar2,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar2 = thunk_FUN_01f117cc();
  uVar3 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                            );
  FUN_034efd98(uVar2,uVar1,uVar3,0);
  uVar1 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar1);
}


