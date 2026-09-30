/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 05be56cc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  float fVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  ulong uVar19;
  undefined4 in_s3;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  lVar9 = *(long *)(unaff_x19 + 0x80);
  if (lVar9 == 0) goto LAB_05be58ac;
  *(undefined1 *)(lVar9 + 0x10) = *(undefined1 *)(unaff_x20 + 0x10);
  cVar5 = *(char *)(unaff_x20 + 0x11);
  *(char *)(lVar9 + 0x11) = cVar5;
  if (cVar5 != '\0') {
    uVar8 = FUN_069d3398();
    lVar9 = *(long *)(unaff_x19 + 0x80);
    if ((uVar8 & 1) != 0) {
      if (lVar9 != 0) {
        uVar6 = *(undefined1 *)(unaff_x20 + 0x12);
        *(undefined1 *)(lVar9 + 0x40) = 1;
        *(undefined1 *)(lVar9 + 0x12) = uVar6;
        lVar10 = *(long *)(lVar9 + 0x50);
        *(undefined1 *)(lVar9 + 0x84) = *(undefined1 *)(unaff_x20 + 0x70);
        if (lVar10 == 0) goto LAB_05be58ac;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 != 0) {
          fVar18 = *(float *)(unaff_x20 + 0x18);
          uVar8 = (ulong)(uint)fVar18;
          fVar14 = *(float *)(unaff_x20 + 0x1c);
          uVar2 = *(uint *)(unaff_x20 + 0x14);
          *(undefined1 *)(lVar10 + 0x20) = 1;
          lVar11 = *(long *)(lVar9 + 0x48);
          if (lVar11 != 0) {
            uVar3 = *(uint *)(lVar11 + 0x18);
            if (uVar3 == 0) goto LAB_05be59f0;
            *(bool *)(lVar11 + 0x20) = (uVar2 & 0x30) != 0;
            lVar13 = *(long *)(lVar9 + 0x58);
            fVar7 = fVar18;
            if (fVar18 <= fVar14) {
              fVar7 = fVar14;
            }
            uVar19 = (ulong)(uint)fVar7;
            if (lVar13 != 0) {
              uVar4 = *(uint *)(lVar13 + 0x18);
              if (((((uVar4 == 0) || (*(float *)(lVar13 + 0x20) = fVar7, uVar1 == 1)) ||
                   (*(undefined1 *)(lVar10 + 0x21) = 1, uVar3 == 1)) ||
                  (((*(byte *)(lVar11 + 0x21) = (byte)(uVar2 >> 5) & 1, uVar4 == 1 ||
                    (*(float *)(lVar13 + 0x24) = fVar18, uVar1 < 3)) ||
                   ((*(undefined1 *)(lVar10 + 0x22) = 1, uVar3 < 3 ||
                    ((*(byte *)(lVar11 + 0x22) = (byte)(uVar2 >> 4) & 1, uVar4 < 3 ||
                     (*(float *)(lVar13 + 0x28) = fVar14, uVar1 == 3)))))))) ||
                 ((*(undefined1 *)(lVar10 + 0x23) = 1, uVar3 == 3 ||
                  ((((*(undefined1 *)(lVar11 + 0x23) = 0, uVar4 == 3 ||
                     (*(undefined4 *)(lVar13 + 0x2c) = 0, uVar1 < 5)) ||
                    (*(undefined1 *)(lVar10 + 0x24) = 1, uVar3 < 5)) ||
                   (*(undefined1 *)(lVar11 + 0x24) = 0, uVar4 < 5)))))) goto LAB_05be59f0;
              *(undefined4 *)(lVar13 + 0x30) = 0;
              *(undefined4 *)(lVar9 + 0x80) = 2;
              uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
              uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
              uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
              *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(unaff_x20 + 0x68);
              *(undefined8 *)(lVar9 + 0x74) = uVar12;
              *(undefined8 *)(lVar9 + 0x6c) = uVar17;
              *(undefined8 *)(lVar9 + 100) = uVar16;
              lVar9 = *(long *)(unaff_x19 + 0x68);
              if (lVar9 != 0) {
                lVar11 = 0;
                lVar10 = 0;
                do {
                  if ((int)*(uint *)(lVar9 + 0x18) <= (int)(uint)lVar10) {
                    if (*(char *)(unaff_x19 + 0x60) == '\0') {
                      lVar9 = *(long *)(unaff_x19 + 0x80);
                      FUN_05b61c54(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x50),0,0);
                      if (lVar9 == 0) break;
                      *(ulong *)(lVar9 + 0x1c) =
                           CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
                      *(undefined8 *)(lVar9 + 0x14) = in_stack_00000000._4_8_;
                      *(undefined8 *)(lVar9 + 0x28) = in_stack_00000018;
                      *(ulong *)(lVar9 + 0x20) =
                           CONCAT44(uStack0000000000000014,uStack0000000000000010);
                      if (*(long *)(unaff_x19 + 0x50) == 0) break;
                      lVar9 = *(long *)(unaff_x19 + 0x80);
                      uVar15 = FUN_069e9470(*(long *)(unaff_x19 + 0x50),0);
                    }
                    else {
                      FUN_05b61c54(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x50),1,0);
                      in_stack_00000040 = in_stack_00000000._4_8_;
                      uStack0000000000000054 = in_stack_00000018;
                      in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x30);
                      uStack0000000000000048 = in_stack_00000000._12_4_;
                      uStack0000000000000034 = *(undefined8 *)(unaff_x20 + 0x44);
                      uStack000000000000004c = uStack0000000000000010;
                      uStack0000000000000050 = uStack0000000000000014;
                      uStack0000000000000028 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
                      uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x20 + 0x3c);
                      uStack0000000000000030 =
                           (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x3c) >> 0x20);
                      if (*(long *)(unaff_x19 + 0x80) == 0) break;
                      FUN_05b5ed20(&stack0x00000020,&stack0x00000040,
                                   *(long *)(unaff_x19 + 0x80) + 0x14,0);
                      if (*(long *)(unaff_x19 + 0x50) == 0) break;
                      lVar9 = *(long *)(unaff_x19 + 0x80);
                      uVar15 = FUN_069e7708(*(long *)(unaff_x19 + 0x50),0);
                    }
                    if (lVar9 != 0) {
                      *(undefined4 *)(lVar9 + 0x60) = uVar15;
                      if (*(long *)(unaff_x19 + 0x80) != 0) {
                        *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
                        return;
                      }
                    }
                    break;
                  }
                  if (*(long *)(unaff_x19 + 0x80) == 0) break;
                  if (*(uint *)(lVar9 + 0x18) <= (uint)lVar10) goto LAB_05be59f0;
                  lVar9 = *(long *)(lVar9 + lVar10 * 8 + 0x20);
                  if (lVar9 == 0) break;
                  lVar13 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x38);
                  uVar15 = FUN_069e7314(lVar9,0);
                  if (lVar13 == 0) break;
                  lVar10 = lVar10 + 1;
                  if (*(uint *)(lVar13 + 0x18) <= (int)lVar10 - 1U) goto LAB_05be59f0;
                  lVar13 = lVar13 + lVar11;
                  lVar11 = lVar11 + 0x10;
                  *(undefined4 *)(lVar13 + 0x20) = uVar15;
                  *(int *)(lVar13 + 0x24) = (int)uVar8;
                  *(int *)(lVar13 + 0x28) = (int)uVar19;
                  *(undefined4 *)(lVar13 + 0x2c) = in_s3;
                  lVar9 = *(long *)(unaff_x19 + 0x68);
                } while (lVar9 != 0);
              }
            }
          }
          goto LAB_05be58ac;
        }
        goto LAB_05be59f0;
      }
      goto LAB_05be58ac;
    }
    if (lVar9 == 0) goto LAB_05be58ac;
  }
  lVar10 = *(long *)(lVar9 + 0x48);
  *(undefined1 *)(lVar9 + 0x12) = 0;
  *(undefined4 *)(lVar9 + 0x30) = 0;
  *(undefined4 *)(lVar9 + 0x80) = 0;
  *(undefined1 *)(lVar9 + 0x40) = 0;
  if (lVar10 != 0) {
    uVar1 = *(uint *)(lVar10 + 0x18);
    uVar8 = 0;
    while (uVar1 != uVar8) {
      *(undefined1 *)(lVar10 + 0x20 + uVar8) = 0;
      lVar11 = *(long *)(lVar9 + 0x50);
      if (lVar11 == 0) goto LAB_05be58ac;
      if (*(uint *)(lVar11 + 0x18) <= uVar8) break;
      lVar11 = lVar11 + uVar8;
      uVar8 = uVar8 + 1;
      *(undefined1 *)(lVar11 + 0x20) = 0;
      if (uVar8 == 5) {
        return;
      }
    }
LAB_05be59f0:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_05be58ac:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


