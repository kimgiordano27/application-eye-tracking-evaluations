/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_IsMultimodalHandsControllersSupported
ENTRY_POINT: 063bcf10
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((param_2 != 0) && (lVar3 = *(long *)(param_1 + 0x18), lVar3 != 0)) {
    iVar4 = *(int *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    if ((int)uVar5 < iVar4) {
LAB_063bcfe0:
      thunk_FUN_037a15ac(PTR_DAT_07d864a0);
      uVar5 = thunk_FUN_037788cc();
      FUN_0627a084(uVar5,0);
      uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db7668);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,uVar2);
    }
    iVar6 = *(int *)(param_2 + 0x18);
    do {
      iVar1 = (int)uVar5 - iVar4;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063bcaec with catch @ 063bcf3c
                        */
      if (iVar6 <= iVar1) {
        iVar1 = iVar6;
      }
                    /* try { // try from 063bcf54 to 064bcf57 has its CatchHandler @ 063bcf68 */
      FUN_06265b84(param_2,0,lVar3,iVar4,iVar1,0);
      lVar3 = *(long *)(param_1 + 0x18);
      iVar4 = iVar1 + *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar4;
                    /* catch() { ... } // from try @ 063bcf54 with catch @ 063bcf68 */
      if (lVar3 == 0) goto LAB_063bd014;
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      iVar6 = iVar6 - iVar1;
                    /* try { // try from 063bcf74 to 064bcf7f has its CatchHandler @ 063bcf94 */
      if ((int)uVar5 < iVar4) goto LAB_063bcfe0;
      if (iVar4 == (int)uVar5) {
                    /* try { // try from 063bcf80 to 064bcf8b has its CatchHandler @ 063bc8bc */
        iVar4 = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    } while (0 < iVar6);
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 0x28) + (float)*(int *)(param_2 + 0x18) / DAT_0158662c;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar3 = FUN_075469d4(*(long *)(param_1 + 0x10),0), lVar3 != 0)) {
      FUN_07545640(lVar3,*(undefined8 *)(param_1 + 0x18),0,0);
      return;
    }
  }
LAB_063bd014:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


