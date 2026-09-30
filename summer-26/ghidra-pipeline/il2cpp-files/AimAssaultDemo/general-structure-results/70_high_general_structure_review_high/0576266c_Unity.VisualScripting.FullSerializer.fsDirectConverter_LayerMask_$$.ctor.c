/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$.ctor
ENTRY_POINT: 0576266c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05762840) */

void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  plVar10 = unaff_x20 + 1;
  *unaff_x20 = *plVar10;
  thunk_FUN_037aeb94();
  *plVar10 = unaff_x21;
  thunk_FUN_037aeb94(plVar10);
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar10 = *(long **)(*unaff_x20 + 0x20);
  if (plVar10 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07d98578) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_05762700;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d98578,1);
LAB_05762700:
    uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  }
  FUN_0783329c(&stack0x00000068,uVar5,0);
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *(long *)(*unaff_x20 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_05c3f9fc(lVar7,*(undefined8 *)PTR_DAT_07d9a588);
  puVar3 = PTR_DAT_07d9add8;
  puVar2 = PTR_DAT_07d9a598;
  puVar1 = PTR_DAT_07d9a590;
  in_stack_00000038 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000000;
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  do {
    uVar8 = FUN_05e9a398(&stack0x00000030,*(undefined8 *)puVar2);
    lVar7 = in_stack_00000050;
    plVar10 = in_stack_00000040;
    if ((uVar8 & 1) == 0) {
      FUN_05e9a4cc(&stack0x00000030,*(undefined8 *)puVar1);
      if (*unaff_x20 != 0) {
        FUN_054bede8(*unaff_x20,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x198));
        FUN_07833330(&stack0x00000068,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    while( true ) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(lVar7 + 0x20) < 1) break;
      plVar6 = (long *)FUN_0503e1fc(lVar7,*(undefined8 *)puVar3);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(*plVar10 + 0x188))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 400));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
    }
  } while( true );
}


