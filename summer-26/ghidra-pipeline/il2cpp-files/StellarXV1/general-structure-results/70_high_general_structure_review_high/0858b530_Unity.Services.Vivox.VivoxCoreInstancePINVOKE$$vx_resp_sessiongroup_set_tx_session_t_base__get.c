/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_set_tx_session_t_base__get
ENTRY_POINT: 0858b530
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_set_tx_session_t_base__get
               (undefined1 param_1 [16])

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int in_w8;
  uint uVar6;
  void *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uStack0000000000000000;
  ulong uStack0000000000000008;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000160;
  ulong uStack0000000000000168;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  uStack0000000000000110 = uStack0000000000000000;
  uStack0000000000000120 = uStack0000000000000000;
  uStack0000000000000130 = uStack0000000000000000;
  uStack0000000000000140 = uStack0000000000000000;
  uStack0000000000000150 = uStack0000000000000000;
  uStack0000000000000160 = uStack0000000000000000;
  uStack0000000000000168 = uStack0000000000000008;
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
  }
  lVar4 = FUN_08a086a0(0);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x25) == '\0') {
      if (unaff_x20 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if ((int)uVar1 < 1) {
          return;
        }
        lVar4 = 0;
        while ((uint)lVar4 < uVar1) {
          lVar5 = *(long *)(unaff_x20 + 0x20 + lVar4 * 8);
          if (lVar5 == 0) goto LAB_0858b778;
          uVar3 = FUN_089d0058(lVar5,0);
          FUN_08a0f070(&stack0x00000110,uVar3,0);
          memmove(unaff_x19,&stack0x00000110,0x60);
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          lVar4 = lVar4 + 1;
          unaff_x19 = (void *)((long)unaff_x19 + 0x60);
          if ((int)uVar1 <= (int)lVar4) {
            return;
          }
        }
LAB_0858b77c:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
    }
    else {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      lVar4 = FUN_08a086a0(0);
      if ((lVar4 != 0) && (unaff_x20 != 0)) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (0 < (int)uVar1) {
          uVar6 = 0;
          do {
            if (uVar1 <= uVar6) goto LAB_0858b77c;
            lVar4 = *(long *)(unaff_x20 + (long)(int)uVar6 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_0858b778;
            iVar2 = FUN_08999cb4(lVar4,0);
            if (iVar2 < 2) {
              if (iVar2 == 0) {
                uStack0000000000000008 = 0;
                uStack0000000000000000 = 0;
                FUN_08a0f660(lVar4);
                FUN_08999fb4(lVar4,0);
                FUN_08a0f044(&stack0x00000110);
              }
              else {
                if (iVar2 != 1) goto LAB_0858b630;
                in_stack_00000100 = 0;
                in_stack_000000c8 = 0;
                in_stack_000000c0 = 0;
                in_stack_000000d8 = 0;
                in_stack_000000d0 = 0;
                in_stack_000000e8 = 0;
                in_stack_000000e0 = 0;
                in_stack_000000f8 = 0;
                in_stack_000000f0 = 0;
                in_stack_000000b8 = 0;
                in_stack_000000b0 = 0;
                FUN_08a0f318(lVar4,&stack0x000000b0,0);
                FUN_08a0ef58(&stack0x00000110,&stack0x000000b0,0);
              }
            }
            else if (iVar2 == 2) {
              in_stack_00000078 = 0;
              in_stack_00000070 = 0;
              in_stack_00000088 = 0;
              in_stack_00000080 = 0;
              in_stack_00000098 = 0;
              in_stack_00000090 = 0;
              in_stack_000000a8 = 0;
              in_stack_000000a0 = 0;
              in_stack_00000068 = 0;
              in_stack_00000060 = 0;
              FUN_08a0f4b0(lVar4,&stack0x00000060,0);
              FUN_08a0efd0(&stack0x00000110,&stack0x00000060,0);
            }
            else {
LAB_0858b630:
              uVar3 = FUN_089d0058(lVar4,0);
              FUN_08a0f070(&stack0x00000110,uVar3,0);
            }
            uStack0000000000000168 = uStack0000000000000168 & 0xffffffffffffff;
            memmove((void *)((long)unaff_x19 + (long)(int)uVar6 * 0x60),&stack0x00000110,0x60);
            uVar1 = *(uint *)(unaff_x20 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar1);
        }
        return;
      }
    }
  }
LAB_0858b778:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


