/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromJsonString>d__83$$MoveNext
ENTRY_POINT: 0772a280
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


undefined8 Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromJsonString>d__83__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar22;
  long unaff_x21;
  long unaff_x22;
  long *plVar23;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  long in_stack_000000a8;
  undefined4 in_stack_000000f8;
  long in_stack_00000138;
  int iStack0000000000000144;
  long in_stack_00000148;
  undefined8 in_stack_000001b0;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x6a8));
  FUN_04447ba8(PTR_DAT_09f31558);
  FUN_04447ba8(PTR_DAT_09f31560);
  FUN_04447ba8(PTR_DAT_09f31318);
  FUN_04447ba8(PTR_DAT_09f31320);
  FUN_04447ba8(PTR_DAT_09f31568);
  FUN_04447ba8(PTR_DAT_09f31570);
  FUN_04447ba8(PTR_DAT_09f30ab8);
  FUN_04447ba8(PTR_DAT_09f312c0);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f2c988);
  FUN_04447ba8(PTR_DAT_09f31578);
  FUN_04447ba8(PTR_DAT_09f31520);
  FUN_04447ba8(PTR_DAT_09f31580);
  FUN_04447ba8(PTR_DAT_09f31588);
  FUN_04447ba8(PTR_DAT_09f31590);
  FUN_04447ba8(PTR_DAT_09f31598);
  FUN_04447ba8(PTR_DAT_09f315a0);
  FUN_04447ba8(PTR_DAT_09f315a8);
  FUN_04447ba8(PTR_DAT_09f315b0);
  FUN_04447ba8(PTR_DAT_09f315b8);
  FUN_04447ba8(PTR_DAT_09f2b858);
  FUN_04447ba8(PTR_DAT_09f30cd0);
  FUN_04447ba8(PTR_DAT_09f315c0);
  FUN_04447ba8(PTR_DAT_09f315c8);
  FUN_04447ba8(PTR_DAT_09f315d0);
  FUN_04447ba8(PTR_DAT_09f315d8);
  FUN_04447ba8(PTR_DAT_09f315e0);
  FUN_04447ba8(PTR_DAT_09f315e8);
  FUN_04447ba8(PTR_DAT_09f315f0);
  *(undefined1 *)(unaff_x22 + 0x1bd) = 1;
  in_stack_00000148 = 0;
  iStack0000000000000144 = 0;
  in_stack_00000138 = 0;
  lVar9 = thunk_FUN_0448520c(*unaff_x20);
  FUN_0775728c(lVar9,0);
  puVar4 = PTR_DAT_09f31580;
  puVar3 = PTR_DAT_09f31568;
  puVar1 = PTR_DAT_09f31560;
  if (lVar9 == 0) goto code_r0x0772bc50;
  plVar23 = (long *)(lVar9 + 0x10);
  *plVar23 = unaff_x21;
  thunk_FUN_044bb4b4(plVar23);
  uVar10 = (**(code **)(*unaff_x19 + 0x498))();
  uVar6 = (**(code **)(*unaff_x19 + 0x4f8))();
  uVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_07742354(uVar11,uVar10,uVar6,0);
  lVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_05bad610(lVar12,*(undefined8 *)puVar1);
  lVar16 = *plVar23;
  *(undefined4 *)(lVar9 + 0x18) = 0;
  puVar5 = PTR_DAT_09f315c8;
  puVar4 = PTR_DAT_09f31570;
  puVar3 = PTR_DAT_09f31528;
  puVar1 = PTR_DAT_09f1e5b8;
  if (lVar16 == 0) goto code_r0x0772bc50;
  uVar8 = 0;
  while( true ) {
    puVar2 = PTR_DAT_09f31320;
    if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar8) {
      lVar9 = unaff_x19[0x21];
      if (lVar9 == 0) goto code_r0x0772bc50;
      iVar7 = 0;
      goto LAB_0772a9bc;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_0772bc54;
    uVar13 = FUN_07726ce8();
    if ((uVar13 & 1) == 0) break;
    lVar16 = *(long *)(lVar9 + 0x20);
    if (lVar16 == 0) {
      lVar16 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2c988);
      FUN_062f89f4(lVar16,lVar9,*(undefined8 *)PTR_DAT_09f31578,0);
      *(long *)(lVar9 + 0x20) = lVar16;
      thunk_FUN_044bb4b4((long *)(lVar9 + 0x20),lVar16);
    }
    iVar7 = FUN_046f1dd0(in_stack_000000a8,lVar16,*(undefined8 *)puVar3);
    if (iVar7 != -1) break;
    iVar7 = (**(code **)(*unaff_x19 + 0x4f8))();
    if (1 < iVar7) {
      lVar16 = *(long *)(lVar9 + 0x10);
      if (lVar16 == 0) goto code_r0x0772bc50;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar9 + 0x18)) goto LAB_0772bc54;
      lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
      if (lVar16 == 0) goto code_r0x0772bc50;
      uVar10 = thunk_FUN_0952ff6c(lVar16,0);
      uVar10 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f30cd0,uVar10,*(undefined8 *)PTR_DAT_09f315e0,0
                           );
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c33b0(uVar10,0);
    }
    lVar16 = *(long *)(lVar9 + 0x10);
    if (lVar16 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar9 + 0x18)) goto LAB_0772bc54;
    plVar23 = (long *)(lVar16 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
    *plVar23 = 0;
    lVar16 = 0;
LAB_0772a988:
    thunk_FUN_044bb4b4(plVar23,lVar16);
LAB_0772a98c:
    iStack0000000000000144 = *(int *)(lVar9 + 0x18);
    lVar16 = *(long *)(lVar9 + 0x10);
    uVar8 = iStack0000000000000144 + 1;
    *(uint *)(lVar9 + 0x18) = uVar8;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_04447e44();
    }
  }
  lVar16 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_0772bc58();
  lVar17 = *(long *)(lVar9 + 0x10);
  if (lVar17 == 0) goto code_r0x0772bc50;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar9 + 0x18)) goto LAB_0772bc54;
  if (lVar16 == 0) goto code_r0x0772bc50;
  FUN_0772bd1c(lVar16,0,*(undefined8 *)(lVar17 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20));
  uVar10 = *(undefined8 *)(lVar16 + 200);
  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(uVar10,0,0);
  if ((uVar13 & 1) == 0) {
    if (*(long *)(lVar16 + 200) == 0) goto code_r0x0772bc50;
    in_stack_00000148 = thunk_FUN_094db43c(*(long *)(lVar16 + 200),0);
    iVar7 = (**(code **)(*unaff_x19 + 0x4f8))();
    if (4 < iVar7) {
      if (in_stack_00000148 == 0) goto code_r0x0772bc50;
      in_stack_000000f8 = (undefined4)*(undefined8 *)(in_stack_00000148 + 0x18);
      uVar10 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x48),&stack0x000000f8);
      uVar10 = FUN_078b5afc(*(undefined8 *)puVar5,uVar10,*(undefined8 *)(lVar16 + 0x18),0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar10,0);
    }
    if (in_stack_00000148 != 0) {
      lVar17 = *(long *)(lVar16 + 0xc0);
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar13 = FUN_0952c404(lVar17,0,0);
      if ((uVar13 & 1) == 0) {
        uVar13 = FUN_0771f7d0(lVar17,0);
        lVar18 = in_stack_00000148;
        if ((uVar13 & 1) == 0) {
          if ((in_stack_00000148 == 0) || (lVar17 == 0)) goto code_r0x0772bc50;
          iVar7 = FUN_094d3ba4(lVar17,0);
          if (iVar7 < *(int *)(lVar18 + 0x18)) {
            uVar6 = FUN_094d3ba4(lVar17,0);
            FUN_04ad55a4(&stack0x00000148,uVar6,*(undefined8 *)PTR_DAT_09f31530);
          }
          lVar18 = *(long *)(lVar9 + 0x10);
          if (lVar18 == 0) goto code_r0x0772bc50;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar9 + 0x18)) goto LAB_0772bc54;
          uVar10 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar13 = FUN_09531730(uVar10,0,0);
          if ((uVar13 & 1) == 0) goto LAB_0772a98c;
          if (lVar12 == 0) goto code_r0x0772bc50;
          lVar18 = *(long *)(lVar12 + 0x10);
          lVar20 = *(long *)PTR_DAT_09f31558;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar18 != 0) {
            uVar8 = *(uint *)(lVar12 + 0x18);
            if (uVar8 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar8 + 1;
              plVar23 = (long *)(lVar18 + (long)(int)uVar8 * 8 + 0x20);
              *plVar23 = lVar16;
              thunk_FUN_044bb4b4(plVar23,lVar16);
            }
            else {
              FUN_05bade44(lVar12,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            lVar18 = *(long *)(lVar9 + 0x10);
            if (lVar18 != 0) {
              if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar18 + 0x18)) {
                plVar23 = *(long **)(lVar18 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
                if (plVar23 != (long *)0x0) {
                  uVar10 = (**(code **)(*plVar23 + 0x168))
                                     (plVar23,*(undefined8 *)(*plVar23 + 0x170));
                  lVar18 = *(long *)(lVar9 + 0x10);
                  if (lVar18 != 0) {
                    if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar18 + 0x18)) {
                      lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
                      if (lVar18 != 0) {
                        in_stack_000000f8 = FUN_0952fcb8(lVar18,0);
                        uVar11 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x48),&stack0x000000f8)
                        ;
                        uVar10 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f2b858,uVar10,uVar11,0);
                        *(undefined8 *)(lVar16 + 0x20) = uVar10;
                        thunk_FUN_044bb4b4();
                        lVar18 = *(long *)(lVar9 + 0x10);
                        if (lVar18 != 0) {
                          if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar18 + 0x18)) {
                            lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 +
                                              0x20);
                            if (lVar18 != 0) {
                              uVar6 = FUN_0952fcb8(lVar18,0);
                              *(undefined4 *)(lVar16 + 0x10) = uVar6;
                              lVar18 = *(long *)(lVar9 + 0x10);
                              if (lVar18 != 0) {
                                if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar18 + 0x18)) {
                                  *(undefined8 *)(lVar16 + 0x18) =
                                       *(undefined8 *)
                                        (lVar18 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
                                  thunk_FUN_044bb4b4();
                                  uVar6 = FUN_094f3ae4(lVar17,0);
                                  *(undefined4 *)(lVar16 + 0x30) = uVar6;
                                  plVar23 = (long *)(lVar16 + 0xb0);
                                  *plVar23 = in_stack_00000148;
                                  lVar16 = in_stack_00000148;
                                  goto LAB_0772a988;
                                }
                                goto LAB_0772bc54;
                              }
                            }
                            goto code_r0x0772bc50;
                          }
                          goto LAB_0772bc54;
                        }
                      }
                      goto code_r0x0772bc50;
                    }
                    goto LAB_0772bc54;
                  }
                }
                goto code_r0x0772bc50;
              }
              goto LAB_0772bc54;
            }
          }
        }
        else if (*(long *)(lVar16 + 0x18) != 0) {
          uVar10 = thunk_FUN_0952ff6c(*(long *)(lVar16 + 0x18),0);
          uVar11 = *(undefined8 *)PTR_DAT_09f30cd0;
          puVar14 = (undefined8 *)PTR_DAT_09f31590;
          goto LAB_0772ab30;
        }
        goto code_r0x0772bc50;
      }
      if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x0772bc50;
      uVar10 = thunk_FUN_0952ff6c(*(long *)(lVar16 + 0x18),0);
      uVar11 = *(undefined8 *)PTR_DAT_09f30cd0;
      puVar14 = (undefined8 *)PTR_DAT_09f315d0;
      goto LAB_0772ab30;
    }
    uVar10 = *(undefined8 *)(lVar16 + 0x20);
    uVar11 = *(undefined8 *)PTR_DAT_09f30cd0;
    uVar15 = *(undefined8 *)PTR_DAT_09f31598;
  }
  else {
    if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x0772bc50;
    uVar10 = thunk_FUN_0952ff6c(*(long *)(lVar16 + 0x18),0);
    uVar11 = *(undefined8 *)PTR_DAT_09f30cd0;
    puVar14 = (undefined8 *)PTR_DAT_09f31598;
LAB_0772ab30:
    uVar15 = *puVar14;
  }
  uVar10 = FUN_078b4f58(uVar11,uVar10,uVar15,0);
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
  }
  FUN_094c6b48(uVar10,0);
  lVar12 = *(long *)(lVar9 + 0x10);
  if (lVar12 != 0) {
    if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar12 + 0x18)) {
      puVar14 = (undefined8 *)(lVar12 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
      *puVar14 = 0;
      thunk_FUN_044bb4b4(puVar14,0);
      return 0;
    }
LAB_0772bc54:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
code_r0x0772bc50:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_0772a9bc:
  if (*(int *)(lVar9 + 0x18) <= iVar7) {
    if (unaff_x19[0x14] == 0) goto code_r0x0772bc50;
    FUN_087dab38(unaff_x19[0x14],0);
    if (unaff_x19[0x15] == 0) goto code_r0x0772bc50;
    FUN_087dab38(unaff_x19[0x15],0);
    plVar22 = (long *)unaff_x19[0x3c];
    lVar9 = unaff_x19[0x21];
    plVar23 = (long *)FUN_07715da0();
    if (plVar23 == (long *)0x0) goto code_r0x0772bc50;
    lVar16 = *plVar23;
    uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar13 == 0) goto LAB_0772aafc;
    piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    goto LAB_0772aae4;
  }
  lVar9 = FUN_05badb74(lVar9,iVar7,*(undefined8 *)puVar2);
  if (lVar9 == 0) goto code_r0x0772bc50;
  if (*(char *)(lVar9 + 0xb9) == '\0') {
    if ((unaff_x19[0x21] == 0) ||
       (lVar9 = FUN_05badb74(unaff_x19[0x21],iVar7,*(undefined8 *)puVar2), lVar9 == 0))
    goto code_r0x0772bc50;
    uVar13 = FUN_0772be68(lVar9,0);
    if ((uVar13 & 1) == 0) {
      if (*(long *)(lVar9 + 0x18) != 0) {
        uVar10 = thunk_FUN_0952ff6c(*(long *)(lVar9 + 0x18),0);
        uVar10 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f30cd0,uVar10,*(undefined8 *)PTR_DAT_09f31598
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c6b48(uVar10,0);
        return 0;
      }
      goto code_r0x0772bc50;
    }
  }
  lVar9 = unaff_x19[0x21];
  iVar7 = iVar7 + 1;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_04447e44();
  }
  goto LAB_0772a9bc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar21 = piVar21 + 4;
    if (uVar13 == 0) break;
LAB_0772aae4:
    if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar14 = (undefined8 *)(lVar16 + (long)(*piVar21 + 0x24) * 0x10 + 0x138);
      goto LAB_0772abf4;
    }
  }
LAB_0772aafc:
  puVar14 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0772abf4:
  uVar6 = (*(code *)*puVar14)(plVar23,puVar14[1]);
  plVar23 = (long *)FUN_07715da0();
  if (plVar23 != (long *)0x0) {
    lVar16 = *plVar23;
    uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar13 != 0) {
      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar14 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0772ac6c;
        }
        uVar13 = uVar13 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f30ab8,0);
LAB_0772ac6c:
    uVar8 = (*(code *)*puVar14)(plVar23,puVar14[1]);
    if (plVar22 != (long *)0x0) {
      lVar16 = *plVar22;
      uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312b8) {
            puVar14 = (undefined8 *)(lVar16 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_0772acd8;
          }
          uVar13 = uVar13 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_044822ac(plVar22,*(long *)PTR_DAT_09f312b8,2);
LAB_0772acd8:
      (*(code *)*puVar14)(plVar22,lVar9,lVar12,in_stack_00000068._4_4_,uVar6,uVar8 & 1,puVar14[1]);
      if (unaff_x19[0x15] != 0) {
        FUN_087dae58(unaff_x19[0x15],0);
        lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_00000078._4_4_);
        plVar23 = (long *)unaff_x19[0x3a];
        if (plVar23 != (long *)0x0) {
          lVar12 = *plVar23;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar14 = (undefined8 *)(lVar12 + (long)(*piVar21 + 3) * 0x10 + 0x138);
                goto LAB_0772ad84;
              }
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar13 != 0);
          }
          puVar14 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f312c0,3);
LAB_0772ad84:
          (*(code *)*puVar14)(plVar23,in_stack_000000a8,puVar14[1]);
          if (in_stack_000000a8 != 0) {
            if (0 < (int)*(ulong *)(in_stack_000000a8 + 0x18)) {
              uVar13 = 0;
              uVar19 = *(ulong *)(in_stack_000000a8 + 0x18) & 0xffffffff;
              do {
                in_stack_00000138 = 0;
                if (uVar19 <= uVar13) goto LAB_0772bc54;
                FUN_07726d40();
                lVar12 = in_stack_00000138;
                if (in_stack_00000138 == 0) {
                  iVar7 = (**(code **)(*unaff_x19 + 0x4f8))();
                  if (1 < iVar7) {
                    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    FUN_094c33b0(*(undefined8 *)PTR_DAT_09f315a0,0);
                  }
                }
                else {
                  if (DAT_0a52320b == '\x01') {
                    *(undefined2 *)(in_stack_00000138 + 0xb8) = 0x101;
                  }
                  else {
                    FUN_04447ba8(PTR_DAT_09f1e538);
                    DAT_0a52320b = '\x01';
                    *(undefined2 *)(lVar12 + 0xb8) = 0x101;
                    if (in_stack_00000138 == 0) goto code_r0x0772bc50;
                  }
                  plVar23 = (long *)FUN_07715da0();
                  if (plVar23 == (long *)0x0) goto code_r0x0772bc50;
                  lVar12 = *plVar23;
                  uVar19 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar19 != 0) {
                    piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar14 = (undefined8 *)(lVar12 + (long)(*piVar21 + 0x24) * 0x10 + 0x138);
                        goto LAB_0772aee8;
                      }
                      uVar19 = uVar19 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar19 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0772aee8:
                  iVar7 = (*(code *)*puVar14)(plVar23,puVar14[1]);
                  lVar12 = in_stack_00000138;
                  if (iVar7 == 1) {
                    plVar23 = (long *)unaff_x19[0x3a];
                    if (plVar23 == (long *)0x0) goto code_r0x0772bc50;
                    lVar16 = *plVar23;
                    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar19 != 0) {
                      piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_09f312c0) {
                          puVar14 = (undefined8 *)(lVar16 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                          goto LAB_0772af60;
                        }
                        uVar19 = uVar19 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar19 != 0);
                    }
                    puVar14 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f312c0,7);
LAB_0772af60:
                    (*(code *)*puVar14)(plVar23,lVar12,puVar14[1]);
                  }
                  if ((in_stack_00000138 == 0) ||
                     (lVar12 = *(long *)(in_stack_00000138 + 0x78), lVar12 == 0))
                  goto code_r0x0772bc50;
                  uVar8 = *(uint *)(lVar12 + 0x18);
                  uVar19 = 0;
                  while ((long)uVar19 < (long)(int)uVar8) {
                    if (lVar9 == 0) goto code_r0x0772bc50;
                    if ((*(uint *)(lVar9 + 0x18) <= uVar19) || (uVar8 <= uVar19)) goto LAB_0772bc54;
                    *(int *)(lVar9 + 0x20 + uVar19 * 4) =
                         *(int *)(lVar12 + 0x20 + uVar19 * 4) + *(int *)(lVar9 + 0x20 + uVar19 * 4);
                    uVar19 = uVar19 + 1;
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_04447e44();
                    }
                  }
                }
                uVar19 = (ulong)*(uint *)(in_stack_000000a8 + 0x18);
                uVar13 = uVar13 + 1;
              } while ((long)uVar13 < (long)(int)*(uint *)(in_stack_000000a8 + 0x18));
            }
            if (unaff_x19[0x16] != 0) {
              FUN_087dab38(unaff_x19[0x16],0);
              uVar10 = FUN_0991a7d0(unaff_x19[0x21]);
              return uVar10;
            }
          }
        }
      }
    }
  }
  goto code_r0x0772bc50;
}


