/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_16
ENTRY_POINT: 01dc2348
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_<>c__<_cctor>b__819_16(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  char *pcVar4;
  char *unaff_x24;
  long *unaff_x25;
  char *unaff_x26;
  
  while( true ) {
                    /* try { // try from 01dc2354 to 01ec2357 has its CatchHandler @ 01dc24cc */
    iVar2 = (**(code **)(param_1 + 0x1b8))(param_2);
    unaff_w19 = unaff_w19 + iVar2 + -1;
    pcVar4 = unaff_x24;
    do {
      if (unaff_x26 <= pcVar4) {
        return unaff_w19;
      }
      unaff_x24 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = unaff_x24;
    } while (-1 < cVar1);
    param_2 = unaff_x25;
    if (unaff_x25 == (long *)0x0) {
      if (unaff_x20 == 0) {
        plVar3 = *(long **)(unaff_x22 + 0x30);
        if (plVar3 == (long *)0x0) break;
        param_2 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      }
      else {
        param_2 = (long *)FUN_01dc236c();
      }
      if (param_2 == (long *)0x0) break;
      param_2[2] = unaff_x21;
      param_2[3] = 0;
    }
    if (unaff_x23 == 0) break;
    if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(char *)(unaff_x23 + 0x20) = cVar1;
    param_1 = *param_2;
    unaff_x25 = param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


