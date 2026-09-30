/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$Init
ENTRY_POINT: 01437b38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__Init(void)

{
  int iVar1;
  int in_w8;
  long lVar2;
  long lVar3;
  int in_w10;
  int *unaff_x19;
  int *unaff_x20;
  long unaff_x22;
  
  do {
    if (in_w10 < in_w8) {
      *unaff_x19 = in_w8;
    }
    do {
      lVar2 = *(long *)(unaff_x22 + 0x18);
      if (lVar2 == 0) goto LAB_01437b98;
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_01437b9c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(long *)(lVar2 + 0x20) != 0) {
        FUN_01437adc();
        lVar2 = *(long *)(unaff_x22 + 0x18);
        if (lVar2 == 0) goto LAB_01437b98;
      }
      if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_01437b9c;
      unaff_x22 = *(long *)(lVar2 + 0x28);
      if (unaff_x22 == 0) {
        return;
      }
      if (unaff_x22 == 0) goto LAB_01437b98;
      lVar2 = *(long *)(unaff_x22 + 0x28);
    } while (lVar2 == 0);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    if (lVar3 == 0) {
LAB_01437b98:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar1 = *(int *)(lVar2 + 0x14) + *(int *)(lVar3 + 0x10);
    if (*unaff_x20 < iVar1) {
      *unaff_x20 = iVar1;
    }
    in_w10 = *unaff_x19;
    in_w8 = *(int *)(lVar2 + 0x18) + *(int *)(lVar3 + 0x14);
  } while( true );
}


