/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.ColliderContainsHandJointActiveState$$InjectAllColliderContainsHandJointActiveState
ENTRY_POINT: 05c1245c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2
*/


void Oculus_Interaction_PoseDetection_ColliderContainsHandJointActiveState__InjectAllColliderContainsHandJointActiveState
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_x9;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x24;
  undefined8 *puVar11;
  long lVar12;
  long *unaff_x27;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  puVar1 = PTR_DAT_072817b0;
  uVar10 = *(undefined8 *)(in_x9 + 8);
  puVar11 = *(undefined8 **)(unaff_x24 + 0xa40);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(param_1);
  }
  FUN_05c62df8(*puVar11,*(undefined8 *)puVar1,uVar10,0);
  lVar2 = *(long *)(*unaff_x27 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar3 = FUN_05c6efa4(lVar2,0);
  if ((uVar3 & 1) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar10 = FUN_06becffc();
    uVar4 = FUN_06bc9e9c();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    in_stack_000000a8 = *(undefined8 *)(unaff_x21 + 0x28);
    in_stack_000000a0 = *(long *)(unaff_x21 + 0x20);
    if (in_stack_000000a0 == 0) {
      lVar12 = *(long *)PTR_DAT_07283c68;
      lVar2 = *(long *)(lVar12 + 0x38);
      if (lVar2 == 0) {
        FUN_03293514(lVar12);
        lVar2 = *(long *)(lVar12 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar2 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    }
    else {
      in_stack_000000a8 = *(undefined8 *)(unaff_x21 + 0x28);
      in_stack_000000a0 = *(undefined8 *)(unaff_x21 + 0x20);
      uVar5 = Unity_Collections_NativeReference<int>__set_Value
                        (&stack0x000000a0,*(undefined8 *)PTR_DAT_072a9a30);
    }
    in_stack_000000a8 = *(undefined8 *)(unaff_x21 + 0x60);
    in_stack_000000a0 = *(long *)(unaff_x21 + 0x58);
    if (in_stack_000000a0 == 0) {
      lVar12 = *(long *)PTR_DAT_07283c68;
      lVar2 = *(long *)(lVar12 + 0x38);
      if (lVar2 == 0) {
        FUN_03293514(lVar12);
        lVar2 = *(long *)(lVar12 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar2 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
    }
    else {
      in_stack_000000a8 = *(undefined8 *)(unaff_x21 + 0x60);
      in_stack_000000a0 = *(long *)(unaff_x21 + 0x58);
      uVar6 = Unity_Collections_NativeReference<int>__set_Value
                        (&stack0x000000a0,*(undefined8 *)PTR_DAT_072a9a30);
    }
    in_stack_00000098 = *(undefined8 *)(unaff_x21 + 0x70);
    in_stack_00000090 = *(long *)(unaff_x21 + 0x68);
    if (in_stack_00000090 == 0) {
      lVar12 = *(long *)PTR_DAT_072a9a28;
      lVar2 = *(long *)(lVar12 + 0x38);
      if (lVar2 == 0) {
        FUN_03293514(lVar12);
        lVar2 = *(long *)(lVar12 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar2 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      uVar7 = **(undefined8 **)(lVar2 + 0xb8);
    }
    else {
      in_stack_00000098 = *(undefined8 *)(unaff_x21 + 0x70);
      in_stack_00000090 = *(long *)(unaff_x21 + 0x68);
      uVar7 = FUN_044f8ed8(&stack0x00000090,*(undefined8 *)PTR_DAT_072a9a38);
    }
    uVar9 = *(undefined8 *)(unaff_x21 + 0x90);
    uVar8 = FUN_06bc79d4();
    FUN_05c765f8(&stack0x000000b0,uVar10,uVar4,uVar5,uVar6,uVar7,uVar9,uVar8);
    lVar2 = *(long *)(*unaff_x27 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_05c6efb4();
  }
  return;
}


