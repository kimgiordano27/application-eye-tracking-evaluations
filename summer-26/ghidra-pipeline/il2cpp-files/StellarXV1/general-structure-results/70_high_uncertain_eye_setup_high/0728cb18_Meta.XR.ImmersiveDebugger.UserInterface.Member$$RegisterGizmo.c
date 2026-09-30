/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$RegisterGizmo
ENTRY_POINT: 0728cb18
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Member__RegisterGizmo(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  float extraout_s0;
  float extraout_s0_00;
  float fVar10;
  float extraout_s0_01;
  
  FUN_072894d8();
  uVar4 = FUN_072890dc(param_1,*(undefined8 *)(unaff_x29 + 0x68));
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(unaff_x29 + 0x68) == 0) || (param_1 == 0)) goto LAB_0728cffc;
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
  }
  uVar4 = FUN_072890dc();
  if ((uVar4 & 1) == 0) {
    unaff_x27 = unaff_x26;
  }
  uVar4 = FUN_072890dc(unaff_x27,param_1);
  if ((uVar4 & 1) != 0) {
    if (param_1 == 0) goto LAB_0728cffc;
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(unaff_x27 + 0x34);
  }
  uVar4 = FUN_0728909c(param_1);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_0728909c(param_1), (uVar4 & 1) == 0)) {
    uVar4 = FUN_0728909c();
    if ((((uVar4 & 1) != 0) || (uVar4 = FUN_07289198(), extraout_s0 < 0.0)) &&
       ((uVar4 = FUN_0728909c(), (uVar4 & 1) != 0 || (uVar4 = FUN_07289198(), 0.0 < extraout_s0_00))
       )) {
      if ((*(long *)(unaff_x29 + 0x18) != 0) &&
         (uVar6 = FUN_0728a960(uVar4,*(undefined8 *)(unaff_x29 + 0x10),
                               *(undefined8 *)(unaff_x23 + 0x28)), *(long *)(unaff_x29 + 0x18) != 0)
         ) {
        uVar6 = FUN_0728a960(uVar6,*(undefined8 *)(unaff_x29 + 0x10),
                             *(undefined8 *)(unaff_x19 + 0x28));
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (((*(long *)(unaff_x29 + 0x18) != 0 &&
             (FUN_0728a2f0(uVar6,*(undefined8 *)(unaff_x29 + 0x10),
                           *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38)), param_1 != 0)) &&
            (*(long *)(unaff_x23 + 0x40) != 0)))) {
          plVar9 = *(long **)(unaff_x29 + 0x10);
          *(undefined8 *)(*(long *)(unaff_x23 + 0x40) + 0x34) = *(undefined8 *)(param_1 + 0x34);
          if (plVar9 != (long *)0x0) {
            lVar5 = thunk_FUN_04096bb4(*(undefined8 *)
                                        (*plVar9 + (ulong)*(ushort *)
                                                           (*(long *)PTR_DAT_092c1da8 + 0x50) * 0x10
                                        + 0x140));
            (**(code **)(lVar5 + 8))(plVar9,param_1,lVar5);
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
                    uVar6 = thunk_FUN_040b4efc();
                    uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c1e78);
                    FUN_07679464(uVar6,uVar7,0);
                    uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c1e80);
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar6,uVar7);
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
         (uVar6 = FUN_0728a960(uVar4,*(undefined8 *)(unaff_x29 + 0x10),
                               *(undefined8 *)(unaff_x23 + 0x28)), *(long *)(unaff_x29 + 0x18) == 0)
         ) goto LAB_0728cffc;
      FUN_0728a2f0(uVar6,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28));
      uVar6 = FUN_0728bb74(unaff_x29);
      lVar5 = FUN_0728b8fc(uVar6,uVar6);
      if (lVar5 == 0) goto LAB_0728cffc;
      lVar8 = *(long *)(lVar5 + 0x10);
      uVar7 = FUN_0728b8fc(lVar5,uVar6);
      FUN_0728be24(unaff_x29,uVar7);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x28) == 0)) goto LAB_0728cffc;
      uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x38);
      lVar5 = lVar8;
    }
    else {
      if (unaff_x25 != *(long *)(unaff_x29 + 0x68)) {
        fVar10 = (float)FUN_07289198();
        if (0.0 <= fVar10) {
          lVar5 = FUN_0728b924();
          *(undefined1 *)(unaff_x20 + 0x26) = 1;
          if ((lVar5 == 0) ||
             (lVar8 = *(long *)(unaff_x29 + 0x18), *(undefined1 *)(lVar5 + 0x26) = 1, lVar8 == 0))
          goto LAB_0728cffc;
          FUN_0728a960(lVar5,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x23 + 0x28));
          if ((*(long *)(unaff_x29 + 0x68) == 0) || (*(long *)(unaff_x23 + 0x40) == 0))
          goto LAB_0728cffc;
          *(undefined8 *)(*(long *)(unaff_x23 + 0x40) + 0x34) =
               *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
        }
        uVar6 = FUN_07289198();
        if (extraout_s0_01 <= 0.0) {
          lVar5 = *(long *)(unaff_x29 + 0x18);
          *(undefined1 *)(unaff_x22 + 0x26) = 1;
          *(undefined1 *)(unaff_x20 + 0x26) = 1;
          if (lVar5 == 0) goto LAB_0728cffc;
          FUN_0728a960(uVar6,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28));
          if ((*(long *)(unaff_x29 + 0x68) == 0) || (*(long *)(unaff_x19 + 0x40) == 0))
          goto LAB_0728cffc;
          *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x34) =
               *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + 0x34);
        }
        plVar9 = *(long **)(unaff_x29 + 0x10);
        goto joined_r0x0728cff8;
      }
      if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_0728cffc;
      uVar6 = FUN_0728a960(uVar4,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x19 + 0x28)
                          );
      if ((*(long *)(unaff_x19 + 0x28) == 0) || (*(long *)(unaff_x29 + 0x18) == 0))
      goto LAB_0728cffc;
      FUN_0728a2f0(uVar6,*(undefined8 *)(unaff_x29 + 0x10),*(undefined8 *)(unaff_x23 + 0x38),
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38));
      uVar6 = FUN_0728bc34();
      lVar5 = FUN_0728b8fc(uVar6,uVar6);
      if ((lVar5 == 0) ||
         (((*(long *)(lVar5 + 0x10) == 0 ||
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x28), lVar5 == 0)) ||
          (*(long *)(unaff_x19 + 0x28) == 0)))) goto LAB_0728cffc;
      lVar5 = *(long *)(lVar5 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x38);
      thunk_FUN_040ec700();
      lVar8 = FUN_0728be24(unaff_x29);
      if ((lVar8 == 0) || (*(long *)(unaff_x23 + 0x28) == 0)) goto LAB_0728cffc;
      uVar7 = *(undefined8 *)(lVar8 + 0x30);
      lVar8 = *(long *)(*(long *)(unaff_x23 + 0x28) + 0x30);
    }
    FUN_0728bf4c(unaff_x29,uVar6,uVar7,lVar8,lVar5,1);
    plVar9 = *(long **)(unaff_x29 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_0728cffc;
    lVar5 = thunk_FUN_04096bb4(*(undefined8 *)
                                (*plVar9 + (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) *
                                           0x10 + 0x140));
    (**(code **)(lVar5 + 8))(plVar9,param_1,lVar5);
    uVar6 = 1;
  }
  else {
    Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__get_Callstack(unaff_x29);
    plVar9 = *(long **)(unaff_x29 + 0x10);
joined_r0x0728cff8:
    if (plVar9 == (long *)0x0) {
LAB_0728cffc:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = thunk_FUN_04096bb4(*(undefined8 *)
                                (*plVar9 + (ulong)*(ushort *)(*(long *)PTR_DAT_092c1da8 + 0x50) *
                                           0x10 + 0x140));
    (**(code **)(lVar5 + 8))(plVar9,param_1,lVar5);
    uVar6 = 0;
  }
  return uVar6;
}


