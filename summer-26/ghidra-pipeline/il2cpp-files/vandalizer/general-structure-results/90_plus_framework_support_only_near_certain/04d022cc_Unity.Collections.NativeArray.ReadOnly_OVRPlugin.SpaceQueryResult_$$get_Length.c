/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 04d022cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Length
               (long param_1,long param_2,long param_3,long param_4,byte param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  FUN_05e44034(param_1,0);
  puVar2 = PTR_DAT_075b9458;
  if ((param_2 != 0) && (puVar2 = PTR_DAT_075d6310, param_3 != 0)) {
    *(long *)(param_1 + 0x10) = param_2;
    thunk_FUN_0329bf60((long *)(param_1 + 0x10),param_2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x18),0);
    *(long *)(param_1 + 0x20) = param_3;
    thunk_FUN_0329bf60((long *)(param_1 + 0x20),param_3);
    if (param_4 == 0) {
      param_4 = FUN_055456b0(*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x38));
    }
    *(long *)(param_1 + 0x28) = param_4;
    thunk_FUN_0329bf60((long *)(param_1 + 0x28),param_4);
    *(byte *)(param_1 + 0x30) = param_5 & 1;
    return;
  }
  uVar1 = thunk_FUN_03257e30(puVar2);
  uVar1 = FUN_062984a4(uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar1,param_6);
}


