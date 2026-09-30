/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 0696beec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int iVar5;
  
  FUN_03a8a718();
                    /* try { // try from 0696bef4 to 06a6bef7 has its CatchHandler @ 0696c378 */
  FUN_03a8a718(PTR_DAT_084b70a8);
  FUN_03a8a718(PTR_DAT_084b70b0);
  FUN_03a8a718(PTR_DAT_084b70b8);
  FUN_03a8a718(PTR_DAT_084b70c0);
  *(undefined1 *)(unaff_x20 + 0xde) = 1;
  puVar1 = PTR_DAT_084b70b0;
  lVar3 = *(long *)(unaff_x19 + 0x70);
  if (lVar3 == 0) goto LAB_0696c018;
  if (*(int *)(lVar3 + 0x20) != 0) {
    lVar3 = FUN_054c5aa4(lVar3,*(undefined8 *)PTR_DAT_084b70b0);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) goto LAB_0696c018;
    if (*(int *)(*(long *)(lVar3 + 0x20) + 0x20) == 0) {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0696c018;
      FUN_054c593c(*(long *)(unaff_x19 + 0x70),*(undefined8 *)PTR_DAT_084b70a8);
      lVar4 = *(long *)(unaff_x19 + 0x70);
      if (lVar4 == 0) goto LAB_0696c018;
      if (*(int *)(lVar4 + 0x20) != 0) {
        lVar3 = FUN_054c5aa4(lVar4,*(undefined8 *)puVar1);
      }
    }
    puVar1 = PTR_DAT_084b70a0;
    if (0 < *(int *)(unaff_x19 + 0x4c)) {
      if (lVar3 == 0) {
LAB_0696c018:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      iVar5 = 0;
      do {
        lVar4 = *(long *)(lVar3 + 0x20);
        if (lVar4 == 0) goto LAB_0696c018;
        if (*(int *)(lVar4 + 0x20) < 1) {
          return;
        }
        lVar4 = FUN_054c593c(lVar4,*(undefined8 *)puVar1);
        if ((lVar4 == 0) || (lVar4 = FUN_07c6de50(lVar4,0), lVar4 == 0)) goto LAB_0696c018;
        iVar2 = FUN_07c70edc(lVar4,0);
        iVar5 = iVar2 + iVar5;
        FUN_0696c01c();
      } while (iVar5 < *(int *)(unaff_x19 + 0x4c));
    }
  }
  return;
}


