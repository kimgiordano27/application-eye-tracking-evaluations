/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$IsPositionInVolume
ENTRY_POINT: 07732bc0
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


void Meta_XR_MRUtilityKit_MRUKAnchor__IsPositionInVolume(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  int unaff_w29;
  ulong unaff_d8;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  int iStack0000000000000058;
  int iStack000000000000005c;
  undefined8 in_stack_00000070;
  
  do {
    FUN_07a612b4(param_1,0);
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07a612b4(*(long *)(unaff_x19 + 0x28),0);
    if ((int)unaff_x26 == 0) {
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,7);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar4 + 0x20) = unaff_x20;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x20),unaff_x20);
      if (*(long *)(unaff_x21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar5 = thunk_FUN_0952ff6c(*(long *)(unaff_x21 + 0x18),0);
      if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar4 + 0x28) = uVar5;
      thunk_FUN_044bb4b4();
      if (*(uint *)(lVar4 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09f1e7d0;
      thunk_FUN_044bb4b4();
      uVar5 = FUN_07a3b850((long)&stack0x00000058 + 4,0);
      if (*(uint *)(lVar4 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar4 + 0x38) = uVar5;
      thunk_FUN_044bb4b4();
      if (*(uint *)(lVar4 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09f215a0;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      iStack0000000000000058 = iStack000000000000005c + *(int *)(*(long *)(unaff_x19 + 0x18) + 0x18)
      ;
      uVar5 = FUN_07a3b850(&stack0x00000058,0);
      if (*(uint *)(lVar4 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar4 + 0x48) = uVar5;
      thunk_FUN_044bb4b4();
      if (*(uint *)(lVar4 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_09f21278;
      thunk_FUN_044bb4b4();
      unaff_x20 = FUN_078b57fc(lVar4,0);
    }
    unaff_w29 = unaff_w29 + 1;
    if (*(int *)(unaff_x28 + 0x18) <= unaff_w29) {
      do {
        FUN_077203f8(unaff_d8,in_stack_00000018,in_stack_00000030);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_07731e0c();
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_07731e0c();
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_07731e0c();
        uVar7 = (int)unaff_x26 + 1;
        if (uVar7 == in_stack_00000028._4_4_) {
          do {
            if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            plVar9 = *(long **)(*(long *)(in_stack_00000038 + 0x10) + 0x1a0);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar4 = thunk_FUN_04485110(in_stack_00000020,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar4 == 0) {
              uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
              FUN_04447d10(uVar5,0);
            }
            if (*(uint *)(plVar9 + 3) <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            plVar9[(long)(int)in_stack_00000008._4_4_ + 4] = in_stack_00000020;
            thunk_FUN_044bb4b4(plVar9 + (long)(int)in_stack_00000008._4_4_ + 4,in_stack_00000020);
            in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
            uVar3 = FUN_05260c20(&stack0x00000060,*(undefined8 *)PTR_DAT_09f31840);
            if ((uVar3 & 1) == 0) {
              FUN_05260c1c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f31838);
              puVar2 = PTR_DAT_09f31428;
              if (in_stack_00000000 == (long *)0x0) goto LAB_07732994;
              bVar1 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
              if ((bVar1 <= *(byte *)(*in_stack_00000000 + 0x130)) &&
                 (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)PTR_DAT_09f31428)) {
                FUN_094edf40(in_stack_00000000,0,0);
                bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                if ((bVar1 <= *(byte *)(*in_stack_00000000 + 0x130)) &&
                   (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)puVar2)) {
                  FUN_094edf40(in_stack_00000000,in_stack_00000018,0);
                  if ((*(long *)(in_stack_00000038 + 0x10) == 0) ||
                     (plVar9 = (long *)FUN_07715da0(*(long *)(in_stack_00000038 + 0x10),0),
                     plVar9 == (long *)0x0)) goto LAB_07732994;
                  lVar4 = *plVar9;
                  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar3 == 0) goto LAB_077330a0;
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  goto LAB_07733088;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_044481e4(in_stack_00000000);
            }
            in_stack_00000030 = in_stack_00000070;
            unaff_x28 = FUN_0744290c(in_stack_00000010,in_stack_00000070,
                                     *(undefined8 *)PTR_DAT_09f31820);
            if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            in_stack_00000020 = FUN_05badb74(unaff_x28,0,*unaff_x27);
            if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar4 = *(long *)(in_stack_00000020 + 0x30);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            in_stack_00000028._4_4_ = *(uint *)(lVar4 + 0x18);
          } while ((int)in_stack_00000028._4_4_ < 1);
          unaff_x20 = *(undefined8 *)PTR_DAT_09f1e7e8;
          uVar7 = 0;
        }
        else {
          lVar4 = *(long *)(in_stack_00000020 + 0x30);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        unaff_x26 = (long)(int)uVar7;
        lVar4 = *(long *)(lVar4 + unaff_x26 * 8 + 0x20);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        unaff_d8 = (ulong)*(uint *)(lVar4 + 0x10);
      } while (*(int *)(unaff_x28 + 0x18) < 1);
      unaff_w29 = 0;
    }
    unaff_x21 = FUN_05badb74(unaff_x28,unaff_w29,*unaff_x27);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar4 = FUN_07726ac8(*(long *)(in_stack_00000038 + 0x10),*(undefined8 *)(unaff_x21 + 0x18));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iStack000000000000005c = *(int *)(lVar4 + 0x28);
    lVar4 = *(long *)(unaff_x21 + 0x30);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    unaff_x19 = *(long *)(lVar4 + unaff_x26 * 8 + 0x20);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07a612b4(*(long *)(unaff_x19 + 0x18),0);
    param_1 = *(long *)(unaff_x19 + 0x20);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_07733088:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto Meta_XR_MRUtilityKit_MRUKAnchor__HasLabel;
    }
  }
LAB_077330a0:
  puVar6 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f30ab8,0);
Meta_XR_MRUtilityKit_MRUKAnchor__HasLabel:
  uVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = FUN_04c6bfdc(in_stack_00000000,*(undefined8 *)PTR_DAT_09f317e8);
  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
  }
  uVar3 = FUN_0952c404(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_095259a0(in_stack_00000000,0);
    if (lVar4 == 0) goto LAB_07732994;
    lVar4 = FUN_04d7a120(lVar4,*(undefined8 *)PTR_DAT_09f317f0);
  }
  if (lVar4 != 0) {
    uVar5 = FUN_0775d4bc(lVar4,0);
    lVar4 = *(long *)(in_stack_00000038 + 0x10);
    if (lVar4 != 0) {
      FUN_07731ebc(lVar4,uVar5,*(undefined8 *)(lVar4 + 0x1a0));
      return;
    }
  }
LAB_07732994:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


