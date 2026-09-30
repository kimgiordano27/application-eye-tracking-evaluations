/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetBoundsFaceCenters
ENTRY_POINT: 07732820
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


void Meta_XR_MRUtilityKit_MRUKAnchor__GetBoundsFaceCenters(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  ulong unaff_x19;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  int iVar17;
  long *unaff_x29;
  undefined4 uVar18;
  long *in_stack_00000000;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  int iStack0000000000000058;
  int iStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000088;
  
  while( true ) {
    uVar11 = (uint)*(undefined8 *)(param_1 + 0x18);
    if ((int)uVar11 <= (int)(uint)unaff_x26) break;
    if (uVar11 <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar15 = *(long *)(param_1 + unaff_x26 * 8 + 0x20);
    if ((lVar15 == 0) ||
       (uVar4 = FUN_07731dc8(*(undefined8 *)(lVar15 + 0x20)), in_stack_00000010 == 0))
    goto LAB_07732994;
    uVar5 = FUN_074444a8(in_stack_00000010,uVar4,&stack0x00000088,*unaff_x28);
    if ((uVar5 & 1) == 0) {
      lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f31880);
      FUN_05bad610(lVar6,*(undefined8 *)PTR_DAT_09f31868);
      in_stack_00000088 = lVar6;
      FUN_0744298c(in_stack_00000010,uVar4,lVar6,*(undefined8 *)PTR_DAT_09f31808);
    }
    if (in_stack_00000088 == 0) goto LAB_07732994;
    lVar6 = *(long *)(in_stack_00000088 + 0x10);
    lVar13 = *unaff_x29;
    *(int *)(in_stack_00000088 + 0x1c) = *(int *)(in_stack_00000088 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_07732994;
    uVar11 = *(uint *)(in_stack_00000088 + 0x18);
    if (uVar11 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(in_stack_00000088 + 0x18) = uVar11 + 1;
      plVar10 = (long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
      *plVar10 = lVar15;
      thunk_FUN_044bb4b4(plVar10,lVar15);
    }
    else {
      FUN_05bade44(in_stack_00000088,lVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    if (in_stack_00000088 == 0) goto LAB_07732994;
    if (1 < *(int *)(in_stack_00000088 + 0x18)) {
      lVar6 = FUN_05badb74(in_stack_00000088,0,*unaff_x27);
      if (((lVar6 == 0) || (*(long *)(lVar6 + 0x30) == 0)) || (*(long *)(lVar15 + 0x30) == 0))
      goto LAB_07732994;
      if (*(int *)(*(long *)(lVar6 + 0x30) + 0x18) != *(int *)(*(long *)(lVar15 + 0x30) + 0x18)) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31888,0);
        unaff_x19 = 1;
      }
    }
    unaff_x26 = unaff_x26 + 1;
    param_1 = *(long *)(in_stack_00000038 + 0x18);
    if (param_1 == 0) goto LAB_07732994;
  }
  if ((unaff_x19 & 1) != 0) {
    return;
  }
  lVar15 = *(long *)(in_stack_00000038 + 0x10);
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x1a0) != 0)) {
    if (*(uint *)(*(long *)(lVar15 + 0x1a0) + 0x18) == uVar11) {
      if (in_stack_00000010 == 0) goto LAB_07732994;
    }
    else {
      if ((in_stack_00000010 == 0) ||
         (lVar6 = FUN_0744266c(in_stack_00000010,*(undefined8 *)PTR_DAT_09f31828), lVar6 == 0))
      goto LAB_07732994;
      uVar18 = System_Collections_Generic_List<OVRTask<OVRAnchor>>__BinarySearch
                         (lVar6,*(undefined8 *)PTR_DAT_09f31858);
      uVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31668,uVar18);
      *(undefined8 *)(lVar15 + 0x1a0) = uVar4;
      thunk_FUN_044bb4b4((undefined8 *)(lVar15 + 0x1a0),uVar4);
    }
    lVar15 = FUN_0744266c(in_stack_00000010,*(undefined8 *)PTR_DAT_09f31828);
    if (lVar15 != 0) {
      FUN_058cf098(&stack0x00000040,lVar15,*(undefined8 *)PTR_DAT_09f31850);
      uVar11 = 0;
      in_stack_00000068 = in_stack_00000048;
      in_stack_00000060 = in_stack_00000040;
      in_stack_00000070 = in_stack_00000050;
      while (uVar5 = FUN_05260c20(&stack0x00000060,*(undefined8 *)PTR_DAT_09f31840),
            uVar4 = in_stack_00000070, (uVar5 & 1) != 0) {
        lVar15 = FUN_0744290c(in_stack_00000010,in_stack_00000070,*(undefined8 *)PTR_DAT_09f31820);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar6 = FUN_05badb74(lVar15,0,*unaff_x27);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar13 = *(long *)(lVar6 + 0x30);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (0 < (int)uVar1) {
          uVar16 = *(undefined8 *)PTR_DAT_09f1e7e8;
          uVar12 = 0;
          while( true ) {
            if (*(uint *)(lVar13 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            lVar13 = *(long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = *(undefined4 *)(lVar13 + 0x10);
            if (0 < *(int *)(lVar15 + 0x18)) {
              iVar17 = 0;
              do {
                lVar13 = FUN_05badb74(lVar15,iVar17,*unaff_x27);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                lVar7 = FUN_07726ac8(*(long *)(in_stack_00000038 + 0x10),
                                     *(undefined8 *)(lVar13 + 0x18));
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                iStack000000000000005c = *(int *)(lVar7 + 0x28);
                lVar7 = *(long *)(lVar13 + 0x30);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(uint *)(lVar7 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                lVar7 = *(long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_07a612b4(*(long *)(lVar7 + 0x18),0);
                if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_07a612b4(*(long *)(lVar7 + 0x20),0);
                if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_07a612b4(*(long *)(lVar7 + 0x28),0);
                if (uVar12 == 0) {
                  if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,7);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  *(undefined8 *)(lVar8 + 0x20) = uVar16;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x20),uVar16);
                  if (*(long *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  uVar16 = thunk_FUN_0952ff6c(*(long *)(lVar13 + 0x18),0);
                  if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  *(undefined8 *)(lVar8 + 0x28) = uVar16;
                  thunk_FUN_044bb4b4();
                  if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_09f1e7d0;
                  thunk_FUN_044bb4b4();
                  uVar16 = FUN_07a3b850((long)&stack0x00000058 + 4,0);
                  if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  *(undefined8 *)(lVar8 + 0x38) = uVar16;
                  thunk_FUN_044bb4b4();
                  if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_09f215a0;
                  thunk_FUN_044bb4b4();
                  if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  iStack0000000000000058 =
                       iStack000000000000005c + *(int *)(*(long *)(lVar7 + 0x18) + 0x18);
                  uVar16 = FUN_07a3b850(&stack0x00000058,0);
                  if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  *(undefined8 *)(lVar8 + 0x48) = uVar16;
                  thunk_FUN_044bb4b4();
                  if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e4c();
                  }
                  *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_DAT_09f21278;
                  thunk_FUN_044bb4b4();
                  uVar16 = FUN_078b57fc(lVar8,0);
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 < *(int *)(lVar15 + 0x18));
            }
            FUN_077203f8(uVar18,in_stack_00000018,uVar4);
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
            uVar12 = uVar12 + 1;
            if (uVar12 == uVar1) break;
            lVar13 = *(long *)(lVar6 + 0x30);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
          }
        }
        if (*(long *)(in_stack_00000038 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar10 = *(long **)(*(long *)(in_stack_00000038 + 0x10) + 0x1a0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar15 = thunk_FUN_04485110(lVar6,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar15 == 0) {
          uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar4,0);
        }
        if (*(uint *)(plVar10 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        plVar10[(long)(int)uVar11 + 4] = lVar6;
        thunk_FUN_044bb4b4(plVar10 + (long)(int)uVar11 + 4,lVar6);
        uVar11 = uVar11 + 1;
      }
      FUN_05260c1c(&stack0x00000060,*(undefined8 *)PTR_DAT_09f31838);
      puVar3 = PTR_DAT_09f31428;
      if (in_stack_00000000 == (long *)0x0) goto LAB_07732994;
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
      if ((*(byte *)(*in_stack_00000000 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)PTR_DAT_09f31428)) {
LAB_0773318c:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(in_stack_00000000);
      }
      FUN_094edf40(in_stack_00000000,0,0);
      bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*in_stack_00000000 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)
         ) goto LAB_0773318c;
      FUN_094edf40(in_stack_00000000,in_stack_00000018,0);
      if ((*(long *)(in_stack_00000038 + 0x10) == 0) ||
         (plVar10 = (long *)FUN_07715da0(*(long *)(in_stack_00000038 + 0x10),0),
         plVar10 == (long *)0x0)) goto LAB_07732994;
      lVar15 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar5 == 0) {
LAB_077330a0:
        puVar9 = (undefined8 *)FUN_044822ac(plVar10,*(long *)PTR_DAT_09f30ab8,0);
      }
      else {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        while (*(long *)(piVar14 + -2) != *(long *)PTR_DAT_09f30ab8) {
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
          if (uVar5 == 0) goto LAB_077330a0;
        }
        puVar9 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
      }
      uVar5 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar15 = FUN_04c6bfdc(in_stack_00000000,*(undefined8 *)PTR_DAT_09f317e8);
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar5 = FUN_0952c404(lVar15,0,0);
      if ((uVar5 & 1) != 0) {
        lVar15 = FUN_095259a0(in_stack_00000000,0);
        if (lVar15 == 0) goto LAB_07732994;
        lVar15 = FUN_04d7a120(lVar15,*(undefined8 *)PTR_DAT_09f317f0);
      }
      if (lVar15 != 0) {
        uVar4 = FUN_0775d4bc(lVar15,0);
        lVar15 = *(long *)(in_stack_00000038 + 0x10);
        if (lVar15 != 0) {
          FUN_07731ebc(lVar15,uVar4,*(undefined8 *)(lVar15 + 0x1a0));
          return;
        }
      }
    }
  }
LAB_07732994:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


