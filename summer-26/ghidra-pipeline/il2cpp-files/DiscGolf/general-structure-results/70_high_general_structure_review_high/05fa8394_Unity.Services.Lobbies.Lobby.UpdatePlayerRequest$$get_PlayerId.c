/*
FUNCTION_NAME: Unity.Services.Lobbies.Lobby.UpdatePlayerRequest$$get_PlayerId
ENTRY_POINT: 05fa8394
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long Unity_Services_Lobbies_Lobby_UpdatePlayerRequest__get_PlayerId(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long lVar10;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  uVar5 = FUN_0634eb94();
  if ((uVar5 & 1) == 0) {
LAB_05fa84d4:
    return *unaff_x19;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    lVar10 = *(long *)(unaff_x20 + 0x48);
    uVar6 = thunk_FUN_06354368(*(long *)(unaff_x20 + 0x30),0);
    if (lVar10 != 0) {
      thunk_FUN_063544b0(lVar10,uVar6,0);
      if ((*(long *)(unaff_x20 + 0x30) != 0) &&
         (lVar10 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x18), lVar10 != 0)) {
        FUN_04010c90(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_06a0efa0);
        puVar4 = 
        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<BackgroundPosition>__ctor__
        ;
        puVar3 = 
        Method_System_Runtime_CompilerServices_TaskAwaiter<Response<Session>>_get_IsCompleted__;
        puVar2 = PTR_DAT_06a0ef90;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000010 = &stack0x00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000008 = 0;
        while (uVar5 = FUN_05156804(&stack0x00000020,*(undefined8 *)puVar2),
              uVar6 = in_stack_00000030, (uVar5 & 1) != 0) {
          if (*(int *)(*unaff_x22 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar6 = FUN_0376b250(uVar6,*(undefined8 *)puVar4);
          if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar10 = *(long *)(*unaff_x19 + 0x18);
          if (lVar10 == 0) {
LAB_05fa84f0:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar7 = *(long *)(lVar10 + 0x10);
          lVar9 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_05fa84f0;
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar6;
            LeanTween__value(puVar8);
          }
          else {
            FUN_040101ec(lVar10,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_05156800(&stack0x00000020,*(undefined8 *)PTR_DAT_06a0ef88);
        goto LAB_05fa84d4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


