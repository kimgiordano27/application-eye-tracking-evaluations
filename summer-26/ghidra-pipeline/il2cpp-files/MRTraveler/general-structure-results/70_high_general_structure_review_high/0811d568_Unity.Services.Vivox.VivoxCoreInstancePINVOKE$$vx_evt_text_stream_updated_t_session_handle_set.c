/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_session_handle_set
ENTRY_POINT: 0811d568
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0811d5bc) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_session_handle_set
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uStack0000000000000008;
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
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 uStack0000000000000118;
  undefined8 uStack000000000000011c;
  undefined4 uStack0000000000000124;
  undefined8 in_stack_00000128;
  undefined4 uStack0000000000000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  
  if (param_2 != 1) {
    FUN_04a9f500(&stack0x000000d0,*unaff_x29);
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0();
  }
  plVar9 = (long *)__cxa_begin_catch();
  lVar10 = *plVar9;
  __cxa_end_catch();
  FUN_04a9f500(&stack0x000000d0,*unaff_x29);
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar10);
  }
  lVar10 = *unaff_x21;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar10 = *unaff_x21;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
  if (lVar10 != 0) {
    FUN_06a0a328(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_08f02660);
    in_stack_000000a8 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    in_stack_000000b0 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_000000a0 = _uStack0000000000000008;
    in_stack_000000b8 = in_stack_00000020;
    in_stack_000000c0 = in_stack_00000028;
    while (uVar7 = FUN_04a9c210(&stack0x000000a0,*unaff_x24), uVar6 = in_stack_000000b8,
          uVar4 = in_stack_000000b0, puVar3 = PTR_DAT_08f02678, (uVar7 & 1) != 0) {
      lVar10 = *unaff_x21;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar10 = *unaff_x21;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0583c4e4(&stack0x00000008,lVar10,uVar4,*unaff_x27);
      in_stack_00000090 = CONCAT44(uStack0000000000000018,uStack0000000000000014);
      in_stack_00000098 = uStack000000000000001c;
      lVar10 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
      uStack0000000000000010 = uStack000000000000001c;
      _uStack0000000000000008 = in_stack_00000090;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uStack0000000000000110 = uStack0000000000000008;
      uStack0000000000000114 = (undefined4)uVar6;
      uStack0000000000000118 = (undefined4)((ulong)uVar6 >> 0x20);
      uStack0000000000000124 = uStack000000000000001c;
      uStack000000000000011c = in_stack_00000090;
      FUN_0583c5c4(lVar10,uVar4,&stack0x00000110,*unaff_x22);
    }
    FUN_04a9c330(&stack0x000000a0,*(undefined8 *)PTR_DAT_08f02678);
    puVar2 = PTR_DAT_08f02670;
    puVar1 = PTR_DAT_08f02650;
    lVar10 = *unaff_x21;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar10 = *unaff_x21;
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
    if (lVar10 != 0) {
      FUN_06a0a0c4(lVar10,*(undefined8 *)puVar1);
      lVar10 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) {
        FUN_06a11640(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_08f02668);
        in_stack_00000058 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        in_stack_00000060 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        in_stack_00000050 = _uStack0000000000000008;
        in_stack_00000068 = in_stack_00000020;
        in_stack_00000078 = in_stack_00000030;
        in_stack_00000070 = in_stack_00000028;
        in_stack_00000080 = in_stack_00000038;
        while (uVar8 = FUN_04a9d25c(&stack0x00000050,*unaff_x28), uVar7 = in_stack_00000070,
              uVar4 = in_stack_00000060, (uVar8 & 1) != 0) {
          uVar5 = in_stack_00000070._4_4_;
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar7 = FUN_0811d5c8(uVar5,uVar4,uVar7 & 0xffffffff,&stack0x00000048);
          if ((uVar7 & 1) != 0) {
            lVar10 = *unaff_x21;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar10 = *unaff_x21;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_06a09f3c(lVar10,uVar4,in_stack_00000048,*(undefined8 *)PTR_DAT_08f02648);
          }
        }
        FUN_04a9d39c(&stack0x00000050,*(undefined8 *)puVar2);
        lVar10 = *unaff_x21;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar10 = *unaff_x21;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
        if (lVar10 != 0) {
          FUN_06a0a328(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_08f02660);
          in_stack_000000a8 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
          in_stack_000000b0 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          in_stack_000000a0 = _uStack0000000000000008;
          in_stack_000000b8 = in_stack_00000020;
          in_stack_000000c0 = in_stack_00000028;
          while (uVar7 = FUN_04a9c210(&stack0x000000a0,*unaff_x24), uVar6 = in_stack_000000b8,
                uVar4 = in_stack_000000b0, (uVar7 & 1) != 0) {
            lVar10 = *unaff_x21;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
              lVar10 = *unaff_x21;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x30);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_0583bee8(&stack0x00000008,lVar10,uVar4,*unaff_x25);
            lVar10 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uStack0000000000000130 = (undefined4)uVar6;
            uStack0000000000000134 = (undefined4)((ulong)uVar6 >> 0x20);
            in_stack_00000128 = _uStack0000000000000008;
            in_stack_00000138 = uStack0000000000000018;
            FUN_0583bfc8(lVar10,uVar4,&stack0x00000128,*unaff_x26);
          }
          FUN_04a9c330(&stack0x000000a0,*(undefined8 *)puVar3);
          lVar10 = *unaff_x21;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar10 = *unaff_x21;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
          if (lVar10 != 0) {
            FUN_06a0a0c4(lVar10,*(undefined8 *)puVar1);
            lVar10 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
            if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) {
              FUN_06a11640(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_08f02668);
              in_stack_00000058 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
              in_stack_00000060 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
              in_stack_00000050 = _uStack0000000000000008;
              in_stack_00000068 = in_stack_00000020;
              in_stack_00000078 = in_stack_00000030;
              in_stack_00000070 = in_stack_00000028;
              in_stack_00000080 = in_stack_00000038;
              while (uVar8 = FUN_04a9d25c(&stack0x00000050,*unaff_x28), uVar7 = in_stack_00000070,
                    uVar4 = in_stack_00000060, (uVar8 & 1) != 0) {
                uVar5 = in_stack_00000070._4_4_;
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar7 = FUN_0811d5c8(uVar5,uVar4,uVar7 & 0xffffffff,&stack0x00000040);
                if ((uVar7 & 1) != 0) {
                  lVar10 = *unaff_x21;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                    lVar10 = *unaff_x21;
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  FUN_06a09f3c(lVar10,uVar4,in_stack_00000040,*(undefined8 *)PTR_DAT_08f02648);
                }
              }
              FUN_04a9d39c(&stack0x00000050,*(undefined8 *)puVar2);
              lVar10 = *unaff_x21;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar10 = *unaff_x21;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x50);
              if (lVar10 != 0) {
                FUN_06a0a328(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_08f02660);
                in_stack_000000a8 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
                in_stack_000000b0 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
                in_stack_000000a0 = _uStack0000000000000008;
                in_stack_000000b8 = in_stack_00000020;
                in_stack_000000c0 = in_stack_00000028;
                while( true ) {
                  uVar7 = FUN_04a9c210(&stack0x000000a0,*unaff_x24);
                  uVar6 = in_stack_000000b8;
                  uVar4 = in_stack_000000b0;
                  if ((uVar7 & 1) == 0) {
                    FUN_04a9c330(&stack0x000000a0,*(undefined8 *)puVar3);
                    return;
                  }
                  lVar10 = *unaff_x21;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                    lVar10 = *unaff_x21;
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x38);
                  if (lVar10 == 0) break;
                  FUN_0583bee8(&stack0x00000008,lVar10,uVar4,*unaff_x25);
                  lVar10 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  uStack0000000000000010 = (undefined4)uVar6;
                  uStack0000000000000014 = (undefined4)((ulong)uVar6 >> 0x20);
                  FUN_0583bfc8(lVar10,uVar4,&stack0x00000008,*unaff_x26);
                }
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


