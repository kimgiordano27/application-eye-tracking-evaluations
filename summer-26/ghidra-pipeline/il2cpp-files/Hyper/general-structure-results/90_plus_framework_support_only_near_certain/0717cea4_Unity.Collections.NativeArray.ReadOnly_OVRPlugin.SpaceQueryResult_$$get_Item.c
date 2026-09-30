/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 0717cea4
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Item(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *plVar3;
  long *unaff_x22;
  long lVar4;
  
  FUN_0723b8f8(param_1,unaff_w20,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
  plVar3 = (long *)(unaff_x21 + 0x10);
  *plVar3 = param_1;
  thunk_FUN_049ee3d8(plVar3,param_1);
  if (0 < unaff_w20) {
    do {
      lVar2 = *unaff_x22;
      if (lVar2 == 0) {
LAB_0717cf24:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar4 = *plVar3;
      uVar1 = (**(code **)(lVar2 + 0x18))
                        (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      if (lVar4 == 0) goto LAB_0717cf24;
      FUN_0723be38(lVar4,uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x40)
                  );
      unaff_w20 = unaff_w20 + -1;
    } while (unaff_w20 != 0);
  }
  return;
}


