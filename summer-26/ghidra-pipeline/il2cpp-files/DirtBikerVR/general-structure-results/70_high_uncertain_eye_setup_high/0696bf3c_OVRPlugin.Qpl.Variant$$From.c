/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 0696bf3c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar5;
  int iVar6;
  
                    /* try { // try from 0696bf3c to 06a6bf43 has its CatchHandler @ 0696c428 */
  puVar5 = *(undefined8 **)(unaff_x21 + 0xb0);
  lVar3 = FUN_054c5aa4(param_1,*puVar5);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) goto LAB_0696c018;
  if (*(int *)(*(long *)(lVar3 + 0x20) + 0x20) == 0) {
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0696c018;
    FUN_054c593c(*(long *)(unaff_x19 + 0x70),*(undefined8 *)PTR_DAT_084b70a8);
    lVar4 = *(long *)(unaff_x19 + 0x70);
    if (lVar4 == 0) goto LAB_0696c018;
    if (*(int *)(lVar4 + 0x20) != 0) {
      lVar3 = FUN_054c5aa4(lVar4,*puVar5);
    }
  }
  puVar1 = PTR_DAT_084b70a0;
  if (0 < *(int *)(unaff_x19 + 0x4c)) {
    if (lVar3 == 0) {
LAB_0696c018:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar6 = 0;
    do {
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 == 0) goto LAB_0696c018;
      if (*(int *)(lVar4 + 0x20) < 1) {
        return;
      }
      lVar4 = FUN_054c593c(lVar4,*(undefined8 *)puVar1);
      if ((lVar4 == 0) || (lVar4 = FUN_07c6de50(lVar4,0), lVar4 == 0)) goto LAB_0696c018;
      iVar2 = FUN_07c70edc(lVar4,0);
      iVar6 = iVar2 + iVar6;
      FUN_0696c01c();
    } while (iVar6 < *(int *)(unaff_x19 + 0x4c));
  }
  return;
}


