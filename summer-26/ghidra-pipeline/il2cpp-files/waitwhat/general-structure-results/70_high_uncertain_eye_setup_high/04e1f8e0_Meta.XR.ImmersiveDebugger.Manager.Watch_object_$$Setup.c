/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<object>$$Setup
ENTRY_POINT: 04e1f8e0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Watch<object>__Setup(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x20;
  long unaff_x21;
  undefined1 uStack000000000000000c;
  
  if ((*(byte *)(unaff_x21 + 0x1ed) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f5970);
    *(undefined1 *)(unaff_x21 + 0x1ed) = 1;
  }
  lVar11 = *(long *)(unaff_x20 + 0x20);
  uStack000000000000000c = *(undefined1 *)(param_1 + 0x2d);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_031c09d4();
  }
  plVar12 = (long *)thunk_FUN_031c39fc(**(undefined8 **)(lVar11 + 0xc0),&stack0x0000000c);
  if (plVar12 == (long *)0x0) {
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4();
    }
                    /* try { // try from 04e1f990 to 04f1f9b3 has its CatchHandler @ 04e1fa30 */
    uVar3 = FUN_05976da0(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x260));
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
    uVar4 = FUN_0592cd74(param_1 + 8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x268));
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
                    /* try { // try from 04e1f9fc to 04f1f9ff has its CatchHandler @ 04e1fa2c */
    uVar5 = FUN_05976da0(param_1 + 0x10,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x270));
                    /* try { // try from 04e1fa00 to 04f1fa13 has its CatchHandler @ 04e1fa34 */
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
    uVar8 = FUN_0592cd74(param_1 + 0x18,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x278));
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
    uVar9 = FUN_05976da0(param_1 + 0x20,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x280));
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
    uVar6 = FUN_0592cd74(param_1 + 0x28,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x288));
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x28) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0x28));
    }
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4();
    }
    uVar7 = FUN_058a4bfc(param_1 + 0x2c,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x290));
  }
  else {
    lVar11 = *plVar12;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_070f5970) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_04e1fb08;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_031c0d08(plVar12,*(long *)PTR_DAT_070f5970,0);
LAB_04e1fb08:
    iVar2 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if (7 < iVar2) {
      uVar14 = (**(code **)(*plVar12 + 0x158))(plVar12,*(undefined8 *)(*plVar12 + 0x160));
      return uVar14;
    }
    iVar2 = -iVar2;
    iVar1 = iVar2 + 7;
    if (iVar1 < 4) {
      if (1 < iVar1) {
        if (iVar1 == 2) {
          lVar11 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_031c09d4();
          }
          uVar3 = FUN_05976da0(param_1 + 0x20,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x280));
          lVar11 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 04e200b4 to 04f200b7 has its CatchHandler @ 04e200e4 */
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_031c09d4(lVar11);
          }
          uVar4 = FUN_0592cd74(param_1 + 0x28,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x288));
          if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x28) + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0x28));
          }
          lVar11 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_031c09d4();
          }
          uVar5 = FUN_058a4bfc(param_1 + 0x2c,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x290));
          uVar8 = (**(code **)(*plVar12 + 0x158))(plVar12,*(undefined8 *)(*plVar12 + 0x160));
          uVar14 = FUN_0594e564(uVar3,uVar4,uVar5,uVar8,0);
          return uVar14;
        }
        if (iVar1 != 3) {
          return 0xffffffff;
        }
        lVar11 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_031c09d4();
        }
        uVar3 = FUN_0592cd74(param_1 + 0x18,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x278));
        lVar11 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_031c09d4(lVar11);
        }
        uVar4 = FUN_05976da0(param_1 + 0x20,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x280));
        lVar11 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_031c09d4(lVar11);
        }
        uVar5 = FUN_0592cd74(param_1 + 0x28,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x288));
        if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x28) + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0x28));
        }
        lVar11 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_031c09d4();
        }
        uVar8 = FUN_058a4bfc(param_1 + 0x2c,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x290));
        uVar9 = (**(code **)(*plVar12 + 0x158))(plVar12,*(undefined8 *)(*plVar12 + 0x160));
        uVar14 = FUN_0594e5f4(uVar3,uVar4,uVar5,uVar8,uVar9,0);
        return uVar14;
      }
      if (iVar2 == -7) {
        if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x28) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar11 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_031c09d4();
        }
        uVar3 = FUN_058a4bfc(param_1 + 0x2c,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x290));
        uVar4 = (**(code **)(*plVar12 + 0x158))(plVar12,*(undefined8 *)(*plVar12 + 0x160));
        uVar14 = FUN_0594e468(uVar3,uVar4,0);
        return uVar14;
      }
      if (iVar1 != 1) {
        return 0xffffffff;
      }
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4();
      }
      uVar3 = FUN_0592cd74(param_1 + 0x28,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x288));
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x28) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0x28));
      }
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4();
      }
      uVar4 = FUN_058a4bfc(param_1 + 0x2c,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x290));
      uVar5 = (**(code **)(*plVar12 + 0x158))(plVar12,*(undefined8 *)(*plVar12 + 0x160));
      uVar14 = FUN_0594e4e4(uVar3,uVar4,uVar5,0);
      return uVar14;
    }
    if (iVar2 + 1U < 2) {
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4();
      }
      uVar3 = FUN_05976da0(param_1,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x260));
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4(lVar11);
      }
      uVar4 = FUN_0592cd74(param_1 + 8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x268));
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4(lVar11);
      }
      uVar5 = FUN_05976da0(param_1 + 0x10,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x270));
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4(lVar11);
      }
      uVar8 = FUN_0592cd74(param_1 + 0x18,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x278));
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4(lVar11);
      }
      uVar9 = FUN_05976da0(param_1 + 0x20,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x280));
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4(lVar11);
      }
      uVar6 = FUN_0592cd74(param_1 + 0x28,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x288));
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x28) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0x28));
      }
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4();
      }
      uVar7 = FUN_058a4bfc(param_1 + 0x2c,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x290));
      uVar10 = (**(code **)(*plVar12 + 0x158))(plVar12,*(undefined8 *)(*plVar12 + 0x160));
      uVar14 = FUN_0594e7e4(uVar3,uVar4,uVar5,uVar8,uVar9,uVar6,uVar7,uVar10);
      return uVar14;
    }
    if (iVar1 == 4) {
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
                    /* try { // try from 04e2015c to 04f2016b has its CatchHandler @ 04e2016c */
        lVar11 = FUN_031c09d4();
      }
                    /* catch() { ... } // from try @ 04e20104 with catch @ 04e2016c
                       catch() { ... } // from try @ 04e2015c with catch @ 04e2016c */
      uVar3 = FUN_05976da0(param_1 + 0x10,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x270));
                    /* try { // try from 04e20170 to 04f20173 has its CatchHandler @ 04e2017c */
      lVar11 = *(long *)(unaff_x20 + 0x20);
                    /* try { // try from 04e20174 to 04f2017f has its CatchHandler @ 04e1fe70 */
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4(lVar11);
      }
      uVar4 = FUN_0592cd74(param_1 + 0x18,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x278));
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4(lVar11);
      }
      uVar5 = FUN_05976da0(param_1 + 0x20,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x280));
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4(lVar11);
      }
      uVar8 = FUN_0592cd74(param_1 + 0x28,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x288));
      if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x28) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0x28));
      }
      lVar11 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_031c09d4();
      }
      uVar9 = FUN_058a4bfc(param_1 + 0x2c,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x290));
      uVar6 = (**(code **)(*plVar12 + 0x158))(plVar12,*(undefined8 *)(*plVar12 + 0x160));
      uVar14 = FUN_0594e68c(uVar3,uVar4,uVar5,uVar8,uVar9,uVar6,0);
      return uVar14;
    }
    if (iVar1 != 5) {
      return 0xffffffff;
    }
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4();
    }
    uVar3 = FUN_0592cd74(param_1 + 8,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x268));
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
    uVar4 = FUN_05976da0(param_1 + 0x10,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x270));
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
    uVar5 = FUN_0592cd74(param_1 + 0x18,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x278));
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
    uVar8 = FUN_05976da0(param_1 + 0x20,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x280));
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4(lVar11);
    }
    uVar9 = FUN_0592cd74(param_1 + 0x28,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x288));
    if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0x28) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0x28));
    }
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_031c09d4();
    }
    uVar6 = FUN_058a4bfc(param_1 + 0x2c,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x290));
    uVar7 = (**(code **)(*plVar12 + 0x158))(plVar12,*(undefined8 *)(*plVar12 + 0x160));
  }
  uVar14 = FUN_0594e734(uVar3,uVar4,uVar5,uVar8,uVar9,uVar6,uVar7,0);
  return uVar14;
}


