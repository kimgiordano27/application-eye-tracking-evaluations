/*
FUNCTION_NAME: OVRManager$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 03369708
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__get_fixedFoveatedRenderingLevel(long param_1)

{
  bool in_ZR;
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long *unaff_x19;
  undefined8 uVar4;
  
  if (in_ZR) {
    thunk_FUN_01c49834();
                    /* WARNING: Could not recover jumptable at 0x03369a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x398))();
    return;
  }
  if (param_1 == *(long *)PTR_DAT_042304a8) {
    puVar1 = (undefined8 *)thunk_FUN_01c49834();
    lVar3 = *unaff_x19;
    uVar4 = *puVar1;
  }
  else {
    if (param_1 == *(long *)PTR_DAT_042304e0) {
      puVar2 = (undefined4 *)thunk_FUN_01c49834();
                    /* catch() { ... } // from try @ 03369af8 with catch @ 03369aec
                       catch() { ... } // from try @ 03369b30 with catch @ 03369aec
                       catch() { ... } // from try @ 03369b68 with catch @ 03369aec */
                    /* try { // try from 03369af0 to 03469af7 has its CatchHandler @ 03369b00 */
                    /* WARNING: Could not recover jumptable at 0x03369af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x318))(*puVar2);
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03295500(0);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
    }
    uVar4 = FUN_03253790();
    lVar3 = *unaff_x19;
  }
                    /* WARNING: Could not recover jumptable at 0x03369ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x328))(uVar4);
  return;
}


