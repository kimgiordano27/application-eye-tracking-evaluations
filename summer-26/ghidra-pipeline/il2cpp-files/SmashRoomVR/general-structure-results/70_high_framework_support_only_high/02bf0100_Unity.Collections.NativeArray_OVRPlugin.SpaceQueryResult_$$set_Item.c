/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 02bf0100
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item
          (long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ae9e74(lVar4);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar4);
  }
  uVar1 = FUN_02befae0(param_3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8)
                      );
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74(lVar4);
    }
    if (param_3 != (long *)0x0) {
      if (*(long *)(*param_3 + 0x40) == *(long *)(lVar4 + 0x40)) {
        puVar2 = (undefined8 *)thunk_FUN_01afac30();
        uVar3 = FUN_02bf00a8(param_2,*puVar2,puVar2[1],
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0));
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(param_3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return 0;
}


