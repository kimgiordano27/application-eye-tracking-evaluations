/*
FUNCTION_NAME: Unity.Services.Lobbies.Lobby.UpdatePlayerRequest$$ConstructHeaders
ENTRY_POINT: 05fa83dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long Unity_Services_Lobbies_Lobby_UpdatePlayerRequest__ConstructHeaders(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&stack0x00000008,param_1,*(undefined8 *)PTR_DAT_06a0efa0);
  puVar4 = 
  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<BackgroundPosition>__ctor__
  ;
  puVar3 = Method_System_Runtime_CompilerServices_TaskAwaiter<Response<Session>>_get_IsCompleted__;
  puVar2 = PTR_DAT_06a0ef90;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000010 = &stack0x00000020;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000008 = 0;
  while( true ) {
    uVar5 = FUN_05156804(&stack0x00000020,*(undefined8 *)puVar2);
    uVar6 = in_stack_00000030;
    if ((uVar5 & 1) == 0) {
      FUN_05156800(&stack0x00000020,*(undefined8 *)PTR_DAT_06a0ef88);
      return *unaff_x19;
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_0376b250(uVar6,*(undefined8 *)puVar4);
    if (*unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar7 = *(long *)(*unaff_x19 + 0x18);
    if (lVar7 == 0) break;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)puVar3;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar9 = uVar6;
      LeanTween__value(puVar9);
    }
    else {
      FUN_040101ec(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


