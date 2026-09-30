/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationController$$.ctor
ENTRY_POINT: 0637f1d4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] Meta_XR_MultiplayerBlocks_Shared_ColocationController___ctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iVar27;
  long lVar28;
  undefined1 unaff_w19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 auVar29 [16];
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
  
  auVar29._8_8_ = unaff_x28;
  auVar29._0_8_ = unaff_x29;
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x9e1) = unaff_w19;
  if ((*(long *)(unaff_x21 + 0x10) != 0) &&
     (lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0), lVar28 != 0)) {
    iVar27 = FUN_06366268(lVar28,0);
    if (iVar27 == 0) {
      return auVar29;
    }
    if ((((*(long *)(unaff_x21 + 0x10) != 0) &&
         (lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0), lVar28 != 0)) &&
        (lVar28 = *(long *)(lVar28 + 0x58), lVar28 != 0)) && (*(long *)(unaff_x21 + 0x10) != 0)) {
      uVar1 = *(undefined8 *)(lVar28 + 0x10);
      uVar14 = *(undefined8 *)(lVar28 + 0x18);
      lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
      if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x18), lVar28 != 0)) &&
         (*(long *)(unaff_x21 + 0x10) != 0)) {
        uVar2 = *(undefined8 *)(lVar28 + 0x10);
        uVar15 = *(undefined8 *)(lVar28 + 0x18);
        lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
        if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x60), lVar28 != 0)) &&
           (*(long *)(unaff_x21 + 0x10) != 0)) {
          uVar3 = *(undefined8 *)(lVar28 + 0x10);
          uVar16 = *(undefined8 *)(lVar28 + 0x18);
          lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
          if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x68), lVar28 != 0)) &&
             (*(long *)(unaff_x21 + 0x10) != 0)) {
            uVar4 = *(undefined8 *)(lVar28 + 0x10);
            uVar17 = *(undefined8 *)(lVar28 + 0x18);
            lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
            if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x90), lVar28 != 0)) &&
               (*(long *)(unaff_x21 + 0x10) != 0)) {
              uVar5 = *(undefined8 *)(lVar28 + 0x10);
              uVar18 = *(undefined8 *)(lVar28 + 0x18);
              lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
              if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x30), lVar28 != 0)) &&
                 (*(long *)(unaff_x21 + 0x10) != 0)) {
                uVar6 = *(undefined8 *)(lVar28 + 0x10);
                uVar19 = *(undefined8 *)(lVar28 + 0x18);
                lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x38), lVar28 != 0)) &&
                   (*(long *)(unaff_x21 + 0x10) != 0)) {
                  uVar7 = *(undefined8 *)(lVar28 + 0x10);
                  uVar20 = *(undefined8 *)(lVar28 + 0x18);
                  lVar28 = FUN_063178b4(*(long *)(unaff_x21 + 0x10),0);
                  if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x28), lVar28 != 0)) &&
                     (*(long *)(unaff_x21 + 0x10) != 0)) {
                    uVar8 = *(undefined8 *)(lVar28 + 0x10);
                    uVar21 = *(undefined8 *)(lVar28 + 0x18);
                    lVar28 = FUN_063178b4(*(long *)(unaff_x21 + 0x10),0);
                    if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x30), lVar28 != 0)) &&
                       (*(long *)(unaff_x21 + 0x10) != 0)) {
                      uVar9 = *(undefined8 *)(lVar28 + 0x10);
                      uVar22 = *(undefined8 *)(lVar28 + 0x18);
                      lVar28 = FUN_063178b4(*(long *)(unaff_x21 + 0x10),0);
                      if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x38), lVar28 != 0)) &&
                         (*(long *)(unaff_x21 + 0x10) != 0)) {
                        uVar10 = *(undefined8 *)(lVar28 + 0x10);
                        uVar23 = *(undefined8 *)(lVar28 + 0x18);
                        lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                        if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x80), lVar28 != 0)) &&
                           (*(long *)(unaff_x21 + 0x10) != 0)) {
                          uVar11 = *(undefined8 *)(lVar28 + 0x10);
                          uVar24 = *(undefined8 *)(lVar28 + 0x18);
                          lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                          if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x88), lVar28 != 0)) &&
                             (*(long *)(unaff_x21 + 0x10) != 0)) {
                            uVar12 = *(undefined8 *)(lVar28 + 0x10);
                            uVar25 = *(undefined8 *)(lVar28 + 0x18);
                            lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                            if (((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x78), lVar28 != 0))
                               && (*(long *)(unaff_x21 + 0x10) != 0)) {
                              uVar13 = *(undefined8 *)(lVar28 + 0x10);
                              uVar26 = *(undefined8 *)(lVar28 + 0x18);
                              lVar28 = FUN_06317920(*(long *)(unaff_x21 + 0x10),0);
                              if ((lVar28 != 0) && (*(long *)(lVar28 + 0x80) != 0)) {
                                in_stack_00000090 = uVar1;
                                in_stack_00000098 = uVar14;
                                in_stack_000000a0 = uVar2;
                                in_stack_000000a8 = uVar15;
                                in_stack_000000b0 = uVar3;
                                in_stack_000000b8 = uVar16;
                                in_stack_000000c0 = uVar4;
                                in_stack_000000c8 = uVar17;
                                in_stack_000000d0 = uVar5;
                                in_stack_000000d8 = uVar18;
                                in_stack_000000e0 = uVar6;
                                in_stack_000000e8 = uVar19;
                                in_stack_000000f0 = uVar7;
                                in_stack_000000f8 = uVar20;
                                in_stack_00000100 = uVar8;
                                in_stack_00000108 = uVar21;
                                in_stack_00000110 = uVar9;
                                in_stack_00000118 = uVar22;
                                in_stack_00000120 = uVar10;
                                in_stack_00000128 = uVar23;
                                in_stack_00000130 = uVar11;
                                in_stack_00000138 = uVar24;
                                in_stack_00000140 = uVar12;
                                in_stack_00000148 = uVar25;
                                in_stack_00000150 = uVar13;
                                in_stack_00000158 = uVar26;
                                auVar29 = FUN_0400511c(&stack0x00000090,
                                                       *(undefined4 *)
                                                        (*(long *)(lVar28 + 0x80) + 0x30),0x40,
                                                       unaff_x29);
                                return auVar29;
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


