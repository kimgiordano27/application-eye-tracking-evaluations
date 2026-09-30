/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_sessiongroup_handle_set
ENTRY_POINT: 0811d43c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_sessiongroup_handle_set
               (long *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_00000128;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  
  lVar6 = *param_1;
  __cxa_end_catch();
  FUN_04a9c330(&stack0x000000a0,*unaff_x22);
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar6);
  }
  lVar6 = *unaff_x21;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar6 = *unaff_x21;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
  if (lVar6 != 0) {
    FUN_06a0a0c4(lVar6,*unaff_x27);
    lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) {
      FUN_06a11640(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_08f02668);
      in_stack_00000058 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      in_stack_00000060 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000050 = in_stack_00000008;
      in_stack_00000068 = in_stack_00000020;
      in_stack_00000078 = in_stack_00000030;
      in_stack_00000070 = in_stack_00000028;
      in_stack_00000080 = in_stack_00000038;
      while (uVar4 = FUN_04a9d25c(&stack0x00000050,*unaff_x28), uVar5 = in_stack_00000070,
            uVar1 = in_stack_00000060, (uVar4 & 1) != 0) {
        uVar2 = in_stack_00000070._4_4_;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar5 = FUN_0811d5c8(uVar2,uVar1,uVar5 & 0xffffffff,&stack0x00000048);
        if ((uVar5 & 1) != 0) {
          lVar6 = *unaff_x21;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar6 = *unaff_x21;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_06a09f3c(lVar6,uVar1,in_stack_00000048,*(undefined8 *)PTR_DAT_08f02648);
        }
      }
      FUN_04a9d39c(&stack0x00000050,*unaff_x23);
      lVar6 = *unaff_x21;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar6 = *unaff_x21;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
      if (lVar6 != 0) {
        FUN_06a0a328(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_08f02660);
        in_stack_000000a8 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        in_stack_000000b0 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        in_stack_000000a0 = in_stack_00000008;
        in_stack_000000b8 = in_stack_00000020;
        in_stack_000000c0 = in_stack_00000028;
        while (uVar5 = FUN_04a9c210(&stack0x000000a0,*unaff_x24), uVar3 = in_stack_000000b8,
              uVar1 = in_stack_000000b0, (uVar5 & 1) != 0) {
          lVar6 = *unaff_x21;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar6 = *unaff_x21;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x30);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0583bee8(&stack0x00000008,lVar6,uVar1,*unaff_x25);
          lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          uStack0000000000000130 = (undefined4)uVar3;
          uStack0000000000000134 = (undefined4)((ulong)uVar3 >> 0x20);
          in_stack_00000128 = in_stack_00000008;
          in_stack_00000138 = uStack0000000000000018;
          FUN_0583bfc8(lVar6,uVar1,&stack0x00000128,*unaff_x26);
        }
        FUN_04a9c330(&stack0x000000a0,*unaff_x22);
        lVar6 = *unaff_x21;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar6 = *unaff_x21;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
        if (lVar6 != 0) {
          FUN_06a0a0c4(lVar6,*unaff_x27);
          lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
          if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) {
            FUN_06a11640(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_08f02668);
            in_stack_00000058 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
            in_stack_00000060 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
            in_stack_00000050 = in_stack_00000008;
            in_stack_00000068 = in_stack_00000020;
            in_stack_00000078 = in_stack_00000030;
            in_stack_00000070 = in_stack_00000028;
            in_stack_00000080 = in_stack_00000038;
            while (uVar4 = FUN_04a9d25c(&stack0x00000050,*unaff_x28), uVar5 = in_stack_00000070,
                  uVar1 = in_stack_00000060, (uVar4 & 1) != 0) {
              uVar2 = in_stack_00000070._4_4_;
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
              }
              uVar5 = FUN_0811d5c8(uVar2,uVar1,uVar5 & 0xffffffff,&stack0x00000040);
              if ((uVar5 & 1) != 0) {
                lVar6 = *unaff_x21;
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar6 = *unaff_x21;
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                FUN_06a09f3c(lVar6,uVar1,in_stack_00000040,*(undefined8 *)PTR_DAT_08f02648);
              }
            }
            FUN_04a9d39c(&stack0x00000050,*unaff_x23);
            lVar6 = *unaff_x21;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar6 = *unaff_x21;
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x50);
            if (lVar6 != 0) {
              FUN_06a0a328(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_08f02660);
              in_stack_000000a8 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
              in_stack_000000b0 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
              in_stack_000000a0 = in_stack_00000008;
              in_stack_000000b8 = in_stack_00000020;
              in_stack_000000c0 = in_stack_00000028;
              while( true ) {
                uVar5 = FUN_04a9c210(&stack0x000000a0,*unaff_x24);
                uVar3 = in_stack_000000b8;
                uVar1 = in_stack_000000b0;
                if ((uVar5 & 1) == 0) {
                  FUN_04a9c330(&stack0x000000a0,*unaff_x22);
                  return;
                }
                lVar6 = *unaff_x21;
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar6 = *unaff_x21;
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x38);
                if (lVar6 == 0) break;
                FUN_0583bee8(&stack0x00000008,lVar6,uVar1,*unaff_x25);
                lVar6 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03c8fb30();
                }
                uStack0000000000000010 = (undefined4)uVar3;
                uStack0000000000000014 = (undefined4)((ulong)uVar3 >> 0x20);
                FUN_0583bfc8(lVar6,uVar1,&stack0x00000008,*unaff_x26);
              }
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


