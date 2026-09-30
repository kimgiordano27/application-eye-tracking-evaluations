/*
FUNCTION_NAME: OVRPlugin$$DiscoverSpaces
ENTRY_POINT: 01a2ee74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DiscoverSpaces(long param_1)

{
  long unaff_x19;
  long lVar1;
  undefined4 uVar2;
  
  FUN_019a7844(&stack0x00000100,&stack0x000001a0,param_1 + 0x14,0);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x68);
    uVar2 = FUN_0269fcf8(*(long *)(unaff_x19 + 0x48),0);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x70) = uVar2;
      if (*(long *)(unaff_x19 + 0x68) != 0) {
        *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x30) = 2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


