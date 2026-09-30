/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 0727f44c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0727f90c) */
/* WARNING: Removing unreachable block (ram,0x0727facc) */

long Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar18;
  long unaff_x22;
  long lVar19;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092860c0);
  FUN_04077588(PTR_DAT_0928a908);
  FUN_04077588(PTR_DAT_0928a910);
  FUN_04077588(PTR_DAT_092860c8);
  FUN_04077588(PTR_DAT_092c1720);
  FUN_04077588(PTR_DAT_092c1800);
  FUN_04077588(PTR_DAT_092c17f8);
  FUN_04077588(PTR_DAT_092c1770);
  FUN_04077588(PTR_DAT_0928e5a8);
  FUN_04077588(PTR_DAT_092c1778);
  FUN_04077588(PTR_DAT_092c1780);
  FUN_04077588(PTR_DAT_092c1808);
  FUN_04077588(PTR_DAT_092c1788);
  FUN_04077588(PTR_DAT_092c1790);
  FUN_04077588(PTR_DAT_092c1798);
  FUN_04077588(PTR_DAT_092a5d10);
  FUN_04077588(PTR_DAT_0928cfa8);
  *(undefined1 *)(unaff_x22 + 0x788) = 1;
  lVar8 = thunk_FUN_040b4efc(*unaff_x21);
  FUN_076bca34(lVar8,0);
  puVar1 = PTR_DAT_092c1770;
  puVar6 = PTR_DAT_092c1720;
  if (lVar8 != 0) {
    plVar18 = (long *)(lVar8 + 0x10);
    *plVar18 = unaff_x20;
    thunk_FUN_040ec700(plVar18);
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar6);
    FUN_072829b4();
    lVar19 = *plVar18;
    uVar10 = FUN_07dfb290(*(undefined8 *)puVar1,0);
    if (lVar19 != 0) {
      lVar19 = FUN_07df8920(lVar19,uVar10,0);
      puVar1 = PTR_DAT_092c1808;
      if (lVar19 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar19 + 0x30);
      }
      if (lVar9 != 0) {
        FUN_07282a9c(lVar9,uVar10);
        lVar19 = *plVar18;
        uVar10 = FUN_07dfb290(*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_09286040;
        if (lVar19 != 0) {
          lVar19 = FUN_07df8920(lVar19,uVar10,0);
          if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x30), lVar19 == 0)) {
            lVar19 = **(long **)(*(long *)(PTR_DAT_09285980 + 0x90) + 0xb8);
          }
          lVar11 = FUN_04077674(*(undefined8 *)puVar1,1);
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            *(undefined2 *)(lVar11 + 0x20) = 0x20;
            puVar3 = PTR_DAT_092c1800;
            puVar2 = PTR_DAT_09285940;
            puVar1 = PTR_DAT_09285930;
            if (lVar19 != 0) {
              uVar10 = FUN_074e94dc(lVar19,lVar11,1,0);
              uVar12 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
              FUN_0568af90(uVar12,lVar8,*(undefined8 *)puVar3,0);
              plVar13 = (long *)System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                          (uVar10,uVar12,*(undefined8 *)puVar1);
              if (plVar13 != (long *)0x0) {
                lVar8 = *plVar13;
                uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0928a908) {
                      puVar14 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_0727f6ec;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar14 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_0928a908,0);
LAB_0727f6ec:
                puVar7 = PTR_DAT_092c1778;
                puVar5 = PTR_DAT_0928e5a8;
                puVar4 = PTR_DAT_0928a910;
                puVar3 = PTR_DAT_09288d00;
                puVar2 = PTR_DAT_092860c8;
                puVar1 = PTR_DAT_092860c0;
                plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
                do {
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar8 = *plVar13;
                  uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
                        puVar14 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_0727f788;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)puVar2,0);
LAB_0727f788:
                  uVar16 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                  if ((uVar16 & 1) == 0) {
                    if (plVar13 == (long *)0x0) goto LAB_0727f900;
                    lVar8 = *plVar13;
                    uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar16 == 0) goto LAB_0727f8d8;
                    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    goto LAB_0727f8c0;
                  }
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar8 = *plVar13;
                  uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar16 != 0) {
                    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                        puVar14 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_0727f7ec;
                      }
                      uVar16 = uVar16 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)puVar4,0);
LAB_0727f7ec:
                  uVar10 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                  lVar8 = *(long *)puVar6;
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    lVar8 = *(long *)puVar6;
                  }
                  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar16 = FUN_057bed58(lVar8,uVar10,*(undefined8 *)puVar3);
                  if ((uVar16 & 1) == 0) {
                    uVar12 = thunk_FUN_040dedf8(PTR_DAT_092c1810);
                    uVar15 = thunk_FUN_040dedf8(PTR_DAT_092c1818);
                    uVar10 = FUN_074e691c(uVar12,uVar10,uVar15,0);
                    thunk_FUN_040dedf8(PTR_DAT_092c1430);
                    uVar12 = thunk_FUN_040b4efc();
                    FUN_0727b03c(uVar12,uVar10);
                    uVar10 = thunk_FUN_040dedf8(PTR_DAT_092c1820);
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar12,uVar10);
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0727fac4;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0727f8c0:
    if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
      puVar14 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0727f8f4;
    }
  }
LAB_0727f8d8:
  puVar14 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)puVar1,0);
LAB_0727f8f4:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_0727f900:
  lVar8 = *plVar18;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar10 = FUN_07282c68(lVar8,*(undefined8 *)puVar5);
  *(undefined8 *)(lVar9 + 0x18) = uVar10;
  thunk_FUN_040ec700();
  uVar10 = FUN_07282c68(*plVar18,*(undefined8 *)puVar7);
  *(undefined8 *)(lVar9 + 0x20) = uVar10;
  thunk_FUN_040ec700();
  uVar10 = FUN_07282c68(*plVar18,*(undefined8 *)PTR_DAT_0928cfa8);
  *(undefined8 *)(lVar9 + 0x28) = uVar10;
  thunk_FUN_040ec700();
  uVar10 = FUN_07282c68(*plVar18,*(undefined8 *)PTR_DAT_092c1788);
  *(undefined8 *)(lVar9 + 0x30) = uVar10;
  thunk_FUN_040ec700();
  uVar10 = FUN_07282c68(*plVar18,*(undefined8 *)PTR_DAT_092c1790);
  *(undefined8 *)(lVar9 + 0x38) = uVar10;
  thunk_FUN_040ec700();
  uVar10 = FUN_07282c68(*plVar18,*(undefined8 *)PTR_DAT_092c1798);
  *(undefined8 *)(lVar9 + 0x40) = uVar10;
  thunk_FUN_040ec700();
  uVar10 = FUN_07282c68(*plVar18,*(undefined8 *)PTR_DAT_092a5d10);
  *(undefined8 *)(lVar9 + 0x48) = uVar10;
  thunk_FUN_040ec700();
  uVar10 = FUN_07282c68(*plVar18,*(undefined8 *)PTR_DAT_092c1780);
  *(undefined8 *)(lVar9 + 0x50) = uVar10;
  thunk_FUN_040ec700();
  if (*plVar18 != 0) {
    uVar10 = FUN_07df3f40(*plVar18,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10),0);
    uVar10 = FUN_07282ed4(lVar9,uVar10);
    if (*plVar18 != 0) {
      uVar12 = FUN_07df3f40(*plVar18,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8),0);
      FUN_072832e0(lVar9,uVar12,uVar10);
      return lVar9;
    }
  }
LAB_0727fac4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


