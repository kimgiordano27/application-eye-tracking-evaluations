/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$Init
ENTRY_POINT: 0727f56c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0727f90c) */
/* WARNING: Removing unreachable block (ram,0x0727facc) */

long Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Init(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x21;
  long lVar15;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  FUN_072829b4();
  lVar15 = *unaff_x21;
  uVar7 = FUN_07dfb290(*unaff_x24,0);
  if (lVar15 != 0) {
    lVar15 = FUN_07df8920(lVar15,uVar7,0);
    puVar1 = PTR_DAT_092c1808;
    if (lVar15 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar15 + 0x30);
    }
    if (param_1 != 0) {
      FUN_07282a9c(param_1,uVar7);
      lVar15 = *unaff_x21;
      uVar7 = FUN_07dfb290(*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_09286040;
      if (lVar15 != 0) {
        lVar15 = FUN_07df8920(lVar15,uVar7,0);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x30), lVar15 == 0)) {
          lVar15 = **(long **)(*(long *)(PTR_DAT_09285980 + 0x90) + 0xb8);
        }
        lVar8 = FUN_04077674(*(undefined8 *)puVar1,1);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          *(undefined2 *)(lVar8 + 0x20) = 0x20;
          puVar2 = PTR_DAT_09285940;
          puVar1 = PTR_DAT_09285930;
          if (lVar15 != 0) {
            uVar7 = FUN_074e94dc(lVar15,lVar8,1,0);
            uVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
            FUN_0568af90();
            plVar10 = (long *)System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                        (uVar7,uVar9,*(undefined8 *)puVar1);
            if (plVar10 != (long *)0x0) {
              lVar15 = *plVar10;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0928a908) {
                    puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0727f6ec;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_0928a908,0);
LAB_0727f6ec:
              puVar6 = PTR_DAT_092c1778;
              puVar5 = PTR_DAT_0928e5a8;
              puVar4 = PTR_DAT_0928a910;
              puVar3 = PTR_DAT_09288d00;
              puVar2 = PTR_DAT_092860c8;
              puVar1 = PTR_DAT_092860c0;
              plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              do {
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar15 = *plVar10;
                uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_0727f788;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar2,0);
LAB_0727f788:
                uVar13 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if ((uVar13 & 1) == 0) {
                  if (plVar10 == (long *)0x0) goto LAB_0727f900;
                  lVar15 = *plVar10;
                  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar13 == 0) goto LAB_0727f8d8;
                  piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  goto LAB_0727f8c0;
                }
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar15 = *plVar10;
                uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_0727f7ec;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar4,0);
LAB_0727f7ec:
                uVar7 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                lVar15 = *unaff_x25;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar15 = *unaff_x25;
                }
                lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar13 = FUN_057bed58(lVar15,uVar7,*(undefined8 *)puVar3);
                if ((uVar13 & 1) == 0) {
                  uVar9 = thunk_FUN_040dedf8(PTR_DAT_092c1810);
                  uVar12 = thunk_FUN_040dedf8(PTR_DAT_092c1818);
                  uVar7 = FUN_074e691c(uVar9,uVar7,uVar12,0);
                  thunk_FUN_040dedf8(PTR_DAT_092c1430);
                  uVar9 = thunk_FUN_040b4efc();
                  FUN_0727b03c(uVar9,uVar7);
                  uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c1820);
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar9,uVar7);
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  goto LAB_0727fac4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0727f8c0:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0727f8f4;
    }
  }
LAB_0727f8d8:
  puVar11 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar1,0);
LAB_0727f8f4:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0727f900:
  lVar15 = *unaff_x21;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar7 = FUN_07282c68(lVar15,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_0928cfa8);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1788);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1790);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1798);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092a5d10);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1780);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  thunk_FUN_040ec700();
  if (*unaff_x21 != 0) {
    uVar7 = FUN_07df3f40(*unaff_x21,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10),0);
    uVar7 = FUN_07282ed4(param_1,uVar7);
    if (*unaff_x21 != 0) {
      uVar9 = FUN_07df3f40(*unaff_x21,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8),0);
      FUN_072832e0(param_1,uVar9,uVar7);
      return param_1;
    }
  }
LAB_0727fac4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


