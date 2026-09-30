/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerAnnotation
ENTRY_POINT: 06af3cc4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerAnnotation(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined4 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  
  do {
    uStack0000000000000030 = in_stack_00000050;
    uStack0000000000000044 = uStack0000000000000064;
    uStack0000000000000010 = in_stack_00000070;
    uStack0000000000000024 = uStack0000000000000084;
    uStack0000000000000038 = uStack0000000000000058;
    uStack0000000000000040 = uStack0000000000000060;
    uStack0000000000000018 = uStack0000000000000078;
    uStack0000000000000020 = uStack0000000000000080;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    in_stack_000000d8 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    in_stack_000000d0 = in_stack_00000050;
    in_stack_000000b8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_000000b0 = in_stack_00000070;
    *(undefined8 *)(unaff_x25 + 0x34) = uStack0000000000000064;
    *(ulong *)(unaff_x25 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
    *(undefined8 *)(unaff_x25 + 0x14) = uStack0000000000000084;
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    lVar6 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(unaff_x29 + 0x1b0);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar1 * 0x40;
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar6 + 0x20) = unaff_w21;
      *(undefined4 *)(lVar6 + 0x24) = uStack000000000000004c;
      uVar5 = *(undefined8 *)(unaff_x25 + 0x2c);
      *(undefined8 *)(lVar6 + 0x3c) = *(undefined8 *)(unaff_x25 + 0x34);
      *(undefined8 *)(lVar6 + 0x34) = uVar5;
      *(undefined8 *)(lVar6 + 0x30) = in_stack_000000d8;
      *(undefined8 *)(lVar6 + 0x28) = in_stack_00000050;
      uVar5 = *(undefined8 *)(unaff_x25 + 0xc);
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(unaff_x25 + 0x14);
      *(undefined8 *)(lVar6 + 0x50) = uVar5;
      *(undefined8 *)(lVar6 + 0x4c) = in_stack_000000b8;
      *(undefined8 *)(lVar6 + 0x44) = in_stack_00000070;
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x25 + 0x2c);
      uVar11 = *(undefined8 *)(unaff_x25 + 0x14);
      uVar10 = *(undefined8 *)(unaff_x25 + 0xc);
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70);
      uStack00000000000000f4 = uStack000000000000004c;
      *(undefined8 *)((long)unaff_x26 + 0x14) = *(undefined8 *)(unaff_x25 + 0x34);
      *(undefined8 *)((long)unaff_x26 + 0xc) = uVar9;
      unaff_x26[1] = in_stack_000000d8;
      *unaff_x26 = in_stack_00000050;
      *(undefined8 *)((long)unaff_x27 + 0x14) = uVar11;
      *(undefined8 *)((long)unaff_x27 + 0xc) = uVar10;
      unaff_x27[1] = in_stack_000000b8;
      *unaff_x27 = in_stack_00000070;
      uStack00000000000000f0 = unaff_w21;
      FUN_04bf9a38(param_1,&stack0x000000f0,uVar5);
    }
    do {
      do {
        do {
          uVar2 = FUN_05fc2a98(&stack0x00000090,*(undefined8 *)(unaff_x28 + 0x988));
          unaff_w21 = in_stack_000000a0;
          if ((uVar2 & 1) == 0) {
            *(undefined4 *)(unaff_x19 + 0x20) = 1;
            FUN_06af3e4c();
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          lVar6 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)(unaff_x23 + 0x4b0)) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_06af3b78;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_0338f71c();
LAB_06af3b78:
          uVar2 = (*(code *)*puVar3)();
        } while ((uVar2 & 1) == 0);
        lVar6 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)(unaff_x23 + 0x4b0)) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 8) * 0x10 + 0x138);
              goto LAB_06af3be0;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c();
LAB_06af3be0:
        uVar2 = (*(code *)*puVar3)();
      } while ((uVar2 & 1) == 0);
      lVar6 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(unaff_x23 + 0x4b0)) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06af3c44;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c();
LAB_06af3c44:
      plVar4 = (long *)(*(code *)*puVar3)();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      lVar6 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(unaff_x24 + 0xe8)) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_06af3ca8;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar4,*(long *)(unaff_x24 + 0xe8),1);
LAB_06af3ca8:
      uVar2 = (*(code *)*puVar3)(plVar4,unaff_w21,(long)((long)register0x00000008 + 0x48) + 4,
                                 puVar3[1]);
    } while ((uVar2 & 1) == 0);
    param_1 = *(long *)(unaff_x19 + 0x28);
  } while( true );
}


