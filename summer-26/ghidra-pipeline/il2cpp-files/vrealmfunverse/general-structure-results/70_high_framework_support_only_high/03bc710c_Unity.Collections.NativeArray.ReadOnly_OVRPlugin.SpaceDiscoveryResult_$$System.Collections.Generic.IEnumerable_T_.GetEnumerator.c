/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03bc710c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  int unaff_w25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while( true ) {
    if ((param_1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w25) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
    in_stack_00000020 = unaff_x22;
    in_stack_00000028 = unaff_x21;
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000020);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar2);
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
    puVar1 = (undefined8 *)(unaff_x26 + (long)(int)unaff_w19 * 0x10);
    uVar3 = *puVar1;
    *(undefined8 *)(unaff_x27 + 0x18) = puVar1[1];
    *(undefined8 *)(unaff_x27 + 0x10) = uVar3;
    param_1 = thunk_FUN_04dd5180();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


