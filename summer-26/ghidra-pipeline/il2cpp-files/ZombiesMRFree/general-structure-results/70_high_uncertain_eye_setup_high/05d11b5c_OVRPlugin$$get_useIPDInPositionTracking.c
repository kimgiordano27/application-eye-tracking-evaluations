/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 05d11b5c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_useIPDInPositionTracking(void)

{
  ulong uVar1;
  undefined8 uVar2;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar3;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  
  lVar3 = *unaff_x21;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar1 = FUN_068f9b78(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = *unaff_x21;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar1 = FUN_068f9b78(lVar3,0,0);
    if ((uVar1 & 1) != 0) {
      *unaff_x21 = *unaff_x20;
      thunk_FUN_03048534();
      if (*unaff_x20 == 0) goto LAB_05d11cb0;
      FUN_05d1235c();
      lVar3 = FUN_05d1202c();
      *unaff_x20 = lVar3;
      thunk_FUN_03048534();
    }
    lVar3 = *unaff_x20;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar1 = FUN_068f9b78(lVar3,0,0);
    if ((uVar1 & 1) != 0) {
      *unaff_x20 = *unaff_x21;
      thunk_FUN_03048534();
      if (*unaff_x21 == 0) goto LAB_05d11cb0;
      FUN_05d1235c();
      lVar3 = FUN_05d121c4();
      *unaff_x21 = lVar3;
      thunk_FUN_03048534();
    }
    if ((*unaff_x21 == 0) || (fVar4 = (float)FUN_05d1235c(), *unaff_x20 == 0)) {
LAB_05d11cb0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    fVar5 = (float)FUN_05d1235c();
    fVar6 = 0.0;
    if (fVar4 - fVar5 != 0.0) {
      if (*unaff_x20 == 0) goto LAB_05d11cb0;
      fVar6 = (float)FUN_05d1235c();
      fVar6 = (unaff_s8 - fVar6) / (fVar4 - fVar5);
    }
    *unaff_x19 = fVar6;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *unaff_x19 = 0.0;
  }
  return uVar2;
}


