/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$add_OnAssemblyParsed
ENTRY_POINT: 0727f61c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0727f90c) */
/* WARNING: Removing unreachable block (ram,0x0727facc) */

void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__add_OnAssemblyParsed(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  *(undefined2 *)(param_1 + 0x20) = 0x20;
  puVar2 = PTR_DAT_09285940;
  puVar1 = PTR_DAT_09285930;
  if (unaff_x23 != 0) {
    uVar7 = FUN_074e94dc();
    uVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_0568af90();
    plVar9 = (long *)System_MemoryExtensions__IsTypeComparableAsBytes<char>
                               (uVar7,uVar8,*(undefined8 *)puVar1);
    if (plVar9 != (long *)0x0) {
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0928a908) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0727f6ec;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_0928a908,0);
LAB_0727f6ec:
      puVar6 = PTR_DAT_092c1778;
      puVar5 = PTR_DAT_0928e5a8;
      puVar4 = PTR_DAT_0928a910;
      puVar3 = PTR_DAT_09288d00;
      puVar2 = PTR_DAT_092860c8;
      puVar1 = PTR_DAT_092860c0;
      plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0727f788;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar2,0);
LAB_0727f788:
        uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_0727f900;
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_0727f8d8;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0727f8c0;
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0727f7ec;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar4,0);
LAB_0727f7ec:
        uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        lVar12 = *unaff_x25;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar12 = *unaff_x25;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar13 = FUN_057bed58(lVar12,uVar7,*(undefined8 *)puVar3);
        if ((uVar13 & 1) == 0) {
          uVar8 = thunk_FUN_040dedf8(PTR_DAT_092c1810);
          uVar11 = thunk_FUN_040dedf8(PTR_DAT_092c1818);
          uVar7 = FUN_074e691c(uVar8,uVar7,uVar11,0);
          thunk_FUN_040dedf8(PTR_DAT_092c1430);
          uVar8 = thunk_FUN_040b4efc();
          FUN_0727b03c(uVar8,uVar7);
          uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c1820);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar8,uVar7);
        }
      } while( true );
    }
  }
  goto LAB_0727fac4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0727f8c0:
    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0727f8f4;
    }
  }
LAB_0727f8d8:
  puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar1,0);
LAB_0727f8f4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0727f900:
  lVar12 = *unaff_x21;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar7 = FUN_07282c68(lVar12,*(undefined8 *)puVar5);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_0928cfa8);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1788);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1790);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1798);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092a5d10);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar7;
  thunk_FUN_040ec700();
  uVar7 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1780);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
  thunk_FUN_040ec700();
  if (*unaff_x21 != 0) {
    FUN_07df3f40(*unaff_x21,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10),0);
    FUN_07282ed4();
    if (*unaff_x21 != 0) {
      FUN_07df3f40(*unaff_x21,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8),0);
      FUN_072832e0();
      return;
    }
  }
LAB_0727fac4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


