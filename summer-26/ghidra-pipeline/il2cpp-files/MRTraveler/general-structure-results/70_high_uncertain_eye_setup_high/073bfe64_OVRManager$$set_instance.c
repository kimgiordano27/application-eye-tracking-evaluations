/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 073bfe64
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_instance(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_0941e5fe & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb5380);
    DAT_0941e5fe = 1;
  }
  plVar1 = (long *)(param_1 + 0x170);
  lVar3 = FUN_07148944(*(undefined8 *)(param_1 + 0x170),param_2,0);
  puVar2 = PTR_DAT_08eb5380;
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_08eb5380;
    lVar4 = thunk_FUN_03cf5138(lVar3,uVar5);
    if (lVar4 != 0) {
      *plVar1 = lVar4;
      uVar5 = *(undefined8 *)puVar2;
      lVar4 = thunk_FUN_03cf5138(lVar3,uVar5);
      if (lVar4 != 0) goto LAB_073bfef8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fecc(lVar3,uVar5);
  }
  lVar4 = 0;
  *plVar1 = 0;
LAB_073bfef8:
  thunk_FUN_03d233cc(plVar1,lVar4);
  return;
}


