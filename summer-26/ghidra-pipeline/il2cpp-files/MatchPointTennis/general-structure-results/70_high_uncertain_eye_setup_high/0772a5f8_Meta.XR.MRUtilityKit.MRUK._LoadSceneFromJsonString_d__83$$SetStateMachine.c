/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromJsonString>d__83$$SetStateMachine
ENTRY_POINT: 0772a5f8
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


undefined8 Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromJsonString>d__83__SetStateMachine(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *in_x9;
  int *piVar15;
  long *unaff_x19;
  long unaff_x20;
  long *plVar16;
  long *unaff_x21;
  long lVar17;
  long unaff_x23;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000078;
  long in_stack_000000a8;
  undefined4 in_stack_000000f8;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  long in_stack_00000148;
  
  while( true ) {
    iVar4 = (*in_x9)();
    if (4 < iVar4) {
      if (in_stack_00000148 == 0) goto code_r0x0772bc50;
      in_stack_000000f8 = (undefined4)*(undefined8 *)(in_stack_00000148 + 0x18);
      uVar6 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x25 + 0x48),&stack0x000000f8);
      uVar6 = FUN_078b5afc(*unaff_x26,uVar6,*(undefined8 *)(unaff_x23 + 0x18),0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar6,0);
    }
    if (in_stack_00000148 == 0) break;
    lVar17 = *(long *)(unaff_x23 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar7 = FUN_0952c404(lVar17,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        uVar6 = thunk_FUN_0952ff6c(*(long *)(unaff_x23 + 0x18),0);
        uVar9 = *(undefined8 *)PTR_DAT_09f30cd0;
        puVar10 = (undefined8 *)PTR_DAT_09f315d0;
LAB_0772ab30:
        uVar11 = *puVar10;
        goto LAB_0772ab3c;
      }
      goto code_r0x0772bc50;
    }
    uVar7 = FUN_0771f7d0(lVar17,0);
    lVar12 = in_stack_00000148;
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        uVar6 = thunk_FUN_0952ff6c(*(long *)(unaff_x23 + 0x18),0);
        uVar9 = *(undefined8 *)PTR_DAT_09f30cd0;
        puVar10 = (undefined8 *)PTR_DAT_09f31590;
        goto LAB_0772ab30;
      }
      goto code_r0x0772bc50;
    }
    if ((in_stack_00000148 == 0) || (lVar17 == 0)) goto code_r0x0772bc50;
    iVar4 = FUN_094d3ba4(lVar17,0);
    if (iVar4 < *(int *)(lVar12 + 0x18)) {
      uVar5 = FUN_094d3ba4(lVar17,0);
      FUN_04ad55a4(&stack0x00000148,uVar5,*(undefined8 *)PTR_DAT_09f31530);
    }
    lVar12 = *(long *)(unaff_x20 + 0x10);
    if (lVar12 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    uVar6 = *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar7 = FUN_09531730(uVar6,0,0);
    if ((uVar7 & 1) == 0) goto LAB_0772a98c;
    if (unaff_x28 == 0) goto code_r0x0772bc50;
    lVar12 = *(long *)(unaff_x28 + 0x10);
    *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
    if (lVar12 == 0) goto code_r0x0772bc50;
    uVar2 = *(uint *)(unaff_x28 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x28 + 0x18) = uVar2 + 1;
      plVar8 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
      *plVar8 = unaff_x23;
      thunk_FUN_044bb4b4(plVar8,unaff_x23);
    }
    else {
      FUN_05bade44();
    }
    lVar12 = *(long *)(unaff_x20 + 0x10);
    if (lVar12 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    plVar8 = *(long **)(lVar12 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    if (plVar8 == (long *)0x0) goto code_r0x0772bc50;
    uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    lVar12 = *(long *)(unaff_x20 + 0x10);
    if (lVar12 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x0772bc50;
    in_stack_000000f8 = FUN_0952fcb8(lVar12,0);
    uVar9 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x25 + 0x48),&stack0x000000f8);
    uVar6 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f2b858,uVar6,uVar9,0);
    *(undefined8 *)(unaff_x23 + 0x20) = uVar6;
    thunk_FUN_044bb4b4();
    lVar12 = *(long *)(unaff_x20 + 0x10);
    if (lVar12 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    lVar12 = *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    if (lVar12 == 0) goto code_r0x0772bc50;
    uVar5 = FUN_0952fcb8(lVar12,0);
    *(undefined4 *)(unaff_x23 + 0x10) = uVar5;
    lVar12 = *(long *)(unaff_x20 + 0x10);
    if (lVar12 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    *(undefined8 *)(unaff_x23 + 0x18) =
         *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    thunk_FUN_044bb4b4();
    uVar5 = FUN_094f3ae4(lVar17,0);
    *(undefined4 *)(unaff_x23 + 0x30) = uVar5;
    plVar8 = (long *)(unaff_x23 + 0xb0);
    *plVar8 = in_stack_00000148;
    lVar17 = in_stack_00000148;
    while( true ) {
      thunk_FUN_044bb4b4(plVar8,lVar17);
LAB_0772a98c:
      in_stack_00000140._4_4_ = *(int *)(unaff_x20 + 0x18);
      uVar2 = in_stack_00000140._4_4_ + 1;
      *(uint *)(unaff_x20 + 0x18) = uVar2;
      puVar3 = PTR_DAT_09f31320;
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_04447e44();
      }
      uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x10) + 0x18);
      if ((int)uVar1 <= (int)uVar2) {
        lVar17 = unaff_x19[0x21];
        if (lVar17 == 0) goto code_r0x0772bc50;
        iVar4 = 0;
        goto LAB_0772a9bc;
      }
      if (uVar1 <= uVar2) goto LAB_0772bc54;
      uVar7 = FUN_07726ce8();
      if ((uVar7 & 1) == 0) break;
      lVar17 = *unaff_x21;
      if (lVar17 == 0) {
        lVar17 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2c988);
        FUN_062f89f4();
        *(long *)(unaff_x20 + 0x20) = lVar17;
        thunk_FUN_044bb4b4();
      }
      iVar4 = FUN_046f1dd0(in_stack_000000a8,lVar17,*unaff_x27);
      if (iVar4 != -1) break;
      iVar4 = (**(code **)(*unaff_x19 + 0x4f8))();
      if (1 < iVar4) {
        lVar17 = *(long *)(unaff_x20 + 0x10);
        if (lVar17 == 0) goto code_r0x0772bc50;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
        lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
        if (lVar17 == 0) goto code_r0x0772bc50;
        uVar6 = thunk_FUN_0952ff6c(lVar17,0);
        uVar6 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f30cd0,uVar6,*(undefined8 *)PTR_DAT_09f315e0,0
                            );
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c33b0(uVar6,0);
      }
      lVar17 = *(long *)(unaff_x20 + 0x10);
      if (lVar17 == 0) goto code_r0x0772bc50;
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
      plVar8 = (long *)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
      *plVar8 = 0;
      lVar17 = 0;
    }
    unaff_x23 = thunk_FUN_0448520c(*unaff_x29);
    FUN_0772bc58();
    lVar17 = *(long *)(unaff_x20 + 0x10);
    if (lVar17 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    if (unaff_x23 == 0) goto code_r0x0772bc50;
    FUN_0772bd1c(unaff_x23,0,
                 *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20));
    uVar6 = *(undefined8 *)(unaff_x23 + 200);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar7 = FUN_0952c404(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        uVar6 = thunk_FUN_0952ff6c(*(long *)(unaff_x23 + 0x18),0);
        uVar9 = *(undefined8 *)PTR_DAT_09f30cd0;
        puVar10 = (undefined8 *)PTR_DAT_09f31598;
        goto LAB_0772ab30;
      }
      goto code_r0x0772bc50;
    }
    if (*(long *)(unaff_x23 + 200) == 0) goto code_r0x0772bc50;
    in_stack_00000148 = thunk_FUN_094db43c(*(long *)(unaff_x23 + 200),0);
    in_x9 = *(code **)(*unaff_x19 + 0x4f8);
  }
  uVar6 = *(undefined8 *)(unaff_x23 + 0x20);
  uVar9 = *(undefined8 *)PTR_DAT_09f30cd0;
  uVar11 = *(undefined8 *)PTR_DAT_09f31598;
LAB_0772ab3c:
  uVar6 = FUN_078b4f58(uVar9,uVar6,uVar11,0);
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
  }
  FUN_094c6b48(uVar6,0);
  lVar17 = *(long *)(unaff_x20 + 0x10);
  if (lVar17 != 0) {
    if (*(uint *)(unaff_x20 + 0x18) < *(uint *)(lVar17 + 0x18)) {
      puVar10 = (undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
      *puVar10 = 0;
      thunk_FUN_044bb4b4(puVar10,0);
      return 0;
    }
    goto LAB_0772bc54;
  }
  goto code_r0x0772bc50;
LAB_0772a9bc:
  if (*(int *)(lVar17 + 0x18) <= iVar4) {
    if (unaff_x19[0x14] == 0) goto code_r0x0772bc50;
    FUN_087dab38(unaff_x19[0x14],0);
    if (unaff_x19[0x15] == 0) goto code_r0x0772bc50;
    FUN_087dab38(unaff_x19[0x15],0);
    plVar16 = (long *)unaff_x19[0x3c];
    lVar17 = unaff_x19[0x21];
    plVar8 = (long *)FUN_07715da0();
    if (plVar8 == (long *)0x0) goto code_r0x0772bc50;
    lVar12 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 == 0) goto LAB_0772aafc;
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    goto LAB_0772aae4;
  }
  lVar17 = FUN_05badb74(lVar17,iVar4,*(undefined8 *)puVar3);
  if (lVar17 == 0) goto code_r0x0772bc50;
  if (*(char *)(lVar17 + 0xb9) == '\0') {
    if ((unaff_x19[0x21] == 0) ||
       (lVar17 = FUN_05badb74(unaff_x19[0x21],iVar4,*(undefined8 *)puVar3), lVar17 == 0))
    goto code_r0x0772bc50;
    uVar7 = FUN_0772be68(lVar17,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(lVar17 + 0x18) != 0) {
        uVar6 = thunk_FUN_0952ff6c(*(long *)(lVar17 + 0x18),0);
        uVar6 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f30cd0,uVar6,*(undefined8 *)PTR_DAT_09f31598,0
                            );
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c6b48(uVar6,0);
        return 0;
      }
      goto code_r0x0772bc50;
    }
  }
  lVar17 = unaff_x19[0x21];
  iVar4 = iVar4 + 1;
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_04447e44();
  }
  goto LAB_0772a9bc;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar15 = piVar15 + 4;
    if (uVar7 == 0) break;
LAB_0772aae4:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
      goto LAB_0772abf4;
    }
  }
LAB_0772aafc:
  puVar10 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0772abf4:
  (*(code *)*puVar10)(plVar8,puVar10[1]);
  plVar8 = (long *)FUN_07715da0();
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0772ac6c;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f30ab8,0);
LAB_0772ac6c:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
    if (plVar16 != (long *)0x0) {
      lVar12 = *plVar16;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f312b8) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_0772acd8;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_044822ac(plVar16,*(long *)PTR_DAT_09f312b8,2);
LAB_0772acd8:
      (*(code *)*puVar10)(plVar16,lVar17);
      if (unaff_x19[0x15] != 0) {
        FUN_087dae58(unaff_x19[0x15],0);
        lVar17 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_00000078._4_4_);
        plVar8 = (long *)unaff_x19[0x3a];
        if (plVar8 != (long *)0x0) {
          lVar12 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                goto LAB_0772ad84;
              }
              uVar7 = uVar7 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f312c0,3);
LAB_0772ad84:
          (*(code *)*puVar10)(plVar8,in_stack_000000a8,puVar10[1]);
          if (in_stack_000000a8 != 0) {
            if (0 < (int)*(ulong *)(in_stack_000000a8 + 0x18)) {
              uVar7 = 0;
              uVar13 = *(ulong *)(in_stack_000000a8 + 0x18) & 0xffffffff;
              do {
                in_stack_00000138 = 0;
                if (uVar13 <= uVar7) {
LAB_0772bc54:
                    /* WARNING: Subroutine does not return */
                  FUN_04447e4c();
                }
                FUN_07726d40();
                lVar12 = in_stack_00000138;
                if (in_stack_00000138 == 0) {
                  iVar4 = (**(code **)(*unaff_x19 + 0x4f8))();
                  if (1 < iVar4) {
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
                  plVar8 = (long *)FUN_07715da0();
                  if (plVar8 == (long *)0x0) goto code_r0x0772bc50;
                  lVar12 = *plVar8;
                  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar13 != 0) {
                    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
                        goto LAB_0772aee8;
                      }
                      uVar13 = uVar13 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0772aee8:
                  iVar4 = (*(code *)*puVar10)(plVar8,puVar10[1]);
                  lVar12 = in_stack_00000138;
                  if (iVar4 == 1) {
                    plVar8 = (long *)unaff_x19[0x3a];
                    if (plVar8 == (long *)0x0) goto code_r0x0772bc50;
                    lVar14 = *plVar8;
                    uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    if (uVar13 != 0) {
                      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f312c0) {
                          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar15 + 7) * 0x10 + 0x138);
                          goto LAB_0772af60;
                        }
                        uVar13 = uVar13 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f312c0,7);
LAB_0772af60:
                    (*(code *)*puVar10)(plVar8,lVar12,puVar10[1]);
                  }
                  if ((in_stack_00000138 == 0) ||
                     (lVar12 = *(long *)(in_stack_00000138 + 0x78), lVar12 == 0))
                  goto code_r0x0772bc50;
                  uVar2 = *(uint *)(lVar12 + 0x18);
                  uVar13 = 0;
                  while ((long)uVar13 < (long)(int)uVar2) {
                    if (lVar17 == 0) goto code_r0x0772bc50;
                    if ((*(uint *)(lVar17 + 0x18) <= uVar13) || (uVar2 <= uVar13))
                    goto LAB_0772bc54;
                    *(int *)(lVar17 + 0x20 + uVar13 * 4) =
                         *(int *)(lVar12 + 0x20 + uVar13 * 4) + *(int *)(lVar17 + 0x20 + uVar13 * 4)
                    ;
                    uVar13 = uVar13 + 1;
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_04447e44();
                    }
                  }
                }
                uVar13 = (ulong)*(uint *)(in_stack_000000a8 + 0x18);
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)*(uint *)(in_stack_000000a8 + 0x18));
            }
            if (unaff_x19[0x16] != 0) {
              FUN_087dab38(unaff_x19[0x16],0);
              uVar6 = FUN_0991a7d0(unaff_x19[0x21]);
              return uVar6;
            }
          }
        }
      }
    }
  }
code_r0x0772bc50:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


