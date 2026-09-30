/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04a0cf10
PROGRAM: vandalizer-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 param_4,
               uint param_5)

{
  uint in_w8;
  long lVar1;
  long in_x9;
  int in_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000040 = param_2._0_8_;
  uStack0000000000000050 = param_1._0_8_;
  uStack0000000000000038 = *(undefined8 *)(in_x9 + 0x28);
  uStack0000000000000030 = *(undefined8 *)(in_x9 + 0x20);
  if (param_5 < in_w8) {
    lVar1 = param_3 + (long)(int)param_5 * (long)in_w10;
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(in_x9 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(in_x9 + 0x30) = uVar4;
    *(undefined8 *)(in_x9 + 0x48) = uVar3;
    *(undefined8 *)(in_x9 + 0x40) = uVar2;
    *(undefined8 *)(in_x9 + 0x28) = uVar6;
    *(undefined8 *)(in_x9 + 0x20) = uVar5;
    if (param_5 < *(uint *)(param_3 + 0x18)) {
      *(long *)(lVar1 + 0x38) = param_2._8_8_;
      *(undefined8 *)(lVar1 + 0x30) = uStack0000000000000040;
      *(long *)(lVar1 + 0x48) = param_1._8_8_;
      *(undefined8 *)(lVar1 + 0x40) = uStack0000000000000050;
      *(undefined8 *)(lVar1 + 0x28) = uStack0000000000000038;
      *(undefined8 *)(lVar1 + 0x20) = uStack0000000000000030;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


