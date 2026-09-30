/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$set_Label
ENTRY_POINT: 0728ca34
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__set_Label(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool in_ZR;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  long lVar10;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  float fVar11;
  float fVar12;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (in_ZR) {
    return 0;
  }
  if ((unaff_x27 == 0) || (lVar10 = *(long *)(in_x9 + 0x40), lVar10 == 0)) goto LAB_0728cffc;
  lVar9 = *(long *)(param_1 + 0x40);
  uVar13 = *(undefined4 *)(unaff_x27 + 0x38);
  uVar14 = *(undefined4 *)(lVar10 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar11 = (float)FUN_0767a6e0(uVar13,uVar14,0);
  if ((unaff_x26 == 0) || (lVar9 == 0)) goto LAB_0728cffc;
  fVar12 = (float)FUN_0767a590(*(undefined4 *)(unaff_x26 + 0x38),*(undefined4 *)(lVar9 + 0x38),0);
  if (fVar12 < fVar11) {
    return 0;
  }
  uVar3 = FUN_072890dc();
  if ((uVar3 & 1) == 0) {
    fVar11 = (float)FUN_07289198(lVar10);
    if (fVar11 < 0.0) {
      return 0;
    }
  }
  else {
    fVar11 = (float)FUN_07289198(lVar9);
    if (0.0 < fVar11) {
      return 0;
    }
  }
  plVar8 = *(long **)(unaff_x29 + 0x10);
  if (plVar8 == (long *)0x0) goto LAB_0728cffc;
  lVar4 = thunk_FUN_04096bb4(*(undefined8 *)
                              (*plVar8 + (ulong)*(ushort *)(*(long *)PTR_DAT_092c1d88 + 0x50) * 0x10
                              + 0x140));
  lVar4 = (**(code **)(lVar4 + 8))(plVar8,lVar4);
  FUN_072894d8(lVar10);
  uVar3 = FUN_072890dc(lVar4,*(undefined8 *)(unaff_x29 + 0x68));
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(unaff_x29 + 0x68) == 0) || (lVar4 == 0)) goto LAB_0728cffc;
    *(undefined8 *)(lVar4 + 0x34) = *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
  }
  uVar3 = FUN_072890dc();
  if ((uVar3 & 1) == 0) {
    unaff_x27 = unaff_x26;
  }
  uVar3 = FUN_072890dc(unaff_x27,lVar4);
  if ((uVar3 & 1) != 0) {
    if (lVar4 == 0) goto LAB_0728cffc;
    *(undefined8 *)(lVar4 + 0x34) = *(undefined8 *)(unaff_x27 + 0x34);
  }
  uVar3 = FUN_0728909c(lVar4);
  if (((uVar3 & 1) == 0) && (uVar3 = FUN_0728909c(lVar4), (uVar3 & 1) == 0)) {
    uVar3 = FUN_0728909c(lVar10,*(undefined8 *)(unaff_x29 + 0x68));
    if ((((uVar3 & 1) != 0) ||
        (uVar3 = FUN_07289198(lVar10,*(undefined8 *)(unaff_x29 + 0x68),lVar4), extraout_s0 < 0.0))
       && ((uVar3 = FUN_0728909c(lVar9,*(undefined8 *)(unaff_x29 + 0x68)), (uVar3 & 1) != 0 ||
           (uVar3 = FUN_07289198(lVar9,*(undefined8 *)(unaff_x29 + 0x68),lVar4),
           0.0 < extraout_s0_00)))) {
      if ((*(long *)(unaff_x29 + 0x18) != 0) &&
         (uVar5 = FUN_0728a960(uVar3,*(undefined8 *)(unaff_x29 + 0x10),
                               *(undefined8 *)(unaff_x23 + 0x28)), *(long *)(unaff_x29 + 0x18) != 0)
         ) {
        uVar5 = FUN_0728a960(uVar5,*(undefined8 *)(unaff_x29 + 0x10),
                             *(undefined8 *)(unaff_x19 + 0x28));
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (((*(long *)(unaff_x29 + 0x18) != 0 &&
             (FUN_0728a2f0(uVar5,*(undefined8 *)(unaff_x29 + 0x10),
                           *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38)), lVar4 != 0)) &&
            (*(long *)(unaff_x23 + 0x40) != 0)))) {
          plVar8 = *(long **)(unaff_x29 + 0x10);
          *(undefined8 *)(*(long *)(unaff_x23 + 0x40) + 0x34) = *(undefined8 *)(lVar4 + 0x34);
          if (plVar8 != (long *)0x0) {
            lVar10 = thunk_FUN_04096bb4(*(undefined8 *)
                                         (*plVar8 + (ulong)*(ushort *)
                                                            (*(long *)PTR_DAT_092c1da8 + 0x50) *
                                                    0x10 + 0x140));
            (**(code **)(lVar10 + 8))(plVar8,lVar4,lVar10);
            if (*(long *)(unaff_x29 + 0x60) != 0) {
              lVar10 = *(long *)(unaff_x23 + 0x40);
              uVar13 = FUN_061e9f3c(*(long *)(unaff_x29 + 0x60),lVar10,
                                    *(undefined8 *)PTR_DAT_092c1e70);
              if (lVar10 != 0) {
                *(undefined4 *)(lVar10 + 0x3c) = uVar13;
                puVar2 = PTR_DAT_092c1e40;
                if (*(long *)(unaff_x23 + 0x40) != 0) {
                  iVar1 = *(int *)(*(long *)(unaff_x23 + 0x40) + 0x3c);
                  lVar10 = *(long *)PTR_DAT_092c1e40;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar10 = *(long *)puVar2;
                  }
                  if (iVar1 == **(int **)(lVar10 + 0xb8)) {
                    thunk_FUN_040dedf8(PTR_DAT_0929cb88);
                    uVar5 = thunk_FUN_040b4efc();
                    uVar6 = thunk_FUN_040dedf8(PTR_DAT_092c1e78);
                    FUN_07679464(uVar5,uVar6,0);
                    uVar6 = thunk_FUN_040dedf8(PTR_DAT_092c1e80);
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar5,uVar6);
                  }
                  FUN_0728c604(unaff_x29,*(undefined8 *)(unaff_x23 + 0x40));
                  lVar10 = FUN_0728b924();
                  *(undefined1 *)(unaff_x22 + 0x26) = 1;
                  *(undefined1 *)(unaff_x20 + 0x26) = 1;
                  if (lVar10 != 0) {
                    *(undefined1 *)(lVar10 + 0x26) = 1;
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
    lVar7 = *(long *)(unaff_x29 + 0x68);
    if (lVar9 == lVar7) {
      if ((*(long *)(unaff_x29 + 0x18) == 0) ||
         (uVar5 = FUN_0728a960(uVar3,*(undefined8 *)(unaff_x29 + 0x10),
                               *(undefined8 *)(unaff_x23 + 0x28)), *(long *)(unaff_x29 + 0x18) == 0)
         ) goto LAB_0728cffc;
      FUN_0728a2f0(uVar5,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28));
      uVar5 = FUN_0728bb74(unaff_x29);
      lVar10 = FUN_0728b8fc(uVar5,uVar5);
      if (lVar10 == 0) goto LAB_0728cffc;
      lVar9 = *(long *)(lVar10 + 0x10);
      uVar6 = FUN_0728b8fc(lVar10,uVar5);
      FUN_0728be24(unaff_x29,uVar6);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_0728cffc;
      uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x38);
      lVar10 = lVar9;
    }
    else {
      if (lVar10 != lVar7) {
        fVar11 = (float)FUN_07289198(lVar10,lVar7,lVar4);
        if (0.0 <= fVar11) {
          lVar10 = FUN_0728b924();
          *(undefined1 *)(unaff_x20 + 0x26) = 1;
          if ((lVar10 == 0) ||
             (lVar7 = *(long *)(unaff_x29 + 0x18), *(undefined1 *)(lVar10 + 0x26) = 1, lVar7 == 0))
          goto LAB_0728cffc;
          FUN_0728a960(lVar10,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x23 + 0x28));
          lVar10 = *(long *)(unaff_x29 + 0x68);
          if ((lVar10 == 0) || (*(long *)(unaff_x23 + 0x40) == 0)) goto LAB_0728cffc;
          *(undefined8 *)(*(long *)(unaff_x23 + 0x40) + 0x34) = *(undefined8 *)(lVar10 + 0x34);
        }
        else {
          lVar10 = *(long *)(unaff_x29 + 0x68);
        }
        uVar5 = FUN_07289198(lVar9,lVar10,lVar4);
        if (extraout_s0_01 <= 0.0) {
          lVar10 = *(long *)(unaff_x29 + 0x18);
          *(undefined1 *)(unaff_x22 + 0x26) = 1;
          *(undefined1 *)(unaff_x20 + 0x26) = 1;
          if (lVar10 == 0) goto LAB_0728cffc;
          FUN_0728a960(uVar5,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28));
          if ((*(long *)(unaff_x29 + 0x68) == 0) || (*(long *)(unaff_x19 + 0x40) == 0))
          goto LAB_0728cffc;
          *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x34) =
               *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
        }
        plVar8 = *(long **)(unaff_x29 + 0x10);
        goto joined_r0x0728cff8;
      }
      if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_0728cffc;
      uVar5 = FUN_0728a960(uVar3,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28)
                          );
      if ((*(long *)(unaff_x19 + 0x28) == 0) || (*(long *)(unaff_x29 + 0x18) == 0))
      goto LAB_0728cffc;
      FUN_0728a2f0(uVar5,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x23 + 0x38),
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38));
      uVar5 = FUN_0728bc34();
      lVar10 = FUN_0728b8fc(uVar5,uVar5);
      if ((lVar10 == 0) ||
         (((*(long *)(lVar10 + 0x10) == 0 ||
           (lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x28), lVar10 == 0)) ||
          (*(long *)(unaff_x19 + 0x28) == 0)))) goto LAB_0728cffc;
      lVar10 = *(long *)(lVar10 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38);
      thunk_FUN_040ec700();
      lVar9 = FUN_0728be24(unaff_x29);
      if ((lVar9 == 0) || (*(long *)(unaff_x23 + 0x28) == 0)) goto LAB_0728cffc;
      uVar6 = *(undefined8 *)(lVar9 + 0x30);
      lVar9 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x30);
    }
    FUN_0728bf4c(unaff_x29,uVar5,uVar6,lVar9,lVar10,1);
    plVar8 = *(long **)(unaff_x29 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar10 = thunk_FUN_04096bb4(*(undefined8 *)
                                   (*plVar8 + (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) *
                                              0x10 + 0x140));
      (**(code **)(lVar10 + 8))(plVar8,lVar4,lVar10);
      return 1;
    }
  }
  else {
    Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_Callstack(unaff_x29);
    plVar8 = *(long **)(unaff_x29 + 0x10);
joined_r0x0728cff8:
    if (plVar8 != (long *)0x0) {
      lVar10 = thunk_FUN_04096bb4(*(undefined8 *)
                                   (*plVar8 + (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) *
                                              0x10 + 0x140));
      (**(code **)(lVar10 + 8))(plVar8,lVar4,lVar10);
      return 0;
    }
  }
LAB_0728cffc:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


