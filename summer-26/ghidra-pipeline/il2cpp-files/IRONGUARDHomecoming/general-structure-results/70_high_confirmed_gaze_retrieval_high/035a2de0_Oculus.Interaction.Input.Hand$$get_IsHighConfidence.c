/*
FUNCTION_NAME: Oculus.Interaction.Input.Hand$$get_IsHighConfidence
ENTRY_POINT: 035a2de0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose
*/


void Oculus_Interaction_Input_Hand__get_IsHighConfidence(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  
  FUN_03579868(param_1,0);
  uVar1 = FUN_03582560();
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                            );
  uVar2 = FUN_01f08890(uVar2,1);
  FUN_01bc50c0();
  uVar3 = (**(code **)(*unaff_x19 + 0x168))();
  FUN_01bc50c0(uVar2);
  FUN_01bc56ec(uVar2,uVar3);
  FUN_01bc5408(uVar2,0,uVar3);
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsqaddh_u16__);
  uVar2 = FUN_035ae81c(uVar3,uVar2,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar3 = thunk_FUN_01f117cc();
  FUN_034f6754(uVar3,uVar2,0);
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vsqaddq_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar2);
}


