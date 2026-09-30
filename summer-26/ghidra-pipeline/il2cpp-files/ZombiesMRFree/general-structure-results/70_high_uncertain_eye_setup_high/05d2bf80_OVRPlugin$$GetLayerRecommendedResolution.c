/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 05d2bf80
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


void OVRPlugin__GetLayerRecommendedResolution(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  
  do {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05d2bfcc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d2bfcc:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05d2c030;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar3,*unaff_x25,1);
LAB_05d2c030:
    uVar6 = (*(code *)*puVar2)(plVar3,unaff_w21,(long)&stack0x00000048 + 4,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      in_stack_000000d8 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      in_stack_000000d0 = in_stack_00000050;
      in_stack_000000b8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_000000b0 = in_stack_00000070;
      *(undefined8 *)(unaff_x26 + 0x34) = uStack0000000000000064;
      *(ulong *)(unaff_x26 + 0x2c) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
      *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000084;
      *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *unaff_x28;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar1 * 0x40;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + 0x20) = unaff_w21;
        *(undefined4 *)(lVar7 + 0x24) = in_stack_00000048._4_4_;
        uVar4 = *(undefined8 *)(unaff_x26 + 0x2c);
        *(undefined8 *)(lVar7 + 0x3c) = *(undefined8 *)(unaff_x26 + 0x34);
        *(undefined8 *)(lVar7 + 0x34) = uVar4;
        *(undefined8 *)(lVar7 + 0x30) = in_stack_000000d8;
        *(undefined8 *)(lVar7 + 0x28) = in_stack_00000050;
        uVar4 = *(undefined8 *)(unaff_x26 + 0xc);
        *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(unaff_x26 + 0x14);
        *(undefined8 *)(lVar7 + 0x50) = uVar4;
        *(undefined8 *)(lVar7 + 0x4c) = in_stack_000000b8;
        *(undefined8 *)(lVar7 + 0x44) = in_stack_00000070;
      }
      else {
        uVar10 = *(undefined8 *)(unaff_x26 + 0x2c);
        uVar12 = *(undefined8 *)(unaff_x26 + 0x14);
        uVar11 = *(undefined8 *)(unaff_x26 + 0xc);
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
        uStack00000000000000f4 = in_stack_00000048._4_4_;
        *(undefined8 *)((long)unaff_x29 + 0x14) = *(undefined8 *)(unaff_x26 + 0x34);
        *(undefined8 *)((long)unaff_x29 + 0xc) = uVar10;
        unaff_x29[1] = in_stack_000000d8;
        *unaff_x29 = in_stack_00000050;
        *(undefined8 *)((long)unaff_x24 + 0x14) = uVar12;
        *(undefined8 *)((long)unaff_x24 + 0xc) = uVar11;
        unaff_x24[1] = in_stack_000000b8;
        *unaff_x24 = in_stack_00000070;
        uStack00000000000000f0 = unaff_w21;
        FUN_045327e8(lVar5,&stack0x000000f0,uVar4);
      }
    }
    do {
      do {
        uVar6 = FUN_054f74fc(&stack0x00000090,*unaff_x27);
        unaff_w21 = in_stack_000000a0;
        if ((uVar6 & 1) == 0) {
          FUN_054f74f8(&stack0x00000090,*(undefined8 *)PTR_DAT_06fb5568);
          *(undefined4 *)(unaff_x19 + 0x20) = 1;
          FUN_05d2c228();
          lVar5 = *(long *)(unaff_x19 + 0x18);
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
            ;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_05d2bf00;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d2bf00:
        uVar6 = (*(code *)*puVar2)();
      } while ((uVar6 & 1) == 0);
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 8) * 0x10 + 0x138);
            goto LAB_05d2bf68;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05d2bf68:
      uVar6 = (*(code *)*puVar2)();
    } while ((uVar6 & 1) == 0);
  } while( true );
}


