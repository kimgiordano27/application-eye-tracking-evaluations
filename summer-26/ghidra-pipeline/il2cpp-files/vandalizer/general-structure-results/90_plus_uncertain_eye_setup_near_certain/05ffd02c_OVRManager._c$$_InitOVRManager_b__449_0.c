/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__449_0
ENTRY_POINT: 05ffd02c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_<>c__<InitOVRManager>b__449_0
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long in_x9;
  long lVar2;
  long in_x10;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined4 uVar4;
  
  FUN_05ffd50c(param_1 + 0x18,in_x9 + 0x18,in_x10 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) && (*(long *)(lVar2 + 0x18) != 0)) &&
     (*unaff_x19 != 0)) {
    FUN_05faeaec(*(long *)(lVar2 + 0x10) + 0x20,*(long *)(lVar2 + 0x18) + 0x20,*unaff_x19 + 0x20,0);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if (((lVar2 != 0) && (lVar1 = *(long *)(lVar2 + 0x10), lVar1 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
      lVar3 = *unaff_x19;
      if (*(int *)(*(long *)PTR_DAT_075f4af0 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar4 = FUN_05ffd6e4(lVar1 + 0x3c,lVar2 + 0x3c);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x3c) = uVar4;
        *(undefined4 *)(lVar3 + 0x40) = param_3;
        *(undefined4 *)(lVar3 + 0x44) = param_4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


