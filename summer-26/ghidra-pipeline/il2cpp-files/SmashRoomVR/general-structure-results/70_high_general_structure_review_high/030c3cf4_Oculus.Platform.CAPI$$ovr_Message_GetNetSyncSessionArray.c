/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetNetSyncSessionArray
ENTRY_POINT: 030c3cf4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Oculus_Platform_CAPI__ovr_Message_GetNetSyncSessionArray
          (ulong param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 unaff_w20;
  long *unaff_x22;
  long unaff_x23;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    *(undefined1 *)(unaff_x23 + 0x9d7) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_02fdf194(param_3,0);
  puVar5 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if ((uVar1 & 1) == 0) {
    uStack000000000000000c = 0xd800;
    uVar2 = thunk_FUN_01ad9084(
                              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                              );
    uVar2 = thunk_FUN_01afa70c(uVar2,&stack0x0000000c);
    in_stack_00000008 = 0xdbff;
    uVar3 = thunk_FUN_01ad9084(puVar5);
    uVar3 = thunk_FUN_01afa70c(uVar3,&stack0x00000008);
    uVar4 = thunk_FUN_01ad9084(StringLiteral_7518);
    uVar2 = FUN_02ec9b7c(uVar4,uVar2,uVar3,0);
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar3 = thunk_FUN_01afaadc();
    puVar5 = StringLiteral_13169;
  }
  else {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar1 = FUN_02fdf2a4(unaff_w20,0);
    puVar5 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    if ((uVar1 & 1) != 0) {
      *(undefined2 *)(param_2 + 0x30) = 0x3f;
      *(undefined8 *)(param_2 + 0x40) = 0x200000002;
      return 1;
    }
    uStack000000000000000c = 0xdc00;
    uVar2 = thunk_FUN_01ad9084(
                              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                              );
    uVar2 = thunk_FUN_01afa70c(uVar2,&stack0x0000000c);
    in_stack_00000008 = 0xdfff;
    uVar3 = thunk_FUN_01ad9084(puVar5);
    uVar3 = thunk_FUN_01afa70c(uVar3,&stack0x00000008);
    uVar4 = thunk_FUN_01ad9084(StringLiteral_7518);
    uVar2 = FUN_02ec9b7c(uVar4,uVar2,uVar3,0);
    thunk_FUN_01ad9084(StringLiteral_2200);
    uVar3 = thunk_FUN_01afaadc();
    puVar5 = StringLiteral_13170;
  }
  uVar4 = thunk_FUN_01ad9084(puVar5);
  FUN_02fd4a78(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_01ad9084(StringLiteral_13171);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar3,uVar2);
}


