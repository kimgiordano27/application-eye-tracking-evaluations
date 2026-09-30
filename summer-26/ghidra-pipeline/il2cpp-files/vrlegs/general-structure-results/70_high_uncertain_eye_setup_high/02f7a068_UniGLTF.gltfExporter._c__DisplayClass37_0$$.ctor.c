/*
FUNCTION_NAME: UniGLTF.gltfExporter.<>c__DisplayClass37_0$$.ctor
ENTRY_POINT: 02f7a068
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

long UniGLTF_gltfExporter_<>c__DisplayClass37_0___ctor(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  undefined8 in_stack_00000008;
  
  uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar2 = FUN_01ab6a94(**(undefined8 **)(param_1 + 0xb18),0);
  if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_0271c480(0);
  lVar4 = FUN_02799ae0(uVar6,0x234,0,uVar2,uVar3,0);
  puVar1 = PTR_DAT_03d25228;
  if (lVar4 == 0) {
    *unaff_x20 = 0;
  }
  else {
    uVar2 = *(undefined8 *)PTR_DAT_03d25228;
    lVar5 = thunk_FUN_01a89d6c(lVar4,uVar2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar4,uVar2);
    }
    *unaff_x20 = lVar5;
    uVar2 = *(undefined8 *)puVar1;
    lVar5 = thunk_FUN_01a89d6c(lVar4,uVar2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar4,uVar2);
    }
  }
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return *unaff_x20;
}


