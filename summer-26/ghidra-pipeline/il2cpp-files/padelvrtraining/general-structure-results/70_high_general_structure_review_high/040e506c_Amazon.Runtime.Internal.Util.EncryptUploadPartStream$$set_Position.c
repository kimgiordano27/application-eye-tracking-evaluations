/*
FUNCTION_NAME: Amazon.Runtime.Internal.Util.EncryptUploadPartStream$$set_Position
ENTRY_POINT: 040e506c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Amazon_Runtime_Internal_Util_EncryptUploadPartStream__set_Position(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  
  FUN_03d2d2b0(PTR_DAT_091a5120);
  FUN_03d2d2b0(PTR_DAT_091acbc8);
  *(undefined1 *)(unaff_x22 + 0x580) = 1;
  puVar7 = PTR_DAT_091acbc8;
  puVar6 = PTR_DAT_091acb80;
  puVar5 = PTR_DAT_091a58c0;
  puVar3 = PTR_DAT_091a5120;
  puVar2 = PTR_DAT_091a50e8;
  puVar1 = PTR_DAT_091a0d08;
  if (unaff_x21 != 0) {
    uStack000000000000013c = *(undefined4 *)(unaff_x21 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x58) = uStack000000000000013c;
    puVar4 = PTR_DAT_091a58b8;
    uVar8 = thunk_FUN_03d2eb70(*(undefined8 *)puVar1,(long)&stack0x00000138 + 4);
    uVar8 = FUN_06fc1fb4(*(undefined8 *)puVar7,uVar8,0);
    uStack0000000000000138 = *(undefined4 *)(unaff_x19 + 0x58);
    uVar9 = thunk_FUN_03d2eb70(*(undefined8 *)puVar1,&stack0x00000138);
    uVar9 = FUN_06fc1fb4(*(undefined8 *)puVar6,uVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c(*(long *)puVar2);
    }
    FUN_07f16ba0(&stack0x000000f0,*(undefined8 *)puVar3,0);
    in_stack_00000118 = in_stack_000000f8;
    in_stack_00000110 = in_stack_000000f0;
    in_stack_00000128 = in_stack_00000108;
    in_stack_00000120 = in_stack_00000100;
    FUN_07f17850(&stack0x000000f0,uVar8,0);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = in_stack_00000100;
    lVar10 = thunk_FUN_03d2ef40(*(undefined8 *)puVar5);
    in_stack_000000b8 = in_stack_00000118;
    in_stack_000000b0 = in_stack_00000110;
    in_stack_000000c8 = in_stack_00000128;
    in_stack_000000c0 = in_stack_00000120;
    in_stack_00000098 = in_stack_000000d8;
    in_stack_00000090 = in_stack_000000d0;
    in_stack_000000a0 = in_stack_000000e0;
    FUN_07f0c8dc(lVar10,&stack0x000000b0,&stack0x00000090,0);
    FUN_07f16ba0(&stack0x00000070,*(undefined8 *)puVar3,0);
    in_stack_000000f8 = in_stack_00000078;
    in_stack_000000f0 = in_stack_00000070;
    in_stack_00000108 = in_stack_00000088;
    in_stack_00000100 = in_stack_00000080;
    FUN_07f17850(&stack0x00000058,uVar9,0);
    in_stack_00000070 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    in_stack_00000078 = in_stack_00000060;
    in_stack_00000080 = in_stack_00000068;
    lVar11 = thunk_FUN_03d2ef40(*(undefined8 *)puVar5);
    in_stack_00000038 = in_stack_000000f8;
    in_stack_00000030 = in_stack_000000f0;
    in_stack_00000048 = in_stack_00000108;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000018 = in_stack_00000078;
    in_stack_00000010 = in_stack_00000070;
    in_stack_00000020 = in_stack_00000080;
    FUN_07f0c8dc(lVar11,&stack0x00000030,&stack0x00000010,0);
    uVar8 = thunk_FUN_03d2ef40(*(undefined8 *)puVar4);
    FUN_07f0f448();
    if (lVar10 != 0) {
      FUN_07f0c2e0(lVar10,uVar8,0);
      uVar8 = thunk_FUN_03d2ef40(*(undefined8 *)puVar4);
      FUN_07f0f448();
      if (lVar11 != 0) {
        FUN_07f0c2e0(lVar11,uVar8,0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_08c83008(*(long *)(unaff_x19 + 0x30),0,0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_08c84dc4(0,*(long *)(unaff_x19 + 0x30),0);
            if (((*(long *)(unaff_x19 + 0x30) != 0) &&
                (FUN_08c84e5c((float)*(int *)(unaff_x21 + 0x20),*(long *)(unaff_x19 + 0x30),0),
                puVar3 = PTR_DAT_091acbc0, puVar2 = PTR_DAT_091a28c0, unaff_x20 != 0)) &&
               (plVar12 = *(long **)(unaff_x19 + 0x30), plVar12 != (long *)0x0)) {
              (**(code **)(*plVar12 + 0x428))
                        (*(undefined4 *)(unaff_x20 + 0x14),plVar12,*(undefined8 *)(*plVar12 + 0x430)
                        );
              uStack0000000000000058 = *(undefined4 *)(unaff_x20 + 0x14);
              plVar12 = *(long **)(unaff_x19 + 0x50);
              uVar8 = thunk_FUN_03d2eb70(*(undefined8 *)puVar2,&stack0x00000058);
              in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x20);
              uVar9 = thunk_FUN_03d2eb70(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
              uVar8 = FUN_06fd2898(*(undefined8 *)puVar3,uVar8,uVar9,0);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x558))(plVar12,uVar8,*(undefined8 *)(*plVar12 + 0x560));
                if (*(long *)(unaff_x19 + 0x38) != 0) {
                  FUN_08a50fa8(*(long *)(unaff_x19 + 0x38),*(undefined1 *)(unaff_x21 + 0x24),0);
                  if (*(long *)(unaff_x19 + 0x40) != 0) {
                    FUN_08a50fa8(*(long *)(unaff_x19 + 0x40),*(undefined1 *)(unaff_x21 + 0x30),0);
                    if (*(long *)(unaff_x19 + 0x48) != 0) {
                      FUN_08a50fa8(*(long *)(unaff_x19 + 0x48),*(undefined1 *)(unaff_x21 + 0x40),0);
                      if (*(char *)(unaff_x20 + 0x1c) == '\0') {
                        return;
                      }
                      plVar12 = *(long **)(unaff_x19 + 0x30);
                      if (plVar12 != (long *)0x0) {
                        (**(code **)(*plVar12 + 0x428))
                                  ((int)plVar12[0x23],plVar12,*(undefined8 *)(*plVar12 + 0x430));
                        puVar1 = PTR_DAT_091a0c40;
                        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                           (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x100), lVar10 != 0)) {
                          plVar12 = (long *)FUN_04ec1b74(lVar10,*(undefined8 *)PTR_DAT_091a3870);
                          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                            thunk_FUN_03db619c(*(long *)puVar1);
                          }
                          uVar13 = FUN_08a508b0(plVar12,0,0);
                          if ((uVar13 & 1) != 0) {
                            if (plVar12 == (long *)0x0) goto LAB_040e5460;
                            (**(code **)(*plVar12 + 0x2a8))
                                      (DAT_01914f18,DAT_019144cc,DAT_01915210,0x3f800000,plVar12,
                                       *(undefined8 *)(*plVar12 + 0x2b0));
                          }
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_040e5460:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


