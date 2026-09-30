/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_SetSuggestedGpuPerformanceLevel
ENTRY_POINT: 0317338c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_SetSuggestedGpuPerformanceLevel(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  undefined4 unaff_w23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  FUN_03081994();
  *(undefined4 *)(unaff_x19 + 0x48) = unaff_w23;
  lVar5 = *unaff_x21;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03927648(&stack0x00000020,0);
  puVar1 = PTR_DAT_03d7fcb0;
  in_stack_00000048 = uStack0000000000000028;
  in_stack_00000040 = in_stack_00000020;
  uStack0000000000000054 = uStack0000000000000034;
  in_stack_00000050 = uStack0000000000000030;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar5 + 0x34) = uStack0000000000000034;
    *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(lVar5 + 0x20) = in_stack_00000020;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
    lVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_03081994(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x10),uVar6);
    *(long *)(unaff_x19 + 0x28) = lVar5;
    thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x28),lVar5);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar5 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_03081994(lVar5,0);
    *(undefined8 *)(lVar5 + 0x10) = uVar6;
    thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x10),uVar6);
    *(long *)(unaff_x19 + 0x30) = lVar5;
    thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x30),lVar5);
    if (unaff_x20 != (long *)0x0) {
      lVar5 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03d80b18) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_031734c0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_031734c0:
      uVar6 = (*(code *)*puVar2)();
      *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38),uVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


