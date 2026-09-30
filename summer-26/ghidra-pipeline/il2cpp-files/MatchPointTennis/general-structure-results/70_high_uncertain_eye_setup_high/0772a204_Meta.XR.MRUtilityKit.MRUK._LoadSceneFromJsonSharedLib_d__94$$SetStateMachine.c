/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromJsonSharedLib>d__94$$SetStateMachine
ENTRY_POINT: 0772a204
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


undefined8
Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromJsonSharedLib>d__94__SetStateMachine
          (long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

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
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int *piVar20;
  long unaff_x20;
  undefined8 *puVar21;
  long *plVar22;
  long unaff_x22;
  long *plVar23;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000094;
  long in_stack_000000a8;
  undefined4 in_stack_000000f8;
  long in_stack_00000138;
  int iStack0000000000000144;
  long in_stack_00000148;
  undefined8 in_stack_000001b0;
  
  puVar21 = *(undefined8 **)(unaff_x20 + 0x520);
  if ((*(byte *)(unaff_x22 + 0x1bd) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f31528);
    FUN_04447ba8(PTR_DAT_09f31530);
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f31538);
    FUN_04447ba8(PTR_DAT_09f31540);
    FUN_04447ba8(PTR_DAT_09f31548);
    FUN_04447ba8(PTR_DAT_09f31550);
    FUN_04447ba8(PTR_DAT_09f312b8);
    FUN_04447ba8(PTR_DAT_09f1e6a8);
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
  }
  in_stack_00000148 = 0;
  iStack0000000000000144 = 0;
  in_stack_00000138 = 0;
  uStack0000000000000094 = param_4;
  lVar9 = thunk_FUN_0448520c(*puVar21);
  FUN_0775728c(lVar9,0);
  puVar4 = PTR_DAT_09f31580;
  puVar3 = PTR_DAT_09f31568;
  puVar1 = PTR_DAT_09f31560;
  if (lVar9 == 0) goto code_r0x0772bc50;
  plVar23 = (long *)(lVar9 + 0x10);
  *plVar23 = param_2;
  thunk_FUN_044bb4b4(plVar23,param_2);
  uVar10 = (**(code **)(*param_1 + 0x498))(param_1,*(undefined8 *)(*param_1 + 0x4a0));
  uVar6 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
  uVar11 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_07742354(uVar11,uVar10,uVar6,0);
  lVar12 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_05bad610(lVar12,*(undefined8 *)puVar1);
  lVar15 = *plVar23;
  *(undefined4 *)(lVar9 + 0x18) = 0;
  puVar5 = PTR_DAT_09f315c8;
  puVar4 = PTR_DAT_09f31570;
  puVar3 = PTR_DAT_09f31528;
  puVar1 = PTR_DAT_09f1e5b8;
  if (lVar15 == 0) goto code_r0x0772bc50;
  uVar8 = 0;
  while( true ) {
    puVar2 = PTR_DAT_09f31320;
    if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar8) {
      lVar9 = param_1[0x21];
      if (lVar9 == 0) goto code_r0x0772bc50;
      iVar7 = 0;
      goto LAB_0772a9bc;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0772bc54;
    uVar13 = FUN_07726ce8(param_1,*(undefined8 *)(lVar15 + (long)(int)uVar8 * 8 + 0x20));
    if ((uVar13 & 1) == 0) break;
    lVar15 = *(long *)(lVar9 + 0x20);
    if (lVar15 == 0) {
      lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2c988);
      FUN_062f89f4(lVar15,lVar9,*(undefined8 *)PTR_DAT_09f31578,0);
      *(long *)(lVar9 + 0x20) = lVar15;
      thunk_FUN_044bb4b4((long *)(lVar9 + 0x20),lVar15);
    }
    iVar7 = FUN_046f1dd0(in_stack_000000a8,lVar15,*(undefined8 *)puVar3);
    if (iVar7 != -1) break;
    iVar7 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
    if (1 < iVar7) {
      lVar15 = *(long *)(lVar9 + 0x10);
      if (lVar15 == 0) goto code_r0x0772bc50;
      if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar9 + 0x18)) goto LAB_0772bc54;
      lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x0772bc50;
      uVar10 = thunk_FUN_0952ff6c(lVar15,0);
      uVar10 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f30cd0,uVar10,*(undefined8 *)PTR_DAT_09f315e0,0
                           );
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c33b0(uVar10,0);
    }
    lVar15 = *(long *)(lVar9 + 0x10);
    if (lVar15 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar9 + 0x18)) goto LAB_0772bc54;
    plVar23 = (long *)(lVar15 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
    *plVar23 = 0;
    lVar15 = 0;
LAB_0772a988:
    thunk_FUN_044bb4b4(plVar23,lVar15);
LAB_0772a98c:
    iStack0000000000000144 = *(int *)(lVar9 + 0x18);
    lVar15 = *(long *)(lVar9 + 0x10);
    uVar8 = iStack0000000000000144 + 1;
    *(uint *)(lVar9 + 0x18) = uVar8;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_04447e44();
    }
  }
  lVar15 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
  FUN_0772bc58();
  lVar16 = *(long *)(lVar9 + 0x10);
  if (lVar16 == 0) goto code_r0x0772bc50;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar9 + 0x18)) goto LAB_0772bc54;
  if (lVar15 == 0) goto code_r0x0772bc50;
  FUN_0772bd1c(lVar15,0,*(undefined8 *)(lVar16 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20));
  uVar10 = *(undefined8 *)(lVar15 + 200);
  if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar13 = FUN_0952c404(uVar10,0,0);
  if ((uVar13 & 1) == 0) {
    if (*(long *)(lVar15 + 200) == 0) goto code_r0x0772bc50;
    in_stack_00000148 = thunk_FUN_094db43c(*(long *)(lVar15 + 200),0);
    iVar7 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
    if (4 < iVar7) {
      if (in_stack_00000148 == 0) goto code_r0x0772bc50;
      in_stack_000000f8 = (undefined4)*(undefined8 *)(in_stack_00000148 + 0x18);
      uVar10 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x48),&stack0x000000f8);
      uVar10 = FUN_078b5afc(*(undefined8 *)puVar5,uVar10,*(undefined8 *)(lVar15 + 0x18),0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar10,0);
    }
    if (in_stack_00000148 != 0) {
      lVar16 = *(long *)(lVar15 + 0xc0);
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar13 = FUN_0952c404(lVar16,0,0);
      if ((uVar13 & 1) == 0) {
        uVar13 = FUN_0771f7d0(lVar16,0);
        lVar17 = in_stack_00000148;
        if ((uVar13 & 1) == 0) {
          if ((in_stack_00000148 == 0) || (lVar16 == 0)) goto code_r0x0772bc50;
          iVar7 = FUN_094d3ba4(lVar16,0);
          if (iVar7 < *(int *)(lVar17 + 0x18)) {
            uVar6 = FUN_094d3ba4(lVar16,0);
            FUN_04ad55a4(&stack0x00000148,uVar6,*(undefined8 *)PTR_DAT_09f31530);
          }
          lVar17 = *(long *)(lVar9 + 0x10);
          if (lVar17 == 0) goto code_r0x0772bc50;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar9 + 0x18)) goto LAB_0772bc54;
          uVar10 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar13 = FUN_09531730(uVar10,0,0);
          if ((uVar13 & 1) == 0) goto LAB_0772a98c;
          if (lVar12 == 0) goto code_r0x0772bc50;
          lVar17 = *(long *)(lVar12 + 0x10);
          lVar19 = *(long *)PTR_DAT_09f31558;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar17 != 0) {
            uVar8 = *(uint *)(lVar12 + 0x18);
            if (uVar8 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar8 + 1;
              plVar23 = (long *)(lVar17 + (long)(int)uVar8 * 8 + 0x20);
              *plVar23 = lVar15;
              thunk_FUN_044bb4b4(plVar23,lVar15);
            }
            else {
              FUN_05bade44(lVar12,lVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            lVar17 = *(long *)(lVar9 + 0x10);
            if (lVar17 != 0) {
              if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar17 + 0x18)) {
                plVar23 = *(long **)(lVar17 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
                if (plVar23 != (long *)0x0) {
                  uVar10 = (**(code **)(*plVar23 + 0x168))
                                     (plVar23,*(undefined8 *)(*plVar23 + 0x170));
                  lVar17 = *(long *)(lVar9 + 0x10);
                  if (lVar17 != 0) {
                    if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar17 + 0x18)) {
                      lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
                      if (lVar17 != 0) {
                        in_stack_000000f8 = FUN_0952fcb8(lVar17,0);
                        uVar11 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x48),&stack0x000000f8)
                        ;
                        uVar10 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f2b858,uVar10,uVar11,0);
                        *(undefined8 *)(lVar15 + 0x20) = uVar10;
                        thunk_FUN_044bb4b4();
                        lVar17 = *(long *)(lVar9 + 0x10);
                        if (lVar17 != 0) {
                          if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar17 + 0x18)) {
                            lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 +
                                              0x20);
                            if (lVar17 != 0) {
                              uVar6 = FUN_0952fcb8(lVar17,0);
                              *(undefined4 *)(lVar15 + 0x10) = uVar6;
                              lVar17 = *(long *)(lVar9 + 0x10);
                              if (lVar17 != 0) {
                                if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar17 + 0x18)) {
                                  *(undefined8 *)(lVar15 + 0x18) =
                                       *(undefined8 *)
                                        (lVar17 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
                                  thunk_FUN_044bb4b4();
                                  uVar6 = FUN_094f3ae4(lVar16,0);
                                  *(undefined4 *)(lVar15 + 0x30) = uVar6;
                                  plVar23 = (long *)(lVar15 + 0xb0);
                                  *plVar23 = in_stack_00000148;
                                  lVar15 = in_stack_00000148;
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
        else if (*(long *)(lVar15 + 0x18) != 0) {
          uVar10 = thunk_FUN_0952ff6c(*(long *)(lVar15 + 0x18),0);
          uVar11 = *(undefined8 *)PTR_DAT_09f30cd0;
          puVar21 = (undefined8 *)PTR_DAT_09f31590;
          goto LAB_0772ab30;
        }
        goto code_r0x0772bc50;
      }
      if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x0772bc50;
      uVar10 = thunk_FUN_0952ff6c(*(long *)(lVar15 + 0x18),0);
      uVar11 = *(undefined8 *)PTR_DAT_09f30cd0;
      puVar21 = (undefined8 *)PTR_DAT_09f315d0;
      goto LAB_0772ab30;
    }
    uVar10 = *(undefined8 *)(lVar15 + 0x20);
    uVar11 = *(undefined8 *)PTR_DAT_09f30cd0;
    uVar14 = *(undefined8 *)PTR_DAT_09f31598;
  }
  else {
    if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x0772bc50;
    uVar10 = thunk_FUN_0952ff6c(*(long *)(lVar15 + 0x18),0);
    uVar11 = *(undefined8 *)PTR_DAT_09f30cd0;
    puVar21 = (undefined8 *)PTR_DAT_09f31598;
LAB_0772ab30:
    uVar14 = *puVar21;
  }
  uVar10 = FUN_078b4f58(uVar11,uVar10,uVar14,0);
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
  }
  FUN_094c6b48(uVar10,0);
  lVar12 = *(long *)(lVar9 + 0x10);
  if (lVar12 != 0) {
    if (*(uint *)(lVar9 + 0x18) < *(uint *)(lVar12 + 0x18)) {
      puVar21 = (undefined8 *)(lVar12 + (long)(int)*(uint *)(lVar9 + 0x18) * 8 + 0x20);
      *puVar21 = 0;
      thunk_FUN_044bb4b4(puVar21,0);
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
    if (param_1[0x14] == 0) goto code_r0x0772bc50;
    FUN_087dab38(param_1[0x14],0);
    if (param_1[0x15] == 0) goto code_r0x0772bc50;
    FUN_087dab38(param_1[0x15],0);
    plVar22 = (long *)param_1[0x3c];
    lVar9 = param_1[0x21];
    plVar23 = (long *)FUN_07715da0(param_1,0);
    if (plVar23 == (long *)0x0) goto code_r0x0772bc50;
    lVar15 = *plVar23;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 == 0) goto LAB_0772aafc;
    piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    goto LAB_0772aae4;
  }
  lVar9 = FUN_05badb74(lVar9,iVar7,*(undefined8 *)puVar2);
  if (lVar9 == 0) goto code_r0x0772bc50;
  if (*(char *)(lVar9 + 0xb9) == '\0') {
    if ((param_1[0x21] == 0) ||
       (lVar9 = FUN_05badb74(param_1[0x21],iVar7,*(undefined8 *)puVar2), lVar9 == 0))
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
  lVar9 = param_1[0x21];
  iVar7 = iVar7 + 1;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_04447e44();
  }
  goto LAB_0772a9bc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar20 = piVar20 + 4;
    if (uVar13 == 0) break;
LAB_0772aae4:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar21 = (undefined8 *)(lVar15 + (long)(*piVar20 + 0x24) * 0x10 + 0x138);
      goto LAB_0772abf4;
    }
  }
LAB_0772aafc:
  puVar21 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0772abf4:
  uVar6 = (*(code *)*puVar21)(plVar23,puVar21[1]);
  plVar23 = (long *)FUN_07715da0(param_1,0);
  if (plVar23 != (long *)0x0) {
    lVar15 = *plVar23;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar21 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0772ac6c;
        }
        uVar13 = uVar13 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar13 != 0);
    }
    puVar21 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f30ab8,0);
LAB_0772ac6c:
    uVar8 = (*(code *)*puVar21)(plVar23,puVar21[1]);
    if (plVar22 != (long *)0x0) {
      lVar15 = *plVar22;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312b8) {
            puVar21 = (undefined8 *)(lVar15 + (long)(*piVar20 + 2) * 0x10 + 0x138);
            goto LAB_0772acd8;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar21 = (undefined8 *)FUN_044822ac(plVar22,*(long *)PTR_DAT_09f312b8,2);
LAB_0772acd8:
      (*(code *)*puVar21)(plVar22,lVar9,lVar12,in_stack_00000068._4_4_,uVar6,uVar8 & 1,puVar21[1]);
      if (param_1[0x15] != 0) {
        FUN_087dae58(param_1[0x15],0);
        lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_00000078._4_4_);
        plVar23 = (long *)param_1[0x3a];
        if (plVar23 != (long *)0x0) {
          lVar12 = *plVar23;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar21 = (undefined8 *)(lVar12 + (long)(*piVar20 + 3) * 0x10 + 0x138);
                goto LAB_0772ad84;
              }
              uVar13 = uVar13 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar13 != 0);
          }
          puVar21 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f312c0,3);
LAB_0772ad84:
          (*(code *)*puVar21)(plVar23,in_stack_000000a8,puVar21[1]);
          if (in_stack_000000a8 != 0) {
            if (0 < (int)*(ulong *)(in_stack_000000a8 + 0x18)) {
              uVar13 = 0;
              uVar18 = *(ulong *)(in_stack_000000a8 + 0x18) & 0xffffffff;
              do {
                in_stack_00000138 = 0;
                if (uVar18 <= uVar13) goto LAB_0772bc54;
                FUN_07726d40(param_1,*(undefined4 *)(in_stack_000000a8 + uVar13 * 4 + 0x20),
                             &stack0x00000138);
                lVar12 = in_stack_00000138;
                if (in_stack_00000138 == 0) {
                  iVar7 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500))
                  ;
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
                  plVar23 = (long *)FUN_07715da0(param_1,0);
                  if (plVar23 == (long *)0x0) goto code_r0x0772bc50;
                  lVar12 = *plVar23;
                  uVar18 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar18 != 0) {
                    piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar21 = (undefined8 *)(lVar12 + (long)(*piVar20 + 0x24) * 0x10 + 0x138);
                        goto LAB_0772aee8;
                      }
                      uVar18 = uVar18 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar21 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0772aee8:
                  iVar7 = (*(code *)*puVar21)(plVar23,puVar21[1]);
                  lVar12 = in_stack_00000138;
                  if (iVar7 == 1) {
                    plVar23 = (long *)param_1[0x3a];
                    if (plVar23 == (long *)0x0) goto code_r0x0772bc50;
                    lVar15 = *plVar23;
                    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    if (uVar18 != 0) {
                      piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_09f312c0) {
                          puVar21 = (undefined8 *)(lVar15 + (long)(*piVar20 + 7) * 0x10 + 0x138);
                          goto LAB_0772af60;
                        }
                        uVar18 = uVar18 - 1;
                        piVar20 = piVar20 + 4;
                      } while (uVar18 != 0);
                    }
                    puVar21 = (undefined8 *)FUN_044822ac(plVar23,*(long *)PTR_DAT_09f312c0,7);
LAB_0772af60:
                    (*(code *)*puVar21)(plVar23,lVar12,puVar21[1]);
                  }
                  if ((in_stack_00000138 == 0) ||
                     (lVar12 = *(long *)(in_stack_00000138 + 0x78), lVar12 == 0))
                  goto code_r0x0772bc50;
                  uVar8 = *(uint *)(lVar12 + 0x18);
                  uVar18 = 0;
                  while ((long)uVar18 < (long)(int)uVar8) {
                    if (lVar9 == 0) goto code_r0x0772bc50;
                    if ((*(uint *)(lVar9 + 0x18) <= uVar18) || (uVar8 <= uVar18)) goto LAB_0772bc54;
                    *(int *)(lVar9 + 0x20 + uVar18 * 4) =
                         *(int *)(lVar12 + 0x20 + uVar18 * 4) + *(int *)(lVar9 + 0x20 + uVar18 * 4);
                    uVar18 = uVar18 + 1;
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_04447e44();
                    }
                  }
                }
                uVar18 = (ulong)*(uint *)(in_stack_000000a8 + 0x18);
                uVar13 = uVar13 + 1;
              } while ((long)uVar13 < (long)(int)*(uint *)(in_stack_000000a8 + 0x18));
            }
            if (param_1[0x16] != 0) {
              FUN_087dab38(param_1[0x16],0);
              uVar10 = FUN_0991a7d0(param_1[0x21]);
              return uVar10;
            }
          }
        }
      }
    }
  }
  goto code_r0x0772bc50;
}


