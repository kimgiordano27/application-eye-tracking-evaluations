/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ActivateTab
ENTRY_POINT: 077426d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07742a1c) */
/* WARNING: Removing unreachable block (ram,0x07742d18) */
/* WARNING: Removing unreachable block (ram,0x07742e04) */

undefined4 Meta_XR_MRUtilityKit_SceneDebugger__ActivateTab(void)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long unaff_x19;
  long unaff_x20;
  long *plVar22;
  ulong uVar23;
  long in_stack_00000040;
  ulong in_stack_00000080;
  long *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_00000110;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f31d50);
  FUN_04447ba8(PTR_DAT_09f31d58);
  FUN_04447ba8(PTR_DAT_09f31d60);
  FUN_04447ba8(PTR_DAT_09f31d68);
  FUN_04447ba8(PTR_DAT_09f1e7e8);
  lVar17 = in_stack_00000110;
  *(undefined1 *)(unaff_x20 + 0x231) = 1;
  puVar5 = PTR_DAT_09f313a0;
  puVar4 = PTR_DAT_09f1e7e8;
  puVar3 = PTR_DAT_09f1e6a8;
  in_stack_000000a8 = 0;
  if (unaff_x19 != 0) {
    lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31d48,*(undefined4 *)(unaff_x19 + 0x18));
    lVar8 = FUN_04447c90(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x19 + 0x18));
    lVar9 = FUN_04447c90(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x19 + 0x18));
    lVar10 = FUN_04447c90(*(undefined8 *)puVar5,*(undefined4 *)(unaff_x19 + 0x18));
    lVar11 = FUN_04447c90(*(undefined8 *)puVar3,*(undefined4 *)(unaff_x19 + 0x18));
    puVar6 = PTR_DAT_09f283d0;
    puVar5 = PTR_DAT_09f1f018;
    puVar3 = PTR_DAT_09f1eab8;
    in_stack_000000a8 = *(undefined8 *)puVar4;
    if (0 < *(int *)(unaff_x19 + 0x18)) {
      if (in_stack_00000098 == (long *)0x0) goto LAB_07742e00;
      uVar23 = 0;
      do {
        plVar12 = (long *)(**(code **)(*in_stack_00000098 + 0x298))
                                    (in_stack_00000098,*(undefined8 *)(*in_stack_00000098 + 0x2a0));
        plVar22 = (long *)0x0;
LAB_0774280c:
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar20 = *plVar12;
        lVar19 = *(long *)puVar5;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar21 != 0) {
          piVar16 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar19) {
              puVar13 = (undefined8 *)(lVar20 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0774285c;
            }
            uVar21 = uVar21 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)FUN_044822ac(plVar12,lVar19,0);
LAB_0774285c:
        uVar21 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar21 & 1) != 0) {
          lVar20 = *plVar12;
          lVar19 = *(long *)puVar5;
          uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar21 != 0) {
            piVar16 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar19) {
                puVar13 = (undefined8 *)(lVar20 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_077428bc;
              }
              uVar21 = uVar21 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar21 != 0);
          }
          puVar13 = (undefined8 *)FUN_044822ac(plVar12,lVar19,1);
LAB_077428bc:
          plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_044481e4();
          }
          plVar14 = (long *)thunk_FUN_04485360();
          if (*(uint *)(unaff_x19 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar1 = (long *)*plVar14;
          plVar14 = (long *)plVar14[1];
          if (plVar1 != (long *)0x0) {
            lVar19 = *(long *)puVar3;
            if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
               (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) !=
                lVar19)) {
                    /* WARNING: Subroutine does not return */
              FUN_044481e4(plVar1,lVar19);
            }
          }
          uVar21 = FUN_07742eb0();
          if ((uVar21 & 1) != 0) {
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)(PTR_DAT_09f1e5b8 + 0x48) + 0x40))
            {
                    /* WARNING: Subroutine does not return */
              FUN_044481e4(plVar14);
            }
            puVar15 = (undefined4 *)thunk_FUN_04485360(plVar14);
            in_stack_000000a0._4_4_ = *puVar15;
            plVar22 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                                 (long)&stack0x000000a0 + 4);
          }
          goto LAB_0774280c;
        }
        plVar12 = (long *)thunk_FUN_04485110(plVar12,*(undefined8 *)PTR_DAT_09f1f008);
        if (plVar12 != (long *)0x0) {
          lVar19 = *plVar12;
          uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar21 != 0) {
            piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09f1f008) {
                puVar13 = (undefined8 *)(lVar19 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_07742a00;
              }
              uVar21 = uVar21 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar21 != 0);
          }
          puVar13 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f1f008,0);
LAB_07742a00:
          (*(code *)*puVar13)(plVar12,puVar13[1]);
        }
        if (plVar22 == (long *)0x0) {
          lVar17 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
          if (lVar17 != 0) {
            if (*(int *)(lVar17 + 0x18) == 0) goto LAB_07742dfc;
            *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)PTR_DAT_09f31d60;
            thunk_FUN_044bb4b4();
            if (in_stack_00000040 != 0) {
              uVar18 = thunk_FUN_0952ff6c(in_stack_00000040,0);
              if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_07742dfc;
              *(undefined8 *)(lVar17 + 0x28) = uVar18;
              thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x28),uVar18);
              if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_07742dfc;
              *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)PTR_DAT_09f31d68;
              thunk_FUN_044bb4b4();
              if (*(uint *)(unaff_x19 + 0x18) <= (uint)uVar23) goto LAB_07742dfc;
              plVar12 = *(long **)(unaff_x19 + ((long)(uVar23 << 0x20) >> 0x1d) + 0x20);
              if (plVar12 == (long *)0x0) {
                uVar18 = 0;
              }
              else {
                uVar18 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
              }
              if (*(uint *)(lVar17 + 0x18) < 4) goto LAB_07742dfc;
              *(undefined8 *)(lVar17 + 0x38) = uVar18;
              thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x38));
              if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_07742dfc;
              *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)PTR_DAT_09f31d58;
              thunk_FUN_044bb4b4();
              uVar18 = FUN_078b57fc(lVar17,0);
LAB_07742da8:
              lVar17 = *(long *)PTR_DAT_09f1e540;
              iVar2 = *(int *)(lVar17 + 0xe4);
joined_r0x07742dbc:
              if (iVar2 == 0) {
                thunk_FUN_044a54b4(lVar17);
              }
              FUN_094c6b48(uVar18,0);
              return 0;
            }
          }
          goto LAB_07742e00;
        }
        if (*(long *)(*plVar22 + 0x40) != *(long *)(*(long *)(PTR_DAT_09f1e5b8 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar22);
        }
        piVar16 = (int *)thunk_FUN_04485360();
        if ((in_stack_00000080 & 0x100000000) != 0) {
          if ((lVar17 == 0) || (lVar19 = *(long *)(lVar17 + 0x80), lVar19 == 0)) goto LAB_07742e00;
          if (*(uint *)(lVar19 + 0x18) <= uVar23) goto LAB_07742dfc;
          if (*piVar16 != *(int *)(lVar19 + uVar23 * 4 + 0x20)) {
            if (in_stack_00000040 != 0) {
              uVar18 = thunk_FUN_0952ff6c(in_stack_00000040,0);
              if (*(uint *)(unaff_x19 + 0x18) <= (uint)uVar23) goto LAB_07742dfc;
              uVar18 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f31d50,uVar18,
                                    *(undefined8 *)(unaff_x19 + uVar23 * 8 + 0x20),0);
              goto LAB_07742da8;
            }
            goto LAB_07742e00;
          }
        }
        if (*(uint *)(unaff_x19 + 0x18) <= uVar23) {
LAB_07742dfc:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if ((((lVar7 == 0) || (lVar8 == 0)) || (lVar9 == 0)) || ((lVar10 == 0 || (lVar11 == 0))))
        goto LAB_07742e00;
        if ((((*(uint *)(lVar7 + 0x18) <= uVar23) ||
             ((*(uint *)(lVar8 + 0x18) <= uVar23 || (*(uint *)(lVar9 + 0x18) <= uVar23)))) ||
            (*(uint *)(lVar10 + 0x18) <= uVar23)) || (*(uint *)(lVar11 + 0x18) <= uVar23))
        goto LAB_07742dfc;
        uVar21 = FUN_07742fc0();
        if ((uVar21 & 1) == 0) {
          lVar17 = *(long *)PTR_DAT_09f1e540;
          iVar2 = *(int *)(lVar17 + 0xe4);
          uVar18 = in_stack_000000a8;
          goto joined_r0x07742dbc;
        }
        uVar23 = uVar23 + 1;
      } while ((long)uVar23 < (long)*(int *)(unaff_x19 + 0x18));
    }
    if (lVar17 != 0) {
      *(long *)(lVar17 + 0x88) = lVar8;
      thunk_FUN_044bb4b4((long *)(lVar17 + 0x88),lVar8);
      *(long *)(lVar17 + 0x90) = lVar9;
      thunk_FUN_044bb4b4((long *)(lVar17 + 0x90),lVar9);
      *(long *)(lVar17 + 0x98) = lVar10;
      thunk_FUN_044bb4b4();
      *(long *)(lVar17 + 0xa8) = lVar11;
      thunk_FUN_044bb4b4((long *)(lVar17 + 0xa8));
      return 1;
    }
  }
LAB_07742e00:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


