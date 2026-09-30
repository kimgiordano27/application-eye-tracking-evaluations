/*
FUNCTION_NAME: Oculus.Interaction.Input.SkeletonJointsCache$$UpdateAllWorldPoses
ENTRY_POINT: 0524ad88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


int Oculus_Interaction_Input_SkeletonJointsCache__UpdateAllWorldPoses(void)

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
  undefined1 in_w8;
  long lVar10;
  int *piVar11;
  int iVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  long *plStack0000000000000028;
  
  *(undefined1 *)(unaff_x20 + 0x999) = in_w8;
  puVar4 = Oculus_Platform_Request<UserProof>_TypeInfo;
  puVar3 = Oculus_Platform_Request<UserList>_TypeInfo;
  puVar2 = Oculus_Platform_Request<SendInvitesResult>_TypeInfo;
  puVar1 = Oculus_Platform_Request<Purchase>_TypeInfo;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  plStack0000000000000028 = (long *)0x0;
                    /* try { // try from 0524ad98 to 0534ae2f has its CatchHandler @ 0524ad98
                       catch() { ... } // from try @ 0524ad98 with catch @ 0524ad98
                       catch() { ... } // from try @ 0524b05c with catch @ 0524ad98
                       catch() { ... } // from try @ 0524b0c8 with catch @ 0524ad98
                       catch() { ... } // from try @ 0524b0d4 with catch @ 0524ad98
                       catch() { ... } // from try @ 0524b150 with catch @ 0524ad98
                       catch() { ... } // from try @ 0524b188 with catch @ 0524ad98 */
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
    plVar5 = plStack0000000000000028;
    if ((uVar7 & 1) == 0) {
      FUN_04aff1ac(&stack0x00000018,*(undefined8 *)puVar3);
      return iVar12;
    }
    if (plStack0000000000000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *plStack0000000000000028;
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
    puVar8 = (undefined8 *)FUN_02f421d0(plStack0000000000000028,*(long *)puVar1,7);
LAB_0524ae44:
    uVar9 = (*(code *)*puVar8)(plVar5,puVar8[1]);
    iVar6 = FUN_0338e89c(uVar9,*(undefined8 *)puVar2);
    iVar12 = iVar6 + iVar12;
  } while( true );
}


