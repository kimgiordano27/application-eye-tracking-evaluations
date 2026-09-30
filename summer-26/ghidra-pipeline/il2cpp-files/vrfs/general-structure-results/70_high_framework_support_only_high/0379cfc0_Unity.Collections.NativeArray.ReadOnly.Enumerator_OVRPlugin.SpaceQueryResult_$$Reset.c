/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 0379cfc0
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Reset
               (long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *unaff_x22;
  
  FUN_01ae68f8();
  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  lVar2 = thunk_FUN_015d056c(*unaff_x22);
  puVar1 = PTR_DAT_06e4d3e0;
  if (lVar2 != 0) {
    FUN_0451e868(lVar2,0);
    FUN_0451e668(lVar2,1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar3 = FUN_04515804();
    plVar4 = (long *)FUN_025ebfb4(0);
    if (plVar4 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x268))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x270));
      uVar5 = FUN_0379c820();
      FUN_0379d084(uVar5,uVar5,uVar3);
      FUN_051e4284();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


