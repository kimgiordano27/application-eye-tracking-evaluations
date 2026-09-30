/*
FUNCTION_NAME: OVRPlugin$$CreateSpatialAnchor
ENTRY_POINT: 01f88e38
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


void OVRPlugin__CreateSpatialAnchor(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  *(undefined8 *)(unaff_x19 + 0x98) = param_2;
  thunk_FUN_01286abc();
  uVar4 = *unaff_x23;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f7d8a0(uVar4);
  lVar2 = FUN_01ebc848();
  puVar1 = PTR_DAT_027b1f68;
  if (lVar2 == 0) {
    lVar3 = 0;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
LAB_01f88ebc:
    thunk_FUN_01286abc(unaff_x19 + 0xa0,lVar3);
    return;
  }
  uVar4 = *(undefined8 *)PTR_DAT_027b1f68;
  lVar3 = thunk_FUN_0124baac(lVar2,uVar4);
  if (lVar3 != 0) {
    *(long *)(unaff_x19 + 0xa0) = lVar3;
    uVar4 = *(undefined8 *)puVar1;
    lVar3 = thunk_FUN_0124baac(lVar2,uVar4);
    if (lVar3 != 0) goto LAB_01f88ebc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60(lVar2,uVar4);
}


