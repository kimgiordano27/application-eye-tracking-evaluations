/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 0315d70c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__SendVirtualKeyboardInput(undefined8 param_1,undefined1 param_2 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  unaff_x19[2] = param_1;
  unaff_x19[1] = param_2._8_8_;
  *unaff_x19 = param_2._0_8_;
  puVar3 = PTR_DAT_03d805f8;
  puVar2 = PTR_DAT_03d805a0;
  puVar1 = PTR_DAT_03d80598;
  if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_02b5a400(&stack0x00000020,*(long *)(unaff_x20 + 0x28),*(undefined8 *)PTR_DAT_03d805b8);
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  in_stack_00000060 = in_stack_00000030;
  do {
    do {
      do {
        uVar4 = FUN_02739b98(&stack0x00000050,*(undefined8 *)puVar2);
        if ((uVar4 & 1) == 0) {
          iVar11 = 5;
          goto LAB_0315d828;
        }
        plVar5 = (long *)thunk_FUN_01afa9e0(in_stack_00000060,*(undefined8 *)puVar3);
      } while (plVar5 == (long *)0x0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar6 = FUN_0391c27c(*(long *)(unaff_x20 + 0x20),0);
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0315d7dc;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar5,lVar8,0);
LAB_0315d7dc:
      uVar4 = (*(code *)*puVar7)(plVar5,uVar6,&stack0x00000038,puVar7[1]);
    } while ((uVar4 & 1) == 0);
    uVar4 = FUN_03136720();
  } while ((uVar4 & 1) != 0);
  iVar11 = 4;
LAB_0315d828:
  FUN_02739b94(&stack0x00000050,*(undefined8 *)puVar1);
  return iVar11 != 4;
}


