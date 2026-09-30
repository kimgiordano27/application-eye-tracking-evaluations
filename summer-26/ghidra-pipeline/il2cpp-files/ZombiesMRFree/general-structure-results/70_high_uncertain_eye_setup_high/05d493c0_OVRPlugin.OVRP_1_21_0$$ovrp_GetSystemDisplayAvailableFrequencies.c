/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetSystemDisplayAvailableFrequencies
ENTRY_POINT: 05d493c0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_21_0__ovrp_GetSystemDisplayAvailableFrequencies(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *plVar7;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar8;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
    uStack0000000000000014 = *(undefined8 *)(unaff_x21 + 0x24);
    uVar8 = *(undefined8 *)(unaff_x21 + 0x10);
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x1c) >> 0x20);
    uVar2 = uStack0000000000000050;
    uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x21 + 0x18);
    uVar1 = uStack0000000000000048;
    uStack000000000000004c = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x18) >> 0x20);
    in_stack_00000040 = uVar8;
    uStack0000000000000054 = uStack0000000000000014;
    if (plVar7 != (long *)0x0) {
      uStack000000000000000c = uStack000000000000004c;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06fb5318) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_05d49478;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06fb5318,1);
LAB_05d49478:
      in_stack_00000068 = uVar1;
      uStack0000000000000074 = uStack0000000000000014;
      uStack000000000000006c = uStack000000000000000c;
      in_stack_00000070 = uVar2;
      in_stack_00000060 = uVar8;
      (*(code *)*puVar3)(&stack0x00000020,plVar7,&stack0x00000060,puVar3[1]);
      unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *unaff_x19 = in_stack_00000020;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      return unaff_w22 != 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


