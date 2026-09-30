/*
FUNCTION_NAME: FUN_01bc91e0
ENTRY_POINT: 01bc91e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01bc91e0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_017b46ec(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar1 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar3 = Method_OVRPlugin_PinnedArray<Guid>_op_Implicit__;
  }
  else {
    if (param_3 != 0) {
      *(long *)(param_1 + 0x28) = param_2;
      *(long *)(param_1 + 0x10) = param_3;
      return;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar1 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar3 = Method_System_Collections_Generic_Stack<XmlReader>_get_Count__;
  }
  uVar2 = thunk_FUN_00d48444(puVar3);
  FUN_016ec5b8(uVar1,uVar2,0);
  uVar2 = thunk_FUN_00d48444(Method_System_ReflectionOnlyType_get_TypeHandle__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar1,uVar2);
}


