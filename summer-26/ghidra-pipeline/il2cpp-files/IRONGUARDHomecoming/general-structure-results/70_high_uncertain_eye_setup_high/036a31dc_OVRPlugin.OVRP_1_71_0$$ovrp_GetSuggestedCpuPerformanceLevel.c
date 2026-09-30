/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_GetSuggestedCpuPerformanceLevel
ENTRY_POINT: 036a31dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_GetSuggestedCpuPerformanceLevel(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  thunk_FUN_01ee6d7c();
  FUN_0407bc90(&stack0x00000020,0);
  puVar1 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_84__;
  in_stack_00000048 = uStack0000000000000028;
  in_stack_00000040 = in_stack_00000020;
  uStack0000000000000054 = uStack0000000000000034;
  in_stack_00000050 = uStack0000000000000030;
  if (unaff_x21 != 0) {
    if (*(int *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(unaff_x21 + 0x34) = uStack0000000000000034;
    *(ulong *)(unaff_x21 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(ulong *)(unaff_x21 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000020;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_035ac8e8(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x10),uVar6);
    *(long *)(unaff_x19 + 0x28) = lVar2;
    thunk_FUN_01f51358((long *)(unaff_x19 + 0x28),lVar2);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_035ac8e8(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x10),uVar6);
    *(long *)(unaff_x19 + 0x30) = lVar2;
    thunk_FUN_01f51358((long *)(unaff_x19 + 0x30),lVar2);
    if (unaff_x20 != (long *)0x0) {
      lVar2 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_System_ParameterizedStrings_LowLevelStack_Pop__) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_036a32f8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_036a32f8:
      uVar6 = (*(code *)*puVar3)();
      *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x38),uVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


