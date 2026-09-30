/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromPrefab>d__80$$MoveNext
ENTRY_POINT: 0772a674
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


undefined8 Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromPrefab>d__80__MoveNext(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long *plVar15;
  long *unaff_x21;
  long lVar16;
  long unaff_x23;
  undefined8 uVar17;
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
  
  do {
    lVar16 = *(long *)(unaff_x23 + 0xc0);
    if (*(int *)(*param_1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar6 = FUN_0952c404(lVar16,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x23 + 0x18) == 0) goto code_r0x0772bc50;
      uVar17 = thunk_FUN_0952ff6c(*(long *)(unaff_x23 + 0x18),0);
      uVar8 = *(undefined8 *)PTR_DAT_09f30cd0;
      puVar9 = (undefined8 *)PTR_DAT_09f315d0;
LAB_0772ab30:
      uVar10 = *puVar9;
      goto LAB_0772ab3c;
    }
    uVar6 = FUN_0771f7d0(lVar16,0);
    lVar11 = in_stack_00000148;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        uVar17 = thunk_FUN_0952ff6c(*(long *)(unaff_x23 + 0x18),0);
        uVar8 = *(undefined8 *)PTR_DAT_09f30cd0;
        puVar9 = (undefined8 *)PTR_DAT_09f31590;
        goto LAB_0772ab30;
      }
      goto code_r0x0772bc50;
    }
    if ((in_stack_00000148 == 0) || (lVar16 == 0)) goto code_r0x0772bc50;
    iVar4 = FUN_094d3ba4(lVar16,0);
    if (iVar4 < *(int *)(lVar11 + 0x18)) {
      uVar5 = FUN_094d3ba4(lVar16,0);
      FUN_04ad55a4(&stack0x00000148,uVar5,*(undefined8 *)PTR_DAT_09f31530);
    }
    lVar11 = *(long *)(unaff_x20 + 0x10);
    if (lVar11 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    uVar17 = *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar6 = FUN_09531730(uVar17,0,0);
    if ((uVar6 & 1) == 0) goto LAB_0772a98c;
    if (unaff_x28 == 0) goto code_r0x0772bc50;
    lVar11 = *(long *)(unaff_x28 + 0x10);
    *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
    if (lVar11 == 0) goto code_r0x0772bc50;
    uVar2 = *(uint *)(unaff_x28 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x28 + 0x18) = uVar2 + 1;
      plVar7 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
      *plVar7 = unaff_x23;
      thunk_FUN_044bb4b4(plVar7,unaff_x23);
    }
    else {
      FUN_05bade44();
    }
    lVar11 = *(long *)(unaff_x20 + 0x10);
    if (lVar11 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    plVar7 = *(long **)(lVar11 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    if (plVar7 == (long *)0x0) goto code_r0x0772bc50;
    uVar17 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    lVar11 = *(long *)(unaff_x20 + 0x10);
    if (lVar11 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x0772bc50;
    in_stack_000000f8 = FUN_0952fcb8(lVar11,0);
    uVar8 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x25 + 0x48),&stack0x000000f8);
    uVar17 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f2b858,uVar17,uVar8,0);
    *(undefined8 *)(unaff_x23 + 0x20) = uVar17;
    thunk_FUN_044bb4b4();
    lVar11 = *(long *)(unaff_x20 + 0x10);
    if (lVar11 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    if (lVar11 == 0) goto code_r0x0772bc50;
    uVar5 = FUN_0952fcb8(lVar11,0);
    *(undefined4 *)(unaff_x23 + 0x10) = uVar5;
    lVar11 = *(long *)(unaff_x20 + 0x10);
    if (lVar11 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    *(undefined8 *)(unaff_x23 + 0x18) =
         *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
    thunk_FUN_044bb4b4();
    uVar5 = FUN_094f3ae4(lVar16,0);
    *(undefined4 *)(unaff_x23 + 0x30) = uVar5;
    plVar7 = (long *)(unaff_x23 + 0xb0);
    *plVar7 = in_stack_00000148;
    lVar16 = in_stack_00000148;
    while( true ) {
      thunk_FUN_044bb4b4(plVar7,lVar16);
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
        lVar16 = unaff_x19[0x21];
        if (lVar16 == 0) goto code_r0x0772bc50;
        iVar4 = 0;
        goto LAB_0772a9bc;
      }
      if (uVar1 <= uVar2) goto LAB_0772bc54;
      uVar6 = FUN_07726ce8();
      if ((uVar6 & 1) == 0) break;
      lVar16 = *unaff_x21;
      if (lVar16 == 0) {
        lVar16 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2c988);
        FUN_062f89f4();
        *(long *)(unaff_x20 + 0x20) = lVar16;
        thunk_FUN_044bb4b4();
      }
      iVar4 = FUN_046f1dd0(in_stack_000000a8,lVar16,*unaff_x27);
      if (iVar4 != -1) break;
      iVar4 = (**(code **)(*unaff_x19 + 0x4f8))();
      if (1 < iVar4) {
        lVar16 = *(long *)(unaff_x20 + 0x10);
        if (lVar16 == 0) goto code_r0x0772bc50;
        if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
        lVar16 = *(long *)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
        if (lVar16 == 0) goto code_r0x0772bc50;
        uVar17 = thunk_FUN_0952ff6c(lVar16,0);
        uVar17 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f30cd0,uVar17,*(undefined8 *)PTR_DAT_09f315e0
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c33b0(uVar17,0);
      }
      lVar16 = *(long *)(unaff_x20 + 0x10);
      if (lVar16 == 0) goto code_r0x0772bc50;
      if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
      plVar7 = (long *)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
      *plVar7 = 0;
      lVar16 = 0;
    }
    unaff_x23 = thunk_FUN_0448520c(*unaff_x29);
    FUN_0772bc58();
    lVar16 = *(long *)(unaff_x20 + 0x10);
    if (lVar16 == 0) goto code_r0x0772bc50;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x20 + 0x18)) goto LAB_0772bc54;
    if (unaff_x23 == 0) goto code_r0x0772bc50;
    FUN_0772bd1c(unaff_x23,0,
                 *(undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20));
    uVar17 = *(undefined8 *)(unaff_x23 + 200);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar6 = FUN_0952c404(uVar17,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x23 + 0x18) != 0) {
        uVar17 = thunk_FUN_0952ff6c(*(long *)(unaff_x23 + 0x18),0);
        uVar8 = *(undefined8 *)PTR_DAT_09f30cd0;
        puVar9 = (undefined8 *)PTR_DAT_09f31598;
        goto LAB_0772ab30;
      }
      goto code_r0x0772bc50;
    }
    if (*(long *)(unaff_x23 + 200) == 0) goto code_r0x0772bc50;
    in_stack_00000148 = thunk_FUN_094db43c(*(long *)(unaff_x23 + 200),0);
    iVar4 = (**(code **)(*unaff_x19 + 0x4f8))();
    if (4 < iVar4) {
      if (in_stack_00000148 == 0) goto code_r0x0772bc50;
      in_stack_000000f8 = (undefined4)*(undefined8 *)(in_stack_00000148 + 0x18);
      uVar17 = thunk_FUN_04484e3c(*(undefined8 *)(unaff_x25 + 0x48),&stack0x000000f8);
      uVar17 = FUN_078b5afc(*unaff_x26,uVar17,*(undefined8 *)(unaff_x23 + 0x18),0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar17,0);
    }
    param_1 = (long *)PTR_DAT_09f1e538;
  } while (in_stack_00000148 != 0);
  uVar17 = *(undefined8 *)(unaff_x23 + 0x20);
  uVar8 = *(undefined8 *)PTR_DAT_09f30cd0;
  uVar10 = *(undefined8 *)PTR_DAT_09f31598;
LAB_0772ab3c:
  uVar17 = FUN_078b4f58(uVar8,uVar17,uVar10,0);
  if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
  }
  FUN_094c6b48(uVar17,0);
  lVar16 = *(long *)(unaff_x20 + 0x10);
  if (lVar16 != 0) {
    if (*(uint *)(unaff_x20 + 0x18) < *(uint *)(lVar16 + 0x18)) {
      puVar9 = (undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x20 + 0x18) * 8 + 0x20);
      *puVar9 = 0;
      thunk_FUN_044bb4b4(puVar9,0);
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
  if (*(int *)(lVar16 + 0x18) <= iVar4) {
    if (unaff_x19[0x14] == 0) goto code_r0x0772bc50;
    FUN_087dab38(unaff_x19[0x14],0);
    if (unaff_x19[0x15] == 0) goto code_r0x0772bc50;
    FUN_087dab38(unaff_x19[0x15],0);
    plVar15 = (long *)unaff_x19[0x3c];
    lVar16 = unaff_x19[0x21];
    plVar7 = (long *)FUN_07715da0();
    if (plVar7 == (long *)0x0) goto code_r0x0772bc50;
    lVar11 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 == 0) goto LAB_0772aafc;
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    goto LAB_0772aae4;
  }
  lVar16 = FUN_05badb74(lVar16,iVar4,*(undefined8 *)puVar3);
  if (lVar16 == 0) goto code_r0x0772bc50;
  if (*(char *)(lVar16 + 0xb9) == '\0') {
    if ((unaff_x19[0x21] == 0) ||
       (lVar16 = FUN_05badb74(unaff_x19[0x21],iVar4,*(undefined8 *)puVar3), lVar16 == 0))
    goto code_r0x0772bc50;
    uVar6 = FUN_0772be68(lVar16,0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(lVar16 + 0x18) != 0) {
        uVar17 = thunk_FUN_0952ff6c(*(long *)(lVar16 + 0x18),0);
        uVar17 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f30cd0,uVar17,*(undefined8 *)PTR_DAT_09f31598
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c6b48(uVar17,0);
        return 0;
      }
      goto code_r0x0772bc50;
    }
  }
  lVar16 = unaff_x19[0x21];
  iVar4 = iVar4 + 1;
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_04447e44();
  }
  goto LAB_0772a9bc;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar14 = piVar14 + 4;
    if (uVar6 == 0) break;
LAB_0772aae4:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
      goto LAB_0772abf4;
    }
  }
LAB_0772aafc:
  puVar9 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0772abf4:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
  plVar7 = (long *)FUN_07715da0();
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0772ac6c;
        }
        uVar6 = uVar6 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f30ab8,0);
LAB_0772ac6c:
    (*(code *)*puVar9)(plVar7,puVar9[1]);
    if (plVar15 != (long *)0x0) {
      lVar11 = *plVar15;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312b8) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_0772acd8;
          }
          uVar6 = uVar6 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f312b8,2);
LAB_0772acd8:
      (*(code *)*puVar9)(plVar15,lVar16);
      if (unaff_x19[0x15] != 0) {
        FUN_087dae58(unaff_x19[0x15],0);
        lVar16 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,in_stack_00000078._4_4_);
        plVar7 = (long *)unaff_x19[0x3a];
        if (plVar7 != (long *)0x0) {
          lVar11 = *plVar7;
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_0772ad84;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f312c0,3);
LAB_0772ad84:
          (*(code *)*puVar9)(plVar7,in_stack_000000a8,puVar9[1]);
          if (in_stack_000000a8 != 0) {
            if (0 < (int)*(ulong *)(in_stack_000000a8 + 0x18)) {
              uVar6 = 0;
              uVar12 = *(ulong *)(in_stack_000000a8 + 0x18) & 0xffffffff;
              do {
                in_stack_00000138 = 0;
                if (uVar12 <= uVar6) goto LAB_0772bc54;
                FUN_07726d40();
                lVar11 = in_stack_00000138;
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
                    *(undefined2 *)(lVar11 + 0xb8) = 0x101;
                    if (in_stack_00000138 == 0) goto code_r0x0772bc50;
                  }
                  plVar7 = (long *)FUN_07715da0();
                  if (plVar7 == (long *)0x0) goto code_r0x0772bc50;
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x24) * 0x10 + 0x138);
                        goto LAB_0772aee8;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0772aee8:
                  iVar4 = (*(code *)*puVar9)(plVar7,puVar9[1]);
                  lVar11 = in_stack_00000138;
                  if (iVar4 == 1) {
                    plVar7 = (long *)unaff_x19[0x3a];
                    if (plVar7 == (long *)0x0) goto code_r0x0772bc50;
                    lVar13 = *plVar7;
                    uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar12 != 0) {
                      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_09f312c0) {
                          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar14 + 7) * 0x10 + 0x138);
                          goto LAB_0772af60;
                        }
                        uVar12 = uVar12 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f312c0,7);
LAB_0772af60:
                    (*(code *)*puVar9)(plVar7,lVar11,puVar9[1]);
                  }
                  if ((in_stack_00000138 == 0) ||
                     (lVar11 = *(long *)(in_stack_00000138 + 0x78), lVar11 == 0))
                  goto code_r0x0772bc50;
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  uVar12 = 0;
                  while ((long)uVar12 < (long)(int)uVar2) {
                    if (lVar16 == 0) goto code_r0x0772bc50;
                    if ((*(uint *)(lVar16 + 0x18) <= uVar12) || (uVar2 <= uVar12))
                    goto LAB_0772bc54;
                    *(int *)(lVar16 + 0x20 + uVar12 * 4) =
                         *(int *)(lVar11 + 0x20 + uVar12 * 4) + *(int *)(lVar16 + 0x20 + uVar12 * 4)
                    ;
                    uVar12 = uVar12 + 1;
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_04447e44();
                    }
                  }
                }
                uVar12 = (ulong)*(uint *)(in_stack_000000a8 + 0x18);
                uVar6 = uVar6 + 1;
              } while ((long)uVar6 < (long)(int)*(uint *)(in_stack_000000a8 + 0x18));
            }
            if (unaff_x19[0x16] != 0) {
              FUN_087dab38(unaff_x19[0x16],0);
              uVar17 = FUN_0991a7d0(unaff_x19[0x21]);
              return uVar17;
            }
          }
        }
      }
    }
  }
  goto code_r0x0772bc50;
}


