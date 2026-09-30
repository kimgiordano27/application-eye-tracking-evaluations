/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 03cb4cfc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_7
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar4;
  long lVar5;
  
  if (in_NG == in_OV) {
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_03cb4e34:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
      memcpy(&stack0x00000008,(void *)(lVar3 + lVar5),0x48);
      memcpy(&stack0x00000098,&stack0x00000008,0x48);
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x21 + 0x10);
        if (lVar3 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_03cb4e34;
        if (unaff_x22 == 0) {
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        memcpy(&stack0x00000050,(void *)(lVar3 + lVar5),0x48);
        lVar3 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar3 == 0) goto Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar3 + (long)(int)uVar1 * 0x48 + 0x20),&stack0x00000050,0x48);
        }
        else {
          memcpy(&stack0x00000098,&stack0x00000050,0x48);
          FUN_03cb4430();
        }
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x48;
    } while ((long)uVar4 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


