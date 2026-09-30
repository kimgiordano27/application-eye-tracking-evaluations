/*
FUNCTION_NAME: FUN_020d5008
ENTRY_POINT: 020d5008
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_020d5008(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = System_Func<Attribute,_bool>_TypeInfo;
  if ((DAT_03780f79 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Queue<Vector3>_Dequeue__);
    thunk_FUN_00d48444(System_Func<Attribute,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_149__);
    DAT_03780f79 = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_149__;
  if (lVar2 != 0) {
    FUN_01320e50(lVar2,*(undefined8 *)Method_System_Collections_Generic_Queue<Vector3>_Dequeue__);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


