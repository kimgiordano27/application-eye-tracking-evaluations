/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 03166c60
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__EncodeMrcFrame(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  
  uStack0000000000000118 = in_stack_00000008;
  uStack0000000000000110 = in_stack_00000000;
  uStack0000000000000128 = in_stack_00000018;
  uStack0000000000000120 = in_stack_00000010;
  uStack0000000000000130 = in_stack_00000020;
  thunk_FUN_01b4f09c(unaff_x20 + 0x30,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar9 = *unaff_x21;
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ae9e74();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ae9e74();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar5 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ae9e74();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ae9e74();
  }
  puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  if ((long *)**(long **)(lVar5 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  (**(code **)(*(long *)**(long **)(lVar5 + 0xb8) + 0x198))(&stack0x00000060);
  in_stack_000000c8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  in_stack_000000d0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
  in_stack_000000c0 = in_stack_00000060;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = PTR_DAT_03d807a0;
  FUN_03927648(&stack0x00000060,0);
  _uStack00000000000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  in_stack_000000a0 = in_stack_00000060;
  *(ulong *)(unaff_x22 + 0x14) = CONCAT44(in_stack_00000078,uStack0000000000000074);
  *(ulong *)(unaff_x22 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
  plVar10 = *(long **)(unaff_x19 + 0x128);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_13733) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03166dac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)StringLiteral_13733,0);
LAB_03166dac:
    (*(code *)*puVar6)(plVar10,&stack0x000000a0,puVar6[1]);
  }
  puVar4 = PTR_DAT_03d80798;
  puVar3 = PTR_DAT_03d80790;
  puVar2 = PTR_DAT_03d80788;
  FUN_029b86b8(&stack0x000000c0,*(undefined8 *)puVar1);
  in_stack_00000088 = in_stack_00000008;
  in_stack_00000080 = in_stack_00000000;
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  while( true ) {
    uVar7 = FUN_0277ceb0(&stack0x00000080,*(undefined8 *)puVar3);
    if ((uVar7 & 1) == 0) {
      FUN_0277d14c(&stack0x00000080,*(undefined8 *)puVar2);
      FUN_029b86b8(&stack0x000000c0,*(undefined8 *)puVar1);
      in_stack_00000088 = in_stack_00000008;
      in_stack_00000080 = in_stack_00000000;
      in_stack_00000098 = in_stack_00000018;
      in_stack_00000090 = in_stack_00000010;
      while( true ) {
        uVar7 = FUN_0277ceb0(&stack0x00000080,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          FUN_0277d14c(&stack0x00000080,*(undefined8 *)puVar2);
          memcpy(&stack0x00000000,&stack0x000000e0,0x58);
          *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000038;
          *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000030;
          *(undefined8 *)(unaff_x19 + 0x160) = in_stack_00000048;
          *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000040;
          *(undefined8 *)(unaff_x19 + 0x168) = in_stack_00000050;
          thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x148),0);
          return in_stack_00000108;
        }
        lVar5 = FUN_0277cd6c(&stack0x00000080,*(undefined8 *)puVar4);
        if (lVar5 == 0) break;
        if (*(char *)(lVar5 + 0xb0) != '\0') {
          FUN_031671ec();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar5 = FUN_0277cd6c(&stack0x00000080,*(undefined8 *)puVar4);
    if (lVar5 == 0) break;
    if (*(char *)(lVar5 + 0xb0) == '\0') {
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        FUN_03166ff0(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,uStack00000000000000a8);
      }
      FUN_031671ec();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


