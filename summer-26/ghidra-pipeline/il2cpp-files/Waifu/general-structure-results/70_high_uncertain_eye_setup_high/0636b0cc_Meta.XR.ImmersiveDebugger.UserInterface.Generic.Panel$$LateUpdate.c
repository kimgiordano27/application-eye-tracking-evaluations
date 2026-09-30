/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$LateUpdate
ENTRY_POINT: 0636b0cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__LateUpdate(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar7;
  uint unaff_w27;
  undefined4 unaff_w28;
  ulong unaff_x29;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  uint in_stack_00000038;
  long in_stack_000000e0;
  
  if (param_1 != 0) {
    if (0 < in_stack_00000008) {
      lVar4 = *(long *)(param_1 + 0x10);
      uVar6 = unaff_x29 >> 0x20;
      do {
        *(undefined4 *)(lVar4 + (long)(int)uVar6 * 4) = unaff_w28;
        in_stack_00000008 = in_stack_00000008 + -1;
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (in_stack_00000008 != 0);
    }
    if (*(long *)(unaff_x24 + 0xe8) != 0) {
      puVar5 = *(undefined4 **)(DAT_083d4540 + 0xb8);
      FUN_042a83b0(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
      if (*(long *)(unaff_x24 + 0xf0) != 0) {
        puVar5 = *(undefined4 **)(DAT_083d4540 + 0xb8);
        uVar11 = puVar5[2];
        uStack0000000000000034 = puVar5[3];
        uVar10 = puVar5[1];
        FUN_042a83b0(*puVar5);
        lVar4 = in_stack_000000e0;
        if (0 < (int)unaff_w27) {
          uVar6 = 0;
          lVar7 = (unaff_x29 >> 0x20) << 0x20;
          do {
            puVar5 = *(undefined4 **)(DAT_083d4540 + 0xb8);
            uVar12 = *puVar5;
            uVar13 = puVar5[1];
            uVar14 = puVar5[2];
            uVar15 = puVar5[3];
            if (unaff_x23 == 0) {
              uVar2 = 1;
            }
            else {
              uVar2 = (**(code **)(unaff_x23 + 0x18))
                                (*(undefined8 *)(unaff_x23 + 0x40),uVar6 & 0xffffffff,
                                 *(undefined8 *)(unaff_x23 + 0x28));
              uVar2 = uVar2 | 1;
            }
            lVar3 = FUN_03398188(DAT_083c7df8,1);
            if (lVar3 == 0) goto LAB_0636b4bc;
            if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d44();
            }
            *(uint *)(lVar3 + 0x20) = uVar2;
            FUN_0636acb0(&stack0x00000038);
            if (unaff_x22 == 0) {
              uVar8 = 0;
              uVar16 = 0;
              uVar17 = 0;
            }
            else {
              uVar8 = (**(code **)(unaff_x22 + 0x18))
                                (*(undefined8 *)(unaff_x22 + 0x40),uVar6 & 0xffffffff,
                                 *(undefined8 *)(unaff_x22 + 0x28));
              uVar16 = uVar10;
              uVar17 = uVar11;
            }
            if (unaff_x21 != 0) {
              uVar12 = (**(code **)(unaff_x21 + 0x18))
                                 (*(undefined8 *)(unaff_x21 + 0x40),uVar6 & 0xffffffff,
                                  *(undefined8 *)(unaff_x21 + 0x28));
              uVar13 = uVar10;
              uVar14 = uVar11;
              uVar15 = uStack0000000000000034;
            }
            uStack0000000000000034 = 0;
            if (lVar4 == 0) {
              uStack0000000000000030 = 0;
              uStack000000000000002c = 0;
              uVar1 = 0;
            }
            else {
              uStack0000000000000030 =
                   (**(code **)(lVar4 + 0x18))
                             (*(undefined8 *)(lVar4 + 0x40),uVar6 & 0xffffffff,
                              *(undefined8 *)(lVar4 + 0x28));
              uVar1 = uVar11;
              uStack000000000000002c = uVar10;
            }
            if (unaff_x20 != 0) {
              uStack0000000000000034 =
                   (**(code **)(unaff_x20 + 0x18))
                             (*(undefined8 *)(unaff_x20 + 0x40),uVar6 & 0xffffffff,
                              *(undefined8 *)(unaff_x20 + 0x28));
            }
            if (in_stack_00000020 == 0) {
              uVar9 = 0;
              uVar10 = 0;
              uVar11 = 0;
            }
            else {
              uVar9 = (**(code **)(in_stack_00000020 + 0x18))
                                (*(undefined8 *)(in_stack_00000020 + 0x40),uVar6 & 0xffffffff,
                                 *(undefined8 *)(in_stack_00000020 + 0x28));
            }
            if (*(long *)(unaff_x24 + 0x18) == 0) goto LAB_0636b4bc;
            *(uint *)(*(long *)(*(long *)(unaff_x24 + 0x18) + 0x10) + (lVar7 >> 0x1e)) =
                 in_stack_00000038;
            if (*(long *)(unaff_x24 + 0x28) == 0) goto LAB_0636b4bc;
            lVar3 = lVar7 >> 0x20;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x28) + 0x10) + lVar3 * 0xc);
            *puVar5 = uVar8;
            puVar5[1] = uVar16;
            puVar5[2] = uVar17;
            if (*(long *)(unaff_x24 + 0x30) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x30) + 0x10) + lVar3 * 0x10);
            *puVar5 = uVar12;
            puVar5[1] = uVar13;
            puVar5[2] = uVar14;
            puVar5[3] = uVar15;
            if (*(long *)(unaff_x24 + 0x38) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x38) + 0x10) + lVar3 * 0xc);
            *puVar5 = uVar8;
            puVar5[1] = uVar16;
            puVar5[2] = uVar17;
            if (*(long *)(unaff_x24 + 0x40) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x40) + 0x10) + lVar3 * 0x10);
            *puVar5 = uVar12;
            puVar5[1] = uVar13;
            puVar5[2] = uVar14;
            puVar5[3] = uVar15;
            if (*(long *)(unaff_x24 + 0x48) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x48) + 0x10) + lVar3 * 0xc);
            *puVar5 = uVar8;
            puVar5[1] = uVar16;
            puVar5[2] = uVar17;
            if (*(long *)(unaff_x24 + 0x50) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x50) + 0x10) + lVar3 * 0xc);
            puVar5[2] = uVar1;
            *puVar5 = uStack0000000000000030;
            puVar5[1] = uStack000000000000002c;
            if (*(long *)(unaff_x24 + 0x58) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x58) + 0x10) + lVar3 * 0xc);
            *puVar5 = uVar8;
            puVar5[1] = uVar16;
            puVar5[2] = uVar17;
            if (*(long *)(unaff_x24 + 0x60) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x60) + 0x10) + lVar3 * 0x10);
            *puVar5 = uVar12;
            puVar5[1] = uVar13;
            puVar5[2] = uVar14;
            puVar5[3] = uVar15;
            if (*(long *)(unaff_x24 + 0x68) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x68) + 0x10) + lVar3 * 0xc);
            *puVar5 = uVar8;
            puVar5[1] = uVar16;
            puVar5[2] = uVar17;
            if (*(long *)(unaff_x24 + 0x70) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x70) + 0x10) + lVar3 * 0x10);
            *puVar5 = uVar12;
            puVar5[1] = uVar13;
            puVar5[2] = uVar14;
            puVar5[3] = uVar15;
            if (*(long *)(unaff_x24 + 0x78) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x78) + 0x10) + lVar3 * 0xc);
            *puVar5 = uVar8;
            puVar5[1] = uVar16;
            puVar5[2] = uVar17;
            if (*(long *)(unaff_x24 + 0x80) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x80) + 0x10) + lVar3 * 0x10);
            *puVar5 = uVar12;
            puVar5[1] = uVar13;
            puVar5[2] = uVar14;
            puVar5[3] = uVar15;
            if (*(long *)(unaff_x24 + 0x88) == 0) goto LAB_0636b4bc;
            *(undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x88) + 0x10) + lVar3 * 4) =
                 uStack0000000000000034;
            if (*(long *)(unaff_x24 + 0x90) == 0) goto LAB_0636b4bc;
            puVar5 = (undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x90) + 0x10) + lVar3 * 0xc);
            *puVar5 = uVar9;
            puVar5[1] = uVar10;
            puVar5[2] = uVar11;
            if (*(long *)(unaff_x24 + 0x98) == 0) goto LAB_0636b4bc;
            *(undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0x98) + 0x10) + lVar3 * 4) = 0xffffffff;
            if (*(long *)(unaff_x24 + 0xa0) == 0) goto LAB_0636b4bc;
            *(undefined4 *)(*(long *)(*(long *)(unaff_x24 + 0xa0) + 0x10) + lVar3 * 4) = 0xffffffff;
            if ((in_stack_00000038 >> 4 & 1) != 0) {
              *(int *)(unaff_x24 + 0xfc) = *(int *)(unaff_x24 + 0xfc) + 1;
            }
            uVar6 = uVar6 + 1;
            lVar7 = lVar7 + 0x100000000;
          } while (unaff_w27 != uVar6);
        }
        return in_stack_00000010;
      }
    }
  }
LAB_0636b4bc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


