/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$UpdateTrackables
ENTRY_POINT: 08a48b4c
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__UpdateTrackables(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  char cVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  int *unaff_x19;
  long unaff_x20;
  long *plVar25;
  long *plVar26;
  long unaff_x22;
  long *plVar27;
  long unaff_x23;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  undefined4 in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000218;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xc40));
  FUN_04947ee4(PTR_DAT_0ac3f8b8);
  FUN_04947ee4(PTR_DAT_0ac42dc8);
  *(undefined1 *)(unaff_x20 + 0x488) = 1;
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  auVar8 = ZEXT816(0);
  in_stack_00000160 = 0;
  in_stack_00000168 = 0;
  auVar3 = ZEXT816(0);
  iVar1 = *unaff_x19;
  *(undefined8 *)(unaff_x22 + 0x57) = 0;
  *(undefined8 *)(unaff_x22 + 0x4f) = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  *(undefined8 *)(unaff_x22 + 0x27) = 0;
  *(undefined8 *)(unaff_x22 + 0x1f) = 0;
  puVar13 = PTR_DAT_0ac3f8b8;
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  in_stack_00000150 = 0;
  in_stack_00000128 = 0;
  if (iVar1 == 0) {
    _in_stack_00000170 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
LAB_08a48ecc:
    _in_stack_00000160 = auVar3;
    if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_086abc1c(&stack0x00000170,0);
    uVar20 = 0;
LAB_08a48eec:
    puVar13 = PTR_DAT_0ac4f028;
    *unaff_x19 = -2;
    FUN_0812771c(unaff_x19 + 2,uVar20,*(undefined8 *)puVar13);
  }
  else {
    plVar25 = *(long **)(unaff_x19 + 10);
    if (plVar25 == (long *)0x0) {
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      goto LAB_08a497a8;
    }
    lVar18 = FUN_08a4607c(plVar25,0);
    puVar14 = PTR_DAT_0ac4c7d8;
    auVar8._8_8_ = in_stack_00000178;
    auVar8._0_8_ = in_stack_00000170;
    auVar12._8_8_ = in_stack_00000178;
    auVar12._0_8_ = in_stack_00000170;
    auVar3._8_8_ = in_stack_00000168;
    auVar3._0_8_ = in_stack_00000160;
    auVar7._8_8_ = in_stack_00000168;
    auVar7._0_8_ = in_stack_00000160;
    if (lVar18 == 0) {
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      goto LAB_08a497a8;
    }
    plVar26 = *(long **)(lVar18 + 0x60);
    if (plVar26 == (long *)0x0) {
      auVar3 = auVar7;
      auVar8 = auVar12;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      goto LAB_08a497a8;
    }
    lVar18 = *plVar26;
    uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
          puVar19 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_08a48c38;
        }
        uVar23 = uVar23 - 1;
        piVar24 = piVar24 + 4;
      } while (uVar23 != 0);
    }
    puVar19 = (undefined8 *)FUN_04980e68(plVar26,*(long *)PTR_DAT_0ac4c7d8,0);
LAB_08a48c38:
    uVar23 = (*(code *)*puVar19)(plVar26,puVar19[1]);
    if ((uVar23 & 1) == 0) {
      if ((char)plVar25[0x1f] == '\0') {
        lVar18 = FUN_08a4607c(plVar25,0);
        auVar8._8_8_ = in_stack_00000178;
        auVar8._0_8_ = in_stack_00000170;
        auVar11._8_8_ = in_stack_00000178;
        auVar11._0_8_ = in_stack_00000170;
        auVar3._8_8_ = in_stack_00000168;
        auVar3._0_8_ = in_stack_00000160;
        auVar6._8_8_ = in_stack_00000168;
        auVar6._0_8_ = in_stack_00000160;
        if (lVar18 == 0) {
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          goto LAB_08a497a8;
        }
        plVar26 = *(long **)(lVar18 + 0x50);
        if (plVar26 == (long *)0x0) {
          auVar3 = auVar6;
          auVar8 = auVar11;
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          goto LAB_08a497a8;
        }
        lVar22 = *plVar26;
        lVar18 = *(long *)puVar14;
        uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar18) {
              puVar19 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_08a48d50;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)FUN_04980e68(plVar26,lVar18,0);
LAB_08a48d50:
        uVar23 = (*(code *)*puVar19)(plVar26,puVar19[1]);
        auVar8._8_8_ = in_stack_00000178;
        auVar8._0_8_ = in_stack_00000170;
        auVar3._8_8_ = in_stack_00000168;
        auVar3._0_8_ = in_stack_00000160;
        if ((uVar23 & 1) == 0) {
          plVar26 = (long *)plVar25[2];
          if (plVar26 == (long *)0x0) {
            if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            goto LAB_08a497a8;
          }
          lVar18 = *plVar26;
          uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
                puVar19 = (undefined8 *)(lVar18 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                goto LAB_08a48dc0;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar19 = (undefined8 *)FUN_04980e68(plVar26,*(long *)PTR_DAT_0ac4c9f0,2);
LAB_08a48dc0:
          uVar23 = (*(code *)*puVar19)(plVar26,puVar19[1]);
          if ((uVar23 & 1) == 0) goto LAB_08a48c48;
        }
        puVar13 = PTR_DAT_0ac4c9f0;
        auVar8._8_8_ = in_stack_00000178;
        auVar8._0_8_ = in_stack_00000170;
        auVar3._8_8_ = in_stack_00000168;
        auVar3._0_8_ = in_stack_00000160;
        if ((char)plVar25[0x1f] != '\0') goto LAB_08a48dd8;
        plVar26 = (long *)plVar25[2];
        if (plVar26 == (long *)0x0) {
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          goto LAB_08a497a8;
        }
        lVar18 = *plVar26;
        uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 08a48f58 with catch @ 08a48f74
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 08a48e84 with catch @ 08a48f78
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 08a48e20 with catch @ 08a48f7c
                        */
              puVar19 = (undefined8 *)(lVar18 + (long)(*piVar24 + 3) * 0x10 + 0x138);
              goto LAB_08a48f84;
            }
                    /* try { // try from 08a48e20 to 08b48e47 has its CatchHandler @ 08a48f7c */
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)FUN_04980e68(plVar26,*(long *)PTR_DAT_0ac4c9f0,3);
LAB_08a48f84:
        uVar28 = (*(code *)*puVar19)(plVar26,puVar19[1]);
                    /* try { // try from 08a48f98 to 08b48f9b has its CatchHandler @ 08a48fa4 */
        plVar26 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200))
        ;
                    /* catch() { ... } // from try @ 08a48f98 with catch @ 08a48fa4 */
                    /* try { // try from 08a48fa8 to 08b48faf has its CatchHandler @ 08a48fb8 */
                    /* try { // try from 08a48fb0 to 08b48fbb has its CatchHandler @ 08a48ce0 */
        lVar18 = FUN_08a4607c(plVar25,0);
        auVar8._8_8_ = in_stack_00000178;
        auVar8._0_8_ = in_stack_00000170;
        auVar10._8_8_ = in_stack_00000178;
        auVar10._0_8_ = in_stack_00000170;
        auVar3._8_8_ = in_stack_00000168;
        auVar3._0_8_ = in_stack_00000160;
        auVar5._8_8_ = in_stack_00000168;
        auVar5._0_8_ = in_stack_00000160;
        if (lVar18 == 0) {
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          goto LAB_08a497a8;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08a48fa8 with catch @ 08a48fb8
                        */
        if (plVar26 == (long *)0x0) {
          auVar3 = auVar5;
          auVar8 = auVar10;
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          goto LAB_08a497a8;
        }
        lVar22 = *plVar26;
        uVar29 = *(undefined4 *)(lVar18 + 0x2c);
        uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac534c0) {
              puVar19 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_08a49014;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)FUN_04980e68(plVar26,*(long *)PTR_DAT_0ac534c0,0);
LAB_08a49014:
        (*(code *)*puVar19)(&stack0x000000f0,uVar28,uVar29,plVar26,puVar19[1]);
        in_stack_000001a8 = in_stack_00000118;
        in_stack_000001a0 = in_stack_00000110;
        plVar25[0xb] = in_stack_000000f8;
        plVar25[10] = in_stack_000000f0;
        plVar25[0xd] = in_stack_00000108;
        plVar25[0xc] = in_stack_00000100;
        in_stack_00000188 = in_stack_000000f8;
        in_stack_00000180 = in_stack_000000f0;
        in_stack_00000198 = in_stack_00000108;
        in_stack_00000190 = in_stack_00000100;
        plVar25[0xf] = in_stack_00000118;
        plVar25[0xe] = in_stack_00000110;
        cVar21 = '\0';
        if ((char)plVar25[10] != '\0') {
          uVar20 = FUN_08a4607c(plVar25,0);
          puVar16 = PTR_DAT_0ac535c8;
          FUN_06fcbaf8(&stack0x00000180,plVar25 + 10,*(undefined8 *)PTR_DAT_0ac535c8);
          in_stack_000000e0 = in_stack_000001a0;
          in_stack_000000c8 = in_stack_00000188;
          in_stack_000000c0 = in_stack_00000180;
          in_stack_000000d8 = in_stack_00000198;
          in_stack_000000d0 = in_stack_00000190;
          FUN_08a47c48(&stack0x00000180,uVar20,&stack0x000000c0,0);
          puVar15 = PTR_DAT_0ac535c0;
          in_stack_000000f8 = in_stack_00000188;
          in_stack_000000f0 = in_stack_00000180;
          in_stack_00000108 = in_stack_00000198;
          in_stack_00000100 = in_stack_00000190;
          in_stack_00000110 = in_stack_000001a0;
          in_stack_00000198 = 0;
          in_stack_00000190 = 0;
          in_stack_000001a8 = 0;
          in_stack_000001a0 = 0;
          in_stack_00000188 = 0;
          in_stack_00000180 = 0;
          FUN_06fcbad0(&stack0x00000180,&stack0x000000f0,*(undefined8 *)PTR_DAT_0ac535c0);
          plVar25[0xf] = in_stack_000001a8;
          plVar25[0xe] = in_stack_000001a0;
          plVar25[0xb] = in_stack_00000188;
          plVar25[10] = in_stack_00000180;
          plVar25[0xd] = in_stack_00000198;
          plVar25[0xc] = in_stack_00000190;
          lVar18 = FUN_08a4607c(plVar25,0);
          auVar8._8_8_ = in_stack_00000178;
          auVar8._0_8_ = in_stack_00000170;
          auVar9._8_8_ = in_stack_00000178;
          auVar9._0_8_ = in_stack_00000170;
          auVar3._8_8_ = in_stack_00000168;
          auVar3._0_8_ = in_stack_00000160;
          auVar4._8_8_ = in_stack_00000168;
          auVar4._0_8_ = in_stack_00000160;
          if (lVar18 == 0) {
            if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            goto LAB_08a497a8;
          }
          plVar26 = *(long **)(lVar18 + 0x50);
          if (plVar26 == (long *)0x0) {
            auVar3 = auVar4;
            auVar8 = auVar9;
            if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
              FUN_0494818c();
            }
            goto LAB_08a497a8;
          }
          lVar22 = *plVar26;
          lVar18 = *(long *)puVar14;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar23 != 0) {
            piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar18) {
                puVar19 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_08a49140;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          puVar19 = (undefined8 *)FUN_04980e68(plVar26,lVar18,0);
LAB_08a49140:
          uVar23 = (*(code *)*puVar19)(plVar26,puVar19[1]);
          auVar8._8_8_ = in_stack_00000178;
          auVar8._0_8_ = in_stack_00000170;
          auVar3._8_8_ = in_stack_00000168;
          auVar3._0_8_ = in_stack_00000160;
          if ((uVar23 & 1) == 0) {
            plVar26 = (long *)plVar25[2];
            if (plVar26 == (long *)0x0) {
              if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
                FUN_0494818c();
              }
              goto LAB_08a497a8;
            }
            lVar22 = *plVar26;
            lVar18 = *(long *)puVar13;
            uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == lVar18) {
                  puVar19 = (undefined8 *)(lVar22 + (long)(*piVar24 + 6) * 0x10 + 0x138);
                  goto LAB_08a491a8;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar19 = (undefined8 *)FUN_04980e68(plVar26,lVar18,6);
LAB_08a491a8:
            uVar23 = (*(code *)*puVar19)(plVar26,puVar19[1]);
            if ((uVar23 & 1) != 0) {
              FUN_06fcbaf8(&stack0x00000180,plVar25 + 10,*(undefined8 *)puVar16);
              auVar8._8_8_ = in_stack_00000178;
              auVar8._0_8_ = in_stack_00000170;
              auVar3._8_8_ = in_stack_00000168;
              auVar3._0_8_ = in_stack_00000160;
              in_stack_000000b0 = in_stack_000001a0;
              in_stack_00000098 = in_stack_00000188;
              in_stack_00000090 = in_stack_00000180;
              in_stack_000000a8 = in_stack_00000198;
              in_stack_000000a0 = in_stack_00000190;
              if (plVar25[2] == 0) {
                if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
                  FUN_0494818c();
                }
                goto LAB_08a497a8;
              }
              FUN_04339328(5,*(undefined8 *)puVar13);
              in_stack_00000080 = in_stack_000000b0;
              in_stack_00000068 = in_stack_00000098;
              in_stack_00000060 = in_stack_00000090;
              in_stack_00000078 = in_stack_000000a8;
              in_stack_00000070 = in_stack_000000a0;
              FUN_08a47d80(&stack0x00000180,&stack0x00000060,0);
              in_stack_000000f8 = in_stack_00000188;
              in_stack_000000f0 = in_stack_00000180;
              in_stack_00000108 = in_stack_00000198;
              in_stack_00000100 = in_stack_00000190;
              in_stack_00000110 = in_stack_000001a0;
              in_stack_00000198 = 0;
              in_stack_00000190 = 0;
              in_stack_000001a8 = 0;
              in_stack_000001a0 = 0;
              in_stack_00000188 = 0;
              in_stack_00000180 = 0;
              FUN_06fcbad0(&stack0x00000180,&stack0x000000f0,*(undefined8 *)puVar15);
              plVar25[0xf] = in_stack_000001a8;
              plVar25[0xe] = in_stack_000001a0;
              plVar25[0xb] = in_stack_00000188;
              plVar25[10] = in_stack_00000180;
              plVar25[0xd] = in_stack_00000198;
              plVar25[0xc] = in_stack_00000190;
            }
          }
          cVar21 = '\0';
          if ((char)plVar25[10] == '\0') goto LAB_08a49374;
          in_stack_000001e8 = *(undefined8 *)((long)plVar25 + 0x59);
          in_stack_000001e0 = *(undefined8 *)((long)plVar25 + 0x51);
          lVar22 = plVar25[0xe];
          lVar18 = plVar25[4];
          in_stack_000001b8 = *(undefined8 *)((long)plVar25 + 0x29);
          in_stack_000001b0 = *(undefined8 *)((long)plVar25 + 0x21);
          in_stack_000001c8 = *(undefined8 *)((long)plVar25 + 0x39);
          in_stack_000001c0 = *(undefined8 *)((long)plVar25 + 0x31);
          *(long *)(unaff_x22 + 0x57) = plVar25[0xf];
          *(long *)(unaff_x22 + 0x4f) = lVar22;
          lVar22 = plVar25[8];
          *(long *)(unaff_x22 + 0x27) = plVar25[9];
          *(long *)(unaff_x22 + 0x1f) = lVar22;
          if ((char)lVar18 == '\0') {
LAB_08a492b8:
            FUN_06fcbaf8(&stack0x00000180,plVar25 + 10,*(undefined8 *)puVar16);
            in_stack_00000138 = in_stack_00000188;
            in_stack_00000130 = in_stack_00000180;
            in_stack_00000148 = in_stack_00000198;
            in_stack_00000140 = in_stack_00000190;
            in_stack_00000150 = in_stack_000001a0;
            (**(code **)(*plVar25 + 0x228))
                      (plVar25,&stack0x00000180,*(undefined8 *)(*plVar25 + 0x230));
            in_stack_00000188 = in_stack_00000138;
            in_stack_00000180 = in_stack_00000130;
            in_stack_00000198 = in_stack_00000148;
            in_stack_00000190 = in_stack_00000140;
            in_stack_000001a0 = in_stack_00000150;
            (**(code **)(*plVar25 + 0x238))
                      (plVar25,&stack0x00000180,*(undefined8 *)(*plVar25 + 0x240));
            in_stack_00000188 = in_stack_00000138;
            in_stack_00000180 = in_stack_00000130;
            in_stack_00000198 = in_stack_00000148;
            in_stack_00000190 = in_stack_00000140;
            in_stack_000001a0 = in_stack_00000150;
            (**(code **)(*plVar25 + 0x218))
                      (plVar25,&stack0x00000180,*(undefined8 *)(*plVar25 + 0x220));
            in_stack_00000188 = in_stack_00000138;
            in_stack_00000180 = in_stack_00000130;
            in_stack_00000198 = in_stack_00000148;
            in_stack_00000190 = in_stack_00000140;
            in_stack_000001a0 = in_stack_00000150;
            (**(code **)(*plVar25 + 0x248))
                      (plVar25,&stack0x00000180,*(undefined8 *)(*plVar25 + 0x250));
          }
          else {
            in_stack_00000038 = *(undefined8 *)(unaff_x22 + 0x3f);
            in_stack_00000030 = *(undefined8 *)(unaff_x22 + 0x37);
            in_stack_00000048 = *(undefined8 *)(unaff_x22 + 0x4f);
            in_stack_00000040 = *(undefined8 *)(unaff_x22 + 0x47);
            in_stack_00000050 = *(undefined8 *)(unaff_x22 + 0x57);
            in_stack_00000188 = *(long *)(unaff_x22 + 0xf);
            in_stack_00000180 = *(long *)(unaff_x22 + 7);
            in_stack_00000198 = *(long *)(unaff_x22 + 0x1f);
            in_stack_00000190 = *(long *)(unaff_x22 + 0x17);
            in_stack_000001a0 = *(long *)(unaff_x22 + 0x27);
            uVar23 = FUN_08a5f9ec(&stack0x00000030,&stack0x00000180);
            if ((uVar23 & 1) == 0) goto LAB_08a492b8;
          }
          cVar21 = (char)plVar25[10];
        }
LAB_08a49374:
        lVar18 = plVar25[4];
        in_stack_000001b8 = *(undefined8 *)((long)plVar25 + 0x59);
        in_stack_000001b0 = *(undefined8 *)((long)plVar25 + 0x51);
        in_stack_000001c8 = *(undefined8 *)((long)plVar25 + 0x69);
        in_stack_000001c0 = *(undefined8 *)((long)plVar25 + 0x61);
        lVar22 = plVar25[0xe];
        in_stack_000001e8 = *(undefined8 *)((long)plVar25 + 0x29);
        in_stack_000001e0 = *(undefined8 *)((long)plVar25 + 0x21);
        *(long *)(unaff_x22 + 0x27) = plVar25[0xf];
        *(long *)(unaff_x22 + 0x1f) = lVar22;
        lVar22 = plVar25[8];
        *(long *)(unaff_x22 + 0x57) = plVar25[9];
        *(long *)(unaff_x22 + 0x4f) = lVar22;
        if ((cVar21 != '\0') == ((char)lVar18 != '\0')) {
          if (cVar21 != '\0') {
            in_stack_00000188 = *(long *)(unaff_x22 + 0x3f);
            in_stack_00000180 = *(long *)(unaff_x22 + 0x37);
            in_stack_00000198 = *(long *)(unaff_x22 + 0x4f);
            in_stack_00000190 = *(long *)(unaff_x22 + 0x47);
            in_stack_000001a0 = *(long *)(unaff_x22 + 0x57);
            uVar23 = FUN_08a5f9ec();
            if ((uVar23 & 1) == 0) {
              cVar21 = (char)plVar25[10];
              goto LAB_08a493fc;
            }
          }
        }
        else {
LAB_08a493fc:
          if (cVar21 == '\0') {
            FUN_08a46c34(plVar25,0);
          }
        }
        puVar13 = PTR_DAT_0ac09b88;
        if (*(int *)(*(long *)PTR_DAT_0ac09b88 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar20 = FUN_08d59ac8(0);
        uVar20 = FUN_08d5b504(uVar20,plVar25[0x10],0);
        lVar18 = plVar25[0x15];
        if (*(int *)(*(long *)PTR_DAT_0ac09c40 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar17 = FUN_08d93644(uVar20,lVar18,0);
        if ((uVar17 & 1) != 0 || (char)plVar25[10] == '\0') {
          in_stack_00000188 = plVar25[0xb];
          in_stack_00000180 = plVar25[10];
          in_stack_00000198 = plVar25[0xd];
          in_stack_00000190 = plVar25[0xc];
          in_stack_000001a8 = plVar25[0xf];
          in_stack_000001a0 = plVar25[0xe];
          (**(code **)(*plVar25 + 0x208))
                    (plVar25,&stack0x00000180,*(undefined8 *)(*plVar25 + 0x210));
          if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          lVar18 = FUN_08d59ac8(0);
          plVar25[0x10] = lVar18;
        }
        plVar25[9] = plVar25[0xf];
        plVar25[8] = plVar25[0xe];
        plVar25[5] = plVar25[0xb];
        plVar25[4] = plVar25[10];
        plVar25[7] = plVar25[0xd];
        plVar25[6] = plVar25[0xc];
      }
      else {
LAB_08a48dd8:
        FUN_08a46ffc(plVar25,0);
      }
      uVar20 = 1;
      goto LAB_08a48eec;
    }
LAB_08a48c48:
    plVar26 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200));
    auVar8._8_8_ = in_stack_00000178;
    auVar8._0_8_ = in_stack_00000170;
    auVar3._8_8_ = in_stack_00000168;
    auVar3._0_8_ = in_stack_00000160;
    if (plVar26 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_0ac52c58 + 0x130);
      if ((bVar2 <= *(byte *)(*plVar26 + 0x130)) &&
         (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_0ac52c58)
         ) {
        plVar27 = (long *)plVar25[2];
        if (plVar27 == (long *)0x0) {
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          goto LAB_08a497a8;
        }
        lVar18 = *plVar27;
        uVar23 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
              puVar19 = (undefined8 *)(lVar18 + (long)(*piVar24 + 3) * 0x10 + 0x138);
              goto LAB_08a48e4c;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar19 = (undefined8 *)FUN_04980e68(plVar27,*(long *)PTR_DAT_0ac4c9f0,3);
                    /* try { // try from 08a48ce0 to 08b48e1f has its CatchHandler @ 08a48ce0
                       catch() { ... } // from try @ 08a48ce0 with catch @ 08a48ce0
                       catch() { ... } // from try @ 08a48eb8 with catch @ 08a48ce0
                       catch() { ... } // from try @ 08a48f60 with catch @ 08a48ce0
                       catch() { ... } // from try @ 08a48fb0 with catch @ 08a48ce0 */
LAB_08a48e4c:
        (*(code *)*puVar19)(plVar27,puVar19[1]);
        auVar8._8_8_ = in_stack_00000178;
        auVar8._0_8_ = in_stack_00000170;
        auVar3._8_8_ = in_stack_00000168;
        auVar3._0_8_ = in_stack_00000160;
        if (plVar26[2] == 0) {
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
          goto LAB_08a497a8;
        }
        FUN_08a4ccc4();
      }
    }
    _in_stack_00000160 =
         (**(code **)(*plVar25 + 0x1b8))
                   (plVar25,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(*plVar25 + 0x1c0));
                    /* try { // try from 08a48e84 to 08b48eaf has its CatchHandler @ 08a48f78 */
    if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
    }
    _in_stack_00000170 = FUN_08df3b4c(&stack0x00000160,0);
    lVar18 = *(long *)puVar13;
                    /* try { // try from 08a48eb0 to 08b48eb7 has its CatchHandler @ 08a48f6c */
    if (*(int *)(lVar18 + 0xe4) == 0) {
                    /* try { // try from 08a48eb8 to 08b48f57 has its CatchHandler @ 08a48ce0 */
      thunk_FUN_049a583c(lVar18);
    }
    uVar23 = FUN_086abadc(&stack0x00000170,0);
    auVar3 = _in_stack_00000160;
    if ((uVar23 & 1) != 0) goto LAB_08a48ecc;
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000170;
    thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
                    /* try { // try from 08a48f58 to 08b48f5b has its CatchHandler @ 08a48f74 */
                    /* try { // try from 08a48f5c to 08b48f5f has its CatchHandler @ 08a48f70 */
                    /* try { // try from 08a48f60 to 08b48f97 has its CatchHandler @ 08a48ce0 */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 08a48eb0 with catch @ 08a48f6c
                        */
    FUN_053c23a8(unaff_x19 + 2,&stack0x00000170);
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 08a48f5c with catch @ 08a48f70
                        */
  }
  auVar3 = _in_stack_00000160;
  auVar8 = _in_stack_00000170;
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000218) {
    return;
  }
LAB_08a497a8:
  _in_stack_00000160 = auVar3;
  _in_stack_00000170 = auVar8;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


