/*
FUNCTION_NAME: OVRPlugin$$GetHandState
ENTRY_POINT: 07a3e3e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandState(undefined1 param_1 [16],float param_2,float param_3)

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
  
  thunk_FUN_040d65a8();
  uVar1 = FUN_089ca704();
  if ((uVar1 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = thunk_FUN_08990a60(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0)) goto LAB_07a3e50c;
    unaff_x22 = (undefined8 *)(unaff_x19 + 0x58);
  }
  else if ((*(long *)(unaff_x19 + 0x48) == 0) ||
          (lVar2 = thunk_FUN_08990a60(*(long *)(unaff_x19 + 0x48),0), lVar2 == 0))
  goto LAB_07a3e50c;
  FUN_08995080(lVar2,*unaff_x22,0);
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar2 = FUN_089c7534(*(long *)(unaff_x19 + 0x48),0), unaff_x20 == 0)) goto LAB_07a3e50c;
    fVar4 = *(float *)(unaff_x19 + 100);
    fVar5 = *(float *)(unaff_x19 + 0x68);
    fVar6 = *(float *)(unaff_x19 + 0x6c);
    fVar3 = (float)FUN_07a3d3c8();
    if (DAT_098854e9 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e9 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (lVar2 == 0) goto LAB_07a3e50c;
    fVar3 = SQRT(param_3 * param_3 + fVar3 * fVar3 + param_2 * param_2);
    FUN_089dc428(fVar4 * fVar3,fVar5 * fVar3,fVar6 * fVar3,lVar2,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_0899153c(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
LAB_07a3e50c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


