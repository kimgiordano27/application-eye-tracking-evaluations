/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$op_Inequality
ENTRY_POINT: 04cd5170
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__op_Inequality(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000018;
  
  if (param_1 != 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fe9a0);
    uVar4 = thunk_FUN_0367fe20();
    uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a00ed8);
    FUN_071c29f0(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar4);
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  lVar1 = thunk_FUN_0367fe20();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  FUN_04f264dc(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20));
  *unaff_x22 = lVar1;
  thunk_FUN_036b7ad0();
  if (*(int *)(*(long *)PTR_DAT_079fd6f8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_060ffe84();
  lVar1 = *unaff_x22;
  if (lVar1 != 0) {
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      in_stack_00000018 = FUN_04f4e538(lVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      uVar3 = FUN_04f24f48(&stack0x00000018,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x48));
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
        thunk_FUN_036b7ad0(unaff_x19 + 10,0);
        lVar1 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x68);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        System_Array__InternalArray__IEnumerable_GetEnumerator<MultiColumnCollectionHeader_ViewState_ColumnState>
                  (unaff_x19 + 2,&stack0x00000018);
      }
      else {
        lVar1 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        uVar4 = FUN_04f24f88(&stack0x00000018,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x80));
        lVar1 = *(long *)(unaff_x20 + 0x20);
        *unaff_x19 = 0xfffffffe;
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x68);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar1 = *(long *)(unaff_x20 + 0x20);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_0367c9fc();
        }
        FUN_04ec96a8(unaff_x19 + 2,uVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x98));
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


