/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 04f2c208
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 113
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_3;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  
  if (unaff_x20 != (long *)0x0) {
    (**(code **)(*unaff_x20 + 0x2a8))
              (*param_1,*(undefined4 *)(unaff_x19 + 0x44),*(undefined4 *)(unaff_x19 + 0x48),
               *(undefined4 *)(unaff_x19 + 0x4c));
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar2 = FUN_05c89410(*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (iVar1 = FUN_05c9de68(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        FUN_05c8cb28(lVar2,0 < iVar1,0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar2 = FUN_05c89410(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
          FUN_05c8cb28(lVar2,*(char *)(unaff_x19 + 0x68) == '\0',0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


