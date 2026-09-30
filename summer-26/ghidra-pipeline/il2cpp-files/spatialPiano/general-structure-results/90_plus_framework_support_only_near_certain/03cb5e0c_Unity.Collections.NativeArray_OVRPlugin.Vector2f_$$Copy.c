/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 03cb5e0c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1)

{
  int iVar1;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar4;
  ulong unaff_x22;
  int unaff_w23;
  long lVar5;
  
  while (!(bool)in_CY) {
    lVar5 = (long)(int)unaff_w21;
    unaff_w21 = unaff_w21 + 1;
    memmove((void *)(param_1 + 0x20 + lVar5 * unaff_w23),
            (void *)(param_1 + 0x20 + (long)(int)unaff_x22 * (long)unaff_w23),0x48);
    iVar1 = *(int *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar4 = (int)unaff_x22;
      if (iVar1 <= iVar4) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - unaff_w21;
      }
      unaff_x22 = (ulong)iVar4;
      lVar5 = (long)iVar4 * (long)unaff_w23 + 0x20;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_03cb5e78;
        if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
        memcpy(&stack0x00000008,(void *)(lVar3 + lVar5),0x48);
        memcpy(&stack0x00000098,&stack0x00000008,0x48);
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                           *(undefined8 *)(unaff_x20 + 0x28));
        iVar1 = *(int *)(unaff_x19 + 0x18);
        if ((uVar2 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        lVar5 = lVar5 + 0x48;
      } while ((long)unaff_x22 < (long)iVar1);
    } while (iVar1 <= (int)(uint)unaff_x22);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x22) break;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_w21;
  }
LAB_03cb5e78:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


