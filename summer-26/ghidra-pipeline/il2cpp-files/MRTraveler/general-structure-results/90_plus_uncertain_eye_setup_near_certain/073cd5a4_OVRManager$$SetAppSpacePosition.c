/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 073cd5a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetAppSpacePosition(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  float *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  
  *unaff_x21 = param_1;
  thunk_FUN_03d233cc();
  puVar1 = PTR_DAT_08e68f00;
  lVar3 = *unaff_x20;
  if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_085dfaac(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *unaff_x21;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_085dfaac(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      *unaff_x19 = 0.0;
      return 0;
    }
  }
  lVar3 = *unaff_x21;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_085dfaac(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    *unaff_x21 = *unaff_x20;
    thunk_FUN_03d233cc();
    if (*unaff_x20 == 0) goto LAB_073cd734;
    FUN_073cdde0();
    lVar3 = FUN_073cdab0();
    *unaff_x20 = lVar3;
    thunk_FUN_03d233cc();
  }
  lVar3 = *unaff_x20;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_085dfaac(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    *unaff_x20 = *unaff_x21;
    thunk_FUN_03d233cc();
    if (*unaff_x21 == 0) goto LAB_073cd734;
    FUN_073cdde0();
    lVar3 = FUN_073cdc48();
    *unaff_x21 = lVar3;
    thunk_FUN_03d233cc();
  }
  if ((*unaff_x21 != 0) && (fVar4 = (float)FUN_073cdde0(), *unaff_x20 != 0)) {
    fVar5 = (float)FUN_073cdde0();
    fVar6 = 0.0;
    if (fVar4 - fVar5 != 0.0) {
      if (*unaff_x20 == 0) goto LAB_073cd734;
      fVar6 = (float)FUN_073cdde0();
      fVar6 = (unaff_s8 - fVar6) / (fVar4 - fVar5);
    }
    *unaff_x19 = fVar6;
    return 1;
  }
LAB_073cd734:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


