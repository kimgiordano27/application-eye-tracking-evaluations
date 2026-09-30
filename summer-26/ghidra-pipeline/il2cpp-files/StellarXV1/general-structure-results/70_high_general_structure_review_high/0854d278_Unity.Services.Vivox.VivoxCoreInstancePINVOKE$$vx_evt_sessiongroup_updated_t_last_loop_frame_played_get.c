/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_last_loop_frame_played_get
ENTRY_POINT: 0854d278
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_last_loop_frame_played_get
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
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
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x1a0) != 0)) {
    uVar5 = FUN_083e3844(*(long *)(param_1 + 0x1a0),0);
    if ((uVar5 & 1) == 0) {
LAB_0854d4bc:
      puVar2 = PTR_DAT_0932e470;
      if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08978b08(*(undefined8 *)puVar2,0);
      return;
    }
    if ((*unaff_x20 != 0) && (lVar6 = *(long *)(*unaff_x20 + 0x1a0), lVar6 != 0)) {
      uVar5 = FUN_083e3974(lVar6,0);
      if ((uVar5 & 1) == 0) goto LAB_0854d4bc;
      iVar1 = *(int *)(unaff_x19 + 0x108);
      iVar3 = FUN_089c69dc(0);
      if (iVar1 == iVar3) {
        return;
      }
      if (*unaff_x20 != 0) {
        FUN_08518544(&stack0x00000340,*unaff_x20,0,0);
        FUN_0898c3a8(&stack0x00000300,&stack0x000002c0,0,0);
        if (*unaff_x20 != 0) {
          FUN_08518474(&stack0x00000280,*unaff_x20,0,0);
          in_stack_000001c0 = in_stack_00000280;
          in_stack_000001c8 = in_stack_00000288;
          in_stack_000001d0 = in_stack_00000290;
          in_stack_000001d8 = in_stack_00000298;
          in_stack_000001e0 = in_stack_000002a0;
          in_stack_000001e8 = in_stack_000002a8;
          FUN_089b6a44(&stack0x00000240,&stack0x00000200,&stack0x000001c0,0);
          if (*unaff_x20 != 0) {
            FUN_08518544(&stack0x00000180,*unaff_x20,1,0);
            in_stack_00000108 = in_stack_00000188;
            in_stack_00000100 = in_stack_00000180;
            in_stack_00000118 = in_stack_00000198;
            in_stack_00000110 = in_stack_00000190;
            in_stack_00000128 = in_stack_000001a8;
            in_stack_00000120 = in_stack_000001a0;
            in_stack_00000138 = in_stack_000001b8;
            in_stack_00000130 = in_stack_000001b0;
            FUN_0898c3a8(&stack0x00000140,&stack0x00000100,0,0);
            if (*unaff_x20 != 0) {
              FUN_08518474(&stack0x000000c0,*unaff_x20,1,0);
              in_stack_00000048 = in_stack_00000148;
              in_stack_00000040 = in_stack_00000140;
              in_stack_00000058 = in_stack_00000158;
              in_stack_00000050 = in_stack_00000150;
              in_stack_00000068 = in_stack_00000168;
              in_stack_00000060 = in_stack_00000160;
              in_stack_00000078 = in_stack_00000178;
              in_stack_00000070 = in_stack_00000170;
              FUN_089b6a44(&stack0x00000080,&stack0x00000040);
              lVar6 = *(long *)(unaff_x19 + 0xf8);
              if (lVar6 != 0) {
                if (*(int *)(lVar6 + 0x18) != 0) {
                  lVar7 = *(long *)(unaff_x19 + 0x100);
                  if (lVar7 == 0) goto LAB_0854d4f8;
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    uVar10 = *(undefined8 *)(lVar6 + 0x40);
                    uVar9 = *(undefined8 *)(lVar6 + 0x58);
                    uVar8 = *(undefined8 *)(lVar6 + 0x50);
                    uVar12 = *(undefined8 *)(lVar6 + 0x28);
                    uVar11 = *(undefined8 *)(lVar6 + 0x20);
                    uVar14 = *(undefined8 *)(lVar6 + 0x38);
                    uVar13 = *(undefined8 *)(lVar6 + 0x30);
                    *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar6 + 0x48);
                    *(undefined8 *)(lVar7 + 0x40) = uVar10;
                    *(undefined8 *)(lVar7 + 0x58) = uVar9;
                    *(undefined8 *)(lVar7 + 0x50) = uVar8;
                    *(undefined8 *)(lVar7 + 0x28) = uVar12;
                    *(undefined8 *)(lVar7 + 0x20) = uVar11;
                    *(undefined8 *)(lVar7 + 0x38) = uVar14;
                    *(undefined8 *)(lVar7 + 0x30) = uVar13;
                    lVar6 = *(long *)(unaff_x19 + 0xf8);
                    if (lVar6 == 0) goto LAB_0854d4f8;
                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                      lVar7 = *(long *)(unaff_x19 + 0x100);
                      if (lVar7 == 0) goto LAB_0854d4f8;
                      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                        uVar10 = *(undefined8 *)(lVar6 + 0x80);
                        uVar9 = *(undefined8 *)(lVar6 + 0x98);
                        uVar8 = *(undefined8 *)(lVar6 + 0x90);
                        uVar12 = *(undefined8 *)(lVar6 + 0x68);
                        uVar11 = *(undefined8 *)(lVar6 + 0x60);
                        uVar14 = *(undefined8 *)(lVar6 + 0x78);
                        uVar13 = *(undefined8 *)(lVar6 + 0x70);
                        *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(lVar6 + 0x88);
                        *(undefined8 *)(lVar7 + 0x80) = uVar10;
                        *(undefined8 *)(lVar7 + 0x98) = uVar9;
                        *(undefined8 *)(lVar7 + 0x90) = uVar8;
                        *(undefined8 *)(lVar7 + 0x68) = uVar12;
                        *(undefined8 *)(lVar7 + 0x60) = uVar11;
                        *(undefined8 *)(lVar7 + 0x78) = uVar14;
                        *(undefined8 *)(lVar7 + 0x70) = uVar13;
                        lVar6 = *(long *)(unaff_x19 + 0xf8);
                        if (lVar6 == 0) goto LAB_0854d4f8;
                        if (*(int *)(lVar6 + 0x18) != 0) {
                          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000248;
                          *(undefined8 *)(lVar6 + 0x20) = in_stack_00000240;
                          *(undefined8 *)(lVar6 + 0x38) = in_stack_00000258;
                          *(undefined8 *)(lVar6 + 0x30) = in_stack_00000250;
                          *(undefined8 *)(lVar6 + 0x48) = in_stack_00000268;
                          *(undefined8 *)(lVar6 + 0x40) = in_stack_00000260;
                          *(undefined8 *)(lVar6 + 0x58) = in_stack_00000278;
                          *(undefined8 *)(lVar6 + 0x50) = in_stack_00000270;
                          lVar6 = *(long *)(unaff_x19 + 0xf8);
                          if (lVar6 == 0) goto LAB_0854d4f8;
                          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                            *(undefined8 *)(lVar6 + 0x68) = in_stack_00000088;
                            *(undefined8 *)(lVar6 + 0x60) = in_stack_00000080;
                            *(undefined8 *)(lVar6 + 0x78) = in_stack_00000098;
                            *(undefined8 *)(lVar6 + 0x70) = in_stack_00000090;
                            *(undefined8 *)(lVar6 + 0x88) = in_stack_000000a8;
                            *(undefined8 *)(lVar6 + 0x80) = in_stack_000000a0;
                            *(undefined8 *)(lVar6 + 0x98) = in_stack_000000b8;
                            *(undefined8 *)(lVar6 + 0x90) = in_stack_000000b0;
                            uVar4 = FUN_089c69dc(0);
                            *(undefined4 *)(unaff_x19 + 0x108) = uVar4;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
            }
          }
        }
      }
    }
  }
LAB_0854d4f8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


