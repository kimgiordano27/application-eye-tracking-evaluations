/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 051b5ab8
PROGRAM: hellodot-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetAppCpuStartToGpuEndTime(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    iVar1 = *(int *)(lVar3 + (long)(int)unaff_w20 * 4 + 0x20);
    if (iVar1 < 0) {
      return 0;
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      uVar2 = FUN_03968108(*(long *)(unaff_x19 + 0x18),iVar1,*(undefined8 *)PTR_DAT_06608b00);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


