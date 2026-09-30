/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 05653d34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x27;
  long unaff_x28;
  
  FUN_02dcfd74();
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar3 = FUN_036ec9e8(*unaff_x23,unaff_x23[1],
                           *(undefined8 *)(*(long *)(unaff_x28 + 0x38) + 0x28)), lVar3 != 0)) {
    FUN_036ec8f8(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(unaff_x27 + 0x38) + 0x18));
                    /* try { // try from 05653d7c to 05753db3 has its CatchHandler @ 05653d7c
                       catch() { ... } // from try @ 05653d7c with catch @ 05653d7c
                       catch() { ... } // from try @ 05653eac with catch @ 05653d7c
                       catch() { ... } // from try @ 05653ee0 with catch @ 05653d7c
                       catch() { ... } // from try @ 05653f54 with catch @ 05653d7c */
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<OVRSpatialAnchor>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_05653df0(unaff_w22);
  FUN_055efebc(uVar4,*(undefined8 *)puVar2,0,0);
  return;
}


