/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction$$set_Action
ENTRY_POINT: 0728ca60
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


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonForAction__set_Action(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w9;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  float fVar11;
  float fVar12;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 unaff_s8;
  
  if (in_w9 == 0) {
    thunk_FUN_040d65a8();
  }
  fVar11 = (float)FUN_0767a6e0(unaff_s8,0);
  if ((unaff_x26 == 0) || (unaff_x24 == 0)) goto LAB_0728cffc;
  fVar12 = (float)FUN_0767a590(*(undefined4 *)(unaff_x26 + 0x38),*(undefined4 *)(unaff_x24 + 0x38),0
                              );
  if (fVar12 < fVar11) {
    return 0;
  }
  uVar4 = FUN_072890dc();
  if ((uVar4 & 1) == 0) {
    fVar11 = (float)FUN_07289198();
    if (fVar11 < 0.0) {
      return 0;
    }
  }
  else {
    fVar11 = (float)FUN_07289198();
    if (0.0 < fVar11) {
      return 0;
    }
  }
  plVar10 = *(long **)(unaff_x29 + 0x10);
  if (plVar10 == (long *)0x0) goto LAB_0728cffc;
  lVar5 = thunk_FUN_04096bb4(*(undefined8 *)
                              (*plVar10 +
                               (ulong)*(ushort *)(*(long *)PTR_DAT_092c1d88 + 0x50) * 0x10 + 0x140))
  ;
  lVar5 = (**(code **)(lVar5 + 8))(plVar10,lVar5);
  FUN_072894d8();
  uVar4 = FUN_072890dc(lVar5,*(undefined8 *)(unaff_x29 + 0x68));
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(unaff_x29 + 0x68) == 0) || (lVar5 == 0)) goto LAB_0728cffc;
    *(undefined8 *)(lVar5 + 0x34) = *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
  }
  uVar4 = FUN_072890dc();
  if ((uVar4 & 1) == 0) {
    unaff_x27 = unaff_x26;
  }
  uVar4 = FUN_072890dc(unaff_x27,lVar5);
  if ((uVar4 & 1) != 0) {
    if (lVar5 == 0) goto LAB_0728cffc;
    *(undefined8 *)(lVar5 + 0x34) = *(undefined8 *)(unaff_x27 + 0x34);
  }
  uVar4 = FUN_0728909c(lVar5);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_0728909c(lVar5), (uVar4 & 1) == 0)) {
    uVar4 = FUN_0728909c();
    if ((((uVar4 & 1) != 0) || (uVar4 = FUN_07289198(), extraout_s0 < 0.0)) &&
       ((uVar4 = FUN_0728909c(), (uVar4 & 1) != 0 || (uVar4 = FUN_07289198(), 0.0 < extraout_s0_00))
       )) {
      if ((*(long *)(unaff_x29 + 0x18) != 0) &&
         (uVar7 = FUN_0728a960(uVar4,*(undefined8 *)(unaff_x29 + 0x10),
                               *(undefined8 *)(unaff_x23 + 0x28)), *(long *)(unaff_x29 + 0x18) != 0)
         ) {
        uVar7 = FUN_0728a960(uVar7,*(undefined8 *)(unaff_x29 + 0x10),
                             *(undefined8 *)(unaff_x19 + 0x28));
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (((*(long *)(unaff_x29 + 0x18) != 0 &&
             (FUN_0728a2f0(uVar7,*(undefined8 *)(unaff_x29 + 0x10),
                           *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38)), lVar5 != 0)) &&
            (*(long *)(unaff_x23 + 0x40) != 0)))) {
          plVar10 = *(long **)(unaff_x29 + 0x10);
          *(undefined8 *)(*(long *)(unaff_x23 + 0x40) + 0x34) = *(undefined8 *)(lVar5 + 0x34);
          if (plVar10 != (long *)0x0) {
            lVar6 = thunk_FUN_04096bb4(*(undefined8 *)
                                        (*plVar10 +
                                         (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) * 0x10
                                        + 0x140));
            (**(code **)(lVar6 + 8))(plVar10,lVar5,lVar6);
            if (*(long *)(unaff_x29 + 0x60) != 0) {
              lVar5 = *(long *)(unaff_x23 + 0x40);
              uVar3 = FUN_061e9f3c(*(long *)(unaff_x29 + 0x60),lVar5,*(undefined8 *)PTR_DAT_092c1e70
                                  );
              if (lVar5 != 0) {
                *(undefined4 *)(lVar5 + 0x3c) = uVar3;
                puVar2 = PTR_DAT_092c1e40;
                if (*(long *)(unaff_x23 + 0x40) != 0) {
                  iVar1 = *(int *)(*(long *)(unaff_x23 + 0x40) + 0x3c);
                  lVar5 = *(long *)PTR_DAT_092c1e40;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar5 = *(long *)puVar2;
                  }
                  if (iVar1 == **(int **)(lVar5 + 0xb8)) {
                    thunk_FUN_040dedf8(PTR_DAT_0929cb88);
                    uVar7 = thunk_FUN_040b4efc();
                    uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c1e78);
                    FUN_07679464(uVar7,uVar8,0);
                    uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c1e80);
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar7,uVar8);
                  }
                  FUN_0728c604(unaff_x29,*(undefined8 *)(unaff_x23 + 0x40));
                  lVar5 = FUN_0728b924();
                  *(undefined1 *)(unaff_x22 + 0x26) = 1;
                  *(undefined1 *)(unaff_x20 + 0x26) = 1;
                  if (lVar5 != 0) {
                    *(undefined1 *)(lVar5 + 0x26) = 1;
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
    if (unaff_x24 == *(long *)(unaff_x29 + 0x68)) {
      if ((*(long *)(unaff_x29 + 0x18) == 0) ||
         (uVar7 = FUN_0728a960(uVar4,*(undefined8 *)(unaff_x29 + 0x10),
                               *(undefined8 *)(unaff_x23 + 0x28)), *(long *)(unaff_x29 + 0x18) == 0)
         ) goto LAB_0728cffc;
      FUN_0728a2f0(uVar7,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28));
      uVar7 = FUN_0728bb74(unaff_x29);
      lVar6 = FUN_0728b8fc(uVar7,uVar7);
      if (lVar6 == 0) goto LAB_0728cffc;
      lVar9 = *(long *)(lVar6 + 0x10);
      uVar8 = FUN_0728b8fc(lVar6,uVar7);
      FUN_0728be24(unaff_x29,uVar8);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) goto LAB_0728cffc;
      uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x38);
      lVar6 = lVar9;
    }
    else {
      if (unaff_x25 != *(long *)(unaff_x29 + 0x68)) {
        fVar11 = (float)FUN_07289198();
        if (0.0 <= fVar11) {
          lVar6 = FUN_0728b924();
          *(undefined1 *)(unaff_x20 + 0x26) = 1;
          if ((lVar6 == 0) ||
             (lVar9 = *(long *)(unaff_x29 + 0x18), *(undefined1 *)(lVar6 + 0x26) = 1, lVar9 == 0))
          goto LAB_0728cffc;
          FUN_0728a960(lVar6,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x23 + 0x28));
          if ((*(long *)(unaff_x29 + 0x68) == 0) || (*(long *)(unaff_x23 + 0x40) == 0))
          goto LAB_0728cffc;
          *(undefined8 *)(*(long *)(unaff_x23 + 0x40) + 0x34) =
               *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
        }
        uVar7 = FUN_07289198();
        if (extraout_s0_01 <= 0.0) {
          lVar6 = *(long *)(unaff_x29 + 0x18);
          *(undefined1 *)(unaff_x22 + 0x26) = 1;
          *(undefined1 *)(unaff_x20 + 0x26) = 1;
          if (lVar6 == 0) goto LAB_0728cffc;
          FUN_0728a960(uVar7,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28));
          if ((*(long *)(unaff_x29 + 0x68) == 0) || (*(long *)(unaff_x19 + 0x40) == 0))
          goto LAB_0728cffc;
          *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x34) =
               *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
        }
        plVar10 = *(long **)(unaff_x29 + 0x10);
        goto joined_r0x0728cff8;
      }
      if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_0728cffc;
      uVar7 = FUN_0728a960(uVar4,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28)
                          );
      if ((*(long *)(unaff_x19 + 0x28) == 0) || (*(long *)(unaff_x29 + 0x18) == 0))
      goto LAB_0728cffc;
      FUN_0728a2f0(uVar7,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x23 + 0x38),
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38));
      uVar7 = FUN_0728bc34();
      lVar6 = FUN_0728b8fc(uVar7,uVar7);
      if ((lVar6 == 0) ||
         (((*(long *)(lVar6 + 0x10) == 0 ||
           (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 0x28), lVar6 == 0)) ||
          (*(long *)(unaff_x19 + 0x28) == 0)))) goto LAB_0728cffc;
      lVar6 = *(long *)(lVar6 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38);
      thunk_FUN_040ec700();
      lVar9 = FUN_0728be24(unaff_x29);
      if ((lVar9 == 0) || (*(long *)(unaff_x23 + 0x28) == 0)) goto LAB_0728cffc;
      uVar8 = *(undefined8 *)(lVar9 + 0x30);
      lVar9 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x30);
    }
    FUN_0728bf4c(unaff_x29,uVar7,uVar8,lVar9,lVar6,1);
    plVar10 = *(long **)(unaff_x29 + 0x10);
    if (plVar10 != (long *)0x0) {
      lVar6 = thunk_FUN_04096bb4(*(undefined8 *)
                                  (*plVar10 +
                                   (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) * 0x10 +
                                  0x140));
      (**(code **)(lVar6 + 8))(plVar10,lVar5,lVar6);
      return 1;
    }
  }
  else {
    Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_Callstack(unaff_x29);
    plVar10 = *(long **)(unaff_x29 + 0x10);
joined_r0x0728cff8:
    if (plVar10 != (long *)0x0) {
      lVar6 = thunk_FUN_04096bb4(*(undefined8 *)
                                  (*plVar10 +
                                   (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) * 0x10 +
                                  0x140));
      (**(code **)(lVar6 + 8))(plVar10,lVar5,lVar6);
      return 0;
    }
  }
LAB_0728cffc:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


