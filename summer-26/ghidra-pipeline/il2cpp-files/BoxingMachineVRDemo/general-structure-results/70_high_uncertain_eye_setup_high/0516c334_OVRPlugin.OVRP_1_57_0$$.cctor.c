/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$.cctor
ENTRY_POINT: 0516c334
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0___cctor(ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  int unaff_w21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782788);
    FUN_02d6084c(PTR_DAT_0675e1c0);
    *(undefined1 *)(unaff_x22 + 0xe82) = 1;
  }
  puVar1 = PTR_DAT_06782788;
  if (param_3 != 0) {
                    /* try { // try from 0516c368 to 0526c36b has its CatchHandler @ 0516c374 */
    if (unaff_w21 < 0x101) {
                    /* try { // try from 0516c3e0 to 0526c3e3 has its CatchHandler @ 0516c3ec */
                    /* try { // try from 0516c3e4 to 0526c3ef has its CatchHandler @ 0516c208 */
      plVar3 = (long *)(param_2 + 0x18);
      if (*plVar3 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0516c3e0 with catch @ 0516c3ec
                        */
                    /* try { // try from 0516c3f0 to 0526c45b has its CatchHandler @ 0516c3f0
                       catch() { ... } // from try @ 0516c3f0 with catch @ 0516c3f0
                       catch() { ... } // from try @ 0516c470 with catch @ 0516c3f0
                       catch() { ... } // from try @ 0516c4b8 with catch @ 0516c3f0
                       catch() { ... } // from try @ 0516c4fc with catch @ 0516c3f0 */
        lVar2 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675e1c0,0x100);
        *plVar3 = lVar2;
        thunk_FUN_02dd37b4(plVar3,lVar2);
      }
      puVar1 = PTR_DAT_06782788;
      lVar2 = *(long *)PTR_DAT_06782788;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *(long *)puVar1;
      }
      plVar5 = (long *)**(long **)(lVar2 + 0xb8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 600))
                  (plVar5,param_3,0,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 0x18),
                   0,*(undefined8 *)(*plVar5 + 0x260));
        plVar5 = *(long **)(param_2 + 0x10);
        if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0516c484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x1f8))
                    (plVar5,*plVar3,0,unaff_w21,*(undefined8 *)(*plVar5 + 0x200));
          return;
        }
      }
    }
    else {
                    /* try { // try from 0516c36c to 0526c38f has its CatchHandler @ 0516c208 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0516c2fc with catch @ 0516c370
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0516c368 with catch @ 0516c374
                        */
      lVar2 = *(long *)PTR_DAT_06782788;
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0516c2f4 with catch @ 0516c378
                        */
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *(long *)puVar1;
      }
      plVar3 = (long *)**(long **)(lVar2 + 0xb8);
                    /* try { // try from 0516c390 to 0526c3a7 has its CatchHandler @ 0516c3dc */
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x248))(plVar3,param_3,*(undefined8 *)(*plVar3 + 0x250));
                    /* try { // try from 0516c3a8 to 0526c3cb has its CatchHandler @ 0516c208 */
        plVar3 = *(long **)(param_2 + 0x10);
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0516c3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x1e8))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x1f0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* catch() { ... } // from try @ 0516c390 with catch @ 0516c3dc
                       catch() { ... } // from try @ 0516c3cc with catch @ 0516c3dc */
  return;
}


