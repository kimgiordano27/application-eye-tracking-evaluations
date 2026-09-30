/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyColliders
ENTRY_POINT: 02a11d58
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__DestroyColliders(ulong param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x20 + 0x4e0);
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dae4e0);
    *(undefined1 *)(unaff_x19 + 10) = 1;
  }
  lVar1 = thunk_FUN_015d056c(*plVar2);
  if (lVar1 != 0) {
    FUN_02d76b34(lVar1,0);
    **(long **)(*plVar2 + 0xb8) = lVar1;
    thunk_FUN_01656ef8(*(undefined8 *)(*plVar2 + 0xb8),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


