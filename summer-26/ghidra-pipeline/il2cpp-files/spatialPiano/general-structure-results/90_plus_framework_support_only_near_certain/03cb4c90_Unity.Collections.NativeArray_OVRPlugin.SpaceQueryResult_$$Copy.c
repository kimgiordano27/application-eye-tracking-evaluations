/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 03cb4c90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_7
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_128 [72];
  undefined1 auStack_e0 [72];
  undefined1 auStack_98 [72];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(8);
  }
  if ((*(ushort *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar2 = thunk_FUN_02f45270();
  FUN_03cb3b7c(lVar2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(param_1 + 0x18)) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_03cb4e34:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (param_2 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
      memcpy(auStack_128,(void *)(lVar4 + lVar6),0x48);
      memcpy(auStack_98,auStack_128,0x48);
      uVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),auStack_98,*(undefined8 *)(param_2 + 0x28))
      ;
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_03cb4e34;
        if (lVar2 == 0) {
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        memcpy(auStack_e0,(void *)(lVar4 + lVar6),0x48);
        lVar4 = *(long *)(lVar2 + 0x10);
        lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar4 + (long)(int)uVar1 * 0x48 + 0x20),auStack_e0,0x48);
        }
        else {
          memcpy(auStack_98,auStack_e0,0x48);
          FUN_03cb4430(lVar2,auStack_98,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0x18));
  }
  return lVar2;
}


