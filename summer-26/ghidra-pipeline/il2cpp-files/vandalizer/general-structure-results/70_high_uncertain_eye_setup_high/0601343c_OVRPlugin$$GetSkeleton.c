/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton
ENTRY_POINT: 0601343c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSkeleton(undefined1 param_1 [16],float param_2,float param_3,ulong param_4)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_4 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x48),0), lVar1 == 0)) goto LAB_06013550;
    unaff_x22 = (undefined8 *)(unaff_x19 + 0x58);
  }
  else if ((*(long *)(unaff_x19 + 0x48) == 0) ||
          (lVar1 = thunk_FUN_06e03184(*(long *)(unaff_x19 + 0x48),0), lVar1 == 0))
  goto LAB_06013550;
  FUN_06e0c91c(lVar1,*unaff_x22,0);
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x48),0), unaff_x20 == 0)) goto LAB_06013550;
    fVar3 = *(float *)(unaff_x19 + 100);
    fVar4 = *(float *)(unaff_x19 + 0x68);
    fVar5 = *(float *)(unaff_x19 + 0x6c);
    fVar2 = (float)FUN_06012408();
    if (DAT_07a3f7a9 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b370);
      DAT_07a3f7a9 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if (lVar1 == 0) goto LAB_06013550;
    fVar2 = SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2);
    FUN_06e6b2fc(fVar3 * fVar2,fVar4 * fVar2,fVar5 * fVar2,lVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_06e03bb0(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
LAB_06013550:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


