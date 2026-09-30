/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnlySpan
ENTRY_POINT: 059d18fc
PROGRAM: m3ar-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnlySpan
               (undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_074f6cdc(0x21);
  }
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    iVar1 = *(int *)(unaff_x19 + 0x1c);
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      iVar2 = *(int *)(unaff_x19 + 0x1c);
      if (iVar1 != iVar2) goto LAB_059d1990;
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (unaff_x20 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor;
      memcpy(&stack0x00000000,(void *)(lVar3 + lVar5),0x48);
      memcpy(&stack0x00000048,&stack0x00000000,0x48);
      (**(code **)(unaff_x20 + 0x18))
                (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000048,
                 *(undefined8 *)(unaff_x20 + 0x28));
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x48;
    } while ((long)uVar4 < (long)*(int *)(unaff_x19 + 0x18));
    iVar2 = *(int *)(unaff_x19 + 0x1c);
LAB_059d1990:
    if (iVar1 != iVar2) {
      FUN_075069a4(0);
    }
  }
  return;
}


