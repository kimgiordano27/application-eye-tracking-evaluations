/*
FUNCTION_NAME: OVRPlugin$$GetEyeLayerRecommendedResolution
ENTRY_POINT: 05d2c05c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetEyeLayerRecommendedResolution
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4
               )

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 in_w8;
  long lVar6;
  int *piVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
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
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
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
  undefined4 in_stack_000000f0;
  
  uStack0000000000000018 = param_3._8_4_;
  uStack0000000000000010 = param_3._0_8_;
  uVar9 = param_2._8_8_;
  uVar5 = param_2._0_8_;
  uStack0000000000000038 = param_1._8_4_;
  uStack0000000000000030 = param_1._0_8_;
  do {
    uStack0000000000000024 = uStack0000000000000084;
    uStack000000000000003c = (undefined4)uVar5;
    uStack0000000000000040 = (undefined4)((ulong)uVar5 >> 0x20);
    uStack0000000000000020 = uStack0000000000000080;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    in_stack_000000d8 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
    in_stack_000000b8 = CONCAT44(uStack000000000000007c,uStack0000000000000018);
    *(undefined8 *)(unaff_x26 + 0x34) = uVar9;
    *(undefined8 *)(unaff_x26 + 0x2c) = uVar5;
    *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000084;
    *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    lVar6 = *(long *)(param_4 + 0x10);
    lVar8 = *unaff_x28;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    in_stack_000000b0 = uStack0000000000000010;
    in_stack_000000d0 = uStack0000000000000030;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar1 = *(uint *)(param_4 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar1 * 0x40;
      *(uint *)(param_4 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar6 + 0x20) = unaff_w21;
      *(undefined4 *)(lVar6 + 0x24) = in_w8;
      uVar5 = *(undefined8 *)(unaff_x26 + 0x2c);
      *(undefined8 *)(lVar6 + 0x3c) = *(undefined8 *)(unaff_x26 + 0x34);
      *(undefined8 *)(lVar6 + 0x34) = uVar5;
      *(undefined8 *)(lVar6 + 0x30) = in_stack_000000d8;
      *(undefined8 *)(lVar6 + 0x28) = uStack0000000000000030;
      uVar5 = *(undefined8 *)(unaff_x26 + 0xc);
      *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(unaff_x26 + 0x14);
      *(undefined8 *)(lVar6 + 0x50) = uVar5;
      *(undefined8 *)(lVar6 + 0x4c) = in_stack_000000b8;
      *(undefined8 *)(lVar6 + 0x44) = uStack0000000000000010;
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x26 + 0x2c);
      uVar11 = *(undefined8 *)(unaff_x26 + 0x14);
      uVar10 = *(undefined8 *)(unaff_x26 + 0xc);
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70);
      *(undefined8 *)((long)unaff_x29 + 0x14) = *(undefined8 *)(unaff_x26 + 0x34);
      *(undefined8 *)((long)unaff_x29 + 0xc) = uVar9;
      unaff_x29[1] = in_stack_000000d8;
      *unaff_x29 = uStack0000000000000030;
      *(undefined8 *)((long)unaff_x24 + 0x14) = uVar11;
      *(undefined8 *)((long)unaff_x24 + 0xc) = uVar10;
      unaff_x24[1] = in_stack_000000b8;
      *unaff_x24 = uStack0000000000000010;
      in_stack_000000f0 = unaff_w21;
      FUN_045327e8(param_4,&stack0x000000f0,uVar5);
    }
    do {
      do {
        do {
          uVar2 = FUN_054f74fc(&stack0x00000090,*unaff_x27);
          unaff_w21 = in_stack_000000a0;
          if ((uVar2 & 1) == 0) {
            FUN_054f74f8(&stack0x00000090,*(undefined8 *)PTR_DAT_06fb5568);
            *(undefined4 *)(unaff_x19 + 0x20) = 1;
            FUN_05d2c228();
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          lVar6 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar2 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_05d2bf00;
              }
              uVar2 = uVar2 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_05d2bf00:
          uVar2 = (*(code *)*puVar3)();
        } while ((uVar2 & 1) == 0);
        lVar6 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 8) * 0x10 + 0x138);
              goto LAB_05d2bf68;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_05d2bf68:
        uVar2 = (*(code *)*puVar3)();
      } while ((uVar2 & 1) == 0);
      lVar6 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05d2bfcc;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_05d2bfcc:
      plVar4 = (long *)(*(code *)*puVar3)();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar6 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_05d2c030;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02feb5b8(plVar4,*unaff_x25,1);
LAB_05d2c030:
      uVar2 = (*(code *)*puVar3)(plVar4,unaff_w21,(long)&stack0x00000048 + 4,puVar3[1]);
    } while ((uVar2 & 1) == 0);
    param_4 = *(long *)(unaff_x19 + 0x28);
    uVar5 = CONCAT44(uStack0000000000000060,uStack000000000000005c);
    uStack0000000000000030 = in_stack_00000050;
    uVar9 = uStack0000000000000064;
    uStack0000000000000010 = in_stack_00000070;
    in_w8 = in_stack_00000048._4_4_;
    uStack0000000000000038 = uStack0000000000000058;
    uStack0000000000000018 = uStack0000000000000078;
  } while( true );
}


