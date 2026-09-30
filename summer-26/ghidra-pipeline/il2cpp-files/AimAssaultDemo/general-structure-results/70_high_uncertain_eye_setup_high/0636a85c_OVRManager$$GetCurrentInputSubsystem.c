/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 0636a85c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  
  if (param_1 < 1) {
    plVar5 = *(long **)(unaff_x19 + 0x10);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x578))(plVar5,*(undefined8 *)(*plVar5 + 0x580));
      plVar5 = *(long **)(unaff_x19 + 0x10);
                    /* try { // try from 0636a8d0 to 0646a8df has its CatchHandler @ 0636a8e0 */
      if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0636a81c with catch @ 0636a8e0
                       catch() { ... } // from try @ 0636a850 with catch @ 0636a8e0
                       catch() { ... } // from try @ 0636a8d0 with catch @ 0636a8e0 */
                    /* try { // try from 0636a8e4 to 0646a8e7 has its CatchHandler @ 0636a8f0 */
                    /* try { // try from 0636a8e8 to 0646a8f3 has its CatchHandler @ 0636a7a0 */
                    /* WARNING: Could not recover jumptable at 0x0636a8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x588))(plVar5,*(undefined8 *)(*plVar5 + 0x590));
        return;
      }
    }
  }
  else {
    plVar5 = *(long **)(unaff_x20 + 0x98);
                    /* try { // try from 0636a868 to 0646a8cf has its CatchHandler @ 0636a7a0 */
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07db5300) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0636a8e4 with catch @ 0636a8f0
                        */
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0636a8fc;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db5300,0);
LAB_0636a8fc:
      (*(code *)*puVar1)(plVar5,0,puVar1[1]);
      FUN_06369b34();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


