/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$AsReadOnlySpan
ENTRY_POINT: 03ec12c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__AsReadOnlySpan
               (long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    goto LAB_03ec1360;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) goto LAB_03ec1390;
      lVar3 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    else {
      iVar1 = *(int *)(lVar3 + 0x18) + -1;
      lVar3 = FUN_03aac1c4(lVar3,iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_03ec1390;
      FUN_03aadb8c(*(long *)(param_1 + 0x10),iVar1,
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58));
    }
LAB_03ec1360:
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),lVar3,*(undefined8 *)(lVar2 + 0x28))
      ;
    }
    return lVar3;
  }
LAB_03ec1390:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


