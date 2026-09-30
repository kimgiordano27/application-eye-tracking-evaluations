/*
FUNCTION_NAME: OVRPlugin$$get_positionTracked
ENTRY_POINT: 06ab7a38
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionTracked(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar16;
  undefined4 in_s3;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  ulong uVar15;
  
  lVar5 = *(long *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(unaff_x20 + 0x70);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 == 0) {
LAB_06ab7d28:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    fVar14 = *(float *)(unaff_x20 + 0x18);
    uVar15 = (ulong)(uint)fVar14;
    fVar10 = *(float *)(unaff_x20 + 0x1c);
    uVar2 = *(uint *)(unaff_x20 + 0x14);
    *(undefined1 *)(lVar5 + 0x20) = 1;
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 != 0) {
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 == 0) goto LAB_06ab7d28;
      *(bool *)(lVar6 + 0x20) = (uVar2 & 0x30) != 0;
      lVar8 = *(long *)(param_1 + 0x58);
      fVar16 = fVar14;
      if (fVar14 <= fVar10) {
        fVar16 = fVar10;
      }
      if (lVar8 != 0) {
        uVar4 = *(uint *)(lVar8 + 0x18);
        if (((((uVar4 == 0) || (*(float *)(lVar8 + 0x20) = fVar16, uVar1 < 2)) ||
             (*(undefined1 *)(lVar5 + 0x21) = 1, uVar3 < 2)) ||
            (((*(byte *)(lVar6 + 0x21) = (byte)(uVar2 >> 5) & 1, uVar4 < 2 ||
              (*(float *)(lVar8 + 0x24) = fVar14, uVar1 < 3)) ||
             ((*(undefined1 *)(lVar5 + 0x22) = 1, uVar3 < 3 ||
              ((*(byte *)(lVar6 + 0x22) = (byte)(uVar2 >> 4) & 1, uVar4 < 3 ||
               (*(float *)(lVar8 + 0x28) = fVar10, uVar1 < 4)))))))) ||
           ((*(undefined1 *)(lVar5 + 0x23) = 1, uVar3 < 4 ||
            ((((*(undefined1 *)(lVar6 + 0x23) = 0, uVar4 < 4 ||
               (*(undefined4 *)(lVar8 + 0x2c) = 0, uVar1 < 5)) ||
              (*(undefined1 *)(lVar5 + 0x24) = 1, uVar3 < 5)) ||
             (*(undefined1 *)(lVar6 + 0x24) = 0, uVar4 < 5)))))) goto LAB_06ab7d28;
        *(undefined4 *)(lVar8 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x80) = 2;
        uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
        uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
        uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(unaff_x20 + 0x68);
        *(undefined8 *)(param_1 + 0x74) = uVar7;
        *(undefined8 *)(param_1 + 0x6c) = uVar13;
        *(undefined8 *)(param_1 + 100) = uVar12;
        lVar5 = *(long *)(unaff_x19 + 0x60);
        if (lVar5 != 0) {
          lVar6 = 0;
          lVar8 = 0;
          do {
            if ((int)*(uint *)(lVar5 + 0x18) <= (int)(uint)lVar6) {
              if (*(char *)(unaff_x19 + 0x58) == '\0') {
                lVar5 = *(long *)(unaff_x19 + 0x70);
                FUN_06a5e4b0(*(undefined8 *)(unaff_x19 + 0x50),0,0);
                in_stack_00000028 = uStack0000000000000008;
                in_stack_00000020 = in_stack_00000000;
                uStack0000000000000030 = uStack0000000000000010;
                if (lVar5 == 0) break;
                *(undefined8 *)(lVar5 + 0x28) = uStack0000000000000014;
                *(ulong *)(lVar5 + 0x20) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
                *(undefined8 *)(lVar5 + 0x1c) = _uStack0000000000000008;
                *(undefined8 *)(lVar5 + 0x14) = in_stack_00000000;
                if (*(long *)(unaff_x19 + 0x50) == 0) break;
                lVar5 = *(long *)(unaff_x19 + 0x70);
                uVar11 = FUN_07a1bb0c(*(long *)(unaff_x19 + 0x50),0);
              }
              else {
                FUN_06a5e4b0(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x50),1,0);
                in_stack_00000068 = in_stack_00000028;
                in_stack_00000060 = in_stack_00000020;
                uStack0000000000000074 = uStack0000000000000034;
                uStack0000000000000070 = uStack0000000000000030;
                uStack0000000000000054 = *(undefined8 *)(unaff_x20 + 0x44);
                in_stack_00000040 = *(undefined8 *)(unaff_x20 + 0x30);
                uStack0000000000000050 =
                     (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x3c) >> 0x20);
                uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
                uStack000000000000004c =
                     (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x38) >> 0x20);
                if (*(long *)(unaff_x19 + 0x70) == 0) break;
                FUN_06a70228(&stack0x00000040,&stack0x00000060,*(long *)(unaff_x19 + 0x70) + 0x14,0)
                ;
                if (*(long *)(unaff_x19 + 0x50) == 0) break;
                lVar5 = *(long *)(unaff_x19 + 0x70);
                uVar11 = FUN_07a19780(*(long *)(unaff_x19 + 0x50),0);
              }
              if (lVar5 != 0) {
                *(undefined4 *)(lVar5 + 0x60) = uVar11;
                if (*(long *)(unaff_x19 + 0x70) != 0) {
                  *(undefined4 *)(*(long *)(unaff_x19 + 0x70) + 0x30) = 2;
                  return;
                }
              }
              break;
            }
            if (*(long *)(unaff_x19 + 0x70) == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= (uint)lVar6) goto LAB_06ab7d28;
            lVar5 = *(long *)(lVar5 + lVar6 * 8 + 0x20);
            if (lVar5 == 0) break;
            lVar9 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x38);
            uVar11 = FUN_07a191d0(lVar5,0);
            if (lVar9 == 0) break;
            lVar6 = lVar6 + 1;
            if (*(uint *)(lVar9 + 0x18) <= (int)lVar6 - 1U) goto LAB_06ab7d28;
            lVar9 = lVar9 + lVar8;
            *(undefined4 *)(lVar9 + 0x20) = uVar11;
            *(int *)(lVar9 + 0x24) = (int)uVar15;
            *(float *)(lVar9 + 0x28) = fVar16;
            *(undefined4 *)(lVar9 + 0x2c) = in_s3;
            lVar5 = *(long *)(unaff_x19 + 0x60);
            lVar8 = lVar8 + 0x10;
          } while (lVar5 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


