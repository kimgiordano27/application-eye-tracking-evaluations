/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$Awake
ENTRY_POINT: 072f1e20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__Awake(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *in_stack_00000058;
  
  FUN_04077588(PTR_DAT_09287040);
  FUN_04077588(PTR_DAT_092c2b10);
  FUN_04077588(PTR_DAT_092c48b0);
  FUN_04077588(PTR_DAT_092c48b8);
  FUN_04077588(PTR_DAT_092c48c0);
  FUN_04077588(PTR_DAT_092c4790);
  FUN_04077588(PTR_DAT_092c2878);
  FUN_04077588(PTR_DAT_092c3c48);
  *(undefined1 *)(unaff_x21 + 0xc11) = 1;
  puVar1 = PTR_DAT_092b9200;
  in_stack_00000058 = (long *)0x0;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0x10) + 0x10) != '\0') {
      plVar8 = *(long **)(unaff_x19 + 0x60);
      if (plVar8 == (long *)0x0) goto LAB_072f2360;
      lVar5 = *plVar8;
      uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      uVar13 = *(undefined8 *)PTR_DAT_092c48c0;
      uVar11 = *(undefined8 *)PTR_DAT_092c48b8;
      uVar12 = *(undefined8 *)PTR_DAT_092c4790;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092b9200) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_072f1f28;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092b9200,4);
LAB_072f1f28:
      (*(code *)*puVar3)(plVar8,uVar13,uVar9,0,0,0,uVar11,uVar12);
    }
    puVar2 = PTR_DAT_092c3c48;
    plVar10 = (long *)(unaff_x20 + 0x18);
    plVar8 = (long *)*plVar10;
    if (plVar8 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar8 + 0x1a8))
                        (plVar8,*(undefined8 *)PTR_DAT_092c3c48,*(undefined8 *)(*plVar8 + 0x1b0));
    }
    uVar11 = FUN_07316988(uVar9,0);
    uVar6 = FUN_074e5d94(uVar11,0);
    if ((uVar6 & 1) == 0) {
      uVar11 = FUN_07316988(uVar9,0);
      *(undefined8 *)(unaff_x19 + 0x50) = uVar11;
      thunk_FUN_040ec700();
    }
    else {
      uVar6 = FUN_074e5d94(*(undefined8 *)(unaff_x19 + 0x50),0);
      if ((uVar6 & 1) != 0) {
        plVar10 = *(long **)(unaff_x19 + 0x60);
        plVar8 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,1);
        lVar5 = *(long *)PTR_DAT_092c2878;
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          lVar5 = *(long *)(unaff_x20 + 0x10);
        }
        if (plVar8 != (long *)0x0) {
          uVar9 = *(undefined8 *)PTR_DAT_092c48b0;
          if ((lVar5 != 0) &&
             (lVar4 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
            uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar9,0);
          }
          if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar8[4] = lVar5;
          thunk_FUN_040ec700(plVar8 + 4,lVar5);
          if (plVar10 != (long *)0x0) {
            lVar5 = *plVar10;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x11) * 0x10 + 0x138);
                  goto LAB_072f2230;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar1,0x11);
LAB_072f2230:
                    /* WARNING: Could not recover jumptable at 0x072f2258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar3)(plVar10,uVar9,plVar8,puVar3[1]);
            return;
          }
        }
        goto LAB_072f2360;
      }
      uVar9 = FUN_073168f0(*(undefined8 *)(unaff_x19 + 0x50),0);
      uVar6 = FUN_0731699c(*plVar10,0,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c2b10);
        FUN_073170e8(lVar5,0);
        *plVar10 = lVar5;
        thunk_FUN_040ec700(plVar10,lVar5);
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_072f2360;
        (**(code **)(*plVar10 + 0x1b8))
                  (plVar10,*(undefined8 *)puVar2,uVar9,*(undefined8 *)(*plVar10 + 0x1c0));
      }
    }
    lVar5 = *(long *)(unaff_x19 + 0x68);
    uVar11 = FUN_07316988(uVar9,0);
    puVar1 = PTR_DAT_092c48a8;
    if (lVar5 != 0) {
      uVar6 = FUN_06efe340(lVar5,uVar11,&stack0x00000058,*(undefined8 *)PTR_DAT_092c48a8);
      if ((uVar6 & 1) == 0) {
        FUN_07316988(uVar9,0);
        FUN_072f2398();
        lVar5 = *(long *)(unaff_x19 + 0x68);
        uVar9 = FUN_07316988(uVar9,0);
        if (lVar5 == 0) goto LAB_072f2360;
        FUN_06efe340(lVar5,uVar9,&stack0x00000058,*(undefined8 *)puVar1);
      }
      plVar8 = in_stack_00000058;
      if (in_stack_00000058 != (long *)0x0) {
        lVar5 = *in_stack_00000058;
        uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092c3db8) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
              goto LAB_072f21ec;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*(long *)PTR_DAT_092c3db8,0xb);
LAB_072f21ec:
        (*(code *)*puVar3)(plVar8,uVar9,uVar11,uVar12,puVar3[1]);
      }
      return;
    }
  }
LAB_072f2360:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


