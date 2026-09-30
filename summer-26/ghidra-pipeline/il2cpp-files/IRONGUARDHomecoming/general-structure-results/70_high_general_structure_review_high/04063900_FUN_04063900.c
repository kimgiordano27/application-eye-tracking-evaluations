/*
FUNCTION_NAME: FUN_04063900
ENTRY_POINT: 04063900
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_6
*/


undefined8 FUN_04063900(long *param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((DAT_0483dfc8 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483dfc8 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (param_1 == param_2) {
      return 1;
    }
    uVar2 = thunk_FUN_01ecaf38(param_2,0);
    uVar3 = thunk_FUN_01ecaf38(param_1,0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar4 = FUN_03583338(uVar2,uVar3,0);
    if ((uVar4 & 1) == 0) {
      bVar1 = *(byte *)(*(long *)
                         Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                       + 0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__))
      {
        uVar2 = FUN_04063a0c(param_1,param_2);
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
  }
  return 0;
}


