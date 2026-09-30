/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 060d5e58
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__RecenterTrackingOrigin
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_071c0684(param_4,0,0);
  if ((uVar1 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = thunk_FUN_0718a308(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0)) goto LAB_060d5f78;
    unaff_x22 = (undefined8 *)(unaff_x19 + 0x58);
  }
  else if ((*(long *)(unaff_x19 + 0x48) == 0) ||
          (lVar2 = thunk_FUN_0718a308(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0))
  goto LAB_060d5f78;
  FUN_0718d51c(lVar2,*unaff_x22,0);
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = FUN_071bd0d0(*(long *)(unaff_x19 + 0x48),0), unaff_x20 == 0)) goto LAB_060d5f78;
    fVar4 = *(float *)(unaff_x19 + 100);
    fVar5 = *(float *)(unaff_x19 + 0x68);
    fVar6 = *(float *)(unaff_x19 + 0x6c);
    fVar3 = (float)FUN_060d4e34();
    if (DAT_07ed76bb == '\0') {
      FUN_03642964(PTR_DAT_079f4df0);
      DAT_07ed76bb = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_079f4df0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    if (lVar2 == 0) goto LAB_060d5f78;
    fVar3 = SQRT(param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2);
    FUN_071d0c1c(fVar4 * fVar3,fVar5 * fVar3,fVar6 * fVar3,lVar2,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0718a8f8(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
LAB_060d5f78:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


