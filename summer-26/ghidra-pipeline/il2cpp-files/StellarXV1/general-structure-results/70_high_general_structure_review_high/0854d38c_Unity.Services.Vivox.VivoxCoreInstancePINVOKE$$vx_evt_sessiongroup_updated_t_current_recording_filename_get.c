/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_current_recording_filename_get
ENTRY_POINT: 0854d38c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_current_recording_filename_get
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  
  uStack0000000000000120 = param_1;
  uStack0000000000000130 = param_3;
  FUN_0898c3a8();
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
    lVar2 = *(long *)(unaff_x19 + 0xf8);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x100);
        if (lVar3 == 0) goto LAB_0854d4f8;
        if (*(int *)(lVar3 + 0x18) != 0) {
          uVar6 = *(undefined8 *)(lVar2 + 0x40);
          uVar5 = *(undefined8 *)(lVar2 + 0x58);
          uVar4 = *(undefined8 *)(lVar2 + 0x50);
          uVar8 = *(undefined8 *)(lVar2 + 0x28);
          uVar7 = *(undefined8 *)(lVar2 + 0x20);
          uVar10 = *(undefined8 *)(lVar2 + 0x38);
          uVar9 = *(undefined8 *)(lVar2 + 0x30);
          *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
          *(undefined8 *)(lVar3 + 0x40) = uVar6;
          *(undefined8 *)(lVar3 + 0x58) = uVar5;
          *(undefined8 *)(lVar3 + 0x50) = uVar4;
          *(undefined8 *)(lVar3 + 0x28) = uVar8;
          *(undefined8 *)(lVar3 + 0x20) = uVar7;
          *(undefined8 *)(lVar3 + 0x38) = uVar10;
          *(undefined8 *)(lVar3 + 0x30) = uVar9;
          lVar2 = *(long *)(unaff_x19 + 0xf8);
          if (lVar2 == 0) goto LAB_0854d4f8;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
            lVar3 = *(long *)(unaff_x19 + 0x100);
            if (lVar3 == 0) goto LAB_0854d4f8;
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
              uVar6 = *(undefined8 *)(lVar2 + 0x80);
              uVar5 = *(undefined8 *)(lVar2 + 0x98);
              uVar4 = *(undefined8 *)(lVar2 + 0x90);
              uVar8 = *(undefined8 *)(lVar2 + 0x68);
              uVar7 = *(undefined8 *)(lVar2 + 0x60);
              uVar10 = *(undefined8 *)(lVar2 + 0x78);
              uVar9 = *(undefined8 *)(lVar2 + 0x70);
              *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(lVar2 + 0x88);
              *(undefined8 *)(lVar3 + 0x80) = uVar6;
              *(undefined8 *)(lVar3 + 0x98) = uVar5;
              *(undefined8 *)(lVar3 + 0x90) = uVar4;
              *(undefined8 *)(lVar3 + 0x68) = uVar8;
              *(undefined8 *)(lVar3 + 0x60) = uVar7;
              *(undefined8 *)(lVar3 + 0x78) = uVar10;
              *(undefined8 *)(lVar3 + 0x70) = uVar9;
              lVar2 = *(long *)(unaff_x19 + 0xf8);
              if (lVar2 == 0) goto LAB_0854d4f8;
              if (*(int *)(lVar2 + 0x18) != 0) {
                *(undefined8 *)(lVar2 + 0x28) = in_stack_000003c8;
                *(undefined8 *)(lVar2 + 0x20) = in_stack_000003c0;
                *(undefined8 *)(lVar2 + 0x38) = in_stack_000003d8;
                *(undefined8 *)(lVar2 + 0x30) = in_stack_000003d0;
                *(undefined8 *)(lVar2 + 0x48) = in_stack_000003e8;
                *(undefined8 *)(lVar2 + 0x40) = in_stack_000003e0;
                *(undefined8 *)(lVar2 + 0x58) = in_stack_000003f8;
                *(undefined8 *)(lVar2 + 0x50) = in_stack_000003f0;
                lVar2 = *(long *)(unaff_x19 + 0xf8);
                if (lVar2 == 0) goto LAB_0854d4f8;
                if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar2 + 0x68) = in_stack_00000088;
                  *(undefined8 *)(lVar2 + 0x60) = in_stack_00000080;
                  *(undefined8 *)(lVar2 + 0x78) = in_stack_00000098;
                  *(undefined8 *)(lVar2 + 0x70) = in_stack_00000090;
                  *(undefined8 *)(lVar2 + 0x88) = in_stack_000000a8;
                  *(undefined8 *)(lVar2 + 0x80) = in_stack_000000a0;
                  *(undefined8 *)(lVar2 + 0x98) = in_stack_000000b8;
                  *(undefined8 *)(lVar2 + 0x90) = in_stack_000000b0;
                  uVar1 = FUN_089c69dc(0);
                  *(undefined4 *)(unaff_x19 + 0x108) = uVar1;
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
LAB_0854d4f8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


