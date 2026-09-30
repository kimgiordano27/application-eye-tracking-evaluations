/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$remove_OnAssemblyParsed
ENTRY_POINT: 0727f710
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0727f90c) */
/* WARNING: Removing unreachable block (ram,0x0727facc) */

void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__remove_OnAssemblyParsed(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *puVar9;
  long unaff_x27;
  undefined8 *puVar10;
  long unaff_x28;
  long *plVar11;
  long *unaff_x29;
  
  plVar11 = *(long **)(unaff_x28 + 0xc0);
  puVar10 = *(undefined8 **)(unaff_x27 + 0x5a8);
  puVar9 = *(undefined8 **)(unaff_x26 + 0x778);
  plVar1 = (long *)(*(code *)*param_1)();
  do {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0727f788;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar1,*unaff_x23,0);
LAB_0727f788:
    uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar1 == (long *)0x0) goto LAB_0727f900;
      lVar6 = *plVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_0727f8d8;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0727f7ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar1,*unaff_x29,0);
LAB_0727f7ec:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    lVar6 = *unaff_x25;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar6 = *unaff_x25;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar7 = FUN_057bed58(lVar6,uVar3,*unaff_x24);
    if ((uVar7 & 1) == 0) {
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092c1810);
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c1818);
      uVar3 = FUN_074e691c(uVar4,uVar3,uVar5,0);
      thunk_FUN_040dedf8(PTR_DAT_092c1430);
      uVar4 = thunk_FUN_040b4efc();
      FUN_0727b03c(uVar4,uVar3);
      uVar3 = thunk_FUN_040dedf8(PTR_DAT_092c1820);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar4,uVar3);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *plVar11) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0727f8f4;
    }
  }
LAB_0727f8d8:
  puVar2 = (undefined8 *)FUN_040b1e00(plVar1,*plVar11,0);
LAB_0727f8f4:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
LAB_0727f900:
  lVar6 = *unaff_x21;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = FUN_07282c68(lVar6,*puVar10);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  thunk_FUN_040ec700();
  uVar3 = FUN_07282c68(*unaff_x21,*puVar9);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  thunk_FUN_040ec700();
  uVar3 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_0928cfa8);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  thunk_FUN_040ec700();
  uVar3 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1788);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  thunk_FUN_040ec700();
  uVar3 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1790);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  thunk_FUN_040ec700();
  uVar3 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1798);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  thunk_FUN_040ec700();
  uVar3 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092a5d10);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  thunk_FUN_040ec700();
  uVar3 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1780);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
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
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


