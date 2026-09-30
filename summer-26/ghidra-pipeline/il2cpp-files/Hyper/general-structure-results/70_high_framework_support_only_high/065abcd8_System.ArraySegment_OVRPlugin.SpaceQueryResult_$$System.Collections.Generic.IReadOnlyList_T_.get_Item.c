/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IReadOnlyList<T>.get_Item
ENTRY_POINT: 065abcd8
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_ArraySegment<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IReadOnlyList<T>_get_Item
               (long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long in_stack_00000008;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 065abcc8 with catch @ 065abce4 */
    param_1 = FUN_04980b34();
  }
                    /* catch() { ... } // from try @ 065abb0c with catch @ 065abce8 */
                    /* catch() { ... } // from try @ 065abca0 with catch @ 065abcec */
  lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
                    /* catch() { ... } // from try @ 065abaf4 with catch @ 065abcf0 */
                    /* catch() { ... } // from try @ 065abc78 with catch @ 065abcf4 */
                    /* catch() { ... } // from try @ 065abad4 with catch @ 065abcf8 */
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 065abc64 with catch @ 065abcfc */
    lVar5 = FUN_04980b34();
  }
                    /* catch() { ... } // from try @ 065abab4 with catch @ 065abd00 */
                    /* catch() { ... } // from try @ 065abb34 with catch @ 065abd04 */
  if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 065ab9f0 with catch @ 065abd08 */
    thunk_FUN_049a583c();
  }
                    /* catch() { ... } // from try @ 065aba3c with catch @ 065abd0c */
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  puVar3 = PTR_DAT_0ac161d0;
  if (unaff_x22 != 0) {
                    /* try { // try from 065abd28 to 066abd2b has its CatchHandler @ 065abd38 */
    if ((int)unaff_w21 < 0) {
      bVar4 = false;
    }
    else {
      lVar5 = *(long *)(unaff_x19 + 0x20);
                    /* catch() { ... } // from try @ 065abd28 with catch @ 065abd38 */
                    /* try { // try from 065abd3c to 066abd43 has its CatchHandler @ 065abd60 */
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
                    /* try { // try from 065abd44 to 066abd63 has its CatchHandler @ 065ab770 */
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
                    /* catch() { ... } // from try @ 065abd3c with catch @ 065abd60 */
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04980b34();
      }
      bVar4 = (int)unaff_w21 < *(int *)(unaff_x22 + 0x18);
    }
    FUN_092cbd18(bVar4,*(undefined8 *)puVar3,0,0);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar5 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_04980b34();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      uVar2 = *(ushort *)(lVar5 + 0x135);
    }
    uVar1 = *(undefined4 *)(unaff_x22 + 0x18);
    if ((uVar2 & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xb8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    lVar5 = FUN_04947fd0(lVar5,uVar1);
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04980b34(*(long *)(unaff_x19 + 0x20));
    }
    FUN_08da0170();
    if (lVar5 != 0) {
      if (unaff_w21 < *(uint *)(lVar5 + 0x18)) {
        *(undefined4 *)(lVar5 + (long)(int)unaff_w21 * 4 + 0x20) = unaff_w20;
        in_stack_00000008 = 0;
        if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_04980b34();
        }
        in_stack_00000008 = lVar5;
        thunk_FUN_049ee3d8(&stack0x00000008,lVar5);
        return in_stack_00000008;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


