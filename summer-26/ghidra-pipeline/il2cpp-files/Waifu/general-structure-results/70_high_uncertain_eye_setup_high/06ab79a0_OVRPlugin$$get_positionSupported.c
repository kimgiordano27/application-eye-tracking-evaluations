/*
FUNCTION_NAME: OVRPlugin$$get_positionSupported
ENTRY_POINT: 06ab79a0
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionSupported(void)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long in_x10;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
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
  
  puVar1 = (ulong *)(in_x10 + (unaff_x21 >> 0x12 & 0x7fff) * 8 + 0x46cb0);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 | 1L << (unaff_x21 >> 0xc & 0x3f);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((unaff_x20 == 0) || (lVar10 = *(long *)(unaff_x19 + 0x70), lVar10 == 0)) goto LAB_06ab7d2c;
  *(undefined1 *)(lVar10 + 0x10) = *(undefined1 *)(unaff_x20 + 0x10);
  cVar7 = *(char *)(unaff_x20 + 0x11);
  *(char *)(lVar10 + 0x11) = cVar7;
  if (cVar7 != '\0') {
    if (DAT_086ef170 == (code *)0x0) {
      DAT_086ef170 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_isActiveAndEnabled()");
    }
    uVar9 = (*DAT_086ef170)();
    lVar10 = *(long *)(unaff_x19 + 0x70);
    if ((uVar9 & 1) != 0) {
      if (lVar10 != 0) {
        uVar6 = *(undefined1 *)(unaff_x20 + 0x12);
        *(undefined1 *)(lVar10 + 0x40) = 1;
        *(undefined1 *)(lVar10 + 0x12) = uVar6;
        lVar11 = *(long *)(lVar10 + 0x50);
        *(undefined1 *)(lVar10 + 0x84) = *(undefined1 *)(unaff_x20 + 0x70);
        if (lVar11 == 0) goto LAB_06ab7d2c;
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 != 0) {
          fVar19 = *(float *)(unaff_x20 + 0x18);
          uVar9 = (ulong)(uint)fVar19;
          fVar15 = *(float *)(unaff_x20 + 0x1c);
          uVar3 = *(uint *)(unaff_x20 + 0x14);
          *(undefined1 *)(lVar11 + 0x20) = 1;
          lVar12 = *(long *)(lVar10 + 0x48);
          if (lVar12 != 0) {
            uVar4 = *(uint *)(lVar12 + 0x18);
            if (uVar4 == 0) goto LAB_06ab7d28;
            *(bool *)(lVar12 + 0x20) = (uVar3 & 0x30) != 0;
            lVar14 = *(long *)(lVar10 + 0x58);
            fVar20 = fVar19;
            if (fVar19 <= fVar15) {
              fVar20 = fVar15;
            }
            if (lVar14 != 0) {
              uVar5 = *(uint *)(lVar14 + 0x18);
              if (((((uVar5 == 0) || (*(float *)(lVar14 + 0x20) = fVar20, uVar2 < 2)) ||
                   (*(undefined1 *)(lVar11 + 0x21) = 1, uVar4 < 2)) ||
                  (((*(byte *)(lVar12 + 0x21) = (byte)(uVar3 >> 5) & 1, uVar5 < 2 ||
                    (*(float *)(lVar14 + 0x24) = fVar19, uVar2 < 3)) ||
                   ((*(undefined1 *)(lVar11 + 0x22) = 1, uVar4 < 3 ||
                    ((*(byte *)(lVar12 + 0x22) = (byte)(uVar3 >> 4) & 1, uVar5 < 3 ||
                     (*(float *)(lVar14 + 0x28) = fVar15, uVar2 < 4)))))))) ||
                 ((*(undefined1 *)(lVar11 + 0x23) = 1, uVar4 < 4 ||
                  ((((*(undefined1 *)(lVar12 + 0x23) = 0, uVar5 < 4 ||
                     (*(undefined4 *)(lVar14 + 0x2c) = 0, uVar2 < 5)) ||
                    (*(undefined1 *)(lVar11 + 0x24) = 1, uVar4 < 5)) ||
                   (*(undefined1 *)(lVar12 + 0x24) = 0, uVar5 < 5)))))) goto LAB_06ab7d28;
              *(undefined4 *)(lVar14 + 0x30) = 0;
              *(undefined4 *)(lVar10 + 0x80) = 2;
              uVar13 = *(undefined8 *)(unaff_x20 + 0x60);
              uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
              uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
              *(undefined4 *)(lVar10 + 0x7c) = *(undefined4 *)(unaff_x20 + 0x68);
              *(undefined8 *)(lVar10 + 0x74) = uVar13;
              *(undefined8 *)(lVar10 + 0x6c) = uVar18;
              *(undefined8 *)(lVar10 + 100) = uVar17;
              lVar10 = *(long *)(unaff_x19 + 0x60);
              if (lVar10 != 0) {
                lVar11 = 0;
                lVar12 = 0;
                do {
                  if ((int)*(uint *)(lVar10 + 0x18) <= (int)(uint)lVar11) {
                    if (*(char *)(unaff_x19 + 0x58) == '\0') {
                      lVar10 = *(long *)(unaff_x19 + 0x70);
                      FUN_06a5e4b0(*(undefined8 *)(unaff_x19 + 0x50),0,0);
                      in_stack_00000028 = uStack0000000000000008;
                      in_stack_00000020 = in_stack_00000000;
                      uStack0000000000000030 = uStack0000000000000010;
                      if (lVar10 == 0) break;
                      *(undefined8 *)(lVar10 + 0x28) = uStack0000000000000014;
                      *(ulong *)(lVar10 + 0x20) =
                           CONCAT44(uStack0000000000000010,uStack000000000000000c);
                      *(undefined8 *)(lVar10 + 0x1c) = _uStack0000000000000008;
                      *(undefined8 *)(lVar10 + 0x14) = in_stack_00000000;
                      if (*(long *)(unaff_x19 + 0x50) == 0) break;
                      lVar10 = *(long *)(unaff_x19 + 0x70);
                      uVar16 = FUN_07a1bb0c(*(long *)(unaff_x19 + 0x50),0);
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
                      FUN_06a70228(&stack0x00000040,&stack0x00000060,
                                   *(long *)(unaff_x19 + 0x70) + 0x14,0);
                      if (*(long *)(unaff_x19 + 0x50) == 0) break;
                      lVar10 = *(long *)(unaff_x19 + 0x70);
                      uVar16 = FUN_07a19780(*(long *)(unaff_x19 + 0x50),0);
                    }
                    if (lVar10 != 0) {
                      *(undefined4 *)(lVar10 + 0x60) = uVar16;
                      if (*(long *)(unaff_x19 + 0x70) != 0) {
                        *(undefined4 *)(*(long *)(unaff_x19 + 0x70) + 0x30) = 2;
                        return;
                      }
                    }
                    break;
                  }
                  if (*(long *)(unaff_x19 + 0x70) == 0) break;
                  if (*(uint *)(lVar10 + 0x18) <= (uint)lVar11) goto LAB_06ab7d28;
                  lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
                  if (lVar10 == 0) break;
                  lVar14 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x38);
                  uVar16 = FUN_07a191d0(lVar10,0);
                  if (lVar14 == 0) break;
                  lVar11 = lVar11 + 1;
                  if (*(uint *)(lVar14 + 0x18) <= (int)lVar11 - 1U) goto LAB_06ab7d28;
                  lVar14 = lVar14 + lVar12;
                  *(undefined4 *)(lVar14 + 0x20) = uVar16;
                  *(int *)(lVar14 + 0x24) = (int)uVar9;
                  *(float *)(lVar14 + 0x28) = fVar20;
                  *(undefined4 *)(lVar14 + 0x2c) = in_s3;
                  lVar10 = *(long *)(unaff_x19 + 0x60);
                  lVar12 = lVar12 + 0x10;
                } while (lVar10 != 0);
              }
            }
          }
          goto LAB_06ab7d2c;
        }
        goto LAB_06ab7d28;
      }
      goto LAB_06ab7d2c;
    }
    if (lVar10 == 0) goto LAB_06ab7d2c;
  }
  lVar11 = *(long *)(lVar10 + 0x48);
  *(undefined1 *)(lVar10 + 0x12) = 0;
  *(undefined4 *)(lVar10 + 0x30) = 0;
  *(undefined4 *)(lVar10 + 0x80) = 0;
  *(undefined1 *)(lVar10 + 0x40) = 0;
  if (lVar11 != 0) {
    uVar2 = *(uint *)(lVar11 + 0x18);
    uVar9 = 0;
    while (uVar2 != uVar9) {
      *(undefined1 *)(lVar11 + 0x20 + uVar9) = 0;
      lVar12 = *(long *)(lVar10 + 0x50);
      if (lVar12 == 0) goto LAB_06ab7d2c;
      if (*(uint *)(lVar12 + 0x18) <= uVar9) break;
      lVar12 = lVar12 + uVar9;
      uVar9 = uVar9 + 1;
      *(undefined1 *)(lVar12 + 0x20) = 0;
      if (uVar9 == 5) {
        return;
      }
    }
LAB_06ab7d28:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
LAB_06ab7d2c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


