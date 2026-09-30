/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 090a2554
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__get_useDynamicFoveatedRendering(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
                    /* try { // try from 090a2558 to 091a2587 has its CatchHandler @ 090a2748 */
  *(undefined1 *)(unaff_x20 + 0x28c) = 1;
  puVar1 = PTR_DAT_0ac76fb8;
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar2 = *plVar3;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
    lVar2 = *(long *)PTR_DAT_0ac76fb8;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
                    /* try { // try from 090a2594 to 091a2597 has its CatchHandler @ 090a273c */
                    /* try { // try from 090a2598 to 091a2627 has its CatchHandler @ 090a234c */
    lVar2 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac78e90,
                         *(undefined4 *)(**(long **)(lVar2 + 0xb8) + 0x18));
    *plVar3 = lVar2;
    thunk_FUN_049ee3d8(plVar3,lVar2);
    lVar2 = *plVar3;
  }
  return lVar2;
}


