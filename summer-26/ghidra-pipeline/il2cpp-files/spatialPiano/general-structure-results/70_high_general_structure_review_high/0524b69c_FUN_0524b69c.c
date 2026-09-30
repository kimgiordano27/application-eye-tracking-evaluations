/*
FUNCTION_NAME: FUN_0524b69c
ENTRY_POINT: 0524b69c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int FUN_0524b69c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_06bba9a4 & 1) == 0) {
    FUN_02f08768(Oculus_Platform_Request<UserList>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<UserProof>_TypeInfo);
    FUN_02f08768(Oculus_Interaction_RingBuffer<RANSACVelocity_TimedPose>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<Purchase>_TypeInfo);
    FUN_02f08768(
                UnityEngine_InputSystem_Utilities_SavedStructState<InputActionState_GlobalState>_TypeInfo
                );
    DAT_06bba9a4 = 1;
  }
  puVar3 = Oculus_Platform_Request<UserProof>_TypeInfo;
  puVar2 = Oculus_Platform_Request<UserList>_TypeInfo;
  puVar1 = Oculus_Platform_Request<Purchase>_TypeInfo;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_03ac039c(&local_48,*(long *)(param_1 + 0x28),
               *(undefined8 *)
                UnityEngine_InputSystem_Utilities_SavedStructState<InputActionState_GlobalState>_TypeInfo
              );
                    /* try { // try from 0524b740 to 0534b74f has its CatchHandler @ 0524baa8 */
  iVar5 = 0;
  do {
    iVar10 = iVar5;
                    /* try { // try from 0524b750 to 0534bac3 has its CatchHandler @ 0524b4ec */
    uVar6 = FUN_04aff1b0(&local_48,*(undefined8 *)puVar3);
    plVar4 = local_38;
    if ((uVar6 & 1) == 0) {
      FUN_04aff1ac(&local_48,*(undefined8 *)puVar2);
      return iVar10;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *local_38;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_0524b7b0;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(local_38,*(long *)puVar1,4);
LAB_0524b7b0:
    iVar5 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    if (iVar5 <= iVar10) {
      iVar5 = iVar10;
    }
  } while( true );
}


