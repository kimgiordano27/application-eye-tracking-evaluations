/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFullBody$$OnInitiate
ENTRY_POINT: 0299fae8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0299fcc4) */
/* WARNING: Removing unreachable block (ram,0x0299fccc) */

bool RootMotion_FinalIK_IKSolverFullBody__OnInitiate(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x21;
  long unaff_x26;
  char cStack0000000000000028;
  char cStack000000000000002c;
  
  plVar3 = (long *)FUN_0279a64c(param_1,param_2,0);
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)(unaff_x26 + 0x28) = 0;
  }
  else {
    lVar4 = *(long *)PTR_DAT_03d07ca8;
    bVar1 = *(byte *)(lVar4 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3);
    }
    *(long **)(unaff_x26 + 0x28) = plVar3;
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3);
    }
  }
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x26 + 0x28,plVar3);
  if (*(long **)(unaff_x21 + 200) != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(unaff_x21 + 200) + 0x1a8))();
    if (cStack0000000000000028 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    if (cStack000000000000002c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return (uVar2 & 1) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


