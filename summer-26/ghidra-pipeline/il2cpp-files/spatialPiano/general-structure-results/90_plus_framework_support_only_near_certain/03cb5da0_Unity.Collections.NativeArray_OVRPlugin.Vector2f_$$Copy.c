/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 03cb5da0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(long param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar5;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  
  do {
    memcpy(param_2,(void *)(param_1 + unaff_x24),0x48);
    memcpy(&stack0x00000098,&stack0x00000008,0x48);
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000098,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar1 = *(int *)(unaff_x19 + 0x18);
    if ((uVar3 & 1) == 0) {
LAB_03cb5dec:
      uVar5 = (uint)unaff_x22;
      if ((int)uVar5 < iVar1) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if ((*(uint *)(lVar4 + 0x18) <= uVar5) || (*(uint *)(lVar4 + 0x18) <= unaff_w21))
        goto LAB_03cb5e78;
        lVar2 = (long)(int)unaff_w21;
        unaff_w21 = unaff_w21 + 1;
        memmove((void *)(lVar4 + 0x20 + lVar2 * unaff_w23),
                (void *)(lVar4 + 0x20 + (long)(int)uVar5 * (long)unaff_w23),0x48);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        uVar5 = uVar5 + 1;
      }
      if (iVar1 <= (int)uVar5) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - unaff_w21;
      }
      unaff_x22 = (long)(int)uVar5;
      unaff_x24 = (long)(int)uVar5 * (long)unaff_w23 + 0x20;
    }
    else {
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x48;
      if (iVar1 <= unaff_x22) goto LAB_03cb5dec;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x22) {
LAB_03cb5e78:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
    param_2 = &stack0x00000008;
  } while( true );
}


