/*
FUNCTION_NAME: Oculus.Interaction.Input.SkeletonJointsCache$$SetJointClean
ENTRY_POINT: 0524ad3c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Oculus_Interaction_Input_SkeletonJointsCache__SetJointClean(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  FUN_02f08768(Oculus_Platform_Request<SendInvitesResult>_TypeInfo);
  FUN_02f08768(Oculus_Platform_Request<UserList>_TypeInfo);
  FUN_02f08768(Oculus_Platform_Request<UserProof>_TypeInfo);
  FUN_02f08768(Oculus_Interaction_RingBuffer<RANSACVelocity_TimedPose>_TypeInfo);
  FUN_02f08768(Oculus_Platform_Request<Purchase>_TypeInfo);
  FUN_02f08768(
              UnityEngine_InputSystem_Utilities_SavedStructState<InputActionState_GlobalState>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0x999) = 1;
  puVar4 = Oculus_Platform_Request<UserProof>_TypeInfo;
  puVar3 = Oculus_Platform_Request<UserList>_TypeInfo;
  puVar2 = Oculus_Platform_Request<SendInvitesResult>_TypeInfo;
  puVar1 = Oculus_Platform_Request<Purchase>_TypeInfo;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (long *)0x0;
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_03ac039c(&stack0x00000018,*(long *)(unaff_x19 + 0x28),
               *(undefined8 *)
                UnityEngine_InputSystem_Utilities_SavedStructState<InputActionState_GlobalState>_TypeInfo
              );
  iVar12 = 0;
  do {
    uVar7 = FUN_04aff1b0(&stack0x00000018,*(undefined8 *)puVar4);
    plVar5 = in_stack_00000028;
    if ((uVar7 & 1) == 0) {
      FUN_04aff1ac(&stack0x00000018,*(undefined8 *)puVar3);
      return iVar12;
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *in_stack_00000028;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_0524ae44;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(in_stack_00000028,*(long *)puVar1,7);
LAB_0524ae44:
    uVar9 = (*(code *)*puVar8)(plVar5,puVar8[1]);
    iVar6 = FUN_0338e89c(uVar9,*(undefined8 *)puVar2);
    iVar12 = iVar6 + iVar12;
  } while( true );
}


