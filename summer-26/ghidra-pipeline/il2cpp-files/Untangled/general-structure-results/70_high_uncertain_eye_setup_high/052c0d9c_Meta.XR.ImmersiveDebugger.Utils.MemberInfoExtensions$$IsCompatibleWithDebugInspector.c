/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$IsCompatibleWithDebugInspector
ENTRY_POINT: 052c0d9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__IsCompatibleWithDebugInspector(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar8;
  long lVar9;
  long unaff_x23;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  int iStack000000000000000c;
  
  do {
    puVar2 = PTR_DAT_06d02bc8;
    if ((((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) ||
        (lVar9 = *(long *)(param_1 + unaff_x21 * 8), lVar9 == 0)) || (*(long *)(lVar9 + 0x10) == 0))
    {
LAB_052c0ee8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    if (iVar1 != *(int *)(*(long *)(lVar9 + 0x10) + 0x18)) {
      iStack000000000000000c = (int)unaff_x21 + -4;
      uVar3 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,(long)&stack0x00000008 + 4);
      if (*(long *)(lVar9 + 0x10) != 0) {
        uStack0000000000000008 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x18);
        uVar4 = thunk_FUN_02ef1438(*(undefined8 *)puVar2,&stack0x00000008);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          uStack0000000000000004 = *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x18);
                    /* try { // try from 052c0e54 to 053c0e5b has its CatchHandler @ 052c0ef4 */
          uVar5 = thunk_FUN_02ef1438(*(undefined8 *)puVar2,&stack0x00000004);
          puVar7 = (undefined8 *)PTR_DAT_06d3d3d0;
LAB_052c0c9c:
          uVar3 = FUN_05465b88(*puVar7,uVar3,uVar4,uVar5,0);
          if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
          }
          FUN_06694324(uVar3,0);
          return 0;
        }
      }
      goto LAB_052c0ee8;
    }
    if ((unaff_x23 == 0) || (*(long *)(unaff_x23 + 0x10) == 0)) goto LAB_052c0ee8;
    if (iVar1 != *(int *)(*(long *)(unaff_x23 + 0x10) + 0x18)) {
      iStack000000000000000c = (int)unaff_x21 + -4;
      uVar3 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d02bc8,(long)&stack0x00000008 + 4);
                    /* try { // try from 052c0e80 to 053c0e8b has its CatchHandler @ 052c0ef0 */
      if (*(long *)(lVar9 + 0x10) != 0) {
        uStack0000000000000008 = *(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x18);
        uVar4 = thunk_FUN_02ef1438(*(undefined8 *)puVar2,&stack0x00000008);
                    /* try { // try from 052c0ea4 to 053c0eaf has its CatchHandler @ 052c0eec */
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          uStack0000000000000004 = *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x18);
                    /* try { // try from 052c0eb0 to 053c0f0b has its CatchHandler @ 052c0de4 */
          uVar5 = thunk_FUN_02ef1438(*(undefined8 *)puVar2,&stack0x00000004);
          puVar7 = (undefined8 *)PTR_DAT_06d3d3f0;
          goto LAB_052c0c9c;
        }
      }
      goto LAB_052c0ee8;
    }
    lVar9 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 052c0de4 to 053c0e53 has its CatchHandler @ 052c0de4
                       catch() { ... } // from try @ 052c0de4 with catch @ 052c0de4
                       catch() { ... } // from try @ 052c0eb0 with catch @ 052c0de4
                       catch() { ... } // from try @ 052c0f34 with catch @ 052c0de4 */
    unaff_x21 = unaff_x21 + 1;
    if (lVar9 == 0) goto LAB_052c0ee8;
    lVar6 = *(long *)(lVar9 + 0x80);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
      FUN_052c35a0(lVar9);
      lVar6 = *(long *)(lVar9 + 0x80);
      if (lVar6 == 0) goto LAB_052c0ee8;
    }
    uVar8 = (int)unaff_x21 - 4;
    if (*(int *)(lVar6 + 0x18) <= (int)uVar8) {
      *(undefined1 *)(unaff_x19 + 0x78) = 1;
      return 1;
    }
    lVar9 = *(long *)(unaff_x19 + 0x30);
    if (lVar9 == 0) goto LAB_052c0ee8;
    lVar6 = *(long *)(lVar9 + 0x80);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
      FUN_052c35a0(lVar9);
      lVar6 = *(long *)(lVar9 + 0x80);
      if (lVar6 == 0) goto LAB_052c0ee8;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    if (*(long *)(unaff_x19 + 0xb8) == 0) goto LAB_052c0ee8;
    unaff_x20 = *(long *)(lVar6 + unaff_x21 * 8);
    lVar9 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb8),0);
    if (lVar9 == 0) goto LAB_052c0ee8;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) break;
    if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_052c0ee8;
    unaff_x23 = *(long *)(lVar9 + unaff_x21 * 8);
    param_1 = FUN_052c72b4(*(long *)(unaff_x19 + 0xb0),0);
    if (param_1 == 0) goto LAB_052c0ee8;
  } while (uVar8 < *(uint *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052c0ea4 with catch @ 052c0eec
                        */
  FUN_02f080c8();
}


