/*
FUNCTION_NAME: FUN_014301c0
ENTRY_POINT: 014301c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_014301c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long local_28;
  
  if ((DAT_037769ca & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_0__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13354);
    DAT_037769ca = 1;
  }
  puVar2 = StringLiteral_13354;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_0__;
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != 0) {
    iVar5 = 0;
    while (iVar5 < *(int *)(lVar3 + 0x18)) {
      FUN_0132138c(lVar3,iVar5,&local_28,*(undefined8 *)puVar2);
      if ((local_28 == 0) || (plVar4 = *(long **)(local_28 + 0x10), plVar4 == (long *)0x0))
      goto LAB_01430294;
      (**(code **)(*plVar4 + 0x7b8))(plVar4,*(undefined8 *)(*plVar4 + 0x7c0));
      lVar3 = *(long *)(param_1 + 0x98);
      iVar5 = iVar5 + 1;
      if (lVar3 == 0) goto LAB_01430294;
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN_0129a9f4(*(long *)(param_1 + 0x90),*(undefined8 *)puVar1);
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
  }
LAB_01430294:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


