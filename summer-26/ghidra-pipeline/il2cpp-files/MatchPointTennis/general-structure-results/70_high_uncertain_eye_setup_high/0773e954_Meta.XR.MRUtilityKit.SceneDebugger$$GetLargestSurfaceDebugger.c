/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetLargestSurfaceDebugger
ENTRY_POINT: 0773e954
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


bool Meta_XR_MRUtilityKit_SceneDebugger__GetLargestSurfaceDebugger
               (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long lVar12;
  long *unaff_x29;
  undefined8 uVar13;
  int iStack0000000000000040;
  int iStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000068;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  int in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_00000180;
  
  while( true ) {
    plVar4 = (long *)FUN_04447c90(*param_1,1);
    in_stack_00000098 = in_stack_00000090._4_4_;
    lVar5 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
    if (plVar4 == (long *)0x0) break;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_0773eccc;
    if ((int)plVar4[3] == 0) goto LAB_0773ecc4;
    plVar4[4] = lVar5;
    thunk_FUN_044bb4b4(plVar4 + 4,lVar5);
    FUN_0771ec00(param_2,plVar4,0);
    do {
      unaff_x25 = unaff_x25 + 1;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x25) {
        lVar5 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 == 0) goto LAB_0773ea1c;
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0773ea04;
      }
      lVar5 = FUN_05badb74();
      if (unaff_x27 == 0) goto LAB_0773ecc8;
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_x25) goto LAB_0773ecc4;
      if (lVar5 == 0) goto LAB_0773ecc8;
      lVar6 = *unaff_x29;
      uVar13 = *(undefined8 *)(unaff_x27 + unaff_x25 * 8 + 0x20);
      lVar12 = *(long *)(lVar5 + 0xc0);
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f313c8) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0773e2ec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e2ec:
      (*(code *)*puVar7)();
      lVar6 = *unaff_x29;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f313c8) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 10) * 0x10 + 0x138);
            goto LAB_0773e354;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e354:
      (*(code *)*puVar7)();
      if (lVar12 == 0) goto LAB_0773ecc8;
      iVar3 = FUN_094d3ba4(lVar12,0);
      if (*(long *)(lVar5 + 0x88) == 0) goto LAB_0773ecc8;
      iVar1 = *(int *)(*(long *)(lVar5 + 0x88) + 0x18);
      if (iVar1 < iVar3) {
        if (3 < in_stack_00000090._4_4_) {
          uVar8 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,*(undefined8 *)(lVar5 + 0x20),
                               *(undefined8 *)PTR_DAT_09f31c30,0);
          lVar11 = *(long *)PTR_DAT_09f22e40;
          lVar6 = *(long *)(lVar11 + 0x38);
          if (lVar6 == 0) {
            FUN_04482014(lVar11);
            lVar6 = *(long *)(lVar11 + 0x38);
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04481fb8();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04481fb8();
          }
          FUN_0771ec00(uVar8,**(undefined8 **)(lVar6 + 0xb8),0);
        }
      }
      else if ((1 < in_stack_00000090._4_4_) && (iVar3 < iVar1)) {
        uVar8 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,*(undefined8 *)(lVar5 + 0x20),
                             *(undefined8 *)PTR_DAT_09f31c38,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c33b0(uVar8,0);
      }
      lVar6 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0773e514;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e514:
      uVar9 = (*(code *)*puVar7)();
      if ((uVar9 & 1) != 0) {
        FUN_07732404(in_stack_00000050,&stack0x000000c4,lVar5,lVar12,in_stack_00000078,0);
      }
      lVar6 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 0x24) * 0x10 + 0x138);
            goto LAB_0773e59c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e59c:
      iVar3 = (*(code *)*puVar7)();
      if (iVar3 == 1) {
        lVar6 = *in_stack_00000080;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f312c0) {
              puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0773e608;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
        (*(code *)*puVar7)(in_stack_00000080,lVar5,unaff_w26,puVar7[1]);
      }
      *(int *)(lVar5 + 0x28) = unaff_w26;
      FUN_0773ca38(&stack0x000000d0,uVar13,lVar5);
      if (in_stack_00000068 == 0) goto LAB_0773ecc8;
      lVar6 = *(long *)(in_stack_00000068 + 0x10);
      lVar12 = *(long *)PTR_DAT_09f1e870;
      *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_0773ecc8;
      uVar2 = *(uint *)(in_stack_00000068 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(in_stack_00000068 + 0x18) = uVar2 + 1;
        puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        *puVar7 = uVar13;
        thunk_FUN_044bb4b4(puVar7,uVar13);
      }
      else {
        FUN_05bade44(in_stack_00000068,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(in_stack_00000088 + 0x10);
      lVar12 = *(long *)PTR_DAT_09f31558;
      *(int *)(in_stack_00000088 + 0x1c) = *(int *)(in_stack_00000088 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_0773ecc8;
      uVar2 = *(uint *)(in_stack_00000088 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(in_stack_00000088 + 0x18) = uVar2 + 1;
        plVar4 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        *plVar4 = lVar5;
        thunk_FUN_044bb4b4(plVar4,lVar5);
      }
      else {
        FUN_05bade44(in_stack_00000088,lVar5,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      plVar4 = (long *)(lVar5 + 0xd0);
      lVar6 = *plVar4;
      if (lVar6 == 0) goto LAB_0773ecc8;
      uVar9 = 0;
      lVar12 = 0x20;
      unaff_w26 = *(int *)(lVar5 + 0x30) + unaff_w26;
      while ((long)uVar9 < (long)(int)*(uint *)(lVar6 + 0x18)) {
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_0773ecc4;
        *(undefined8 *)(lVar6 + lVar12) = 0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar6 + lVar12),0);
        lVar6 = *plVar4;
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 8;
        if (lVar6 == 0) goto LAB_0773ecc8;
      }
      *plVar4 = 0;
      thunk_FUN_044bb4b4(plVar4,0);
    } while (in_stack_00000090._4_4_ < 4);
    lVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
    if (lVar6 == 0) break;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0773ecc4;
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
    thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x20));
    if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0773ecc4;
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar5 + 0x20);
    thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x28));
    if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0773ecc4;
    *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
    thunk_FUN_044bb4b4();
    lVar5 = *unaff_x29;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f313c8) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_0773e850;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773e850:
    in_stack_000000b8._4_4_ = (*(code *)*puVar7)();
    uVar13 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
    if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_0773ecc4;
    *(undefined8 *)(lVar6 + 0x38) = uVar13;
    thunk_FUN_044bb4b4((undefined8 *)(lVar6 + 0x38),uVar13);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_0773ecc4;
    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
    thunk_FUN_044bb4b4();
    lVar5 = *in_stack_00000080;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f312c0) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_0773e908;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(in_stack_00000080,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
    in_stack_000000b8._4_4_ = (*(code *)*puVar7)(in_stack_00000080,puVar7[1]);
    uVar13 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
    if (*(uint *)(lVar6 + 0x18) < 6) goto LAB_0773ecc4;
    *(undefined8 *)(lVar6 + 0x48) = uVar13;
    thunk_FUN_044bb4b4();
    param_2 = FUN_078b57fc(lVar6,0);
    param_1 = (undefined8 *)PTR_DAT_09f20d20;
  }
  goto LAB_0773ecc8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0773ea04:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
      puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x16) * 0x10 + 0x138);
      goto LAB_0773ea3c;
    }
  }
LAB_0773ea1c:
  puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773ea3c:
  iVar3 = (*(code *)*puVar7)();
  if (iVar3 == 4) {
    lVar5 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x1a) * 0x10 + 0x138);
          goto LAB_0773eaa8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773eaa8:
    uVar13 = (*(code *)*puVar7)();
    lVar5 = *unaff_x29;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f313c8) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xe) * 0x10 + 0x138);
          goto LAB_0773eb18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773eb18:
    (*(code *)*puVar7)(uVar13);
  }
  lVar5 = in_stack_00000180;
  if (3 < in_stack_00000090._4_4_) {
    lVar6 = *unaff_x29;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f313c8) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_0773eb94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773eb94:
    in_stack_000000b8._4_4_ = (*(code *)*puVar7)();
    uVar13 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
    if (lVar5 == 0) goto LAB_0773ecc8;
    in_stack_000000b0 = FUN_087dad08(lVar5,0);
    uVar8 = FUN_07a3c8f0(&stack0x000000b0,0);
    uVar13 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar13,*(undefined8 *)PTR_DAT_09f31c28,
                          uVar8,0);
    plVar4 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
    lVar5 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&stack0x00000098);
    if (plVar4 == (long *)0x0) goto LAB_0773ecc8;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_0773eccc:
      uVar13 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar13,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar4[4] = lVar5;
    thunk_FUN_044bb4b4(plVar4 + 4,lVar5);
    FUN_0771ec00(uVar13,plVar4,0);
  }
  if (*(long *)(in_stack_00000048 + 0xd8) != 0) {
    FUN_087dae58(*(long *)(in_stack_00000048 + 0xd8),0);
    return iStack0000000000000044 < iStack0000000000000040;
  }
LAB_0773ecc8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


