/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplDestroyMarkerHandle
ENTRY_POINT: 063af1f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long in_x9;
  uint in_w10;
  long unaff_x20;
  
  puVar1 = PTR_DAT_07d86548;
  if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (lVar4 != 0) {
    plVar2 = *(long **)(lVar4 + 0x20);
    uVar3 = *(undefined4 *)(lVar4 + 0x2c);
    if ((plVar2 == (long *)0x0) || (lVar4 = *(long *)(PTR_DAT_07d86548 + 0x90), *plVar2 == lVar4)) {
      FUN_063afd0c();
      lVar4 = *(long *)(unaff_x20 + 0x28);
      if (lVar4 == 0) goto LAB_063af9d4;
      plVar2 = *(long **)(lVar4 + 0x20);
      uVar3 = *(undefined4 *)(lVar4 + 0x2c);
      if ((plVar2 == (long *)0x0) || (lVar4 = *(long *)(puVar1 + 0x90), *plVar2 == lVar4)) {
        FUN_063afd0c();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54(plVar2,lVar4,uVar3);
  }
LAB_063af9d4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


