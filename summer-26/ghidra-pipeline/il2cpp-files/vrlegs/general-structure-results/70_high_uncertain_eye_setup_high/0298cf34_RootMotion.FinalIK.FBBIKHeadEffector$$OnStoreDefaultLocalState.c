/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector$$OnStoreDefaultLocalState
ENTRY_POINT: 0298cf34
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298cf84) */

void RootMotion_FinalIK_FBBIKHeadEffector__OnStoreDefaultLocalState(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  lVar3 = *plVar2;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar3);
  }
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  if (*(long *)(unaff_x19 + 0xc0) != 0) {
    FUN_02f0cf64(*(long *)(unaff_x19 + 0xc0),0);
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      FUN_02f0cc48(*(long *)(unaff_x19 + 0xc0),0);
      *(undefined8 *)(unaff_x19 + 0xf0) = 0;
      *(undefined2 *)(unaff_x19 + 0xdc) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0xf0),0);
      uVar1 = DAT_00d37b40;
      *(undefined1 *)(unaff_x19 + 0x70) = 0;
      *(undefined4 *)(unaff_x19 + 0x6c) = 0;
      *(undefined8 *)(unaff_x19 + 0x74) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


