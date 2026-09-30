/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 0696bf50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  int iVar4;
  
  if (param_1 == 0) goto LAB_0696c018;
                    /* try { // try from 0696bf5c to 06a6bf67 has its CatchHandler @ 0696c498 */
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0696c018;
    FUN_054c593c(*(long *)(unaff_x19 + 0x70),*(undefined8 *)PTR_DAT_084b70a8);
    lVar3 = *(long *)(unaff_x19 + 0x70);
    if (lVar3 == 0) goto LAB_0696c018;
    if (*(int *)(lVar3 + 0x20) != 0) {
      param_2 = FUN_054c5aa4(lVar3,*unaff_x21);
    }
  }
  puVar1 = PTR_DAT_084b70a0;
  if (0 < *(int *)(unaff_x19 + 0x4c)) {
    if (param_2 == 0) {
LAB_0696c018:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar4 = 0;
    do {
      lVar3 = *(long *)(param_2 + 0x20);
      if (lVar3 == 0) goto LAB_0696c018;
      if (*(int *)(lVar3 + 0x20) < 1) {
        return;
      }
      lVar3 = FUN_054c593c(lVar3,*(undefined8 *)puVar1);
      if ((lVar3 == 0) || (lVar3 = FUN_07c6de50(lVar3,0), lVar3 == 0)) goto LAB_0696c018;
      iVar2 = FUN_07c70edc(lVar3,0);
      iVar4 = iVar2 + iVar4;
      FUN_0696c01c();
    } while (iVar4 < *(int *)(unaff_x19 + 0x4c));
  }
  return;
}


