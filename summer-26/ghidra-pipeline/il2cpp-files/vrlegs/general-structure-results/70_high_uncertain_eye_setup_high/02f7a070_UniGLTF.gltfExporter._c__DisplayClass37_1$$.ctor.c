/*
FUNCTION_NAME: UniGLTF.gltfExporter.<>c__DisplayClass37_1$$.ctor
ENTRY_POINT: 02f7a070
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f7a14c) */

long UniGLTF_gltfExporter_<>c__DisplayClass37_1___ctor(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  
  FUN_01ab6a94(*param_1,0);
  if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_0271c480(0);
  lVar2 = FUN_02799ae0();
  puVar1 = PTR_DAT_03d25228;
  if (lVar2 == 0) {
    *unaff_x20 = 0;
  }
  else {
    uVar4 = *(undefined8 *)PTR_DAT_03d25228;
    lVar3 = thunk_FUN_01a89d6c(lVar2,uVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar2,uVar4);
    }
    *unaff_x20 = lVar3;
    uVar4 = *(undefined8 *)puVar1;
    lVar3 = thunk_FUN_01a89d6c(lVar2,uVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar2,uVar4);
    }
  }
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return *unaff_x20;
}


