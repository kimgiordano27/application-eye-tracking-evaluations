/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_TextStyle
ENTRY_POINT: 0728c9a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_TextStyle(ulong param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long lVar9;
  long unaff_x20;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x29;
  float fVar16;
  float fVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092c1d88);
    FUN_04077588(PTR_DAT_092c1da8);
    FUN_04077588(PTR_DAT_09285ae0);
    FUN_04077588(PTR_DAT_092c1e40);
    FUN_04077588(PTR_DAT_092c1e70);
    *(undefined1 *)(unaff_x19 + 0x7e9) = 1;
  }
  lVar4 = FUN_0728b8fc();
  if ((unaff_x20 == 0) || (lVar4 == 0)) goto LAB_0728cffc;
  lVar11 = *(long *)(unaff_x20 + 0x10);
  if ((lVar11 == 0) ||
     (((lVar9 = *(long *)(lVar4 + 0x10), lVar9 == 0 || (*(long *)(lVar11 + 0x28) == 0)) ||
      (*(long *)(lVar9 + 0x28) == 0)))) goto LAB_0728cffc;
  lVar15 = *(long *)(lVar11 + 0x40);
  lVar14 = *(long *)(lVar9 + 0x40);
  if (lVar15 == lVar14) {
    return 0;
  }
  if ((lVar15 == 0) || (lVar13 = *(long *)(*(long *)(lVar11 + 0x28) + 0x40), lVar13 == 0))
  goto LAB_0728cffc;
  lVar12 = *(long *)(*(long *)(lVar9 + 0x28) + 0x40);
  uVar18 = *(undefined4 *)(lVar15 + 0x38);
  uVar19 = *(undefined4 *)(lVar13 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar16 = (float)FUN_0767a6e0(uVar18,uVar19,0);
  if ((lVar14 == 0) || (lVar12 == 0)) goto LAB_0728cffc;
  fVar17 = (float)FUN_0767a590(*(undefined4 *)(lVar14 + 0x38),*(undefined4 *)(lVar12 + 0x38),0);
  if (fVar17 < fVar16) {
    return 0;
  }
  uVar5 = FUN_072890dc(lVar15,lVar14);
  if ((uVar5 & 1) == 0) {
    fVar16 = (float)FUN_07289198(lVar13,lVar14,lVar15);
    if (fVar16 < 0.0) {
      return 0;
    }
  }
  else {
    fVar16 = (float)FUN_07289198(lVar12,lVar15,lVar14);
    if (0.0 < fVar16) {
      return 0;
    }
  }
  plVar10 = *(long **)(unaff_x29 + 0x10);
  if (plVar10 == (long *)0x0) goto LAB_0728cffc;
  lVar6 = thunk_FUN_04096bb4(*(undefined8 *)
                              (*plVar10 +
                               (ulong)*(ushort *)(*(long *)PTR_DAT_092c1d88 + 0x50) * 0x10 + 0x140))
  ;
  lVar6 = (**(code **)(lVar6 + 8))(plVar10,lVar6);
  FUN_072894d8(lVar13,lVar15,lVar12,lVar14,lVar6);
  uVar5 = FUN_072890dc(lVar6,*(undefined8 *)(unaff_x29 + 0x68));
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(unaff_x29 + 0x68) == 0) || (lVar6 == 0)) goto LAB_0728cffc;
    *(undefined8 *)(lVar6 + 0x34) = *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
  }
  uVar5 = FUN_072890dc(lVar15,lVar14);
  lVar1 = lVar15;
  if ((uVar5 & 1) == 0) {
    lVar1 = lVar14;
  }
  uVar5 = FUN_072890dc(lVar1,lVar6);
  if ((uVar5 & 1) != 0) {
    if (lVar6 == 0) goto LAB_0728cffc;
    *(undefined8 *)(lVar6 + 0x34) = *(undefined8 *)(lVar1 + 0x34);
  }
  uVar5 = FUN_0728909c(lVar6,lVar15);
  if (((uVar5 & 1) == 0) && (uVar5 = FUN_0728909c(lVar6,lVar14), (uVar5 & 1) == 0)) {
    uVar5 = FUN_0728909c(lVar13,*(undefined8 *)(unaff_x29 + 0x68));
    if ((((uVar5 & 1) != 0) ||
        (uVar5 = FUN_07289198(lVar13,*(undefined8 *)(unaff_x29 + 0x68),lVar6), extraout_s0 < 0.0))
       && ((uVar5 = FUN_0728909c(lVar12,*(undefined8 *)(unaff_x29 + 0x68)), (uVar5 & 1) != 0 ||
           (uVar5 = FUN_07289198(lVar12,*(undefined8 *)(unaff_x29 + 0x68),lVar6),
           0.0 < extraout_s0_00)))) {
      if ((*(long *)(unaff_x29 + 0x18) != 0) &&
         (uVar7 = FUN_0728a960(uVar5,*(undefined8 *)(unaff_x29 + 0x10),
                               *(undefined8 *)(lVar11 + 0x28)), *(long *)(unaff_x29 + 0x18) != 0)) {
        uVar7 = FUN_0728a960(uVar7,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(lVar9 + 0x28));
        if ((*(long *)(lVar9 + 0x28) != 0) &&
           (((*(long *)(unaff_x29 + 0x18) != 0 &&
             (FUN_0728a2f0(uVar7,*(undefined8 *)(unaff_x29 + 0x10),
                           *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x38),lVar11), lVar6 != 0)) &&
            (*(long *)(lVar11 + 0x40) != 0)))) {
          plVar10 = *(long **)(unaff_x29 + 0x10);
          *(undefined8 *)(*(long *)(lVar11 + 0x40) + 0x34) = *(undefined8 *)(lVar6 + 0x34);
          if (plVar10 != (long *)0x0) {
            lVar9 = thunk_FUN_04096bb4(*(undefined8 *)
                                        (*plVar10 +
                                         (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) * 0x10
                                        + 0x140));
            (**(code **)(lVar9 + 8))(plVar10,lVar6,lVar9);
            if (*(long *)(unaff_x29 + 0x60) != 0) {
              lVar9 = *(long *)(lVar11 + 0x40);
              uVar18 = FUN_061e9f3c(*(long *)(unaff_x29 + 0x60),lVar9,
                                    *(undefined8 *)PTR_DAT_092c1e70);
              if (lVar9 != 0) {
                *(undefined4 *)(lVar9 + 0x3c) = uVar18;
                puVar3 = PTR_DAT_092c1e40;
                if (*(long *)(lVar11 + 0x40) != 0) {
                  iVar2 = *(int *)(*(long *)(lVar11 + 0x40) + 0x3c);
                  lVar9 = *(long *)PTR_DAT_092c1e40;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar9 = *(long *)puVar3;
                  }
                  if (iVar2 == **(int **)(lVar9 + 0xb8)) {
                    thunk_FUN_040dedf8(PTR_DAT_0929cb88);
                    uVar7 = thunk_FUN_040b4efc();
                    uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c1e78);
                    FUN_07679464(uVar7,uVar8,0);
                    uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c1e80);
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar7,uVar8);
                  }
                  FUN_0728c604(unaff_x29,*(undefined8 *)(lVar11 + 0x40),lVar15,lVar13,lVar14,lVar12)
                  ;
                  lVar11 = FUN_0728b924();
                  *(undefined1 *)(lVar4 + 0x26) = 1;
                  *(undefined1 *)(unaff_x20 + 0x26) = 1;
                  if (lVar11 != 0) {
                    *(undefined1 *)(lVar11 + 0x26) = 1;
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0728cffc;
    }
    lVar14 = *(long *)(unaff_x29 + 0x68);
    if (lVar12 == lVar14) {
      if ((*(long *)(unaff_x29 + 0x18) == 0) ||
         (uVar7 = FUN_0728a960(uVar5,*(undefined8 *)(unaff_x29 + 0x10),
                               *(undefined8 *)(lVar11 + 0x28)), *(long *)(unaff_x29 + 0x18) == 0))
      goto LAB_0728cffc;
      FUN_0728a2f0(uVar7,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(lVar9 + 0x28),lVar11);
      uVar7 = FUN_0728bb74(unaff_x29);
      lVar11 = FUN_0728b8fc(uVar7,uVar7);
      if (lVar11 == 0) goto LAB_0728cffc;
      lVar9 = *(long *)(lVar11 + 0x10);
      uVar8 = FUN_0728b8fc(lVar11,uVar7);
      FUN_0728be24(unaff_x29,uVar8,lVar4);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_0728cffc;
      uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x38);
      lVar4 = lVar9;
    }
    else {
      if (lVar13 != lVar14) {
        fVar16 = (float)FUN_07289198(lVar13,lVar14,lVar6);
        if (0.0 <= fVar16) {
          lVar14 = FUN_0728b924();
          *(undefined1 *)(unaff_x20 + 0x26) = 1;
          if ((lVar14 == 0) ||
             (lVar15 = *(long *)(unaff_x29 + 0x18), *(undefined1 *)(lVar14 + 0x26) = 1, lVar15 == 0)
             ) goto LAB_0728cffc;
          FUN_0728a960(lVar14,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(lVar11 + 0x28));
          lVar14 = *(long *)(unaff_x29 + 0x68);
          if ((lVar14 == 0) || (*(long *)(lVar11 + 0x40) == 0)) goto LAB_0728cffc;
          *(undefined8 *)(*(long *)(lVar11 + 0x40) + 0x34) = *(undefined8 *)(lVar14 + 0x34);
        }
        else {
          lVar14 = *(long *)(unaff_x29 + 0x68);
        }
        uVar7 = FUN_07289198(lVar12,lVar14,lVar6);
        if (extraout_s0_01 <= 0.0) {
          lVar11 = *(long *)(unaff_x29 + 0x18);
          *(undefined1 *)(lVar4 + 0x26) = 1;
          *(undefined1 *)(unaff_x20 + 0x26) = 1;
          if (lVar11 == 0) goto LAB_0728cffc;
          FUN_0728a960(uVar7,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(lVar9 + 0x28));
          if ((*(long *)(unaff_x29 + 0x68) == 0) || (*(long *)(lVar9 + 0x40) == 0))
          goto LAB_0728cffc;
          *(undefined8 *)(*(long *)(lVar9 + 0x40) + 0x34) =
               *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
        }
        plVar10 = *(long **)(unaff_x29 + 0x10);
        goto joined_r0x0728cff8;
      }
      if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_0728cffc;
      uVar7 = FUN_0728a960(uVar5,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(lVar9 + 0x28));
      if ((*(long *)(lVar9 + 0x28) == 0) || (*(long *)(unaff_x29 + 0x18) == 0)) goto LAB_0728cffc;
      FUN_0728a2f0(uVar7,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(lVar11 + 0x38),
                   *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x38));
      uVar7 = FUN_0728bc34();
      lVar4 = FUN_0728b8fc(uVar7,uVar7);
      if ((lVar4 == 0) ||
         (((*(long *)(lVar4 + 0x10) == 0 ||
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x28), lVar4 == 0)) ||
          (*(long *)(lVar9 + 0x28) == 0)))) goto LAB_0728cffc;
      lVar4 = *(long *)(lVar4 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x38);
      thunk_FUN_040ec700((long *)(unaff_x20 + 0x10));
      lVar9 = FUN_0728be24(unaff_x29);
      if ((lVar9 == 0) || (*(long *)(lVar11 + 0x28) == 0)) goto LAB_0728cffc;
      uVar8 = *(undefined8 *)(lVar9 + 0x30);
      lVar9 = *(long *)(*(long *)(lVar11 + 0x28) + 0x30);
    }
    FUN_0728bf4c(unaff_x29,uVar7,uVar8,lVar9,lVar4,1);
    plVar10 = *(long **)(unaff_x29 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar4 = thunk_FUN_04096bb4(*(undefined8 *)
                                  (*plVar10 +
                                   (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) * 0x10 +
                                  0x140));
      (**(code **)(lVar4 + 8))(plVar10,lVar6,lVar4);
      return 1;
    }
  }
  else {
    Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_Callstack(unaff_x29);
    plVar10 = *(long **)(unaff_x29 + 0x10);
joined_r0x0728cff8:
    if (plVar10 != (long *)0x0) {
      lVar4 = thunk_FUN_04096bb4(*(undefined8 *)
                                  (*plVar10 +
                                   (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) * 0x10 +
                                  0x140));
      (**(code **)(lVar4 + 8))(plVar10,lVar6,lVar4);
      return 0;
    }
  }
LAB_0728cffc:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


