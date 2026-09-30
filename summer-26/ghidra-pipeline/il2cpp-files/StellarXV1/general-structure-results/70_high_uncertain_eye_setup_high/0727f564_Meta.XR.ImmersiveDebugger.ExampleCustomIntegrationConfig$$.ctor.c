/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.ExampleCustomIntegrationConfig$$.ctor
ENTRY_POINT: 0727f564
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

long Meta_XR_ImmersiveDebugger_ExampleCustomIntegrationConfig___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x21;
  long lVar16;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  lVar7 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_072829b4();
  lVar16 = *unaff_x21;
  uVar8 = FUN_07dfb290(*unaff_x24,0);
  if (lVar16 != 0) {
    lVar16 = FUN_07df8920(lVar16,uVar8,0);
    puVar1 = PTR_DAT_092c1808;
    if (lVar16 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar16 + 0x30);
    }
    if (lVar7 != 0) {
      FUN_07282a9c(lVar7,uVar8);
      lVar16 = *unaff_x21;
      uVar8 = FUN_07dfb290(*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_09286040;
      if (lVar16 != 0) {
        lVar16 = FUN_07df8920(lVar16,uVar8,0);
        if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x30), lVar16 == 0)) {
          lVar16 = **(long **)(*(long *)(PTR_DAT_09285980 + 0x90) + 0xb8);
        }
        lVar9 = FUN_04077674(*(undefined8 *)puVar1,1);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          *(undefined2 *)(lVar9 + 0x20) = 0x20;
          puVar2 = PTR_DAT_09285940;
          puVar1 = PTR_DAT_09285930;
          if (lVar16 != 0) {
            uVar8 = FUN_074e94dc(lVar16,lVar9,1,0);
            uVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
            FUN_0568af90();
            plVar11 = (long *)System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                        (uVar8,uVar10,*(undefined8 *)puVar1);
            if (plVar11 != (long *)0x0) {
              lVar16 = *plVar11;
              uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0928a908) {
                    puVar12 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0727f6ec;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_0928a908,0);
LAB_0727f6ec:
              puVar6 = PTR_DAT_092c1778;
              puVar5 = PTR_DAT_0928e5a8;
              puVar4 = PTR_DAT_0928a910;
              puVar3 = PTR_DAT_09288d00;
              puVar2 = PTR_DAT_092860c8;
              puVar1 = PTR_DAT_092860c0;
              plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
              do {
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar16 = *plVar11;
                uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0727f788;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar2,0);
LAB_0727f788:
                uVar14 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                if ((uVar14 & 1) == 0) {
                  if (plVar11 == (long *)0x0) goto LAB_0727f900;
                  lVar16 = *plVar11;
                  uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar14 == 0) goto LAB_0727f8d8;
                  piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  goto LAB_0727f8c0;
                }
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar16 = *plVar11;
                uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0727f7ec;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar4,0);
LAB_0727f7ec:
                uVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                lVar16 = *unaff_x25;
                if (*(int *)(lVar16 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  lVar16 = *unaff_x25;
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x28);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar14 = FUN_057bed58(lVar16,uVar8,*(undefined8 *)puVar3);
                if ((uVar14 & 1) == 0) {
                  uVar10 = thunk_FUN_040dedf8(PTR_DAT_092c1810);
                  uVar13 = thunk_FUN_040dedf8(PTR_DAT_092c1818);
                  uVar8 = FUN_074e691c(uVar10,uVar8,uVar13,0);
                  thunk_FUN_040dedf8(PTR_DAT_092c1430);
                  uVar10 = thunk_FUN_040b4efc();
                  FUN_0727b03c(uVar10,uVar8);
                  uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c1820);
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar10,uVar8);
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
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0727f8c0:
    if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0727f8f4;
    }
  }
LAB_0727f8d8:
  puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar1,0);
LAB_0727f8f4:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_0727f900:
  lVar16 = *unaff_x21;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar8 = FUN_07282c68(lVar16,*(undefined8 *)puVar5);
  *(undefined8 *)(lVar7 + 0x18) = uVar8;
  thunk_FUN_040ec700();
  uVar8 = FUN_07282c68(*unaff_x21,*(undefined8 *)puVar6);
  *(undefined8 *)(lVar7 + 0x20) = uVar8;
  thunk_FUN_040ec700();
  uVar8 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_0928cfa8);
  *(undefined8 *)(lVar7 + 0x28) = uVar8;
  thunk_FUN_040ec700();
  uVar8 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1788);
  *(undefined8 *)(lVar7 + 0x30) = uVar8;
  thunk_FUN_040ec700();
  uVar8 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1790);
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  thunk_FUN_040ec700();
  uVar8 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1798);
  *(undefined8 *)(lVar7 + 0x40) = uVar8;
  thunk_FUN_040ec700();
  uVar8 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092a5d10);
  *(undefined8 *)(lVar7 + 0x48) = uVar8;
  thunk_FUN_040ec700();
  uVar8 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1780);
  *(undefined8 *)(lVar7 + 0x50) = uVar8;
  thunk_FUN_040ec700();
  if (*unaff_x21 != 0) {
    uVar8 = FUN_07df3f40(*unaff_x21,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10),0);
    uVar8 = FUN_07282ed4(lVar7,uVar8);
    if (*unaff_x21 != 0) {
      uVar10 = FUN_07df3f40(*unaff_x21,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8),0);
      FUN_072832e0(lVar7,uVar10,uVar8);
      return lVar7;
    }
  }
LAB_0727fac4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


