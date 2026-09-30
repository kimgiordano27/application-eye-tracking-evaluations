/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 03d47cf0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__CopyTo(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int iVar7;
  long *plVar8;
  
  iVar7 = 0;
                    /* try { // try from 03d47cf4 to 03e47cf7 has its CatchHandler @ 03d47d00 */
  do {
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
                    /* catch() { ... } // from try @ 03d47cf4 with catch @ 03d47d00 */
                    /* try { // try from 03d47d04 to 03e47d0b has its CatchHandler @ 03d47d14 */
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
                    /* try { // try from 03d47d0c to 03e47d17 has its CatchHandler @ 03d479ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03d47d04 with catch @ 03d47d14
                        */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03d47d6c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar8,lVar3,0);
LAB_03d47d6c:
    (*(code *)*puVar1)(plVar8,iVar7,puVar1[1]);
    lVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
      uVar2 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar3;
    thunk_FUN_02bb0e9c(unaff_x22 + (long)(int)unaff_w19 + 4,lVar3);
    iVar7 = iVar7 + 1;
    unaff_w19 = unaff_w19 + 1;
    if (iVar7 == unaff_w23) {
      return;
    }
  } while( true );
}


