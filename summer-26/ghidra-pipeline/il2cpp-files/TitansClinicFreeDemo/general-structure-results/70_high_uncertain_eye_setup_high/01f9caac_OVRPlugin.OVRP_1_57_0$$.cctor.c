/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$.cctor
ENTRY_POINT: 01f9caac
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0___cctor(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  long lVar5;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xe48));
                    /* try { // try from 01f9cab4 to 0209cabf has its CatchHandler @ 01f9cad4 */
  *(undefined1 *)(unaff_x20 + 0xf47) = 1;
                    /* try { // try from 01f9cac0 to 0209caeb has its CatchHandler @ 01f9ca74 */
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    return;
  }
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9cab4 with catch @ 01f9cad4
                        */
  plVar4 = (long *)(unaff_x19 + 0x10);
  if (*plVar4 == 0) {
    uVar1 = FUN_01f9cb74();
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
                    /* try { // try from 01f9caec to 0209caef has its CatchHandler @ 01f9cb1c */
                    /* try { // try from 01f9caf0 to 0209cb1f has its CatchHandler @ 01f9ca74 */
    thunk_FUN_01286abc(plVar4,uVar1);
  }
  plVar2 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar4;
                    /* catch() { ... } // from try @ 01f9caec with catch @ 01f9cb1c */
                    /* try { // try from 01f9cb20 to 0209cb2b has its CatchHandler @ 01f9cb40 */
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
      uVar1 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar1,0);
    }
                    /* try { // try from 01f9cb2c to 0209cb37 has its CatchHandler @ 01f9ca74 */
    if ((int)plVar2[3] != 0) {
      plVar2[4] = lVar5;
      thunk_FUN_01286abc(plVar2 + 4,lVar5);
      FUN_01f9b348(*(undefined8 *)PTR_DAT_027c1e48,plVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


