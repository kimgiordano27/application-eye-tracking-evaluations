/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.LogPrinter$$EndInvoke
ENTRY_POINT: 08a37f34
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_LogPrinter__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  long unaff_x24;
  int iStack000000000000000c;
  
  FUN_04947ee4(PTR_DAT_0ac46ed8);
  *(undefined1 *)(unaff_x24 + 0x3a2) = 1;
  puVar1 = PTR_DAT_0ac46eb8;
  iStack000000000000000c = 0;
  lVar3 = FUN_08a38634();
  uVar4 = FUN_08a38764();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_08a387b8();
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_08a3880c();
      if ((uVar4 & 1) == 0) {
        if (iStack000000000000000c == 1) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac52be8);
          FUN_08a1d50c();
        }
        else {
          uVar4 = FUN_08a38860();
          if ((uVar4 & 1) == 0) {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e580);
            FUN_08a388b4();
          }
          else {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac52bf0);
            FUN_08a49850();
          }
        }
      }
      else {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac52bf8);
        FUN_08a4eb28();
      }
    }
    else {
      lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac52c08);
      FUN_08a4b248();
    }
  }
  else {
    lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac52c00);
    FUN_08a4a378();
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar6 = *(long *)puVar1;
  }
  if (lVar3 != 0) {
    plVar12 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    plVar7 = (long *)thunk_FUN_04956588(lVar3,0);
    if (plVar7 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((lVar5 != 0) &&
         (plVar7 = (long *)thunk_FUN_04956588(lVar5,0), puVar2 = PTR_DAT_0ac52c10,
         puVar1 = PTR_DAT_0ac158c8, plVar7 != (long *)0x0)) {
        uVar9 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        uVar8 = FUN_08bda228(*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar2,uVar9,0);
        if (plVar12 != (long *)0x0) {
          lVar6 = *plVar12;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac46ed8) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_08a381b0;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar10 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a381b0:
          (*(code *)*puVar10)(plVar12,uVar8,puVar10[1]);
          *(long *)(lVar3 + 0x18) = lVar5;
          thunk_FUN_049ee3d8((long *)(lVar3 + 0x18),lVar5);
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


