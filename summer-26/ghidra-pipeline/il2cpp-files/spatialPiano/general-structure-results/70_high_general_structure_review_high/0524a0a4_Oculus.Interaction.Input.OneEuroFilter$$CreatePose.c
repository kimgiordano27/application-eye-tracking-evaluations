/*
FUNCTION_NAME: Oculus.Interaction.Input.OneEuroFilter$$CreatePose
ENTRY_POINT: 0524a0a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


void Oculus_Interaction_Input_OneEuroFilter__CreatePose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_02f08768();
  FUN_02f08768(Oculus_Platform_Request<ProductList>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x98e) = 1;
  puVar4 = Oculus_Platform_Request<Purchase>_TypeInfo;
  puVar3 = Oculus_Platform_Request<LinkedAccountList>_TypeInfo;
  puVar2 = Oculus_Platform_Request<LeaderboardList>_TypeInfo;
  puVar1 = PTR_DAT_067cbae8;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (*(char *)(unaff_x19 + 0x58) != '\0') {
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_03ac039c(&stack0x00000008,*(long *)(unaff_x19 + 0x28),
                 *(undefined8 *)Oculus_Platform_Request<ProductList>_TypeInfo);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar6 = FUN_04aff1b0(&stack0x00000020,*(undefined8 *)puVar3), plVar5 = in_stack_00000030,
          (uVar6 & 1) != 0) {
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_0524a1c4;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar4,9);
LAB_0524a1c4:
      (*(code *)*puVar8)(plVar5,uVar7,puVar8[1]);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c();
      lVar9 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
            goto LAB_0524a240;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar4,0xb);
LAB_0524a240:
      (*(code *)*puVar8)(plVar5,uVar7,puVar8[1]);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c();
      lVar9 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
            goto LAB_0524a2bc;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar4,0xd);
LAB_0524a2bc:
      (*(code *)*puVar8)(plVar5,uVar7,puVar8[1]);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c();
      lVar9 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xf) * 0x10 + 0x138);
            goto LAB_0524a338;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar4,0xf);
LAB_0524a338:
      (*(code *)*puVar8)(plVar5,uVar7,puVar8[1]);
    }
    FUN_04aff1ac(&stack0x00000020,*(undefined8 *)puVar2);
    FUN_05249c50();
    FUN_05249e30();
  }
  return;
}


