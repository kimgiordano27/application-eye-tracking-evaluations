/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnSceneAnchorAdded
ENTRY_POINT: 07721d14
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUK__OnSceneAnchorAdded(float param_1,undefined1 *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *plVar10;
  long unaff_x26;
  long lVar11;
  float unaff_s8;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  float fStack0000000000000024;
  long in_stack_00000028;
  
code_r0x07721d14:
  fStack0000000000000024 = param_1 / (float)in_w8;
  uVar8 = FUN_07a5081c(param_2,0);
  if (1 < *(uint *)(unaff_x26 + 0x18)) {
    *(undefined8 *)(unaff_x26 + 0x28) = uVar8;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x28),uVar8);
    if (2 < *(uint *)(unaff_x26 + 0x18)) {
      *(undefined8 *)(unaff_x26 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
      thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x30));
      in_stack_00000020 = *(undefined4 *)(unaff_x23 + 0x18);
      uVar8 = FUN_07a3b850(&stack0x00000020,0);
      if (3 < *(uint *)(unaff_x26 + 0x18)) {
        *(undefined8 *)(unaff_x26 + 0x38) = uVar8;
        thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x38),uVar8);
        if (4 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined8 *)(unaff_x26 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
          thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x40));
          in_stack_00000020 = FUN_063095a0();
          uVar8 = FUN_07a3b850(&stack0x00000020,0);
          if (5 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined8 *)(unaff_x26 + 0x48) = uVar8;
            thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x48),uVar8);
            if (6 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined8 *)(unaff_x26 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
              thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x50));
              uVar8 = FUN_07a3c8f0(&stack0x00000028,0);
              if (7 < *(uint *)(unaff_x26 + 0x18)) {
                *(undefined8 *)(unaff_x26 + 0x58) = uVar8;
                thunk_FUN_044bb4b4();
                uVar8 = FUN_078b57fc(unaff_x26,0);
                if (*(long *)(unaff_x19 + 0x10) != 0) {
                  iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
                  bVar2 = (**(code **)(unaff_x20 + 0x18))
                                    ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) / (float)iVar3,
                                     *(undefined8 *)(unaff_x20 + 0x40),uVar8,
                                     *(undefined8 *)(unaff_x20 + 0x28));
                  *(byte *)(unaff_x19 + 0x20) = bVar2 & 1;
LAB_07721ea8:
                  unaff_w22 = unaff_w22 + 1;
                  if (*(int *)(unaff_x23 + 0x18) < 2) goto LAB_07721eb8;
                  if (unaff_x24 == 0) goto LAB_07721330;
                  iVar3 = FUN_063095a0();
                  if (iVar3 == 0) {
                    if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    in_stack_00000028 = FUN_07a76eac(0,0);
                    in_stack_00000028 = in_stack_00000028 / 1000000;
                    if (unaff_x20 != 0) {
                      lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
                      if (lVar4 == 0) goto LAB_07721330;
                      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07721f20;
                      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_09f310a0;
                      thunk_FUN_044bb4b4();
                      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
                      iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
                      fStack0000000000000024 =
                           ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) * 100.0) / (float)iVar3;
                      uVar8 = FUN_07a5081c(&stack0x00000024,0);
                      if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_07721f20;
                      *(undefined8 *)(lVar4 + 0x28) = uVar8;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28),uVar8);
                      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_07721f20;
                      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x30));
                      in_stack_00000020 = *(undefined4 *)(unaff_x23 + 0x18);
                      uVar8 = FUN_07a3b850(&stack0x00000020,0);
                      if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_07721f20;
                      *(undefined8 *)(lVar4 + 0x38) = uVar8;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x38),uVar8);
                      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_07721f20;
                      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x40));
                      in_stack_00000020 = FUN_063095a0();
                      uVar8 = FUN_07a3b850(&stack0x00000020,0);
                      if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_07721f20;
                      *(undefined8 *)(lVar4 + 0x48) = uVar8;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x48),uVar8);
                      if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_07721f20;
                      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
                      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x50));
                      uVar8 = FUN_07a3c8f0(&stack0x00000028,0);
                      if (*(uint *)(lVar4 + 0x18) < 8) goto LAB_07721f20;
                      *(undefined8 *)(lVar4 + 0x58) = uVar8;
                      thunk_FUN_044bb4b4();
                      uVar8 = FUN_078b57fc(lVar4,0);
                      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
                      iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
                      bVar2 = (**(code **)(unaff_x20 + 0x18))
                                        ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) / (float)iVar3,
                                         *(undefined8 *)(unaff_x20 + 0x40),uVar8,
                                         *(undefined8 *)(unaff_x20 + 0x28));
                      *(byte *)(unaff_x19 + 0x20) = bVar2 & 1;
                    }
                    unaff_s8 = (float)FUN_07721ffc();
                    iVar3 = FUN_063095a0();
                    if (iVar3 == 0) goto LAB_07721eb8;
                  }
                  auVar15 = FUN_06308c30();
                  if (auVar15._8_8_ != 0) {
                    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
                    do {
                      lVar9 = auVar15._8_8_;
                      lVar4 = *(long *)(lVar9 + 0x10);
                      if (lVar4 == 0) break;
                      if (*(char *)(lVar4 + 0x4c) != '\0') {
                        lVar11 = *(long *)(lVar9 + 0x18);
                        if (lVar11 == 0) break;
                        if (*(char *)(lVar11 + 0x4c) != '\0') goto LAB_07721a08;
                      }
                      iVar3 = FUN_063095a0();
                      if (iVar3 == 0) {
                        if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                        }
                        in_stack_00000028 = FUN_07a76eac(0,0);
                        in_stack_00000028 = in_stack_00000028 / 1000000;
                        if (unaff_x20 != 0) {
                          lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
                          if (lVar4 == 0) break;
                          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07721f20;
                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_09f310b8;
                          thunk_FUN_044bb4b4();
                          if (*(long *)(unaff_x19 + 0x10) == 0) break;
                          iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
                          fStack0000000000000024 =
                               ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) * 100.0) / (float)iVar3;
                          uVar8 = FUN_07a5081c(&stack0x00000024,0);
                          if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_07721f20;
                          *(undefined8 *)(lVar4 + 0x28) = uVar8;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28),uVar8);
                          if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_07721f20;
                          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x30));
                          in_stack_00000020 = *(undefined4 *)(unaff_x23 + 0x18);
                          uVar8 = FUN_07a3b850(&stack0x00000020,0);
                          if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_07721f20;
                          *(undefined8 *)(lVar4 + 0x38) = uVar8;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x38),uVar8);
                          if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_07721f20;
                          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x40));
                          in_stack_00000020 = FUN_063095a0();
                          uVar8 = FUN_07a3b850(&stack0x00000020,0);
                          if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_07721f20;
                          *(undefined8 *)(lVar4 + 0x48) = uVar8;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x48),uVar8);
                          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_07721f20;
                          *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
                          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x50));
                          uVar8 = FUN_07a3c8f0(&stack0x00000028,0);
                          if (*(uint *)(lVar4 + 0x18) < 8) goto LAB_07721f20;
                          *(undefined8 *)(lVar4 + 0x58) = uVar8;
                          thunk_FUN_044bb4b4();
                          uVar8 = FUN_078b57fc(lVar4,0);
                          if (*(long *)(unaff_x19 + 0x10) == 0) break;
                          iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
                          bVar2 = (**(code **)(unaff_x20 + 0x18))
                                            ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) /
                                             (float)iVar3,*(undefined8 *)(unaff_x20 + 0x40),uVar8,
                                             *(undefined8 *)(unaff_x20 + 0x28));
                          *(byte *)(unaff_x19 + 0x20) = bVar2 & 1;
                        }
                        unaff_s8 = (float)FUN_07721ffc();
                        iVar3 = FUN_063095a0();
                        if (iVar3 == 0) goto LAB_07721a04;
                      }
                      auVar15 = FUN_06308c30();
                      if (auVar15._8_8_ == 0) break;
                    } while( true );
                  }
                }
                goto LAB_07721330;
              }
            }
          }
        }
      }
    }
  }
LAB_07721f20:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
LAB_07721a04:
  lVar4 = *(long *)(lVar9 + 0x10);
  lVar11 = *(long *)(lVar9 + 0x18);
LAB_07721a08:
  uVar8 = *in_stack_00000000;
  lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30ff8);
  FUN_07722420(auVar15._0_8_ & 0xffffffff,lVar5,lVar4,lVar11,unaff_w22,in_stack_00000008._4_4_,uVar8
              );
  FUN_05baf38c();
  FUN_05baf38c();
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_07721330;
  *(undefined1 *)(*(long *)(lVar9 + 0x10) + 0x4c) = 0;
  if (*(long *)(lVar9 + 0x18) == 0) goto LAB_07721330;
  *(undefined1 *)(*(long *)(lVar9 + 0x18) + 0x4c) = 0;
  plVar10 = (long *)*in_stack_00000000;
  if (plVar10 == (long *)0x0) goto LAB_07721330;
  if (unaff_w22 == *(uint *)(plVar10 + 3)) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31088,0);
    plVar10 = (long *)*in_stack_00000000;
    if (plVar10 == (long *)0x0) goto LAB_07721330;
  }
  if ((lVar5 != 0) &&
     (lVar4 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar4 == 0)) {
    uVar8 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar8,0);
  }
  if (*(uint *)(plVar10 + 3) <= unaff_w22) goto LAB_07721f20;
  plVar10[(long)(int)unaff_w22 + 4] = lVar5;
  thunk_FUN_044bb4b4(plVar10 + (long)(int)unaff_w22 + 4,lVar5);
  lVar4 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar4 == 0) goto LAB_07721330;
  uVar1 = *(uint *)(unaff_x23 + 0x18);
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
    plVar10 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    *plVar10 = lVar5;
    thunk_FUN_044bb4b4(plVar10,lVar5);
  }
  else {
    FUN_05bade44();
  }
  if (lVar5 == 0) goto LAB_07721330;
  *(undefined1 *)(lVar5 + 0x4c) = 1;
  if (0 < *(int *)(unaff_x23 + 0x18) + -1) {
    iVar3 = 0;
    do {
      uVar12 = *(undefined4 *)(lVar5 + 0x30);
      uVar13 = *(undefined4 *)(lVar5 + 0x34);
      uVar14 = *(undefined4 *)(lVar5 + 0x38);
      lVar4 = FUN_05badb74();
      if (lVar4 == 0) goto LAB_07721330;
      uVar8 = FUN_07720fc4(uVar12,uVar13,uVar14,*(undefined4 *)(lVar4 + 0x30),
                           *(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x38));
      if ((float)uVar8 < unaff_s8) {
        uVar6 = FUN_05badb74();
        uVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30fe8);
        FUN_0772260c(uVar7,lVar5,uVar6);
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        FUN_059011e8(uVar8,&stack0x00000010,uVar7,*(undefined8 *)PTR_DAT_09f31000);
        FUN_063093d4();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_x23 + 0x18) + -1);
  }
  if (*(char *)(unaff_x19 + 0x20) != '\0') {
LAB_07721eb8:
    if (unaff_x20 == 0) {
      bVar2 = *(byte *)(unaff_x19 + 0x20);
    }
    else {
      bVar2 = (**(code **)(unaff_x20 + 0x18))
                        (0x42c80000,*(undefined8 *)(unaff_x20 + 0x40),
                         *(undefined8 *)PTR_DAT_09f31090,*(undefined8 *)(unaff_x20 + 0x28));
      bVar2 = bVar2 & 1;
      *(byte *)(unaff_x19 + 0x20) = bVar2;
    }
    return bVar2 == 0;
  }
  if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  in_stack_00000028 = FUN_07a76eac(0,0);
  in_stack_00000028 = in_stack_00000028 / 1000000;
  if (unaff_x20 != 0) goto code_r0x07721cb0;
  goto LAB_07721ea8;
code_r0x07721cb0:
  unaff_x26 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
  if (unaff_x26 != 0) {
    if (*(int *)(unaff_x26 + 0x18) == 0) goto LAB_07721f20;
    *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)PTR_DAT_09f310b8;
    thunk_FUN_044bb4b4();
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      in_w8 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      param_2 = (undefined1 *)&stack0x00000024;
      param_1 = (float)(in_w8 - *(int *)(unaff_x23 + 0x18)) * 100.0;
      goto code_r0x07721d14;
    }
  }
LAB_07721330:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


