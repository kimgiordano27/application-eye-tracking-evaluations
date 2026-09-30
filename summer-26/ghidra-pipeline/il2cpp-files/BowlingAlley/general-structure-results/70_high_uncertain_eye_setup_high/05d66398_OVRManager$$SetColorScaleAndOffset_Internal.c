/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset_Internal
ENTRY_POINT: 05d66398
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetColorScaleAndOffset_Internal(undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  int *piVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
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
  
  uVar11 = param_2._8_8_;
  uVar6 = param_2._0_8_;
  do {
    *(undefined8 *)(in_x9 + 0x30) = uVar11;
    *(undefined8 *)(in_x9 + 0x28) = uVar6;
    uVar11 = *(undefined8 *)(unaff_x26 + 0xc);
    *(undefined8 *)(in_x9 + 0x58) = *(undefined8 *)(unaff_x26 + 0x14);
    *(undefined8 *)(in_x9 + 0x50) = uVar11;
    *(undefined8 *)(in_x9 + 0x4c) = in_stack_000000b8;
    *(undefined8 *)(in_x9 + 0x44) = in_stack_000000b0;
LAB_05d6615c:
    do {
      do {
        do {
          uVar3 = FUN_052b6520(&stack0x00000090,*unaff_x27);
          uVar2 = in_stack_000000a0;
          if ((uVar3 & 1) == 0) {
            FUN_052b651c(&stack0x00000090,*(undefined8 *)PTR_DAT_072ae428);
            *(undefined4 *)(unaff_x19 + 0x20) = 1;
            FUN_05d664e8();
            lVar7 = *(long *)(unaff_x19 + 0x18);
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          lVar7 = *unaff_x20;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x23) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
                goto LAB_05d661c0;
              }
              uVar3 = uVar3 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d661c0:
          uVar3 = (*(code *)*puVar4)();
        } while ((uVar3 & 1) == 0);
        lVar7 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x23) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
              goto LAB_05d66228;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d66228:
        uVar3 = (*(code *)*puVar4)();
      } while ((uVar3 & 1) == 0);
      lVar7 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05d6628c;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac();
LAB_05d6628c:
      plVar5 = (long *)(*(code *)*puVar4)();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar7 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_05d662f0;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar5,*unaff_x25,1);
LAB_05d662f0:
      uVar3 = (*(code *)*puVar4)(plVar5,uVar2,(long)&stack0x00000048 + 4,puVar4[1]);
    } while ((uVar3 & 1) == 0);
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar11 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    in_stack_000000b8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_000000d0 = in_stack_00000050;
    *(undefined8 *)(unaff_x26 + 0x34) = uStack0000000000000064;
    *(ulong *)(unaff_x26 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
    in_stack_000000b0 = in_stack_00000070;
    *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000084;
    *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *unaff_x28;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    in_stack_000000d8 = uVar11;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (*(uint *)(lVar8 + 0x18) <= uVar1) {
      uVar12 = *(undefined8 *)(unaff_x26 + 0x2c);
      uVar14 = *(undefined8 *)(unaff_x26 + 0x14);
      uVar13 = *(undefined8 *)(unaff_x26 + 0xc);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
      uStack00000000000000f0 = uVar2;
      uStack00000000000000f4 = in_stack_00000048._4_4_;
      *(undefined8 *)((long)unaff_x29 + 0x14) = *(undefined8 *)(unaff_x26 + 0x34);
      *(undefined8 *)((long)unaff_x29 + 0xc) = uVar12;
      unaff_x29[1] = uVar11;
      *unaff_x29 = in_stack_00000050;
      *(undefined8 *)((long)unaff_x24 + 0x14) = uVar14;
      *(undefined8 *)((long)unaff_x24 + 0xc) = uVar13;
      unaff_x24[1] = in_stack_000000b8;
      *unaff_x24 = in_stack_00000070;
      FUN_042c8e84(lVar7,&stack0x000000f0,uVar6);
      goto LAB_05d6615c;
    }
    in_x9 = lVar8 + (long)(int)uVar1 * 0x40;
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    *(undefined4 *)(in_x9 + 0x20) = uVar2;
    *(undefined4 *)(in_x9 + 0x24) = in_stack_00000048._4_4_;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x2c);
    *(undefined8 *)(in_x9 + 0x3c) = *(undefined8 *)(unaff_x26 + 0x34);
    *(undefined8 *)(in_x9 + 0x34) = uVar6;
    uVar6 = in_stack_00000050;
  } while( true );
}


