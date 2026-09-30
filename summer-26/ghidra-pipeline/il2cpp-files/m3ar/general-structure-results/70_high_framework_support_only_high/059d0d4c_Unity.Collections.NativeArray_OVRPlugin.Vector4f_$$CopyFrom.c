/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 059d0d4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom
              (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  void *__src;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  
  FUN_04d4e550(param_3,0x14,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x58));
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0406aaec(lVar2);
  }
  if (unaff_x20 != (long *)0x0) {
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04031c0c();
    }
    __src = (void *)thunk_FUN_0406e000();
    memcpy(&stack0x00000000,__src,0x48);
    lVar2 = *(long *)(param_2 + 0x10);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x80);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar2 + (long)(int)uVar1 * 0x48 + 0x20),&stack0x00000000,0x48);
      }
      else {
        memcpy(&stack0x00000048,&stack0x00000000,0x48);
        FUN_059d0cbc(param_2,&stack0x00000048,
                     *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      return *(int *)(param_2 + 0x18) + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


