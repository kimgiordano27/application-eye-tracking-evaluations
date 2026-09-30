/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 05732f1c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    FUN_04481fb8(param_2);
  }
  lVar1 = thunk_FUN_04485110();
  if (lVar1 == 0) {
    uVar2 = **(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07a4ce38(uVar2,0);
    if (*(int *)(*(long *)PTR_DAT_09f214f8 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f214f8);
    }
    unaff_x22 = (long *)FUN_079a5b8c();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04481fb8(lVar1);
  }
  if (unaff_x22 != (long *)0x0) {
    if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_04485360();
                    /* WARNING: Could not recover jumptable at 0x05733004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 600))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_044481e4(unaff_x22);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


