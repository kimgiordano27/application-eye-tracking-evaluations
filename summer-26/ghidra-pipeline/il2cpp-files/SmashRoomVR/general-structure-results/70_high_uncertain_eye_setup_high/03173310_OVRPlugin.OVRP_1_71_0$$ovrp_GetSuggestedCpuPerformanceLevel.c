/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_GetSuggestedCpuPerformanceLevel
ENTRY_POINT: 03173310
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


void OVRPlugin_OVRP_1_71_0__ovrp_GetSuggestedCpuPerformanceLevel(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  thunk_FUN_01ad9084(PTR_DAT_03d7fcb0);
  *(undefined1 *)(unaff_x21 + 0x122) = 1;
  uVar2 = FUN_01b47fd0(*unaff_x23,0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  thunk_FUN_01b4f09c();
  lVar3 = FUN_01b47fd0(*unaff_x23,0x18);
  plVar7 = (long *)(unaff_x19 + 0x18);
  *plVar7 = lVar3;
  thunk_FUN_01b4f09c(plVar7,lVar3);
  uVar2 = FUN_01b47fd0(*unaff_x23,0x18);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  thunk_FUN_01b4f09c();
  *(undefined4 *)(unaff_x19 + 0x48) = 0xffffffff;
  FUN_03081994();
  *(undefined4 *)(unaff_x19 + 0x48) = 0xffffffff;
  lVar3 = *plVar7;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_03927648(&stack0x00000020,0);
  puVar1 = PTR_DAT_03d7fcb0;
  in_stack_00000048 = uStack0000000000000028;
  in_stack_00000040 = in_stack_00000020;
  uStack0000000000000054 = uStack0000000000000034;
  in_stack_00000050 = uStack0000000000000030;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined8 *)(lVar3 + 0x34) = uStack0000000000000034;
    *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(ulong *)(lVar3 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000020;
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    lVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_03081994(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
    thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x10),uVar2);
    *(long *)(unaff_x19 + 0x28) = lVar3;
    thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x28),lVar3);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_03081994(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
    thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x10),uVar2);
    *(long *)(unaff_x19 + 0x30) = lVar3;
    thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x30),lVar3);
    if (unaff_x20 != (long *)0x0) {
      lVar3 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d80b18) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_031734c0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78();
LAB_031734c0:
      uVar2 = (*(code *)*puVar4)();
      *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38),uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


