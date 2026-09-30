/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAudioInId
ENTRY_POINT: 06af5704
PROGRAM: Waifu-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAudioInId(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined1 unaff_w21;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e05c8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e5980,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e5988,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083e5990,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cc4b0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c2dd8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cd0e8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x4de) = unaff_w21;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_05d168c8(*(long *)(unaff_x19 + 0x40),DAT_083e05b8);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_05d168c8(*(long *)(unaff_x19 + 0x48),DAT_083e05b8);
      plVar6 = *(long **)(unaff_x19 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_083cc4b0) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_06af5834;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc4b0,0);
LAB_06af5834:
        plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_083cd0e8) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_06af5898;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cd0e8,0);
LAB_06af5898:
          plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == DAT_083c2dd8) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                  goto LAB_06af5900;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083c2dd8,1);
LAB_06af5900:
            (*(code *)*puVar1)(&stack0x00000080,plVar6,puVar1[1]);
            in_stack_00000068 = CONCAT44(uStack000000000000008c,uStack0000000000000088);
            in_stack_00000070 = CONCAT44(uStack0000000000000094,uStack0000000000000090);
            in_stack_00000060 = in_stack_00000080;
            while (uVar2 = FUN_05fc2a98(&stack0x00000060,DAT_083e5988), uVar4 = in_stack_00000070,
                  (uVar2 & 1) != 0) {
              plVar6 = *(long **)(unaff_x19 + 0x30);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1d3c();
              }
              lVar3 = *plVar6;
              uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar2 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == DAT_083cc4b0) {
                    puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
                    goto OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported;
                  }
                  uVar2 = uVar2 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar2 != 0);
              }
              puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc4b0,7);
OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported:
              uVar2 = (*(code *)*puVar1)(plVar6,uVar4 & 0xffffffff,&stack0x00000040,puVar1[1]);
              if ((uVar2 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_033d1d3c();
                }
                uStack0000000000000088 = in_stack_00000048;
                in_stack_00000080 = in_stack_00000040;
                uStack0000000000000094 = uStack0000000000000054;
                in_stack_00000098 = in_stack_00000058;
                uStack000000000000008c = uStack000000000000004c;
                uStack0000000000000090 = in_stack_00000050;
                FUN_05d171dc(*(long *)(unaff_x19 + 0x40),uVar4 & 0xffffffff,&stack0x00000080,1,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110));
              }
              plVar6 = *(long **)(unaff_x19 + 0x30);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1d3c();
              }
              lVar3 = *plVar6;
              uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar2 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == DAT_083cc4b0) {
                    puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
                    goto LAB_06af5a50;
                  }
                  uVar2 = uVar2 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar2 != 0);
              }
              puVar1 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc4b0,8);
LAB_06af5a50:
              uVar2 = (*(code *)*puVar1)(plVar6,uVar4 & 0xffffffff,&stack0x00000020,puVar1[1]);
              if ((uVar2 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_033d1d3c();
                }
                uStack0000000000000088 = in_stack_00000028;
                in_stack_00000080 = in_stack_00000020;
                uStack0000000000000094 = uStack0000000000000034;
                in_stack_00000098 = in_stack_00000038;
                uStack000000000000008c = uStack000000000000002c;
                uStack0000000000000090 = in_stack_00000030;
                FUN_05d171dc(*(long *)(unaff_x19 + 0x48),uVar4 & 0xffffffff,&stack0x00000080,1,
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083e05c8 + 0x20) + 0xc0) + 0x110));
              }
            }
            lVar3 = *(long *)(unaff_x19 + 0x20);
            if (lVar3 != 0) {
              (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


