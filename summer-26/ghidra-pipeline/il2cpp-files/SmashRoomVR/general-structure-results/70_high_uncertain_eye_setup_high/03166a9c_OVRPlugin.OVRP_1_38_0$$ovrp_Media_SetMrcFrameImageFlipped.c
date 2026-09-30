/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameImageFlipped
ENTRY_POINT: 03166a9c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameImageFlipped
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 in_w8;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
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
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  ulong uStack00000000000000a0;
  ulong uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  ulong uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined4 uStack00000000000000f8;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  
  *(undefined1 *)(unaff_x20 + 0x7b) = in_w8;
  uStack0000000000000130 = 0;
  uStack00000000000000c0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000d0 = 0;
  uStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  uStack0000000000000118 = 0;
  uStack0000000000000110 = 0;
  uStack0000000000000128 = 0;
  uStack0000000000000120 = 0;
  _uStack00000000000000f8 = 0;
  uStack00000000000000f0 = 0;
  uStack0000000000000108 = 0;
  uStack00000000000000e8 = 0;
  uStack00000000000000e0 = 0;
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000098 = 0;
  uStack0000000000000090 = 0;
  thunk_FUN_01b4f09c(&stack0x00000100);
  FUN_03165dd4();
  uStack00000000000000e8 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
  uVar13 = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  uStack00000000000000e0 = in_stack_00000000;
  *(ulong *)(unaff_x22 + 0x54) = CONCAT44(uStack0000000000000018,uStack0000000000000014);
  *(undefined8 *)(unaff_x22 + 0x4c) = uVar13;
  puVar1 = PTR_DAT_03d80738;
  _uStack00000000000000f8 = CONCAT44(0x7f800000,uStack00000000000000f8);
  plVar10 = *(long **)(unaff_x19 + 0x138);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d80738) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03166b60;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)PTR_DAT_03d80738,0);
LAB_03166b60:
    iVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_03166bc0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)puVar1,1);
LAB_03166bc0:
    puVar1 = PTR_DAT_03d80720;
    uVar12 = (*(code *)*puVar6)(plVar10,iVar5 + -1,puVar6[1]);
    uStack0000000000000108 = 0;
    thunk_FUN_01b4f09c(&stack0x00000108,0);
    if (DAT_03fed25b == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed25b = '\x01';
    }
    puVar2 = PTR_DAT_03d807a8;
    lVar7 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    uStack0000000000000008 = 0;
    uStack000000000000000c = 0;
    in_stack_00000000 = 0;
    uStack0000000000000018 = 0;
    uStack000000000000001c = 0;
    uStack0000000000000010 = 0;
    uStack0000000000000014 = 0;
    in_stack_00000020 = 0;
    FUN_031650a8(uVar12,uVar13,param_3,*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                 *(undefined4 *)(lVar7 + 0x20),0);
    uStack0000000000000118 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
    uStack0000000000000128 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    uStack0000000000000120 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    uStack0000000000000110 = in_stack_00000000;
    uStack0000000000000130 = in_stack_00000020;
    thunk_FUN_01b4f09c(&stack0x00000110,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar11 = *(long *)puVar2;
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ae9e74();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ae9e74();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar7 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ae9e74();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ae9e74();
    }
    puVar1 = Method_UnityEngine_UI_ToggleGroup_<>c_<ActiveToggles>b__14_0__;
    if ((long *)**(long **)(lVar7 + 0xb8) != (long *)0x0) {
      (**(code **)(*(long *)**(long **)(lVar7 + 0xb8) + 0x198))(&stack0x00000060);
      uStack00000000000000c8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      uStack00000000000000d0 = CONCAT44(uStack0000000000000074,uStack0000000000000070);
      uStack00000000000000c0 = in_stack_00000060;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      puVar1 = PTR_DAT_03d807a0;
      FUN_03927648(&stack0x00000060,0);
      uStack00000000000000a8 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
      uStack00000000000000a0 = in_stack_00000060;
      *(ulong *)(unaff_x22 + 0x14) = CONCAT44(in_stack_00000078,uStack0000000000000074);
      *(ulong *)(unaff_x22 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
      plVar10 = *(long **)(unaff_x19 + 0x128);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_13733) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03166dac;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(plVar10,*(long *)StringLiteral_13733,0);
LAB_03166dac:
        (*(code *)*puVar6)(plVar10,&stack0x000000a0,puVar6[1]);
      }
      puVar4 = PTR_DAT_03d80798;
      puVar3 = PTR_DAT_03d80790;
      puVar2 = PTR_DAT_03d80788;
      FUN_029b86b8(&stack0x000000c0,*(undefined8 *)puVar1);
      uStack0000000000000088 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      uStack0000000000000098 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      uStack0000000000000090 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      uStack0000000000000080 = in_stack_00000000;
      while( true ) {
        uVar8 = FUN_0277ceb0(&stack0x00000080,*(undefined8 *)puVar3);
        if ((uVar8 & 1) == 0) {
          FUN_0277d14c(&stack0x00000080,*(undefined8 *)puVar2);
          FUN_029b86b8(&stack0x000000c0,*(undefined8 *)puVar1);
          uStack0000000000000088 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
          uStack0000000000000098 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          uStack0000000000000090 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
          uStack0000000000000080 = in_stack_00000000;
          while( true ) {
            uVar8 = FUN_0277ceb0(&stack0x00000080,*(undefined8 *)puVar3);
            if ((uVar8 & 1) == 0) {
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
            lVar7 = FUN_0277cd6c(&stack0x00000080,*(undefined8 *)puVar4);
            if (lVar7 == 0) break;
            if (*(char *)(lVar7 + 0xb0) != '\0') {
              FUN_031671ec();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar7 = FUN_0277cd6c(&stack0x00000080,*(undefined8 *)puVar4);
        if (lVar7 == 0) break;
        if (*(char *)(lVar7 + 0xb0) == '\0') {
          if (*(long *)(unaff_x19 + 0x128) != 0) {
            FUN_03166ff0(uStack00000000000000a0 & 0xffffffff,uStack00000000000000a0._4_4_,
                         uStack00000000000000a8 & 0xffffffff);
          }
          FUN_031671ec();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


