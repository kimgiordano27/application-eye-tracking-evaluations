/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameImageFlipped
ENTRY_POINT: 03166be4
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


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameImageFlipped
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  long *plVar10;
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
  ulong in_stack_000000a8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 uStack0000000000000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  
  uStack0000000000000108 = 0;
  thunk_FUN_01b4f09c();
  if (DAT_03fed25b == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed25b = '\x01';
  }
  puVar1 = PTR_DAT_03d807a8;
  lVar6 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_031650a8(param_1,param_2,param_3,*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
               *(undefined4 *)(lVar6 + 0x20),0);
  in_stack_00000118 = in_stack_00000008;
  in_stack_00000110 = in_stack_00000000;
  in_stack_00000128 = in_stack_00000018;
  in_stack_00000120 = in_stack_00000010;
  in_stack_00000130 = in_stack_00000020;
  thunk_FUN_01b4f09c(unaff_x20 + 0x30,0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar9 = *(long *)puVar1;
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ae9e74();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ae9e74();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ae9e74();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ae9e74();
  }
  puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
  if ((long *)**(long **)(lVar6 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  (**(code **)(*(long *)**(long **)(lVar6 + 0xb8) + 0x198))(&stack0x00000060);
  in_stack_000000c8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  in_stack_000000d0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
  in_stack_000000c0 = in_stack_00000060;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = PTR_DAT_03d807a0;
  FUN_03927648(&stack0x00000060,0);
  in_stack_000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
  in_stack_000000a0 = in_stack_00000060;
  *(ulong *)(unaff_x22 + 0x14) = CONCAT44(in_stack_00000078,uStack0000000000000074);
  *(ulong *)(unaff_x22 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
  plVar10 = *(long **)(unaff_x19 + 0x128);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_13733) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03166dac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)StringLiteral_13733,0);
LAB_03166dac:
    (*(code *)*puVar5)(plVar10,&stack0x000000a0,puVar5[1]);
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
          return uStack0000000000000108;
        }
        lVar6 = FUN_0277cd6c(&stack0x00000080,*(undefined8 *)puVar4);
        if (lVar6 == 0) break;
        if (*(char *)(lVar6 + 0xb0) != '\0') {
          FUN_031671ec();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = FUN_0277cd6c(&stack0x00000080,*(undefined8 *)puVar4);
    if (lVar6 == 0) break;
    if (*(char *)(lVar6 + 0xb0) == '\0') {
      if (*(long *)(unaff_x19 + 0x128) != 0) {
        FUN_03166ff0(in_stack_000000a0 & 0xffffffff,in_stack_000000a0._4_4_,
                     in_stack_000000a8 & 0xffffffff);
      }
      FUN_031671ec();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


