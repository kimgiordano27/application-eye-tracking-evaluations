/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 01a1ba18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetExternalCameraProperties
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_4 == 0) goto LAB_01a1bb18;
  FUN_0267dc2c(param_4,*unaff_x22,0);
  if (*(char *)(unaff_x19 + 0x58) == '\0') {
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = FUN_0268fd10(*(long *)(unaff_x19 + 0x40),0), unaff_x20 == 0)) goto LAB_01a1bb18;
    fVar3 = *(float *)(unaff_x19 + 0x5c);
    fVar4 = *(float *)(unaff_x19 + 0x60);
    fVar5 = *(float *)(unaff_x19 + 100);
    fVar2 = (float)FUN_01a1aaa0();
    if (DAT_03774e1b == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774e1b = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar1 == 0) goto LAB_01a1bb18;
    fVar2 = SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2);
    FUN_0269fd98(fVar3 * fVar2,fVar4 * fVar2,fVar5 * fVar2,lVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_0266622c(*(long *)(unaff_x19 + 0x40),1,0);
    return;
  }
LAB_01a1bb18:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


