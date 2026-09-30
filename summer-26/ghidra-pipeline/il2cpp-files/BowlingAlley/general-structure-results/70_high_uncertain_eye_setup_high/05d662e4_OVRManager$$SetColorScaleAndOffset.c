/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 05d662e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetColorScaleAndOffset(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w9;
  long lVar6;
  int *piVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000048;
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
  
code_r0x05d662e4:
  puVar2 = (undefined8 *)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138);
  do {
    uVar3 = (*(code *)*puVar2)(unaff_x22,unaff_w21,(long)&stack0x00000048 + 4,puVar2[1]);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x28);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      in_stack_000000d8 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      in_stack_000000d0 = in_stack_00000050;
      in_stack_000000b8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_000000b0 = in_stack_00000070;
      *(undefined8 *)(unaff_x26 + 0x34) = uStack0000000000000064;
      *(ulong *)(unaff_x26 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
      *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000084;
      *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar8 = *unaff_x28;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x40;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + 0x20) = unaff_w21;
        *(undefined4 *)(lVar6 + 0x24) = in_stack_00000048._4_4_;
        uVar5 = *(undefined8 *)(unaff_x26 + 0x2c);
        *(undefined8 *)(lVar6 + 0x3c) = *(undefined8 *)(unaff_x26 + 0x34);
        *(undefined8 *)(lVar6 + 0x34) = uVar5;
        *(undefined8 *)(lVar6 + 0x30) = in_stack_000000d8;
        *(undefined8 *)(lVar6 + 0x28) = in_stack_00000050;
        uVar5 = *(undefined8 *)(unaff_x26 + 0xc);
        *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(unaff_x26 + 0x14);
        *(undefined8 *)(lVar6 + 0x50) = uVar5;
        *(undefined8 *)(lVar6 + 0x4c) = in_stack_000000b8;
        *(undefined8 *)(lVar6 + 0x44) = in_stack_00000070;
      }
      else {
        uVar9 = *(undefined8 *)(unaff_x26 + 0x2c);
        uVar11 = *(undefined8 *)(unaff_x26 + 0x14);
        uVar10 = *(undefined8 *)(unaff_x26 + 0xc);
        uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70);
        uStack00000000000000f4 = in_stack_00000048._4_4_;
        *(undefined8 *)((long)unaff_x29 + 0x14) = *(undefined8 *)(unaff_x26 + 0x34);
        *(undefined8 *)((long)unaff_x29 + 0xc) = uVar9;
        unaff_x29[1] = in_stack_000000d8;
        *unaff_x29 = in_stack_00000050;
        *(undefined8 *)((long)unaff_x24 + 0x14) = uVar11;
        *(undefined8 *)((long)unaff_x24 + 0xc) = uVar10;
        unaff_x24[1] = in_stack_000000b8;
        *unaff_x24 = in_stack_00000070;
        uStack00000000000000f0 = unaff_w21;
        FUN_042c8e84(lVar4,&stack0x000000f0,uVar5);
      }
    }
    do {
      do {
        uVar3 = FUN_052b6520(&stack0x00000090,*unaff_x27);
        unaff_w21 = in_stack_000000a0;
        if ((uVar3 & 1) == 0) {
          FUN_052b651c(&stack0x00000090,*(undefined8 *)PTR_DAT_072ae428);
          *(undefined4 *)(unaff_x19 + 0x20) = 1;
          FUN_05d664e8();
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
            ;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        lVar4 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
              goto LAB_05d661c0;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d661c0:
        uVar3 = (*(code *)*puVar2)();
      } while ((uVar3 & 1) == 0);
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_05d66228;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d66228:
      uVar3 = (*(code *)*puVar2)();
    } while ((uVar3 & 1) == 0);
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05d6628c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac();
LAB_05d6628c:
    unaff_x22 = (long *)(*(code *)*puVar2)();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    param_1 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          in_w9 = *piVar7;
          goto code_r0x05d662e4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(unaff_x22,*unaff_x25,1);
  } while( true );
}


