/*
FUNCTION_NAME: OVRManager$$remove_HMDMounted
ENTRY_POINT: 05d613f8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDMounted(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  if (param_1 == 0) {
    FUN_05d615bc();
    FUN_05d61600();
  }
  else {
    lVar3 = FUN_05d48bb8(param_1,0);
    if (lVar3 == 0) {
      FUN_05d615bc();
    }
    else {
      FUN_05d48bb8(param_1,0);
      lVar3 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_05d6148c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d6148c:
      (*(code *)*puVar4)();
      FUN_05d61648();
      *(undefined1 *)(unaff_x19 + 0x60) = 0;
    }
    FUN_05d48cc8(&stack0x00000040);
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    uStack0000000000000074 = uStack0000000000000054;
    in_stack_00000070 = uStack0000000000000050;
    plVar7 = *(long **)(unaff_x19 + 0x70);
    uVar1 = in_stack_00000048;
    uVar2 = uStack0000000000000050;
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_072ae1e0) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_05d61538;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar7,*(long *)PTR_DAT_072ae1e0,2);
LAB_05d61538:
      (*(code *)*puVar4)(&stack0x00000020,plVar7,&stack0x00000060,puVar4[1]);
      in_stack_00000040 = in_stack_00000020;
      uVar1 = in_stack_00000028;
      uVar2 = in_stack_00000030;
    }
    in_stack_00000030 = uVar2;
    in_stack_00000028 = uVar1;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000048 = in_stack_00000028;
    uStack0000000000000050 = in_stack_00000030;
    if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_05d7abb0(0x3f800000);
    *(undefined1 *)(unaff_x19 + 0x61) = 0;
  }
  return;
}


