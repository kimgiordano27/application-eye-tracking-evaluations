/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetHashCode
ENTRY_POINT: 03cb5d38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  long unaff_x21;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong unaff_x22;
  
  while (iVar1 = *(int *)(unaff_x19 + 0x18), (param_1 & 1) == 0) {
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x48;
    if ((long)iVar1 <= (long)unaff_x22) break;
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_03cb5e78;
    if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
    memcpy(&stack0x00000050,(void *)(lVar4 + unaff_x21),0x48);
    memcpy(&stack0x00000098,&stack0x00000050,0x48);
    param_1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                         *(undefined8 *)(unaff_x20 + 0x28));
  }
  if (iVar1 <= (int)unaff_x22) {
    return 0;
  }
  uVar6 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar7 = (int)unaff_x22;
      uVar5 = (uint)uVar6;
      if (iVar1 <= iVar7) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(unaff_x19 + 0x10),uVar6,iVar1 - uVar5,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar5;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - uVar5;
      }
      unaff_x22 = (ulong)iVar7;
      lVar4 = (long)iVar7 * 0x48 + 0x20;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_03cb5e78;
        if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
        memcpy(&stack0x00000008,(void *)(lVar3 + lVar4),0x48);
        memcpy(&stack0x00000098,&stack0x00000008,0x48);
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar1 = *(int *)(unaff_x19 + 0x18);
        if ((uVar2 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        lVar4 = lVar4 + 0x48;
      } while ((long)unaff_x22 < (long)iVar1);
      uVar8 = (uint)unaff_x22;
    } while (iVar1 <= (int)uVar8);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar8) || (*(uint *)(lVar4 + 0x18) <= uVar5)) {
LAB_03cb5e78:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar6 = (ulong)(uVar5 + 1);
    memmove((void *)(lVar4 + 0x20 + (long)(int)uVar5 * 0x48),
            (void *)(lVar4 + 0x20 + (long)(int)uVar8 * 0x48),0x48);
    iVar1 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


