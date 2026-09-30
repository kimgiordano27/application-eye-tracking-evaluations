/*
FUNCTION_NAME: OVRManager$$Initialize
ENTRY_POINT: 0692b92c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Initialize(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  int iVar4;
  long unaff_x20;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084b58e8);
  *(undefined1 *)(unaff_x20 + 0xee7) = 1;
  puVar1 = PTR_DAT_084b58e8;
  lVar2 = *(long *)(unaff_x19 + 0x28);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return;
      }
      if (iVar4 == *(int *)(unaff_x19 + 0x20)) {
        lVar2 = FUN_04de82e0(lVar2,iVar4,*(undefined8 *)puVar1);
        if (lVar2 == 0) break;
        uVar3 = 1;
LAB_0692b9a4:
        FUN_07c9877c(lVar2,uVar3,0);
      }
      else if (*(char *)(unaff_x19 + 0x24) != '\0') {
        lVar2 = FUN_04de82e0(lVar2,iVar4,*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          uVar3 = 0;
          goto LAB_0692b9a4;
        }
        break;
      }
      lVar2 = *(long *)(unaff_x19 + 0x28);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


