/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_SaveSpaceList
ENTRY_POINT: 07caed30
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_SaveSpaceList(long param_1)

{
  int iVar1;
  long lVar2;
  ulong in_x9;
  ulong in_x10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  do {
    if (in_x10 <= in_x9) {
LAB_07caed94:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    iVar1 = *(int *)(param_1 + unaff_x21 * 4);
    if (iVar1 != -1) {
      if ((unaff_x20 == 0) || (lVar2 = *(long *)(unaff_x20 + 0x18), lVar2 == 0)) goto LAB_07caed84;
      if (*(uint *)(lVar2 + 0x18) <= in_x9) goto LAB_07caed94;
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07caed84;
      FUN_094ee274(*(float *)(unaff_x19 + 0x20) * *(float *)(lVar2 + unaff_x21 * 4),
                   *(long *)(unaff_x19 + 0x28),iVar1,0);
      param_1 = *(long *)(unaff_x19 + 0x30);
    }
    if (param_1 == 0) {
LAB_07caed84:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_x10 = (ulong)*(uint *)(param_1 + 0x18);
    in_x9 = unaff_x21 - 7;
    unaff_x21 = unaff_x21 + 1;
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)in_x9) {
      return;
    }
  } while( true );
}


