/*
FUNCTION_NAME: FUN_03668f90
ENTRY_POINT: 03668f90
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


float FUN_03668f90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_06d9fd78;
  if ((bRam0000000007239722 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam0000000007239722 = 1;
  }
  uVar2 = FUN_03668714(param_1);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar4);
  }
  uVar3 = FUN_051e0350(uVar2,0);
  if ((uVar3 & 1) == 0) {
    fVar5 = 100.0;
  }
  else {
    lVar4 = FUN_03668714(param_1);
    if (lVar4 == 0) goto LAB_03669080;
    fVar5 = (float)FUN_04f1f65c(lVar4,0);
  }
  uVar2 = FUN_0366303c(param_1);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar4);
  }
  uVar3 = FUN_051e0350(uVar2,0);
  if ((uVar3 & 1) == 0) {
    fVar6 = *(float *)(param_1 + 0x104);
  }
  else {
    lVar4 = FUN_0366303c(param_1);
    if (lVar4 == 0) {
LAB_03669080:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    fVar6 = (float)Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__get_Length(lVar4,0);
    *(float *)(param_1 + 0x104) = fVar6;
  }
  return fVar5 / fVar6;
}


