/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 05623d10
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose
          (long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 != (long *)0x0) {
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    lVar3 = thunk_FUN_031c3cac(param_2,lVar3);
    if (lVar3 != 0) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
      }
      if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
        puVar1 = (undefined8 *)thunk_FUN_031c3ef0();
        in_stack_00000028 = puVar1[1];
        in_stack_00000020 = *puVar1;
        in_stack_00000030 = puVar1[2];
        uVar2 = (**(code **)(*param_1 + 0x1c8))
                          (param_1,&stack0x00000020,*(undefined8 *)(*param_1 + 0x1d0));
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03189058(param_2);
    }
    FUN_0595040c(2,0);
  }
  return 0;
}


