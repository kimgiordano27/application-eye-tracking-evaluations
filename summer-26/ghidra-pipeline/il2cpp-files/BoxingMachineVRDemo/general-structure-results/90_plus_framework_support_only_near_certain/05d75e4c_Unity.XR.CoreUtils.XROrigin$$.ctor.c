/*
FUNCTION_NAME: Unity.XR.CoreUtils.XROrigin$$.ctor
ENTRY_POINT: 05d75e4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void Unity_XR_CoreUtils_XROrigin___ctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 unaff_x21;
  undefined8 uVar5;
  
  if ((param_1 != 0) && (lVar2 = thunk_FUN_02d9d438(), lVar2 == 0)) {
    uVar5 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar5,0);
  }
  puVar1 = Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
  if (2 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x30) = unaff_x21;
    thunk_FUN_02dd37b4();
    *(long *)(unaff_x19 + 0x18) = unaff_x20;
    thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x18));
    *(undefined4 *)(unaff_x19 + 0x20) = 2;
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar4 == 0) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar2 = *(long *)puVar1;
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
      lVar4 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                                );
      FUN_04d6c3b8(lVar4,uVar5,
                   *(undefined8 *)Method_System_Nullable<OVRInput_Controller>_get_HasValue__,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar3 = lVar4;
      thunk_FUN_02dd37b4(plVar3,lVar4);
    }
    *(long *)(unaff_x19 + 0x28) = lVar4;
    thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x28),lVar4);
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
    *(undefined1 *)(unaff_x19 + 0x32) = 1;
    FUN_0504920c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


