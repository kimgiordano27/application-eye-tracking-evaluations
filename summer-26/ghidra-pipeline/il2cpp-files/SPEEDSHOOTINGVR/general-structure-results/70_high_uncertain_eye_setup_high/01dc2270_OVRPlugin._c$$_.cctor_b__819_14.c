/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_14
ENTRY_POINT: 01dc2270
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


int OVRPlugin_<>c__<_cctor>b__819_14(void)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int unaff_w19;
  long unaff_x20;
  char *unaff_x21;
  long unaff_x22;
  char *pcVar6;
  char *pcVar7;
  
  plVar3 = *(long **)(unaff_x20 + 0x10);
  if (((plVar3 == (long *)0x0) || (lVar5 = *(long *)PTR_DAT_0235aaa8, *plVar3 != lVar5)) ||
     (iVar2 = (**(code **)(lVar5 + 0x188))(plVar3,*(undefined8 *)(lVar5 + 400)), iVar2 != 1)) {
    lVar4 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bbb0,1);
    plVar3 = (long *)0x0;
    lVar5 = (long)unaff_w19;
    pcVar6 = unaff_x21;
    while (pcVar6 < unaff_x21 + lVar5) {
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
      if (cVar1 < '\0') {
        if (plVar3 == (long *)0x0) {
          if (unaff_x20 == 0) {
            plVar3 = *(long **)(unaff_x22 + 0x30);
            if (plVar3 == (long *)0x0) goto LAB_01dc2364;
            plVar3 = (long *)(**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180))
            ;
          }
          else {
            plVar3 = (long *)FUN_01dc236c();
          }
          if (plVar3 == (long *)0x0) goto LAB_01dc2364;
          plVar3[2] = (long)unaff_x21;
          plVar3[3] = 0;
        }
        if (lVar4 == 0) {
LAB_01dc2364:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *(char *)(lVar4 + 0x20) = cVar1;
        iVar2 = (**(code **)(*plVar3 + 0x1b8))(plVar3,lVar4,pcVar7,*(undefined8 *)(*plVar3 + 0x1c0))
        ;
        unaff_w19 = unaff_w19 + iVar2 + -1;
      }
    }
  }
                    /* try { // try from 01dc22bc to 01ec22cb has its CatchHandler @ 01dc24dc */
  return unaff_w19;
}


