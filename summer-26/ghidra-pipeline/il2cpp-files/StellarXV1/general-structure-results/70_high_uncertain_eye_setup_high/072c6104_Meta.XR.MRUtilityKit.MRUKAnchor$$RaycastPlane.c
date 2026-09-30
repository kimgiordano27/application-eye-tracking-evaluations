/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastPlane
ENTRY_POINT: 072c6104
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastPlane(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long unaff_x21;
  undefined8 uVar3;
  undefined8 *unaff_x24;
  
  do {
    if ((bool)in_ZR) {
      return;
    }
    lVar1 = FUN_076c0530(unaff_x21);
    if (lVar1 != 0) {
      uVar3 = *unaff_x24;
      lVar2 = thunk_FUN_040b4e00(lVar1,uVar3);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(lVar1,uVar3);
      }
    }
    lVar1 = FUN_040b1498();
    in_ZR = lVar1 == unaff_x21;
    unaff_x21 = lVar1;
  } while( true );
}


